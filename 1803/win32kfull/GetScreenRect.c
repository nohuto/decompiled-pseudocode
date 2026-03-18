/*
 * XREFs of GetScreenRect @ 0x1C022B0B4
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00E05F0 (_GetPointerDeviceRects.c)
 *     xxxSoundSentry @ 0x1C010FD10 (xxxSoundSentry.c)
 *     _GetMouseMovePointsEx @ 0x1C01A70BC (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01A9474 (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01AB2E0 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01AFA20 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01AFFA0 (VirtualizeMultiMonDigitizerSize.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01EE7E0 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C01FB23C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0066C3C (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetScreenRectForDpi @ 0x1C0073584 (GetScreenRectForDpi.c)
 */

_OWORD *__fastcall GetScreenRect(_OWORD *a1, __int64 a2)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm0
  _OWORD *result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi((__int64)a1, a2);
  v6 = *GetScreenRectForDpi(&v8, CurrentThreadCompositedDpi, v4, v5);
  result = a1;
  *a1 = v6;
  return result;
}
