/*
 * XREFs of _PnpCtxRegCloseKey @ 0x14073D52C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181EE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1403299B0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PipMigratePnpState @ 0x1409C9678 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x1409C9B40 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409C9BCC (PipProcessPendingOsExtensionResources.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409CB088 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevices @ 0x1409CB1C0 (PipResetDevices.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 *     PipMigrateServiceCallback @ 0x1409F6520 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x1409F6A70 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1409F6C80 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
