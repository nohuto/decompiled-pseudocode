/*
 * XREFs of DrvDisplayConfigGetDeviceInfo @ 0x1C004E650
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00504D0 (DrvSetDisplayConfig.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00A0934 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01470F8 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00BE9A0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 */

__int64 __fastcall DrvDisplayConfigGetDeviceInfo(struct DISPLAYCONFIG_DEVICE_INFO_HEADER *a1)
{
  return DrvDisplayConfigGetDeviceInfoInternal(a1, 0);
}
