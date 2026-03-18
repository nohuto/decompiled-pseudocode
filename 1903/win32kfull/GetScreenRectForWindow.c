/*
 * XREFs of GetScreenRectForWindow @ 0x1C0259DF0
 * Callers:
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C008F870 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C0096CF8 (xxxCheckFullScreen.c)
 *     xxxInitializeMoveSizeData @ 0x1C0201288 (xxxInitializeMoveSizeData.c)
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C023AABC (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     GetScreenRectForDpiContext @ 0x1C0093BA8 (GetScreenRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00971C4 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

_OWORD *__fastcall GetScreenRectForWindow(_OWORD *a1, const struct tagWND *a2)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int128 v4; // xmm0
  _OWORD *result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
  v4 = *GetScreenRectForDpiContext(&v6, WindowCompositedDpiContext);
  result = a1;
  *a1 = v4;
  return result;
}
