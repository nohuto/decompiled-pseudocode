/*
 * XREFs of GetMaxTrackSizeForWindow @ 0x1C00347DC
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01D32D8 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 * Callees:
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0034798 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?ComputeMaxTrackSize@@YA?AUtagSIZE@@UtagRECT@@G@Z @ 0x1C0034840 (-ComputeMaxTrackSize@@YA-AUtagSIZE@@UtagRECT@@G@Z.c)
 *     GetScreenRectForDpiContext @ 0x1C00348D0 (GetScreenRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0037EF4 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

struct tagSIZE __fastcall GetMaxTrackSizeForWindow(__int64 a1)
{
  unsigned __int16 WindowCompositedDpi; // bx
  const struct tagWND *v3; // rcx
  unsigned int WindowCompositedDpiContext; // eax
  struct tagRECT v5; // xmm0
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpi = GetWindowCompositedDpi((const struct tagWND *)a1);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(v3);
  v5 = *(struct tagRECT *)GetScreenRectForDpiContext(&v7, WindowCompositedDpiContext);
  if ( !WindowCompositedDpi )
    WindowCompositedDpi = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 284LL);
  v7 = v5;
  return ComputeMaxTrackSize(&v7, WindowCompositedDpi);
}
