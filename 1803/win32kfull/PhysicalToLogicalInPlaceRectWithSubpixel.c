/*
 * XREFs of PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C01AF920
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C002B770 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z @ 0x1C01ADC94 (-GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C01AE634 (BuildWindowListWithDpiBoundaryInfo.c)
 *     NtUserPhysicalToLogicalDpiPointForWindow @ 0x1C01F36F0 (NtUserPhysicalToLogicalDpiPointForWindow.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F95BC (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C01ADEB0 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRectWithSubpixel(struct tagWND *a1, int *a2, float *a3)
{
  unsigned int v5; // ebx
  struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  struct tagWND *v7; // r11
  __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  float v13; // xmm3_4
  float v14; // xmm4_4
  float *v15; // rdx
  float v16; // xmm4_4
  int v17; // edx

  v5 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  v7 = TopLevelOrDpiBoundaryWindow;
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v8 = *((_QWORD *)TopLevelOrDpiBoundaryWindow + 25);
    if ( v8 )
    {
      v9 = (int)*(float *)(v8 + 52);
      v10 = (int)*(float *)(v8 + 48);
      v11 = -v9;
      a2[3] += v11;
      a2[1] += v11;
      v12 = -v10;
      *a2 += v12;
      a2[2] += v12;
      v13 = 1.0 / **((float **)v7 + 25);
      ScaleValueWithSubpixel(a2, a3, v13);
      ScaleValueWithSubpixel(a2 + 1, (float *)((unsigned __int64)(a3 + 1) & -(__int64)(a3 != 0LL)), v14);
      ScaleValueWithSubpixel(a2 + 2, 0LL, v13);
      ScaleValueWithSubpixel(a2 + 3, v15, v16);
      return (unsigned int)(v17 + 1);
    }
  }
  return v5;
}
