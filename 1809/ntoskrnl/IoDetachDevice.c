/*
 * XREFs of IoDetachDevice @ 0x1400DCA50
 * Callers:
 *     ViFilterDispatchPnp @ 0x140943260 (ViFilterDispatchPnp.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF30 (KeAcquireQueuedSpinLock.c)
 *     IopCompleteUnloadOrDelete @ 0x1400DA90C (IopCompleteUnloadOrDelete.c)
 *     IovDetachDevice @ 0x1409241CC (IovDetachDevice.c)
 */

void __stdcall IoDetachDevice(PDEVICE_OBJECT TargetDevice)
{
  KIRQL v2; // di
  __int64 v3; // r8
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  if ( (MmVerifierData & 0x10) != 0 )
    IovDetachDevice(TargetDevice, retaddr);
  v3 = 0LL;
  TargetDevice->AttachedDevice->DeviceObjectExtension->AttachedTo = 0LL;
  DeviceObjectExtension = TargetDevice->DeviceObjectExtension;
  TargetDevice->AttachedDevice = 0LL;
  if ( (DeviceObjectExtension->ExtensionFlags & 7) == 0 || TargetDevice->ReferenceCount )
  {
    KeReleaseQueuedSpinLock(0xAuLL, v2);
  }
  else
  {
    LOBYTE(v3) = v2;
    IopCompleteUnloadOrDelete((ULONG_PTR)TargetDevice, 0, v3);
  }
}
