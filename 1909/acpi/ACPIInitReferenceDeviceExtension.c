/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C000CD58
 * Callers:
 *     ACPIGetCmosInterface @ 0x1C0005D68 (ACPIGetCmosInterface.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C00062B4 (ACPIFixedFeatureButtonInitialize.c)
 *     OSNotifyCreateOperationRegion @ 0x1C000CE20 (OSNotifyCreateOperationRegion.c)
 *     ACPIDetectFilterDevices @ 0x1C000CF60 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D28C (ACPIDetectPdoDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C00120AC (ACPIDetectDuplicateHID.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C0012260 (ACPIGpeBuildWakeMasks.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002B860 (ACPIFilterIrpRemoveDevice.c)
 *     OSNotifyCreateProcessor @ 0x1C002C634 (OSNotifyCreateProcessor.c)
 *     ACPIFilterIrpSetPower @ 0x1C002D400 (ACPIFilterIrpSetPower.c)
 *     DispatchNotification @ 0x1C002E900 (DispatchNotification.c)
 *     OSNotifyCreateThermalZone @ 0x1C002F62C (OSNotifyCreateThermalZone.c)
 *     AcpiDeviceResetInterface @ 0x1C0052430 (AcpiDeviceResetInterface.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C0056058 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIRootInitialize @ 0x1C0090730 (ACPIRootInitialize.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0093448 (ACPIBusReenumerateSelfInterface.c)
 *     ACPIDockIntfReference @ 0x1C00AADE0 (ACPIDockIntfReference.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x1C00ADC00 (ACPIInterfaceReferenceDeviceExtension.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00B08B8 (ACPIPepInitializePlatformNotificationSupport.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIInitReferenceDeviceExtension(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 684) )
    return 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 684));
  return 1;
}
