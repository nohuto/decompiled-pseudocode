/*
 * XREFs of _PnpCtxRegOpenKey @ 0x14073C374
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181D80 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1403296C0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x1409C8678 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x1409C875C (PpDevCfgInit.c)
 *     PipProcessPendingServices @ 0x1409C8B40 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409C8BCC (PipProcessPendingOsExtensionResources.c)
 *     PipResetDevices @ 0x1409CA1C0 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x1409F529C (PipHardwareConfigExists.c)
 *     PipMigrateServiceCallback @ 0x1409F5510 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x1409F5A60 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1409F5C70 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x1409F6000 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1405C7AFC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
