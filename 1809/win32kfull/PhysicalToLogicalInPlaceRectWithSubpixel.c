/*
 * XREFs of PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C0041300
 * Callers:
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C003CB30 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F6AC (BuildWindowListWithDpiBoundaryInfo.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C01052F0 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z @ 0x1C01D0D34 (-GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z.c)
 *     NtUserPhysicalToLogicalDpiPointForWindow @ 0x1C021AD90 (NtUserPhysicalToLogicalDpiPointForWindow.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004134C (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C01D0F50 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRectWithSubpixel(struct tagWND *a1, int *a2, float *a3)
{
  unsigned int v5; // ebx
  struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  struct tagWND *v7; // r11
  __int64 v8; // rax
  int v10; // ecx
  int v11; // eax
  float v12; // xmm3_4
  float v13; // xmm4_4
  float *v14; // rdx
  float v15; // xmm4_4
  int v16; // edx

  v5 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  v7 = TopLevelOrDpiBoundaryWindow;
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v8 = *((_QWORD *)TopLevelOrDpiBoundaryWindow + 25);
    if ( v8 )
    {
      v10 = (int)*(float *)(v8 + 52);
      v11 = (int)*(float *)(v8 + 48);
      a2[3] -= v10;
      a2[1] -= v10;
      *a2 -= v11;
      a2[2] -= v11;
      v12 = 1.0 / **((float **)v7 + 25);
      ScaleValueWithSubpixel(a2, a3, v12);
      ScaleValueWithSubpixel(a2 + 1, (float *)((unsigned __int64)(a3 + 1) & -(__int64)(a3 != 0LL)), v13);
      ScaleValueWithSubpixel(a2 + 2, 0LL, v12);
      ScaleValueWithSubpixel(a2 + 3, v14, v15);
      return (unsigned int)(v16 + 1);
    }
  }
  return v5;
}
