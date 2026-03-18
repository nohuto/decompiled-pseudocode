/*
 * XREFs of GetScreenRectForWindow @ 0x1C022B0E8
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0035620 (xxxCheckFullScreen.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C00642F8 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 *     xxxInitializeMoveSizeData @ 0x1C01C7264 (xxxInitializeMoveSizeData.c)
 *     ?IsVSlick@@YAHPEAUtagWND@@@Z @ 0x1C01F9CEC (-IsVSlick@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0035B48 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     GetScreenRectForDpi @ 0x1C0073584 (GetScreenRectForDpi.c)
 */

_OWORD *__fastcall GetScreenRectForWindow(_OWORD *a1, const struct tagWND *a2)
{
  unsigned __int16 WindowCompositedDpi; // ax
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm0
  _OWORD *result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpi = GetWindowCompositedDpi(a2);
  v6 = *GetScreenRectForDpi(&v8, WindowCompositedDpi, v4, v5);
  result = a1;
  *a1 = v6;
  return result;
}
