/*
 * XREFs of GetDpiCacheSlot @ 0x1C0039D4C
 * Callers:
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000D504 (PrepareHDCBITSBitmap.c)
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0022430 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0039270 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDPIServerInfoForDpi @ 0x1C0053A58 (GetDPIServerInfoForDpi.c)
 *     _AdjustWindowRectExForDpi @ 0x1C00731D4 (_AdjustWindowRectExForDpi.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0073370 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0073410 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     FindNCHit @ 0x1C01013E8 (FindNCHit.c)
 *     NtUserGetActiveProcessesDpis @ 0x1C0108D70 (NtUserGetActiveProcessesDpis.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C0197CD0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C022AF90 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiCacheSlot(int a1)
{
  unsigned int v1; // r9d
  int v3; // edx

  v1 = -1;
  if ( a1 == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    return 0;
  }
  else if ( a1 >= 96 && a1 == 24 * (a1 / 24) )
  {
    v3 = (a1 - 72) / 24;
    if ( v3 >= 18 )
      return (unsigned int)-1;
    return (unsigned int)v3;
  }
  return v1;
}
