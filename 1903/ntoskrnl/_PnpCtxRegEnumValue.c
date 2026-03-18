/*
 * XREFs of _PnpCtxRegEnumValue @ 0x1406F9340
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197780 (PipUpdateDeviceProducts.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F90A4 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140715D4C (_PnpGetGenericStorePropertyKeys.c)
 *     PiDrvDbOverlayCopyKeys @ 0x140878C3C (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x140879CC4 (PiDrvDbResolveFilePathKeyValues.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140936C50 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1409370D0 (_CmGetDevicesInBaseContainerList.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14093A474 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmAppendDeclarativeFilterLevel @ 0x14093A770 (_CmAppendDeclarativeFilterLevel.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093F25C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140940A6C (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PipResetDevices @ 0x1409F7B38 (PipResetDevices.c)
 * Callees:
 *     _RegRtlEnumValue @ 0x14071B698 (_RegRtlEnumValue.c)
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
