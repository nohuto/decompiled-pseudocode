/*
 * XREFs of ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C00CF9F8
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CF3B4 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01BF748 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01C0450 (ReduceArrangedRectangleByFrameMargin.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01E51C8 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     UpdateSizeTrackingInfo @ 0x1C01EAA28 (UpdateSizeTrackingInfo.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C0224534 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C0224620 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

char __fastcall GetWindowExtendedMargin(const struct tagWND *a1, struct FRAME_MARGIN *a2)
{
  __int64 v4; // rdx
  char v5; // di
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
  if ( !(unsigned int)IsTopLevelWindow((__int64)a1)
    || !(unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v19)
    || !LOWORD(v19[4]) && __PAIR32__(WORD1(v19[4]), 0) == HIWORD(v19[4]) && !WORD2(v19[4]) )
  {
    return 0;
  }
  v5 = 1;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4)
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8) + 456) + 8LL)
                  + 64LL) & 1) != 0
    && (v9 = *((_QWORD *)a1 + 5), v10 = *(_DWORD *)(v9 + 288), (v10 & 0xF) == 0)
    && (v10 & 0x40000000) != 0
    && (v11 = *(unsigned __int16 *)(v9 + 284), (_WORD)v11 != 96) )
  {
    ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v11);
    v13 = EngMulDiv(SLOWORD(v19[4]), 96, ScaledLogPixels);
    v14 = SWORD2(v19[4]);
    *(_WORD *)a2 = v13;
    v15 = EngMulDiv(v14, 96, ScaledLogPixels);
    v16 = SWORD1(v19[4]);
    *((_WORD *)a2 + 2) = v15;
    v17 = EngMulDiv(v16, 96, ScaledLogPixels);
    v18 = SHIWORD(v19[4]);
    *((_WORD *)a2 + 1) = v17;
    *((_WORD *)a2 + 3) = EngMulDiv(v18, 96, ScaledLogPixels);
  }
  else
  {
    *(_QWORD *)a2 = v19[4];
  }
  return v5;
}
