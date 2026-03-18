/*
 * XREFs of _PnpCtxRegQueryInfoKey @ 0x1406FB170
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197DE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406FAE84 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiCMEnumerateSubKeys @ 0x140871E48 (PiCMEnumerateSubKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14087833C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408793C4 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140936B40 (_CmGetDevicesInBaseContainerList.c)
 *     _CmRemoveDeviceFromContainerWorker @ 0x140936FC4 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmRemovePanelDeviceWorker @ 0x140939C9C (_CmRemovePanelDeviceWorker.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14093A1E0 (_CmAppendDeclarativeFilterLevel.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14093B1B8 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14093C01C (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093ECCC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetDeviceIdMappedPropertyKeys @ 0x14093F198 (DrvDbGetDeviceIdMappedPropertyKeys.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140940000 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1409404DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x1409F7A48 (PipResetDevices.c)
 * Callees:
 *     _RegRtlQueryInfoKey @ 0x14071CA28 (_RegRtlQueryInfoKey.c)
 */

__int64 __fastcall PnpCtxRegQueryInfoKey(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  return RegRtlQueryInfoKey(a2, a6, a7);
}
