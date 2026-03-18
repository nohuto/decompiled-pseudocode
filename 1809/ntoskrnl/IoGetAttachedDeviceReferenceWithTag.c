/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x14000EAE8
 * Callers:
 *     PopAllocateIrp @ 0x14017271C (PopAllocateIrp.c)
 *     IopSynchronousCall @ 0x1405A2CE0 (IopSynchronousCall.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     PnpQueryInterface @ 0x1406F9198 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x1406FCC24 (PnpAsynchronousCall.c)
 *     PopFxRegisterDevice @ 0x1407251B0 (PopFxRegisterDevice.c)
 *     IopEjectDevice @ 0x14083AE20 (IopEjectDevice.c)
 *     PiControlGetDeviceStack @ 0x14083B8D4 (PiControlGetDeviceStack.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACDD0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF10 (KeAcquireQueuedSpinLock.c)
 *     IoGetAttachedDevice @ 0x1400B9230 (IoGetAttachedDevice.c)
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
