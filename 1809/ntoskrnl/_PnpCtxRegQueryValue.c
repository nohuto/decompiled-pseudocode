/*
 * XREFs of _PnpCtxRegQueryValue @ 0x14073C304
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140181DA0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x1403297C0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     PiCMCreateDevice @ 0x1408367B4 (PiCMCreateDevice.c)
 *     PipMigratePnpState @ 0x1409C8678 (PipMigratePnpState.c)
 *     PpDevCfgInit @ 0x1409C875C (PpDevCfgInit.c)
 *     PipResetDevices @ 0x1409CA1C0 (PipResetDevices.c)
 *     PipHardwareConfigExists @ 0x1409F52AC (PipHardwareConfigExists.c)
 *     PipProcessPendingObjects @ 0x1409F6010 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x1405C79A8 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
