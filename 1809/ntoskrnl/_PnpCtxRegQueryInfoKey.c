/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1406F68D4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181EE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F65C0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083F81C (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1408FA710 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x1408FAB94 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x1408FD834 (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendInstallerClassFiltersLevel @ 0x1408FDC88 (_CmAppendInstallerClassFiltersLevel.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FF528 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x140902174 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x140902684 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409033E0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140903824 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x1409CB1C0 (PipResetDevices.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x1406FDFC0 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  return RegRtlQueryInfoKey(a2, a3, a4, a5, a6, a7);
}
