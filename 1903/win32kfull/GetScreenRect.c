/*
 * XREFs of GetScreenRect @ 0x1C012D034
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C011C2DC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _GetPointerDeviceRects @ 0x1C012CF3C (_GetPointerDeviceRects.c)
 *     _GetMouseMovePointsEx @ 0x1C01DCC54 (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01DF914 (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E2500 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E73C0 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E7A38 (VirtualizeMultiMonDigitizerSize.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C022CB40 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023BFD8 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetScreenRectForDpi @ 0x1C0093C20 (GetScreenRectForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

_OWORD *__fastcall GetScreenRect(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned __int16 v6; // bx
  __int64 v7; // r8
  __int64 v8; // r9
  __int128 v9; // xmm0
  _OWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  v6 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2, a3, a4) >> 8) & 0x1FF;
  if ( v6
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v7, v8) + 448)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13)
                                             + 448)
                                 + 8LL)
                   + 64LL) & 1) == 0) )
  {
    v6 = 0;
  }
  v9 = *GetScreenRectForDpi(&v14, v6);
  result = a1;
  *a1 = v9;
  return result;
}
