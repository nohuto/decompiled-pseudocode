/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1406F55E4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181DA0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F5320 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406FA548 (_PnpGetGenericStorePropertyKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D7E8 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083E5BC (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1408F8FC8 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1408F9450 (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1408FC7B0 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmAppendInstallerClassFiltersLevel @ 0x1408FC9C8 (_CmAppendInstallerClassFiltersLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900EB4 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140902564 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x1409CA1C0 (PipResetDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x1406FC67C (_RegRtlEnumValue.c)
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
