/*
 * XREFs of _PnpCtxRegCloseKey @ 0x14073C35C
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181D80 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1403296C0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PiCMCreateDevice @ 0x1408367D4 (PiCMCreateDevice.c)
 *     PipMigratePnpState @ 0x1409C8678 (PipMigratePnpState.c)
 *     PipProcessPendingServices @ 0x1409C8B40 (PipProcessPendingServices.c)
 *     PipProcessPendingOsExtensionResources @ 0x1409C8BCC (PipProcessPendingOsExtensionResources.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409CA088 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevices @ 0x1409CA1C0 (PipResetDevices.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     PipMigrateServiceCallback @ 0x1409F5510 (PipMigrateServiceCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x1409F5A60 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x1409F5C70 (PipCommitPendingService.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 */

NTSTATUS __fastcall PnpCtxRegCloseKey(__int64 a1, void *a2)
{
  return ZwClose(a2);
}
