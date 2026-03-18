/*
 * XREFs of GetMonitorRectForWindow @ 0x1C0095B2C
 * Callers:
 *     GetPrimaryMonitorRectForWindow @ 0x1C001AEDC (GetPrimaryMonitorRectForWindow.c)
 *     CalcWindowFullScreen @ 0x1C002C8AC (CalcWindowFullScreen.c)
 *     GetMonitorMaxArea @ 0x1C0091014 (GetMonitorMaxArea.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0093308 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxCheckFullScreen @ 0x1C0096CF8 (xxxCheckFullScreen.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C0116B7C (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     DetectNewMonitor @ 0x1C01E6900 (DetectNewMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01F9F48 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221AC4 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x1C024C674 (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetMonitorRectForDpiContext @ 0x1C0095B68 (GetMonitorRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00971C4 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

_OWORD *__fastcall GetMonitorRectForWindow(_OWORD *a1, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v5; // r9
  __int128 v6; // xmm0
  _OWORD *result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  v6 = *(_OWORD *)GetMonitorRectForDpiContext(v8, v5, WindowCompositedDpiContext);
  result = a1;
  *a1 = v6;
  return result;
}
