/*
 * XREFs of LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C01AF81C
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C002B770 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z @ 0x1C01ADC94 (-GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C01AE634 (BuildWindowListWithDpiBoundaryInfo.c)
 *     NtUserLogicalToPhysicalDpiPointForWindow @ 0x1C01F1E80 (NtUserLogicalToPhysicalDpiPointForWindow.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F95BC (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C01ADEB0 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

__int64 __fastcall LogicalToPhysicalInPlaceRectWithSubpixel(struct tagWND *a1, int *a2, float *a3)
{
  unsigned int v5; // ebx
  struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  float *v7; // rax
  __int64 v8; // r11
  __int64 v9; // r11
  __int64 v10; // r11
  float *v11; // rdx
  __int64 v12; // r11
  __int64 v13; // rcx
  int v14; // edx
  int v15; // eax

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
        *(float *)(*(_QWORD *)(v8 + 200) + 20LL));
      ScaleValueWithSubpixel(a2 + 2, 0LL, **(float **)(v9 + 200));
      ScaleValueWithSubpixel(a2 + 3, v11, *(float *)(*(_QWORD *)(v10 + 200) + 20LL));
      v13 = *(_QWORD *)(v12 + 200);
      v5 = 1;
      v14 = (int)*(float *)(v13 + 52);
      v15 = (int)*(float *)(v13 + 48);
      a2[3] += v14;
      *a2 += v15;
      a2[2] += v15;
      a2[1] += v14;
    }
  }
  return v5;
}
