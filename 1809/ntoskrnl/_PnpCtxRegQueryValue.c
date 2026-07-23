/*
 * XREFs of _PnpCtxRegQueryValue @ 0x14073D4F4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181EE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1403299B0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PipMigratePnpState @ 0x1409C9678 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x1409C975C (PpDevCfgInit.c)
 *     PipResetDevices @ 0x1409CB1C0 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x1409F62AC (PipHardwareConfigExists.c)
 *     PipProcessPendingObjects @ 0x1409F7010 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
