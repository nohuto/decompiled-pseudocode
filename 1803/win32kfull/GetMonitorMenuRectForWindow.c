/*
 * XREFs of GetMonitorMenuRectForWindow @ 0x1C022B078
 * Callers:
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C01E4154 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x1C020A72C (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0035B48 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C022AEC4 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 */

_OWORD *__fastcall GetMonitorMenuRectForWindow(_OWORD *a1, __int64 a2, const struct tagWND *a3)
{
  unsigned __int16 WindowCompositedDpi; // ax
  const struct tagMONITOR *v5; // r9
  __int128 v6; // xmm0
  _OWORD *result; // rax
  struct tagRECT v8; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpi = GetWindowCompositedDpi(a3);
  v6 = (__int128)*GetMonitorMenuRectForDpi(&v8, v5, WindowCompositedDpi);
  result = a1;
  *a1 = v6;
  return result;
}
