/*
 * XREFs of FsRtlGetDirectImageOriginalBase @ 0x140815730
 * Callers:
 *     MiCreateNewSection @ 0x14061C7E0 (MiCreateNewSection.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IoAllocateIrpEx @ 0x1400B91B0 (IoAllocateIrpEx.c)
 */

NTSTATUS __fastcall FsRtlGetDirectImageOriginalBase(PFILE_OBJECT FileObject, __int64 a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  __int64 v5; // rdx
  __int64 Irp; // rax
  IRP *v7; // rdx
  NTSTATUS result; // eax
  __int64 v9; // rax
  _QWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+40h] [rbp-28h] BYREF

  v10[0] = 0LL;
  v10[1] = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v5) = RelatedDeviceObject->StackSize;
  Irp = IoAllocateIrpEx((__int64)RelatedDeviceObject, v5, 0LL);
  v7 = (IRP *)Irp;
  if ( !Irp )
    return -1073741670;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 24) = a2;
  *(_QWORD *)(Irp + 72) = v10;
  *(_QWORD *)(Irp + 80) = &Object;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  v9 = *(_QWORD *)(Irp + 184);
  *(_DWORD *)(v9 - 56) = 0;
  *(_QWORD *)(v9 - 40) = 0LL;
  *(_WORD *)(v9 - 72) = 13;
  *(_QWORD *)(v9 - 24) = FileObject;
  *(_DWORD *)(v9 - 48) = 590756;
  *(_DWORD *)(v9 - 64) = 8;
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return v10[0];
  }
  return result;
}
