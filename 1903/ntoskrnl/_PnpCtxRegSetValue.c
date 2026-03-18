/*
 * XREFs of _PnpCtxRegSetValue @ 0x140708C20
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197780 (PipUpdateDeviceProducts.c)
 *     _CmAddDeviceToContainerWorker @ 0x14070AE3C (_CmAddDeviceToContainerWorker.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14094186C (DrvDbSetDriverPackageMappedProperty.c)
 *     IopInitializeBootDrivers @ 0x140A10470 (IopInitializeBootDrivers.c)
 *     PipMigratePnpState @ 0x140A21114 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlSetValue @ 0x140718A94 (_RegRtlSetValue.c)
 */

__int64 __fastcall PnpCtxRegSetValue(__int64 a1, void *a2, __int64 a3, __int64 a4, __int64 a5, ULONG a6)
{
  return RegRtlSetValue(a2, a6);
}
