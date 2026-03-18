/*
 * XREFs of DrvGetCurrentDpiInfoFromHDev @ 0x1C0059594
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0058D90 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     CitGetMonitorInfo @ 0x1C00593A0 (CitGetMonitorInfo.c)
 *     DrvGetCurrentDpiInfo @ 0x1C00594D4 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C0059620 (NtUserGetDpiForMonitor.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B2054 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00CF188 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetCurrentDpiInfoFromHDev(_OWORD *a1, __int64 a2)
{
  if ( !a1 )
    return 3221225480LL;
  *(_OWORD *)a2 = a1[153];
  *(_OWORD *)(a2 + 16) = a1[154];
  *(_OWORD *)(a2 + 32) = a1[155];
  *(_OWORD *)(a2 + 48) = a1[156];
  *(_OWORD *)(a2 + 64) = a1[157];
  *(_OWORD *)(a2 + 80) = a1[158];
  return *(_DWORD *)(a2 + 8) == 0 ? 0xC0000001 : 0;
}
