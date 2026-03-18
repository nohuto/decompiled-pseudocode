/*
 * XREFs of GetScreenRect @ 0x1C0057788
 * Callers:
 *     ?VirtualizedUnionRect@COutputConfig@@QEBA?AUtagRECT@@XZ @ 0x1C00559E8 (-VirtualizedUnionRect@COutputConfig@@QEBA-AUtagRECT@@XZ.c)
 *     xxxEnumDisplayMonitors @ 0x1C0057430 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C00577BC (GetScreenRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0057840 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 */

_OWORD *__fastcall GetScreenRect(_OWORD *a1)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int128 v3; // xmm0
  _OWORD *result; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  v3 = *(_OWORD *)GetScreenRectForDpi(v5, CurrentThreadCompositedDpi);
  result = a1;
  *a1 = v3;
  return result;
}
