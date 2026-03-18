/*
 * XREFs of GetMonitorRect @ 0x1C0057744
 * Callers:
 *     GetMonitorDC @ 0x1C0033A78 (GetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C0057430 (xxxEnumDisplayMonitors.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C00A8988 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00BBE00 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     UserProcessInputIsolationPolicy @ 0x1C0132670 (UserProcessInputIsolationPolicy.c)
 *     GetPrimaryMonitorRect @ 0x1C0142334 (GetPrimaryMonitorRect.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0057840 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetMonitorRectForDpi @ 0x1C0057E78 (GetMonitorRectForDpi.c)
 */

_OWORD *__fastcall GetMonitorRect(_OWORD *a1, __int64 a2)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  v5 = *(_OWORD *)GetMonitorRectForDpi(v7, a2, CurrentThreadCompositedDpi);
  result = a1;
  *a1 = v5;
  return result;
}
