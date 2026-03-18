/*
 * XREFs of FsRtlGetDirectImageOriginalBase @ 0x14084D69C
 * Callers:
 *     MiCreateNewSection @ 0x14064FBD4 (MiCreateNewSection.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoAllocateIrpEx @ 0x1400893F0 (IoAllocateIrpEx.c)
 */

NTSTATUS __fastcall FsRtlGetDirectImageOriginalBase(PFILE_OBJECT FileObject, struct _IRP *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v5; // rdx
  IRP *Irp; // rax
  IRP *v7; // rdx
  NTSTATUS result; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+40h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  v10[0] = 0LL;
  v10[1] = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v5) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v5, 0LL);
  v7 = Irp;
  if ( !Irp )
    return -1073741670;
  Irp->RequestorMode = 0;
  Irp->AssociatedIrp.MasterIrp = a2;
  Irp->UserIosb = (PIO_STATUS_BLOCK)v10;
  Irp->UserEvent = &Object;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 13;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 590756;
  CurrentStackLocation[-1].Parameters.Read.Length = 8;
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return v10[0];
  }
  return result;
}
