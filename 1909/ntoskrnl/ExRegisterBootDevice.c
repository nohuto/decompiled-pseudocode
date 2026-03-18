/*
 * XREFs of ExRegisterBootDevice @ 0x140338770
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x140672580 (PsCreateSystemThread.c)
 */

__int64 __fastcall ExRegisterBootDevice(__int64 a1, _QWORD *a2)
{
  NTSTATUS v4; // ebx
  _DWORD *PoolWithTag; // rsi
  void *v6; // rcx
  KIRQL v7; // di
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4 = 0;
  KeWaitForSingleObject(&ExExternalBootSupportInitializationEvent, Executive, 0, 0, 0LL);
  if ( !ExBootDeviceRemovalHandler )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, ExpWaitForBootDevices, 0LL);
    if ( v4 >= 0 )
    {
      v4 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
      ExBootDeviceRemovalHandler = (PKTHREAD)Object;
      ZwClose(ThreadHandle);
      KeSetPriorityThread(ExBootDeviceRemovalHandler, 31);
    }
  }
  KeSetEvent(&ExExternalBootSupportInitializationEvent, 0, 0);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)a1 != 1 || !*(_QWORD *)(a1 + 8) || *(_DWORD *)(a1 + 4) || !*(_QWORD *)(a1 + 24) )
      v4 = -1073741811;
    if ( v4 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x504E4442u);
      if ( !PoolWithTag )
        v4 = -1073741670;
      if ( v4 >= 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
        v6 = *(void **)(a1 + 16);
        if ( v6 )
          ObfReferenceObjectWithTag(v6, 0x746C6644u);
        memset(PoolWithTag, 0, 0x40uLL);
        *PoolWithTag = 1347306562;
        *(_OWORD *)(PoolWithTag + 6) = *(_OWORD *)a1;
        *(_OWORD *)(PoolWithTag + 10) = *(_OWORD *)(a1 + 16);
        *((_QWORD *)PoolWithTag + 7) = *(_QWORD *)(a1 + 32);
        v7 = KeAcquireSpinLockRaiseToDpc(&ExBootDeviceListSpinLock);
        v8 = (_QWORD *)qword_140431E58;
        v9 = PoolWithTag + 2;
        if ( *(__int64 **)qword_140431E58 != &ExBootDeviceList )
          __fastfail(3u);
        *v9 = &ExBootDeviceList;
        *((_QWORD *)PoolWithTag + 2) = v8;
        *v8 = v9;
        qword_140431E58 = (__int64)(PoolWithTag + 2);
        KxReleaseSpinLock(&ExBootDeviceListSpinLock);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v7);
        *a2 = PoolWithTag;
      }
    }
  }
  return (unsigned int)v4;
}
