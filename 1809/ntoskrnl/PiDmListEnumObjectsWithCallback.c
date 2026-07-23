/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x14059924C
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405912D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 *     PiDmGetObjectConstraintList @ 0x1406D36A4 (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DBF74 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmListEnumObjectsWithCallback(
        int a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(_QWORD, __int64, char *),
        __int64 a4)
{
  int v4; // r14d
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v10; // rbp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rsi
  unsigned int v13; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rdx
  volatile signed __int32 *v16; // rcx
  unsigned int v17; // ebp
  _QWORD *v18; // rsi
  PVOID *v19; // rsi
  char v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v10 = 5LL * a1;
  CurrentThread = KeGetCurrentThread();
  v12 = a2 + *((_QWORD *)&PiDmListDefs + 5 * a1 + 1);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a2, 0LL);
  v13 = *(_DWORD *)(v12 + 16);
  if ( v13 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v13, 0x5A706E50u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v15 = *(_QWORD **)v12;
      if ( *(_QWORD *)v12 != v12 )
      {
        do
        {
          v16 = (volatile signed __int32 *)((char *)v15 - *((_QWORD *)&PiDmListDefs + v10 + 3));
          PoolWithTag[v6] = v16;
          _InterlockedIncrement(v16 + 2);
          v15 = (_QWORD *)*v15;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( v15 != (_QWORD *)v12 );
      }
    }
    else
    {
      v4 = -1073741670;
    }
  }
  ExReleasePushLockEx(a2, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v17 = 0;
  if ( (_DWORD)v6 )
  {
    v18 = v5;
    do
    {
      v4 = a3(*v18, a4, &v21);
      if ( v4 < 0 )
        break;
      if ( v21 )
        break;
      ++v17;
      ++v18;
    }
    while ( v17 < (unsigned int)v6 );
  }
  if ( v5 )
  {
    if ( (_DWORD)v6 )
    {
      v19 = (PVOID *)v5;
      do
      {
        PiDmObjectRelease(*v19++);
        --v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(v5, 0x5A706E50u);
  }
  return (unsigned int)v4;
}
