/*
 * XREFs of FsRtlCopyRead @ 0x14084D8A0
 * Callers:
 *     <none>
 * Callees:
 *     IoGetTopLevelIrp @ 0x14000A210 (IoGetTopLevelIrp.c)
 *     IoSetTopLevelIrp @ 0x14000A230 (IoSetTopLevelIrp.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     CcCopyReadEx @ 0x1400D5990 (CcCopyReadEx.c)
 *     FsRtlIsNtstatusExpected @ 0x14012EF30 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

BOOLEAN __stdcall FsRtlCopyRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v9; // rsi
  PVOID FsContext; // rbx
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v15; // di
  __int64 v16; // r9
  char v17; // al
  LONGLONG v18; // rax
  LONGLONG v19; // [rsp+58h] [rbp-30h]

  v9 = Length;
  if ( IoGetTopLevelIrp() )
    return 0;
  if ( (_DWORD)v9 )
  {
    if ( 0x7FFFFFFFFFFFFFFFLL - FileOffset->QuadPart < v9 )
    {
      IoStatus->Status = -1073741811;
      IoStatus->Information = 0LL;
      return 0;
    }
    v19 = v9 + FileOffset->QuadPart;
    FsContext = FileObject->FsContext;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( Wait )
    {
      __incgsdword(0x2EC8u);
      v15 = 1;
      ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    }
    else
    {
      __incgsdword(0x2EC4u);
      if ( !ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 0) )
      {
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        __incgsdword(0x5E40u);
        return 0;
      }
      v15 = 1;
    }
    if ( !FileObject->PrivateCacheMap
      || (v17 = *((_BYTE *)FsContext + 5)) == 0
      || v17 == 2
      && (LOBYTE(v16) = Wait,
          !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, char, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
             FileObject,
             FileOffset,
             (unsigned int)v9,
             v16,
             LockKey,
             1,
             IoStatus,
             DeviceObject)) )
    {
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      __incgsdword(0x2ECCu);
      return 0;
    }
    v18 = *((_QWORD *)FsContext + 4);
    if ( v19 > v18 )
    {
      if ( FileOffset->QuadPart >= v18 )
      {
        IoStatus->Status = -1073741807;
        IoStatus->Information = 0LL;
LABEL_22:
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return v15;
      }
      LODWORD(v9) = *((_DWORD *)FsContext + 8) - FileOffset->LowPart;
    }
    IoSetTopLevelIrp((PIRP)4);
    v15 = CcCopyReadEx((_SLIST_ENTRY *)FileObject, (__int64 *)FileOffset, v9, Wait, Buffer, IoStatus, 0LL);
    FileObject->Flags |= 0x80000u;
    if ( v15 )
      FileObject->CurrentByteOffset.QuadPart = FileOffset->QuadPart + IoStatus->Information;
    IoSetTopLevelIrp(0LL);
    goto LABEL_22;
  }
  IoStatus->Status = 0;
  IoStatus->Information = 0LL;
  return 1;
}
