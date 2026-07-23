/*
 * XREFs of _PnpCtxRegOpenKey @ 0x14073D544
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181EE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1403299B0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PipMigratePnpState @ 0x1409C9678 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x1409C975C (PpDevCfgInit.c)
 *     PipProcessPendingServices @ 0x1409C9B40 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409C9BCC (PipProcessPendingOsExtensionResources.c)
 *     PipResetDevices @ 0x1409CB1C0 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x1409F62AC (PipHardwareConfigExists.c)
 *     PipMigrateServiceCallback @ 0x1409F6520 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x1409F6A70 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1409F6C80 (PipCommitPendingService.c)
 *     PipProcessPendingObjects @ 0x1409F7010 (PipProcessPendingObjects.c)
 * Callees:
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxRegOpenKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, __int64 a6)
{
  __int64 v7; // rcx

  v7 = 0LL;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenKey(v7, a2, a3, a4, a5, a6);
}
