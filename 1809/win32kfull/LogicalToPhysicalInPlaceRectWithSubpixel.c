/*
 * XREFs of LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C0041428
 * Callers:
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C003CB30 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F6AC (BuildWindowListWithDpiBoundaryInfo.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C01052F0 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z @ 0x1C01D0D34 (-GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z.c)
 *     NtUserLogicalToPhysicalDpiPointForWindow @ 0x1C02193F0 (NtUserLogicalToPhysicalDpiPointForWindow.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004134C (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C01D0F50 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

__int64 __fastcall LogicalToPhysicalInPlaceRectWithSubpixel(struct tagWND *a1, int *a2, float *a3)
{
  unsigned int v5; // ebx
  struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  float *v7; // rax
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
    v7 = (float *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 25);
    if ( v7 )
    {
      ScaleValueWithSubpixel(a2, a3, *v7);
      ScaleValueWithSubpixel(
        a2 + 1,
        (float *)((unsigned __int64)(a3 + 1) & -(__int64)(a3 != 0LL)),
        *(float *)(*(_QWORD *)(v9 + 200) + 20LL));
      ScaleValueWithSubpixel(a2 + 2, 0LL, **(float **)(v10 + 200));
      ScaleValueWithSubpixel(a2 + 3, v12, *(float *)(*(_QWORD *)(v11 + 200) + 20LL));
      v14 = *(_QWORD *)(v13 + 200);
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
