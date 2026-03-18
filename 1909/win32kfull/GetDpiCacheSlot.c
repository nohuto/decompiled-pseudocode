/*
 * XREFs of GetDpiCacheSlot @ 0x1C004A144
 * Callers:
 *     _AdjustWindowRectExForDpi @ 0x1C0033330 (_AdjustWindowRectExForDpi.c)
 *     xxxCalcClientRect @ 0x1C003358C (xxxCalcClientRect.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0033F60 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0033FA4 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0049C90 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00EAD38 (PrepareHDCBITSBitmap.c)
 *     NtUserGetActiveProcessesDpis @ 0x1C01113A0 (NtUserGetActiveProcessesDpis.c)
 *     GetDPIServerInfoForDpi @ 0x1C012AF80 (GetDPIServerInfoForDpi.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01CCB20 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     NtUserForceWindowToDpiForTest @ 0x1C022B420 (NtUserForceWindowToDpiForTest.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025958C (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
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
