/*
 * XREFs of GetDpiCacheSlot @ 0x1C00A9364
 * Callers:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     _AdjustWindowRectExForDpi @ 0x1C0092608 (_AdjustWindowRectExForDpi.c)
 *     xxxCalcClientRect @ 0x1C0092864 (xxxCalcClientRect.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0093238 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C009327C (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00A8EB0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDPIServerInfoForDpi @ 0x1C00E43E0 (GetDPIServerInfoForDpi.c)
 *     FindNCHit @ 0x1C012D5D8 (FindNCHit.c)
 *     NtUserGetActiveProcessesDpis @ 0x1C0137320 (NtUserGetActiveProcessesDpis.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01CCCB0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     NtUserForceWindowToDpiForTest @ 0x1C022BA40 (NtUserForceWindowToDpiForTest.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0259CCC (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
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
