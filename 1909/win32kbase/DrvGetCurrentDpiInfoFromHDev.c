/*
 * XREFs of DrvGetCurrentDpiInfoFromHDev @ 0x1C004FC2C
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C002D950 (NtUserGetDpiForMonitor.c)
 *     DrvGetCurrentDpiInfo @ 0x1C004FB04 (DrvGetCurrentDpiInfo.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C004FFC8 (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C00500A4 (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C0050100 (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     CitGetMonitorInfo @ 0x1C0084CF0 (CitGetMonitorInfo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01101FC (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     NtGdiGetCurrentDpiInfoFromHDev @ 0x1C0122D10 (NtGdiGetCurrentDpiInfoFromHDev.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0127E64 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetCurrentDpiInfoFromHDev(__int64 a1, __int64 a2)
{
  if ( !a1 )
    return 3221225480LL;
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 2456);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 2472);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 2488);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 2504);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 2520);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 2536);
  return *(_DWORD *)(a2 + 8) == 0 ? 0xC0000001 : 0;
}
