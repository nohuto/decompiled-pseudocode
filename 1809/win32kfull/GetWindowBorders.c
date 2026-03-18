/*
 * XREFs of GetWindowBorders @ 0x1C00A8414
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C0078D80 (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C00A7B84 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C0223BD4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     GetWindowBordersForDpi @ 0x1C00AC334 (GetWindowBordersForDpi.c)
 */

__int64 __fastcall GetWindowBorders(int a1, int a2)
{
  int DpiForSystem; // eax
  int v5; // r8d
  int v6; // r9d

  DpiForSystem = GetDpiForSystem();
  return GetWindowBordersForDpi(a1, a2, v5, v6, DpiForSystem);
}
