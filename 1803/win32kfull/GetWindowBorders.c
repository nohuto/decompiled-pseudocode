/*
 * XREFs of GetWindowBorders @ 0x1C00C3220
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C0075134 (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C00C2AA8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C01FB318 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     GetWindowBordersForDpi @ 0x1C00C3A30 (GetWindowBordersForDpi.c)
 */

__int64 __fastcall GetWindowBorders(int a1, int a2)
{
  int DpiForSystem; // eax
  int v5; // r8d
  int v6; // r9d

  DpiForSystem = GetDpiForSystem();
  return GetWindowBordersForDpi(a1, a2, v5, v6, DpiForSystem);
}
