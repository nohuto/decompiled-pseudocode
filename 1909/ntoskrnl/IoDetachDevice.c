/*
 * XREFs of IoDetachDevice @ 0x1400F16B0
 * Callers:
 *     ViFilterDispatchPnp @ 0x140982C00 (ViFilterDispatchPnp.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140077180 (KeAcquireQueuedSpinLock.c)
 *     IopCompleteUnloadOrDelete @ 0x1400F10C4 (IopCompleteUnloadOrDelete.c)
 *     IovDetachDevice @ 0x140963350 (IovDetachDevice.c)
 */

void __stdcall IoDetachDevice(PDEVICE_OBJECT TargetDevice)
{
  KIRQL v2; // di
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovDetachDevice(TargetDevice, retaddr);
  TargetDevice->AttachedDevice->DeviceObjectExtension->AttachedTo = 0LL;
  DeviceObjectExtension = TargetDevice->DeviceObjectExtension;
  TargetDevice->AttachedDevice = 0LL;
  if ( (DeviceObjectExtension->ExtensionFlags & 7) == 0 || TargetDevice->ReferenceCount )
    KeReleaseQueuedSpinLock(0xAuLL, v2);
  else
    IopCompleteUnloadOrDelete((ULONG_PTR)TargetDevice, 0, v2);
}
