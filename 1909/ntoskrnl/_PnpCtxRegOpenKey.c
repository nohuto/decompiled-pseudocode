/*
 * XREFs of _PnpCtxRegOpenKey @ 0x1406295DC
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197DE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14034AAB0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140629324 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406F2CD4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     DrvDbLoadDatabaseNode @ 0x1406F3DC8 (DrvDbLoadDatabaseNode.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F4560 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x140867254 (PiDevCfgInitDriverDatabaseCallback.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140939900 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14093A1E0 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093ECCC (DrvDbDeleteObjectSubKey.c)
 *     PpDevCfgInit @ 0x1409F780C (PpDevCfgInit.c)
 *     PipResetDevices @ 0x1409F7A48 (PipResetDevices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409F81B4 (PipProcessPendingOsExtensionResources.c)
 *     PipProcessPendingServices @ 0x1409F8240 (PipProcessPendingServices.c)
 *     PipMigratePnpState @ 0x140A212F4 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x140A3A638 (PipHardwareConfigExists.c)
 *     PipMigrateServiceCallback @ 0x140A3A8A0 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140A3AE40 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140A3B050 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x140A3B3E0 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1405C3B48 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
