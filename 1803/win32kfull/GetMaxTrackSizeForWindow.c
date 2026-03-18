/*
 * XREFs of GetMaxTrackSizeForWindow @ 0x1C0073494
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C019E220 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 * Callees:
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0035B48 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C00734F4 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     GetScreenRectForDpi @ 0x1C0073584 (GetScreenRectForDpi.c)
 */

struct tagSIZE __fastcall GetMaxTrackSizeForWindow(__int64 a1)
{
  unsigned __int16 WindowCompositedDpi; // bx
  struct tagRECT v3; // xmm0
  struct tagRECT v5; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpi = GetWindowCompositedDpi((const struct tagWND *)a1);
  v3 = *(struct tagRECT *)GetScreenRectForDpi(&v5, WindowCompositedDpi);
  if ( !WindowCompositedDpi )
    WindowCompositedDpi = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
  v5 = v3;
  return ComputeMaxTrackSize(&v5, WindowCompositedDpi);
}
