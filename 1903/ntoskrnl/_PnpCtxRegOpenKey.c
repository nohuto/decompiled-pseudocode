/*
 * XREFs of _PnpCtxRegOpenKey @ 0x14062572C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197780 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14034B050 (DrvDbGetConfigurationSubKeyCallback.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140625474 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406F1234 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1406F2328 (DrvDbLoadDatabaseNode.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F2AC0 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x140867B54 (PiDevCfgInitDriverDatabaseCallback.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140939E90 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14093A770 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093F25C (DrvDbDeleteObjectSubKey.c)
 *     PpDevCfgInit @ 0x1409F78FC (PpDevCfgInit.c)
 *     PipResetDevices @ 0x1409F7B38 (PipResetDevices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409F82A4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1409F8330 (PipProcessPendingServices.c)
 *     PipMigratePnpState @ 0x140A21114 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x140A3A868 (PipHardwareConfigExists.c)
 *     PipMigrateServiceCallback @ 0x140A3AAD0 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A3B070 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A3B280 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A3B610 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1405C3678 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
