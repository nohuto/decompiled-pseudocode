/*
 * XREFs of _PnpCtxRegCloseKey @ 0x1406F2DC8
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197780 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14034B050 (DrvDbGetConfigurationSubKeyCallback.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406244FC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140625474 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406F1234 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F2AC0 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiDqIrpPropertySet @ 0x1406F3670 (PiDqIrpPropertySet.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406FB124 (DrvDbGetDeviceIdMappedProperty.c)
 *     _CmUpdateDevicePanel @ 0x1406FF59C (_CmUpdateDevicePanel.c)
 *     _CmAddDeviceToContainerWorker @ 0x14070AE3C (_CmAddDeviceToContainerWorker.c)
 *     PiCMValidateDeviceInstance @ 0x14071FD3C (PiCMValidateDeviceInstance.c)
 *     DrvDbCreateDatabaseNode @ 0x140755A50 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140756900 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x140867B54 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1409340AC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140934710 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140935264 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140936734 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140939E90 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14093A770 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093F25C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14093F7FC (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14094186C (DrvDbSetDriverPackageMappedProperty.c)
 *     PipInitComputerIds @ 0x1409F5B3C (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409F6E88 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevices @ 0x1409F7B38 (PipResetDevices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409F82A4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1409F8330 (PipProcessPendingServices.c)
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140A21114 (PipMigratePnpState.c)
 *     PipMigrateServiceCallback @ 0x140A3AAD0 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A3B070 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A3B280 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
