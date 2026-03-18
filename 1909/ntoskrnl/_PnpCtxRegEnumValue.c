/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1406FB120
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197DE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406FAE84 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14071800C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14087833C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x1408793C4 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1409366C0 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x140936B40 (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140939EE4 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14093A1E0 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093ECCC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1409404DC (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x1409F7A48 (PipResetDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x14071D488 (_RegRtlEnumValue.c)
 */

__int64 __fastcall PnpCtxRegEnumValue(
        __int64 a1,
        void *a2,
        ULONG a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        ULONG a8)
{
  return RegRtlEnumValue(a2, a3, a4, a6, a7, a8);
}
