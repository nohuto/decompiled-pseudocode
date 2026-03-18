/*
 * XREFs of GetWindowExtendedMargin @ 0x1C0059034
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00591B0 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C019E220 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C019EEE4 (ReduceArrangedRectangleByFrameMargin.c)
 *     ExtendRectByWindowMargin @ 0x1C01BF574 (ExtendRectByWindowMargin.c)
 *     ReduceRectByWindowMargin @ 0x1C01BF6A0 (ReduceRectByWindowMargin.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01C0F78 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     UpdateSizeTrackingInfo @ 0x1C01C5C90 (UpdateSizeTrackingInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall GetWindowExtendedMargin(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  INT ScaledLogPixels; // ebx
  __int16 v13; // ax
  INT v14; // ecx
  __int16 v15; // ax
  INT v16; // ecx
  __int16 v17; // ax
  INT v18; // ecx
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v19, 0, 0x28uLL);
  *(_QWORD *)a2 = 0LL;
  if ( (unsigned int)IsTopLevelWindow(a1)
    && (unsigned int)GetWindowCompositionInfo(a1, (__int64)v19)
    && (LOWORD(v19[4]) || __PAIR32__(WORD1(v19[4]), 0) != HIWORD(v19[4]) || WORD2(v19[4])) )
  {
    v5 = 1;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7) + 448)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8) + 448) + 8LL)
                    + 52LL) & 1) != 0
      && (v9 = *(_QWORD *)(a1 + 40), v10 = *(_DWORD *)(v9 + 288), (v10 & 0xF) == 0)
      && (v10 & 0x40000000) != 0
      && (v11 = *(unsigned __int16 *)(v9 + 284), (_WORD)v11 != 96) )
    {
      ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v11);
      v13 = EngMulDiv(SLOWORD(v19[4]), 96, ScaledLogPixels);
      v14 = SWORD2(v19[4]);
      *(_WORD *)a2 = v13;
      v15 = EngMulDiv(v14, 96, ScaledLogPixels);
      v16 = SWORD1(v19[4]);
      *(_WORD *)(a2 + 4) = v15;
      v17 = EngMulDiv(v16, 96, ScaledLogPixels);
      v18 = SHIWORD(v19[4]);
      *(_WORD *)(a2 + 2) = v17;
      *(_WORD *)(a2 + 6) = EngMulDiv(v18, 96, ScaledLogPixels);
    }
    else
    {
      *(_QWORD *)a2 = v19[4];
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
