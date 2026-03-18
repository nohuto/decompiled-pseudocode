/*
 * XREFs of GetWindowBorders @ 0x1C012DDEC
 * Callers:
 *     xxxDrawWindowFrame @ 0x1C002E4B0 (xxxDrawWindowFrame.c)
 *     xxxDWP_DoNCActivate @ 0x1C012EEEC (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023BA94 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1C0247C58 (xxxHelpLoop.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     GetWindowBordersForDpi @ 0x1C012DCF8 (GetWindowBordersForDpi.c)
 */

__int64 __fastcall GetWindowBorders(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // edi
  unsigned int DpiForSystem; // eax
  __int64 v6; // r8
  __int64 v7; // r9

  v3 = a2;
  v4 = a1;
  DpiForSystem = GetDpiForSystem(a1, a2, a3);
  return GetWindowBordersForDpi(v4, v3, v6, v7, DpiForSystem);
}
