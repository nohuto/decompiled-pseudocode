/*
 * XREFs of _PnpCtxRegQueryValue @ 0x1406F4B54
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197DE0 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14034AAB0 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F4560 (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmAddDeviceToContainerWorker @ 0x14070CC1C (_CmAddDeviceToContainerWorker.c)
 *     PiCMValidateDeviceInstance @ 0x140721BDC (PiCMValidateDeviceInstance.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409412DC (DrvDbSetDriverPackageMappedProperty.c)
 *     PpDevCfgInit @ 0x1409F780C (PpDevCfgInit.c)
 *     PipResetDevices @ 0x1409F7A48 (PipResetDevices.c)
 *     PipMigratePnpState @ 0x140A212F4 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x140A3A638 (PipHardwareConfigExists.c)
 *     PipProcessPendingObjects @ 0x140A3B3E0 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x1405C37B4 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
