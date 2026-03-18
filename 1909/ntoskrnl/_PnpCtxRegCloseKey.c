/*
 * XREFs of _PnpCtxRegCloseKey @ 0x1406F4868
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197DE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14034AAB0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406283AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140629324 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406F2CD4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F4560 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiDqIrpPropertySet @ 0x1406F5400 (PiDqIrpPropertySet.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406FCF04 (DrvDbGetDeviceIdMappedProperty.c)
 *     _CmUpdateDevicePanel @ 0x14070137C (_CmUpdateDevicePanel.c)
 *     _CmAddDeviceToContainerWorker @ 0x14070CC1C (_CmAddDeviceToContainerWorker.c)
 *     PiCMValidateDeviceInstance @ 0x140721BDC (PiCMValidateDeviceInstance.c)
 *     DrvDbCreateDatabaseNode @ 0x1407564E0 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140757390 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x140867254 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140933B20 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140934184 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140934CD8 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1409361A4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140939900 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14093A1E0 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093ECCC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14093F26C (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409412DC (DrvDbSetDriverPackageMappedProperty.c)
 *     PipInitComputerIds @ 0x1409F5A4C (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409F6D98 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevices @ 0x1409F7A48 (PipResetDevices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409F81B4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1409F8240 (PipProcessPendingServices.c)
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140A212F4 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140A3A8A0 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A3AE40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A3B050 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
