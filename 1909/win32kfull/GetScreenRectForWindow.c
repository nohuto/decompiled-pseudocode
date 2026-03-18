/*
 * XREFs of GetScreenRectForWindow @ 0x1C02596B0
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0037A28 (xxxCheckFullScreen.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C012E55C (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C023A49C (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     GetScreenRectForDpiContext @ 0x1C00348D0 (GetScreenRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C0037EF4 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
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
