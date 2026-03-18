/*
 * XREFs of CcSetValidData @ 0x14009990C
 * Callers:
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IoAllocateIrp @ 0x140099A10 (IoAllocateIrp.c)
 */

__int64 __fastcall CcSetValidData(struct _FILE_OBJECT *a1, __int64 *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PIRP Irp; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v6; // ebx
  __int64 result; // rax
  _QWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD Object[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h] BYREF

  Object[1] = 0;
  v8[0] = 0LL;
  v8[1] = 0LL;
  v11 = *a2;
  v10[1] = v10;
  v10[0] = v10;
  Object[0] = 393216;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
  if ( !Irp )
    return 3221225626LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Flags = 66;
  Irp->RequestorMode = 0;
  Irp->UserIosb = (PIO_STATUS_BLOCK)v8;
  Irp->UserEvent = (PKEVENT)Object;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v11;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = a1;
  CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
  CurrentStackLocation[-1].Parameters.Read.Length = 8;
  CurrentStackLocation[-1].Parameters.Create.Options = 20;
  CurrentStackLocation[-1].Parameters.SetFile.AdvanceOnly = 1;
  v6 = IofCallDriver(RelatedDeviceObject, Irp);
  if ( v6 == 259 )
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
  result = LODWORD(v8[0]);
  if ( v6 < 0 )
    return (unsigned int)v6;
  return result;
}
