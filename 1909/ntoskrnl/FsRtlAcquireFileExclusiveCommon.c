/*
 * XREFs of FsRtlAcquireFileExclusiveCommon @ 0x1405D5FD0
 * Callers:
 *     FsRtlAcquireToCreateMappedSection @ 0x1405D5D04 (FsRtlAcquireToCreateMappedSection.c)
 *     FsRtlAcquireFileExclusive @ 0x1405D5DC0 (FsRtlAcquireFileExclusive.c)
 * Callees:
 *     FsFilterCtrlFree @ 0x140009E38 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x140009E60 (FsFilterPerformCompletionCallbacks.c)
 *     FsFilterPerformCallbacks @ 0x140009EF0 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlInit @ 0x14000A1D0 (FsFilterCtrlInit.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14000A260 (IoGetBaseFileSystemDeviceObject.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400889C0 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall FsRtlAcquireFileExclusiveCommon(
        PFILE_OBJECT FileObject,
        unsigned int a2,
        unsigned int a3,
        struct _DEVICE_OBJECT *a4)
{
  int v6; // ebx
  PDEVICE_OBJECT *v7; // rsi
  char v8; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  __int64 v10; // r9
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rax
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  PDRIVER_EXTENSION DriverExtension; // rax
  PDRIVER_ADD_DEVICE AddDevice; // r14
  __int64 result; // rax
  struct _KTHREAD *v17; // rax
  int v18; // eax
  int v19; // ecx
  struct _KTHREAD *CurrentThread; // rax
  char v21; // di
  struct _DRIVER_OBJECT *v22; // rax
  void (__fastcall *AcquireFileForNtCreateSection)(PFILE_OBJECT); // rax
  PVOID FsContext; // rax
  struct _ERESOURCE *v25; // rcx
  int v26; // [rsp+30h] [rbp-2B8h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-2B4h]
  struct _DEVICE_OBJECT *v28; // [rsp+38h] [rbp-2B0h]
  struct _FAST_IO_DISPATCH *v29; // [rsp+40h] [rbp-2A8h]
  PDEVICE_OBJECT v30[72]; // [rsp+50h] [rbp-298h] BYREF

  v27 = a3;
  v28 = a4;
  memset(v30, 0, 0x238uLL);
  v6 = 0;
  v7 = v30;
  v26 = 0;
  v8 = 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject(FileObject);
  DriverObject = BaseFileSystemDeviceObject->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  DriverExtension = DriverObject->DriverExtension;
  v29 = FastIoDispatch;
  AddDevice = DriverExtension[1].AddDevice;
  if ( AddDevice
    && (*(_DWORD *)AddDevice >= 0x10u && *((_QWORD *)AddDevice + 1)
     || *(_DWORD *)AddDevice >= 0x18u && *((_QWORD *)AddDevice + 2)) )
  {
    v8 = 1;
  }
  if ( RelatedDeviceObject == BaseFileSystemDeviceObject && !v8 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0LL;
    --CurrentThread->KernelApcDisable;
    goto LABEL_10;
  }
  if ( a2 == 1 )
    LOBYTE(v6) = 1;
  result = FsFilterCtrlInit((__int64)v30, 255, (__int64)RelatedDeviceObject, v10, (__int64)FileObject, v6);
  if ( (int)result >= 0 )
  {
    v30[4] = v28;
    v30[3] = (PDEVICE_OBJECT)__PAIR64__(v27, a2);
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = FsFilterPerformCallbacks((__int64)v30, v6, v6, &v26);
    FastIoDispatch = v29;
    v6 = v18;
LABEL_10:
    if ( v6 >= 0 )
    {
      if ( v6 )
      {
        v19 = 0;
        if ( v6 != 294 )
          v19 = v6;
        v6 = v19;
      }
      else
      {
        if ( v7 && (FileObject = (PFILE_OBJECT)v30[2], ((__int64)v30[8] & 4) != 0) )
        {
          BaseFileSystemDeviceObject = IoGetDeviceAttachmentBaseRef(v30[1]);
          v21 = 1;
          v22 = BaseFileSystemDeviceObject->DriverObject;
          FastIoDispatch = v22->FastIoDispatch;
          AddDevice = v22->DriverExtension[1].AddDevice;
        }
        else
        {
          v21 = 0;
        }
        if ( !AddDevice
          || (*(_DWORD *)AddDevice < 0x10u || !*((_QWORD *)AddDevice + 1))
          && (*(_DWORD *)AddDevice < 0x18u || !*((_QWORD *)AddDevice + 2)) )
        {
          if ( FastIoDispatch
            && FastIoDispatch->SizeOfFastIoDispatch >= 0x60
            && (AcquireFileForNtCreateSection = (void (__fastcall *)(PFILE_OBJECT))FastIoDispatch->AcquireFileForNtCreateSection) != 0LL )
          {
            AcquireFileForNtCreateSection(FileObject);
          }
          else
          {
            v6 = -1073741808;
          }
          v26 |= 1u;
        }
        if ( v21 )
          ObfDereferenceObject(BaseFileSystemDeviceObject);
      }
    }
    if ( v6 == -1073741808 && (v26 & 1) != 0 )
    {
      FsContext = FileObject->FsContext;
      if ( FsContext )
      {
        v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 1);
        if ( v25 )
          ExAcquireResourceExclusiveLite(v25, 1u);
      }
      v6 = 0;
    }
    if ( v7 )
    {
      if ( *((_WORD *)v7 + 37) )
        FsFilterPerformCompletionCallbacks((__int64)v30, v6);
      FsFilterCtrlFree((__int64)v30);
    }
    if ( v6 < 0 )
      KeLeaveCriticalRegion();
    return (unsigned int)v6;
  }
  return result;
}
