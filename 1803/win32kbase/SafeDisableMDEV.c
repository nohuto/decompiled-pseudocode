/*
 * XREFs of SafeDisableMDEV @ 0x1C00A6C60
 * Callers:
 *     UpdateGraphicsDeviceList @ 0x1C0042224 (UpdateGraphicsDeviceList.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C004C440 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     VideoPortCalloutThread @ 0x1C00A5C78 (VideoPortCalloutThread.c)
 *     xxxUserSetDisplayConfig @ 0x1C00A6D60 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvDisableMDEV @ 0x1C0069690 (DrvDisableMDEV.c)
 */

__int64 __fastcall SafeDisableMDEV(unsigned int a1)
{
  if ( gbMDEVDisabled )
    return 1LL;
  if ( (unsigned int)DrvDisableMDEV(*(HDEV **)(gpDispInfo + 16), 1LL, a1) )
  {
    _InterlockedExchange(&gbMDEVDisabled, 1);
    return 1LL;
  }
  return 0LL;
}
