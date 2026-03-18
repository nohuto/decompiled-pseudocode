/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x1400ED890
 * Callers:
 *     PopAllocateIrp @ 0x140173844 (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x140690E2C (IopSynchronousCall.c)
 *     PipCallDriverAddDevice @ 0x140704B38 (PipCallDriverAddDevice.c)
 *     PnpQueryInterface @ 0x1407164D0 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x14071AB3C (PnpAsynchronousCall.c)
 *     PopFxRegisterDevice @ 0x140771EE0 (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x1408752C4 (IopEjectDevice.c)
 *     PiControlGetDeviceStack @ 0x14087610C (PiControlGetDeviceStack.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     IoGetAttachedDevice @ 0x140044170 (IoGetAttachedDevice.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
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
