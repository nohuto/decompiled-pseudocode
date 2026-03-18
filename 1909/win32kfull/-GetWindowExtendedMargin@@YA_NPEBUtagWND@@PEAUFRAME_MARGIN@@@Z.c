/*
 * XREFs of ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C0132510
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C01303AC (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01D32D8 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01D405C (ReduceArrangedRectangleByFrameMargin.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01FA808 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     UpdateSizeTrackingInfo @ 0x1C02002C8 (UpdateSizeTrackingInfo.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023C394 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023C488 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

char __fastcall GetWindowExtendedMargin(const struct tagWND *a1, struct FRAME_MARGIN *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  INT ScaledLogPixels; // ebx
  __int16 v16; // ax
  INT v17; // ecx
  __int16 v18; // ax
  INT v19; // ecx
  __int16 v20; // ax
  INT v21; // ecx
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v22, 0, 0x28uLL);
  *(_QWORD *)a2 = 0LL;
  if ( !(unsigned int)IsTopLevelWindow((__int64)a1)
    || !(unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v22)
    || !LOWORD(v22[4]) && __PAIR32__(WORD1(v22[4]), 0) == HIWORD(v22[4]) && !WORD2(v22[4]) )
  {
    return 0;
  }
  v6 = 1;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5)
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9) + 448)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11) + 448)
                                + 8LL)
                  + 64LL) & 1) != 0
    && (v12 = *((_QWORD *)a1 + 5), v13 = *(_DWORD *)(v12 + 288), (v13 & 0xF) == 0)
    && (v13 & 0x40000000) != 0
    && (v14 = *(unsigned __int16 *)(v12 + 284), (_WORD)v14 != 96) )
  {
    ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v14);
    v16 = EngMulDiv(SLOWORD(v22[4]), 96, ScaledLogPixels);
    v17 = SWORD2(v22[4]);
    *(_WORD *)a2 = v16;
    v18 = EngMulDiv(v17, 96, ScaledLogPixels);
    v19 = SWORD1(v22[4]);
    *((_WORD *)a2 + 2) = v18;
    v20 = EngMulDiv(v19, 96, ScaledLogPixels);
    v21 = SHIWORD(v22[4]);
    *((_WORD *)a2 + 1) = v20;
    *((_WORD *)a2 + 3) = EngMulDiv(v21, 96, ScaledLogPixels);
  }
  else
  {
    *(_QWORD *)a2 = v22[4];
  }
  return v6;
}
