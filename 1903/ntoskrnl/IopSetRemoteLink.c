/*
 * XREFs of IopSetRemoteLink @ 0x1408554D8
 * Callers:
 *     IopTrackLink @ 0x1406AFA80 (IopTrackLink.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400BB080 (IoBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall IopSetRemoteLink(struct _FILE_OBJECT *Object, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // r15
  PIRP v7; // rdi
  NTSTATUS result; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v12[34]; // [rsp+80h] [rbp-80h] BYREF

  memset(v12, 0, sizeof(v12));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  v5 = 0;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v7 = IoBuildDeviceIoControlRequest(0x1400ECu, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( !v7 )
    return -1073741670;
  if ( a3 )
  {
    v5 = a3[2] + 12;
    if ( v5 > 0x110 )
      return -1073741789;
    memmove(v12, a3, v5);
    v12[0] = 0LL;
  }
  v7->Flags |= 4u;
  v7->AssociatedIrp.MasterIrp = (struct _IRP *)v12;
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  v7->Tail.Overlay.OriginalFileObject = Object;
  CurrentStackLocation[-1].FileObject = Object;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1037;
  CurrentStackLocation[-1].Parameters.Create.Options = v5;
  ObfReferenceObject(Object);
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
