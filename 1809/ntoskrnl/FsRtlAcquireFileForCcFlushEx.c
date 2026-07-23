/*
 * XREFs of FsRtlAcquireFileForCcFlushEx @ 0x1405DE0AC
 * Callers:
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x1402A1C08 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402A246C (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1406B7EBC (MmFlushVirtualMemory.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRef @ 0x140002E10 (IoGetDeviceAttachmentBaseRef.c)
 *     FsFilterCtrlFree @ 0x14001C628 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14001C650 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x14001C6E0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14001C9B0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14001CA40 (IoGetBaseFileSystemDeviceObject.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400B9A20 (ExIsResourceAcquiredSharedLite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsRtlAcquireFileForCcFlushEx(PFILE_OBJECT FileObject)
{
  signed int v1; // ebx
  PDEVICE_OBJECT *v2; // r15
  PFILE_OBJECT v3; // r13
  char v4; // r12
  __int64 v5; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r14
  signed int v7; // ecx
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rsi
  PDRIVER_ADD_DEVICE AddDevice; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  char v13; // r12
  __int64 (__fastcall *AcquireForCcFlush)(PFILE_OBJECT, PDEVICE_OBJECT); // rax
  struct _DRIVER_OBJECT *v15; // rax
  PVOID FsContext; // rbx
  struct _ERESOURCE *v17; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax
  struct _ERESOURCE *v19; // rcx
  struct _ERESOURCE *v20; // rcx
  struct _KTHREAD *v21; // rax
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+40h] [rbp-C8h]
  PDEVICE_OBJECT v24[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v25; // [rsp+88h] [rbp-80h]

  v1 = 0;
  v2 = v24;
  HIDWORD(v22) = 0;
  v3 = FileObject;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(v3);
  v7 = 0;
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x30u && *((_QWORD *)AddDevice + 5)
     || *(_DWORD *)AddDevice >= 0x38u && *((_QWORD *)AddDevice + 6)) )
  {
    v4 = 1;
  }
  if ( RelatedDeviceObject != BaseFileSystemDeviceObject || v4 )
  {
    result = FsFilterCtrlInit((__int64)v24, 251, (__int64)RelatedDeviceObject, v5, (__int64)v3, 1u);
    if ( (int)result < 0 )
      return result;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v1 = FsFilterPerformCallbacks((__int64)v24, 1, 1, (_DWORD *)&v22 + 1);
    v7 = 0;
  }
  else
  {
    v21 = KeGetCurrentThread();
    v2 = 0LL;
    --v21->KernelApcDisable;
  }
  if ( v1 >= 0 )
  {
    if ( v1 )
    {
      if ( v1 != 294 )
        v7 = v1;
      v1 = v7;
    }
    else
    {
      if ( v2 && (v3 = (PFILE_OBJECT)v24[2], (v25 & 4) != 0) )
      {
        BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v24[1]);
        v13 = 1;
        v15 = BaseFileSystemDeviceObject->DriverObject;
        FastIoDispatch = v15->FastIoDispatch;
        AddDevice = v15->DriverExtension[1].AddDevice;
      }
      else
      {
        v13 = 0;
      }
      if ( !AddDevice
        || (*(_DWORD *)AddDevice < 0x30u || !*((_QWORD *)AddDevice + 5))
        && (*(_DWORD *)AddDevice < 0x38u || !*((_QWORD *)AddDevice + 6)) )
      {
        if ( FastIoDispatch
          && FastIoDispatch->SizeOfFastIoDispatch >= 0xD8
          && (AcquireForCcFlush = (__int64 (__fastcall *)(PFILE_OBJECT, PDEVICE_OBJECT))FastIoDispatch->AcquireForCcFlush) != 0LL )
        {
          v1 = AcquireForCcFlush(v3, BaseFileSystemDeviceObject);
        }
        else
        {
          v1 = -1073741808;
        }
        HIDWORD(v22) |= 1u;
      }
      if ( v13 )
        ObfDereferenceObject(BaseFileSystemDeviceObject);
    }
  }
  if ( v1 == -1073741808 && (v22 & 0x100000000LL) != 0 )
  {
    FsContext = v3->FsContext;
    v17 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
    if ( v17 )
    {
      IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(v17);
      v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( IsResourceAcquiredSharedLite )
        ExAcquireResourceSharedLite(v19, 1u);
      else
        ExAcquireResourceExclusiveLite(v19, 1u);
    }
    v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v20 )
      ExAcquireResourceSharedLite(v20, 1u);
    v1 = 0;
  }
  if ( v2 )
  {
    if ( *((_WORD *)v2 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v24, v1);
    FsFilterCtrlFree((__int64)v24);
  }
  if ( v1 < 0 )
    KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
