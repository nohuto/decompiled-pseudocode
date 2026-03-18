/*
 * XREFs of FsRtlAcquireFileForCcFlushEx @ 0x14069EF34
 * Callers:
 *     MmFlushSection @ 0x140077AD0 (MmFlushSection.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402B96B0 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x14069E9FC (MmFlushVirtualMemory.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140009DA8 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140009DD0 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140009E60 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14000A140 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14000A1D0 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14003F5C0 (ExIsResourceAcquiredSharedLite.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400EBF60 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall FsRtlAcquireFileForCcFlushEx(PFILE_OBJECT FileObject)
{
  signed int v2; // ebx
  PDEVICE_OBJECT *v3; // r15
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
  PDEVICE_OBJECT v24[72]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v24, 0, 0x238uLL);
  v2 = 0;
  v3 = v24;
  HIDWORD(v22) = 0;
  v4 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
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
    result = FsFilterCtrlInit((__int64)v24, 251, (__int64)RelatedDeviceObject, v5, (__int64)FileObject, 1u);
    if ( (int)result < 0 )
      return result;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v2 = FsFilterPerformCallbacks((__int64)v24, 1, 1, (_DWORD *)&v22 + 1);
    v7 = 0;
  }
  else
  {
    v21 = KeGetCurrentThread();
    v3 = 0LL;
    --v21->KernelApcDisable;
  }
  if ( v2 >= 0 )
  {
    if ( v2 )
    {
      if ( v2 != 294 )
        v7 = v2;
      v2 = v7;
    }
    else
    {
      if ( v3 && (FileObject = (PFILE_OBJECT)v24[2], ((__int64)v24[8] & 4) != 0) )
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
          v2 = AcquireForCcFlush(FileObject, BaseFileSystemDeviceObject);
        }
        else
        {
          v2 = -1073741808;
        }
        HIDWORD(v22) |= 1u;
      }
      if ( v13 )
        ObfDereferenceObject(BaseFileSystemDeviceObject);
    }
  }
  if ( v2 == -1073741808 && (v22 & 0x100000000LL) != 0 )
  {
    FsContext = FileObject->FsContext;
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
    v2 = 0;
  }
  if ( v3 )
  {
    if ( *((_WORD *)v3 + 37) )
      FsFilterPerformCompletionCallbacks((__int64)v24, v2);
    FsFilterCtrlFree((__int64)v24);
  }
  if ( v2 < 0 )
    KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
