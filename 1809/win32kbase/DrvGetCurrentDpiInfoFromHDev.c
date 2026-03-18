/*
 * XREFs of DrvGetCurrentDpiInfoFromHDev @ 0x1C0013574
 * Callers:
 *     DrvGetCurrentDpiInfo @ 0x1C0013464 (DrvGetCurrentDpiInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C0013A20 (NtUserGetDpiForMonitor.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00420A8 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0042814 (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     CitGetMonitorInfo @ 0x1C0085D80 (CitGetMonitorInfo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EC2B8 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     NtGdiGetCurrentDpiInfoFromHDev @ 0x1C00F8B50 (NtGdiGetCurrentDpiInfoFromHDev.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0101D10 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
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
