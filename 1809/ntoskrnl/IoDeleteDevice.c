/*
 * XREFs of IoDeleteDevice @ 0x1400DAAC0
 * Callers:
 *     RawMountVolume @ 0x1405A2988 (RawMountVolume.c)
 *     RawDeleteVcb @ 0x14068F998 (RawDeleteVcb.c)
 *     PiSwGetChildPdo @ 0x1406D8EB8 (PiSwGetChildPdo.c)
 *     PiSwDestroyDeviceObject @ 0x1406D90FC (PiSwDestroyDeviceObject.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DA66C (IopInitializeDeviceInstanceKey.c)
 *     IopPnPDispatch @ 0x140702B50 (IopPnPDispatch.c)
 *     IopLegacyResourceAllocation @ 0x14072CEB4 (IopLegacyResourceAllocation.c)
 *     IopRemoveLegacyDeviceNode @ 0x14072CFE4 (IopRemoveLegacyDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     VrpRegistryUnload @ 0x1408081D0 (VrpRegistryUnload.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 *     RawShutdown @ 0x14088F7F0 (RawShutdown.c)
 *     ViDdiDriverEntry @ 0x140927B20 (ViDdiDriverEntry.c)
 *     VfFilterAttach @ 0x140942F44 (VfFilterAttach.c)
 *     ViFilterDispatchPnp @ 0x140943260 (ViFilterDispatchPnp.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 *     RawInitialize @ 0x1409D3DD0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x1409D4020 (WmipDriverEntry.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x140018930 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF10 (KeAcquireQueuedSpinLock.c)
 *     IopCompleteUnloadOrDelete @ 0x1400DA8EC (IopCompleteUnloadOrDelete.c)
 *     PoRunDownDeviceObject @ 0x1400DAB60 (PoRunDownDeviceObject.c)
 *     IopRemoveTimerFromTimerList @ 0x140283FA0 (IopRemoveTimerFromTimerList.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IoUnregisterShutdownNotification @ 0x14056E370 (IoUnregisterShutdownNotification.c)
 *     PnpFreeInterruptInformation @ 0x14065386C (PnpFreeInterruptInformation.c)
 *     ObMakeTemporaryObject @ 0x1406C73F0 (ObMakeTemporaryObject.c)
 *     IovDeleteDevice @ 0x1409241B8 (IovDeleteDevice.c)
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
