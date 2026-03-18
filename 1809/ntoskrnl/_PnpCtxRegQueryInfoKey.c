/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1406F5654
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181D80 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F5340 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D808 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083E5DC (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1408F9470 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1408F98F4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408FC594 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendInstallerClassFiltersLevel @ 0x1408FC9E8 (_CmAppendInstallerClassFiltersLevel.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FE288 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900ED4 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x1409013E4 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140902140 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140902584 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x1409CA1C0 (PipResetDevices.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x1406FCD40 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, a7);
}
