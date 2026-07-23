/*
 * XREFs of FsRtlGetFileExtents @ 0x14026E868
 * Callers:
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x140853C24 (MiComputeIdealFirstSubsection.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IoAllocateIrpEx @ 0x1400B91B0 (IoAllocateIrpEx.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     IoSynchronousCallDriver @ 0x1401282E0 (IoSynchronousCallDriver.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall FsRtlGetFileExtents(struct _FILE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v9; // rdx
  IRP *Irp; // rax
  IRP *v11; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v14; // ebx
  _QWORD v15[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v16[3]; // [rsp+30h] [rbp-38h] BYREF

  v15[0] = 0LL;
  v15[1] = 0LL;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  LOBYTE(v9) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v9, 0LL);
  v11 = Irp;
  if ( !Irp )
    return 3221225626LL;
  v16[2] = 0LL;
  v16[0] = a3;
  v16[1] = a4;
  Irp->UserIosb = (PIO_STATUS_BLOCK)v15;
  Irp->UserBuffer = a5;
  Irp->RequestorMode = 0;
  Irp->UserEvent = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 13;
  CurrentStackLocation[-1].FileObject = a1;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 590747;
  CurrentStackLocation[-1].Parameters.Create.Options = 24;
  CurrentStackLocation[-1].Parameters.Read.Length = 16 * *a5 + 8;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)v16;
  v14 = IoSynchronousCallDriver(RelatedDeviceObject, Irp);
  IoFreeIrp(v11);
  return v14;
}
