/*
 * XREFs of ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C0116FF0
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C0116B7C (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01D3468 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01D41EC (ReduceArrangedRectangleByFrameMargin.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01FAAB8 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     UpdateSizeTrackingInfo @ 0x1C0200578 (UpdateSizeTrackingInfo.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023C9B4 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023CAA8 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

char __fastcall GetWindowExtendedMargin(const struct tagWND *a1, struct FRAME_MARGIN *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // di
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  INT ScaledLogPixels; // ebx
  __int16 v20; // ax
  INT v21; // ecx
  __int16 v22; // ax
  INT v23; // ecx
  __int16 v24; // ax
  INT v25; // ecx
  _QWORD v26[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v26, 0, 0x28uLL);
  *(_QWORD *)a2 = 0LL;
  if ( !(unsigned int)IsTopLevelWindow((__int64)a1)
    || !(unsigned int)GetWindowCompositionInfo((__int64)a1, (__int64)v26, v4)
    || !LOWORD(v26[4]) && __PAIR32__(WORD1(v26[4]), 0) == HIWORD(v26[4]) && !WORD2(v26[4]) )
  {
    return 0;
  }
  v8 = 1;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7)
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) + 448)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 448)
                                + 8LL)
                  + 64LL) & 1) != 0
    && (v16 = *((_QWORD *)a1 + 5), v17 = *(_DWORD *)(v16 + 288), (v17 & 0xF) == 0)
    && (v17 & 0x40000000) != 0
    && (v18 = *(unsigned __int16 *)(v16 + 284), (_WORD)v18 != 96) )
  {
    ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v18);
    v20 = EngMulDiv(SLOWORD(v26[4]), 96, ScaledLogPixels);
    v21 = SWORD2(v26[4]);
    *(_WORD *)a2 = v20;
    v22 = EngMulDiv(v21, 96, ScaledLogPixels);
    v23 = SWORD1(v26[4]);
    *((_WORD *)a2 + 2) = v22;
    v24 = EngMulDiv(v23, 96, ScaledLogPixels);
    v25 = SHIWORD(v26[4]);
    *((_WORD *)a2 + 1) = v24;
    *((_WORD *)a2 + 3) = EngMulDiv(v25, 96, ScaledLogPixels);
  }
  else
  {
    *(_QWORD *)a2 = v26[4];
  }
  return v8;
}
