/*
 * XREFs of _PnpCtxRegSetValue @ 0x14070AA00
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197DE0 (PipUpdateDeviceProducts.c)
 *     _CmAddDeviceToContainerWorker @ 0x14070CC1C (_CmAddDeviceToContainerWorker.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409412DC (DrvDbSetDriverPackageMappedProperty.c)
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140A212F4 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlSetValue @ 0x14071A884 (_RegRtlSetValue.c)
 */

__int64 __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, ULONG a6)
{
  return RegRtlSetValue(a2, a6);
}
