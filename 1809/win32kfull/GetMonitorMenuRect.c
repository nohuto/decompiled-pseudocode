/*
 * XREFs of GetMonitorMenuRect @ 0x1C0240FB4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     FindBestPos @ 0x1C02339F8 (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C00B70E0 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C0240E40 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 */

_OWORD *__fastcall GetMonitorMenuRect(_OWORD *a1, const struct tagMONITOR *a2)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi((__int64)a1, (__int64)a2);
  v5 = (__int128)*GetMonitorMenuRectForDpi(&v7, a2, CurrentThreadCompositedDpi);
  result = a1;
  *a1 = v5;
  return result;
}
