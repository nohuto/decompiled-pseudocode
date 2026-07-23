/*
 * XREFs of IoDeleteDevice @ 0x1400DAB60
 * Callers:
 *     RawMountVolume @ 0x1405A3988 (RawMountVolume.c)
 *     RawDeleteVcb @ 0x140690B38 (RawDeleteVcb.c)
 *     PiSwGetChildPdo @ 0x1406DA138 (PiSwGetChildPdo.c)
 *     PiSwDestroyDeviceObject @ 0x1406DA37C (PiSwDestroyDeviceObject.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DB8EC (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x140703DD0 (IopPnPDispatch.c)
 *     IopLegacyResourceAllocation @ 0x14072E084 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x14072E1B4 (IopRemoveLegacyDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     VrpRegistryUnload @ 0x1408093B0 (VrpRegistryUnload.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 *     RawShutdown @ 0x140890A30 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x140928B20 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140943F44 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140944260 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x1409D4DD0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x1409D5020 (WmipDriverEntry.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     IopCompleteUnloadOrDelete @ 0x1400DA98C (IopCompleteUnloadOrDelete.c)
 *     PoRunDownDeviceObject @ 0x1400DAC00 (PoRunDownDeviceObject.c)
 *     IopRemoveTimerFromTimerList @ 0x140284290 (IopRemoveTimerFromTimerList.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoUnregisterShutdownNotification @ 0x14056F370 (IoUnregisterShutdownNotification.c)
 *     PnpFreeInterruptInformation @ 0x140654A0C (PnpFreeInterruptInformation.c)
 *     ObMakeTemporaryObject @ 0x1406C8670 (ObMakeTemporaryObject.c)
 *     IovDeleteDevice @ 0x1409251B8 (IovDeleteDevice.c)
 */

void __stdcall IoDeleteDevice(PDEVICE_OBJECT DeviceObject)
{
  PIO_TIMER Timer; // rdi
  KIRQL v3; // al
  __int64 v4; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x90) != 0 )
    IovDeleteDevice(DeviceObject, retaddr);
  if ( (DeviceObject->Flags & 0x800) != 0 )
    IoUnregisterShutdownNotification(DeviceObject);
  Timer = DeviceObject->Timer;
  if ( Timer )
  {
    IopRemoveTimerFromTimerList(DeviceObject->Timer);
    ExFreePoolWithTag(Timer, 0);
  }
  if ( (DeviceObject->Flags & 0x40) != 0 )
    ObMakeTemporaryObject(DeviceObject);
  PoRunDownDeviceObject(DeviceObject);
  PnpFreeInterruptInformation(DeviceObject);
  v3 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceObject->DeviceObjectExtension->ExtensionFlags |= 2u;
  if ( DeviceObject->ReferenceCount )
  {
    KeReleaseQueuedSpinLock(0xAuLL, v3);
  }
  else
  {
    LOBYTE(v4) = v3;
    IopCompleteUnloadOrDelete((ULONG_PTR)DeviceObject, 0, v4);
  }
}
