/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x140099A40
 * Callers:
 *     PopAllocateIrp @ 0x140173114 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x140663D44 (IopSynchronousCall.c)
 *     PipCallDriverAddDevice @ 0x140702D58 (PipCallDriverAddDevice.c)
 *     PnpQueryInterface @ 0x1407146F0 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x140718D4C (PnpAsynchronousCall.c)
 *     PopFxRegisterDevice @ 0x14076F080 (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x140875BC4 (IopEjectDevice.c)
 *     PiControlGetDeviceStack @ 0x140876A0C (PiControlGetDeviceStack.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x1400440D0 (IoGetAttachedDevice.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140076F10 (KeAcquireQueuedSpinLock.c)
 */

PDEVICE_OBJECT __fastcall IoGetAttachedDeviceReferenceWithTag(PDEVICE_OBJECT DeviceObject, ULONG Tag)
{
  KIRQL v4; // di
  PDEVICE_OBJECT AttachedDevice; // rbx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  AttachedDevice = IoGetAttachedDevice(DeviceObject);
  ObfReferenceObjectWithTag(AttachedDevice, Tag);
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return AttachedDevice;
}
