/*
 * XREFs of ScaleDPIRect @ 0x1C0094DA0
 * Callers:
 *     ?InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z @ 0x1C002AF98 (-InitializeMiniWinInfo@@YAXQEAUtagWND@@PEAUtagMINIWINDOWINFO@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C0091AB8 (GetMonitorRectForDpi.c)
 *     DwmChildRectChange @ 0x1C0092168 (DwmChildRectChange.c)
 *     GetMonitorRectForDpiContext @ 0x1C0095B68 (GetMonitorRectForDpiContext.c)
 *     GetMonitorWorkRectForDpiContext @ 0x1C00970E4 (GetMonitorWorkRectForDpiContext.c)
 *     GetMonitorWorkRectForDpi @ 0x1C0097130 (GetMonitorWorkRectForDpi.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C01154F4 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C0116B7C (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E8748 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C0259B5C (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 *     ?GetMonitorMenuRectForDpiContext@@YA?AUtagRECT@@PEBUtagMONITOR@@K@Z @ 0x1C0259C28 (-GetMonitorMenuRectForDpiContext@@YA-AUtagRECT@@PEBUtagMONITOR@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScaleDPIRect(
        _DWORD *a1,
        __m128i *a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        __int64 a5,
        __int64 a6)
{
  INT v7; // ebp
  __m128i v8; // xmm6
  INT v9; // esi
  int v10; // edi
  int v11; // ebx
  __int64 result; // rax

  v7 = a3;
  v8 = *a2;
  v9 = a4;
  v10 = _mm_cvtsi128_si32(*a2);
  v11 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 4));
  *a1 = a5 + EngMulDiv(v10 - a6, a3, a4);
  a1[1] = HIDWORD(a5) + EngMulDiv(v11 - HIDWORD(a6), v7, v9);
  a1[2] = *a1 + EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v8, 8)) - v10, v7, v9);
  result = (unsigned int)(a1[1] + EngMulDiv(_mm_cvtsi128_si32(_mm_srli_si128(v8, 12)) - v11, v7, v9));
  a1[3] = result;
  return result;
}
