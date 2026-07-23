/*
 * XREFs of FsRtlMdlReadDev @ 0x140815A80
 * Callers:
 *     <none>
 * Callees:
 *     IoSetTopLevelIrp @ 0x14001C5F0 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x14001C610 (IoGetTopLevelIrp.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     FsRtlIsNtstatusExpected @ 0x14012F320 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CcMdlRead @ 0x140663D50 (CcMdlRead.c)
 */

BOOLEAN __stdcall FsRtlMdlReadDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v8; // rsi
  LONGLONG v12; // rbx
  PVOID FsContext; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r9
  char v16; // al
  LONGLONG v17; // rax

  v8 = Length;
  if ( !IoGetTopLevelIrp() )
  {
    if ( !(_DWORD)v8 )
    {
      IoStatus->Status = 0;
      IoStatus->Information = 0LL;
      return 1;
    }
    v12 = FileOffset->QuadPart + v8;
    FsContext = FileObject->FsContext;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    __incgsdword(0x5E04u);
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( FileObject->PrivateCacheMap )
    {
      v16 = *((_BYTE *)FsContext + 5);
      if ( v16 )
      {
        if ( v16 != 2
          || (LOBYTE(v15) = 1,
              ((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, char, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
                FileObject,
                FileOffset,
                (unsigned int)v8,
                v15,
                LockKey,
                1,
                IoStatus,
                DeviceObject)) )
        {
          v17 = *((_QWORD *)FsContext + 4);
          if ( v12 > v17 )
          {
            if ( FileOffset->QuadPart >= v17 )
            {
              IoStatus->Status = -1073741807;
              IoStatus->Information = 0LL;
LABEL_12:
              ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              return 1;
            }
            LODWORD(v8) = v17 - FileOffset->QuadPart;
          }
          IoSetTopLevelIrp((PIRP)4);
          CcMdlRead(FileObject, FileOffset, v8, MdlChain, IoStatus);
          FileObject->Flags |= 0x80000u;
          IoSetTopLevelIrp(0LL);
          goto LABEL_12;
        }
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    __incgsdword(0x5E08u);
  }
  return 0;
}
