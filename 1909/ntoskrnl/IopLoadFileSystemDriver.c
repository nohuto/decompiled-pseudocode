/*
 * XREFs of IopLoadFileSystemDriver @ 0x14072FBA8
 * Callers:
 *     IopMountVolume @ 0x1406A0254 (IopMountVolume.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140037290 (IopDecrementDeviceObjectRef.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x14009AEF0 (IoBuildDeviceIoControlRequest.c)
 */

__int64 __fastcall IopLoadFileSystemDriver(struct _DEVICE_OBJECT *BugCheckParameter2)
{
  struct _DEVICE_OBJECT *v2; // rbx
  struct _DEVICE_OBJECT *i; // rax
  PIRP v4; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v2 = BugCheckParameter2;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  for ( i = BugCheckParameter2->AttachedDevice; i; i = i->AttachedDevice )
    v2 = i;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0xEu, v2, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( v4 )
  {
    *(_WORD *)&v4->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 781;
    if ( IofCallDriver(v2, v4) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return IopDecrementDeviceObjectRef((ULONG_PTR)BugCheckParameter2, 1);
}
