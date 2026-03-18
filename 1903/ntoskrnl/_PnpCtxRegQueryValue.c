/*
 * XREFs of _PnpCtxRegQueryValue @ 0x1406F30B4
 * Callers:
 *     PipUpdateDeviceProducts @ 0x140197780 (PipUpdateDeviceProducts.c)
 *     DrvDbGetConfigurationSubKeyCallback @ 0x14034B050 (DrvDbGetConfigurationSubKeyCallback.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F2AC0 (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmAddDeviceToContainerWorker @ 0x14070AE3C (_CmAddDeviceToContainerWorker.c)
 *     PiCMValidateDeviceInstance @ 0x14071FD3C (PiCMValidateDeviceInstance.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14094186C (DrvDbSetDriverPackageMappedProperty.c)
 *     PpDevCfgInit @ 0x1409F78FC (PpDevCfgInit.c)
 *     PipResetDevices @ 0x1409F7B38 (PipResetDevices.c)
 *     PipMigratePnpState @ 0x140A21114 (PipMigratePnpState.c)
 *     PipHardwareConfigExists @ 0x140A3A868 (PipHardwareConfigExists.c)
 *     PipProcessPendingObjects @ 0x140A3B610 (PipProcessPendingObjects.c)
 * Callees:
 *     _RegRtlQueryValue @ 0x1405C32E4 (_RegRtlQueryValue.c)
 */

__int64 __fastcall PnpCtxRegQueryValue(__int64 a1, void *a2, const WCHAR *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  return RegRtlQueryValue(a2, a3, a4, a5, a6);
}
