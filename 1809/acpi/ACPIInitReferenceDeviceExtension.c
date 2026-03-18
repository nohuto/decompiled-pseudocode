/*
 * XREFs of ACPIInitReferenceDeviceExtension @ 0x1C0017BC4
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0015E8C (OSNotifyCreateProcessor.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0017F78 (OSNotifyCreateOperationRegion.c)
 *     ACPIDetectFilterDevices @ 0x1C0018C64 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018F84 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C001A9C8 (ACPIDetectDuplicateHID.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001AB70 (ACPIGpeBuildWakeMasks.c)
 *     ACPIGetCmosInterface @ 0x1C002BB04 (ACPIGetCmosInterface.c)
 *     ACPIFilterIrpSetPower @ 0x1C002C6B0 (ACPIFilterIrpSetPower.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002DAE0 (ACPIFilterIrpRemoveDevice.c)
 *     DispatchNotification @ 0x1C002E170 (DispatchNotification.c)
 *     OSNotifyCreateThermalZone @ 0x1C002EAB0 (OSNotifyCreateThermalZone.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x1C003010C (ACPIFixedFeatureButtonInitialize.c)
 *     AcpiDeviceResetInterface @ 0x1C0050AC0 (AcpiDeviceResetInterface.c)
 *     ACPIInitDeleteDeviceExtension @ 0x1C00545E8 (ACPIInitDeleteDeviceExtension.c)
 *     ACPIRootInitialize @ 0x1C0095120 (ACPIRootInitialize.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0096ED0 (ACPIBusReenumerateSelfInterface.c)
 *     ACPIDockIntfReference @ 0x1C00A7940 (ACPIDockIntfReference.c)
 *     ACPIInterfaceReferenceDeviceExtension @ 0x1C00AA510 (ACPIInterfaceReferenceDeviceExtension.c)
 *     ACPIPepInitializePlatformNotificationSupport @ 0x1C00AD168 (ACPIPepInitializePlatformNotificationSupport.c)
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
