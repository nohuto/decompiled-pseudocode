/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1406F6884
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181EE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F65C0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406FB7E8 (_PnpGetGenericStorePropertyKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083F81C (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1408FA288 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1408FA710 (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1408FDA70 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmAppendInstallerClassFiltersLevel @ 0x1408FDC88 (_CmAppendInstallerClassFiltersLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x140902174 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140903824 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x1409CB1C0 (PipResetDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x1406FD91C (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  return RegRtlEnumValue(a2, a3, a4, a5, a6, a7, a8);
}
