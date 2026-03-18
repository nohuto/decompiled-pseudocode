/*
 * XREFs of GetMonitorRect @ 0x1C0039468
 * Callers:
 *     GetMonitorDC @ 0x1C002A590 (GetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C0039060 (xxxEnumDisplayMonitors.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C003A670 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     _GetClientRect @ 0x1C0050F10 (_GetClientRect.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C009499C (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00399C0 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0039B78 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
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
