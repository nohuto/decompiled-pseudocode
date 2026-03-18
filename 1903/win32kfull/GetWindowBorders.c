/*
 * XREFs of GetWindowBorders @ 0x1C00905B4
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C000C8BC (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C0028040 (xxxDrawWindowFrame.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023C0B4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     xxxHelpLoop @ 0x1C0248398 (xxxHelpLoop.c)
 * Callees:
 *     GetWindowBordersForDpi @ 0x1C0092084 (GetWindowBordersForDpi.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 */

__int64 __fastcall GetWindowBorders(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v3; // edi
  int DpiForSystem; // eax
  int v5; // r8d
  int v6; // r9d

  v2 = a2;
  v3 = a1;
  DpiForSystem = GetDpiForSystem(a1, a2);
  return GetWindowBordersForDpi(v3, v2, v5, v6, DpiForSystem);
}
