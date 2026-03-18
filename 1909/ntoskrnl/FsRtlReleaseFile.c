/*
 * XREFs of FsRtlReleaseFile @ 0x1405D5DE0
 * Callers:
 *     CcZeroEndOfLastPage @ 0x140009D4C (CcZeroEndOfLastPage.c)
 *     MiReferenceControlArea @ 0x14005F46C (MiReferenceControlArea.c)
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 *     CcDeleteSharedCacheMap @ 0x14007FC90 (CcDeleteSharedCacheMap.c)
 *     FsRtlCreateSectionForDataScan @ 0x1400C1C30 (FsRtlCreateSectionForDataScan.c)
 *     MiShareExistingControlArea @ 0x1405D5654 (MiShareExistingControlArea.c)
 *     MiCreateNewSection @ 0x14064FBD4 (MiCreateNewSection.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140009E38 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140009E60 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140009EF0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14000A1D0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14000A260 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400889C0 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __stdcall FsRtlReleaseFile(PFILE_OBJECT FileObject)
{
  char v2; // si
  PDEVICE_OBJECT *v3; // r15
  unsigned int v4; // edi
  char v5; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // rcx
  __int64 v8; // r9
  struct _DRIVER_OBJECT *DriverObject; // rbx
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  PDRIVER_ADD_DEVICE AddDevice; // rbx
  int v12; // eax
  PVOID v13; // r13
  char v14; // r12
  void (__fastcall *ReleaseFileForNtCreateSection)(PFILE_OBJECT); // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  struct _DRIVER_OBJECT *v17; // rbx
  PVOID FsContext; // rax
  struct _ERESOURCE *v19; // rcx
  int v20; // [rsp+30h] [rbp-288h] BYREF
  PVOID Object; // [rsp+38h] [rbp-280h]
  PDEVICE_OBJECT v22[72]; // [rsp+40h] [rbp-278h] BYREF

  memset(v22, 0, 0x238uLL);
  v2 = 0;
  v3 = v22;
  v20 = 0;
  v4 = 0;
  v5 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  Object = BaseFileSystemDeviceObject;
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  AddDevice = DriverObject->DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x20u && *((_QWORD *)AddDevice + 3)
     || *(_DWORD *)AddDevice >= 0x28u && *((_QWORD *)AddDevice + 4)) )
  {
    v5 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v5 )
  {
    v3 = 0LL;
    v13 = BaseFileSystemDeviceObject;
    goto LABEL_11;
  }
  FsFilterCtrlInit((__int64)v22, 254, (__int64)RelatedDeviceObject, v8, (__int64)FileObject, 0);
  v12 = FsFilterPerformCallbacks((__int64)v22, 0, 0, &v20);
  v4 = v12;
  if ( v12 < 0 )
  {
LABEL_33:
    v2 = v20;
    goto LABEL_24;
  }
  if ( v12 )
  {
    if ( v12 == 294 )
    {
      v4 = 0;
LABEL_26:
      if ( *((_WORD *)v3 + 37) )
        FsFilterPerformCompletionCallbacks((__int64)v22, v4);
      FsFilterCtrlFree((__int64)v22);
      goto LABEL_29;
    }
    goto LABEL_33;
  }
  FileObject = (PFILE_OBJECT)v22[2];
  if ( ((__int64)v22[8] & 4) == 0 )
  {
    v2 = v20;
    v13 = Object;
LABEL_11:
    v14 = 0;
    goto LABEL_12;
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v22[1]);
  v2 = v20;
  v13 = DeviceAttachmentBaseRef;
  v14 = 1;
  v17 = DeviceAttachmentBaseRef->DriverObject;
  FastIoDispatch = v17->FastIoDispatch;
  AddDevice = v17->DriverExtension[1].AddDevice;
LABEL_12:
  if ( !AddDevice
    || (*(_DWORD *)AddDevice < 0x20u || !*((_QWORD *)AddDevice + 3))
    && (*(_DWORD *)AddDevice < 0x28u || !*((_QWORD *)AddDevice + 4)) )
  {
    if ( FastIoDispatch
      && FastIoDispatch->SizeOfFastIoDispatch >= 0x68
      && (ReleaseFileForNtCreateSection = (void (__fastcall *)(PFILE_OBJECT))FastIoDispatch->ReleaseFileForNtCreateSection) != 0LL )
    {
      ReleaseFileForNtCreateSection(FileObject);
    }
    else
    {
      v4 = -1073741808;
    }
    v2 |= 1u;
  }
  if ( v14 )
    ObfDereferenceObject(v13);
LABEL_24:
  if ( v4 == -1073741808 && (v2 & 1) != 0 )
  {
    FsContext = FileObject->FsContext;
    if ( FsContext )
    {
      v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
      if ( v19 )
        ExReleaseResourceLite(v19);
    }
    v4 = 0;
  }
  if ( v3 )
    goto LABEL_26;
LABEL_29:
  KeLeaveCriticalRegion();
}
