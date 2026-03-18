/*
 * XREFs of GetScreenRect @ 0x1C01082C4
 * Callers:
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C001B138 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     _GetPointerDeviceRects @ 0x1C01081CC (_GetPointerDeviceRects.c)
 *     _GetMouseMovePointsEx @ 0x1C01DCAD4 (_GetMouseMovePointsEx.c)
 *     xxxInjectTouchInput @ 0x1C01DF794 (xxxInjectTouchInput.c)
 *     ?MiPConvertPoint@@YA?AUtagPOINT@@PEBU1@@Z @ 0x1C01E2380 (-MiPConvertPoint@@YA-AUtagPOINT@@PEBU1@@Z.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01E7240 (RemapHimetricPointsForMultiMonDigitizers.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1C01E78B8 (VirtualizeMultiMonDigitizerSize.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C022C520 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023B9B8 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C0034948 (GetScreenRectForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

_OWORD *__fastcall GetScreenRect(_OWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned __int16 v5; // bx
  __int64 v6; // r8
  __int128 v7; // xmm0
  _OWORD *result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  v5 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext((__int64)a1, a2, a3) >> 8) & 0x1FF;
  if ( v5
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v6) + 448)
     || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10) + 448)
                                 + 8LL)
                   + 64LL) & 1) == 0) )
  {
    v5 = 0;
  }
  v7 = *GetScreenRectForDpi(&v11, v5);
  result = a1;
  *a1 = v7;
  return result;
}
