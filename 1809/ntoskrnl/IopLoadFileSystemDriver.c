/*
 * XREFs of IopLoadFileSystemDriver @ 0x1407080BC
 * Callers:
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8B60 (IopDecrementDeviceObjectRef.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400DDD10 (IoBuildDeviceIoControlRequest.c)
 */

__int64 __fastcall IopLoadFileSystemDriver(struct _DEVICE_OBJECT *BugCheckParameter2)
{
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v3; // rbx
  PIRP v4; // rax
  __int64 v5; // r8
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  AttachedDevice = BugCheckParameter2->AttachedDevice;
  v3 = BugCheckParameter2;
  while ( AttachedDevice )
  {
    v3 = AttachedDevice;
    AttachedDevice = AttachedDevice->AttachedDevice;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0xEu, v3, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( v4 )
  {
    *(_WORD *)&v4->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 781;
    if ( IofCallDriver(v3, v4) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  LOBYTE(v5) = 1;
  return IopDecrementDeviceObjectRef((ULONG_PTR)BugCheckParameter2, 1, v5);
}
