/*
 * XREFs of LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00CC148
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0066520 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C0068D34 (BuildWindowListWithDpiBoundaryInfo.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006F578 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00CC090 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z @ 0x1C01E5724 (-GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z.c)
 *     NtUserLogicalToPhysicalDpiPointForWindow @ 0x1C0230C30 (NtUserLogicalToPhysicalDpiPointForWindow.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CC1C8 (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C01E5954 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

__int64 __fastcall LogicalToPhysicalInPlaceRectWithSubpixel(struct tagWND *a1, int *a2, float *a3)
{
  unsigned int v5; // ebx
  struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  float *v8; // rax
  __int64 v9; // r11
  __int64 v10; // r11
  __int64 v11; // r11
  float *v12; // rdx
  __int64 v13; // r11
  __int64 v14; // rcx
  int v15; // edx
  int v16; // eax

  v5 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v8 = (float *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
    if ( v8 )
    {
      ScaleValueWithSubpixel(a2, a3, *v8);
      ScaleValueWithSubpixel(
        a2 + 1,
        (float *)((unsigned __int64)(a3 + 1) & -(__int64)(a3 != 0LL)),
        *(float *)(*(_QWORD *)(v9 + 216) + 20LL));
      ScaleValueWithSubpixel(a2 + 2, 0LL, **(float **)(v10 + 216));
      ScaleValueWithSubpixel(a2 + 3, v12, *(float *)(*(_QWORD *)(v11 + 216) + 20LL));
      v14 = *(_QWORD *)(v13 + 216);
      v5 = 1;
      v15 = (int)*(float *)(v14 + 52);
      v16 = (int)*(float *)(v14 + 48);
      a2[3] += v15;
      *a2 += v16;
      a2[2] += v16;
      a2[1] += v15;
    }
  }
  return v5;
}
