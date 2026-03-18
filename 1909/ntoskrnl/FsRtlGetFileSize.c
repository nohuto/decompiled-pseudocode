/*
 * XREFs of FsRtlGetFileSize @ 0x1406507C0
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1400C1C30 (FsRtlCreateSectionForDataScan.c)
 *     MiShareExistingControlArea @ 0x1405D5654 (MiShareExistingControlArea.c)
 *     MmExtendSection @ 0x140624DB0 (MmExtendSection.c)
 *     MiCreateImageFileMap @ 0x140645C84 (MiCreateImageFileMap.c)
 *     MiCreateDataFileMap @ 0x14065040C (MiCreateDataFileMap.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14090900C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140909244 (ExpQueryElamCertInfo.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoAllocateIrpEx @ 0x1400893F0 (IoAllocateIrpEx.c)
 *     IoSetThreadHardErrorMode @ 0x1400EA080 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall FsRtlGetFileSize(PFILE_OBJECT FileObject, PLARGE_INTEGER FileSize)
{
  __int64 v4; // rdx
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  unsigned __int8 (__fastcall *FastIoQueryStandardInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  NTSTATUS result; // eax
  __int64 v9; // rdx
  IRP *Irp; // rbx
  BOOLEAN v11; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  BOOLEAN v13; // r15
  NTSTATUS v14; // ebx
  NTSTATUS v15; // ecx
  _QWORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h] BYREF
  LONGLONG v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]

  v16[0] = 0LL;
  v16[1] = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch
    || (FastIoQueryStandardInfo = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryStandardInfo) == 0LL
    || (LOBYTE(v4) = 1, !FastIoQueryStandardInfo(FileObject, v4, &v18, v16, RelatedDeviceObject)) )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, NotificationEvent, 0);
    LOBYTE(v9) = RelatedDeviceObject->StackSize;
    Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v9, 0LL);
    if ( !Irp )
      return -1073741670;
    v11 = IoSetThreadHardErrorMode(0);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v13 = v11;
    Irp->Flags = 66;
    Irp->UserIosb = (PIO_STATUS_BLOCK)v16;
    Irp->UserEvent = &Event;
    Irp->RequestorMode = 0;
    Irp->Tail.Overlay.OriginalFileObject = FileObject;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v18;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = FileObject;
    CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
    CurrentStackLocation[-1].Parameters.Read.Length = 24;
    CurrentStackLocation[-1].Parameters.Create.Options = 5;
    v14 = IofCallDriver(RelatedDeviceObject, Irp);
    if ( v14 == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v15 = v16[0];
    if ( v14 < 0 )
      v15 = v14;
    LODWORD(v16[0]) = v15;
    IoSetThreadHardErrorMode(v13);
  }
  result = v16[0];
  if ( SLODWORD(v16[0]) >= 0 )
  {
    if ( BYTE5(v20) )
      return -1073741638;
    else
      FileSize->QuadPart = v19;
  }
  return result;
}
