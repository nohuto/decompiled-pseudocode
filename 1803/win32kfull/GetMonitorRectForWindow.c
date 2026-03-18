/*
 * XREFs of GetMonitorRectForWindow @ 0x1C0073764
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0035620 (xxxCheckFullScreen.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00591B0 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C00612AC (GetPrimaryMonitorRectForWindow.c)
 *     GetMonitorMaxArea @ 0x1C0070B88 (GetMonitorMaxArea.c)
 *     CalcWindowFullScreen @ 0x1C007290C (CalcWindowFullScreen.c)
 *     DetectNewMonitor @ 0x1C01AEDC4 (DetectNewMonitor.c)
 *     ?ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01C04C4 (-ComputeSourceRectAndMonitorWithPrecision@@YAXQEBU_MOVESIZEDATA@@PEAUtagPOINT@@PEAPEAUtagMONITOR.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C01E4154 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x1C020A72C (FindBestPos.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0035B48 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 */

_OWORD *__fastcall GetMonitorRectForWindow(_OWORD *a1, __int64 a2, const struct tagWND *a3)
{
  unsigned __int16 WindowCompositedDpi; // ax
  __int64 v5; // r9
  __int128 v6; // xmm0
  _OWORD *result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  WindowCompositedDpi = GetWindowCompositedDpi(a3);
  v6 = *(_OWORD *)GetMonitorRectForDpi(v8, v5, WindowCompositedDpi);
  result = a1;
  *a1 = v6;
  return result;
}
