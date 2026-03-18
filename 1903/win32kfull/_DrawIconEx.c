/*
 * XREFs of _DrawIconEx @ 0x1C002CFB4
 * Callers:
 *     NtUserDrawIconEx @ 0x1C002D7D0 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F453C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243F48 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     BltIcon @ 0x1C002D3A4 (BltIcon.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C002FFD0 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GreSetBrushOrg @ 0x1C008D924 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C008DA64 (GrePolyPatBlt.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C00AC1C8 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     GreGetBrushOrg @ 0x1C0136A74 (GreGetBrushOrg.c)
 */

__int64 __fastcall DrawIconEx(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        int a7,
        __int64 a8,
        char a9)
{
  unsigned int v10; // ebx
  int v11; // edi
  struct tagCURSOR *AnimatedCursorFrame; // rsi
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int DpiDependentMetric; // r12d
  int v17; // eax
  int v18; // r15d
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // r14d
  int v23; // ecx
  unsigned int v25; // eax
  int v26; // eax
  HDC CompatibleDC; // r14
  int v28; // ecx
  int v29; // eax
  unsigned int DpiForSystem; // eax
  unsigned int v31; // eax
  int v32[2]; // [rsp+68h] [rbp-31h] BYREF
  int v33[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v34; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v35; // [rsp+80h] [rbp-19h]
  int v36; // [rsp+84h] [rbp-15h]
  __int64 v37; // [rsp+88h] [rbp-11h]
  int v41; // [rsp+128h] [rbp+8Fh]
  int v42; // [rsp+128h] [rbp+8Fh]

  v10 = 0;
  v11 = a9 & 0x10;
  v41 = 0;
  AnimatedCursorFrame = (struct tagCURSOR *)a4;
  v13 = 0;
  if ( (*(_DWORD *)(a4 + 80) & 8) != 0 )
  {
    AnimatedCursorFrame = GetAnimatedCursorFrame((struct tagACON *const)a4, a7);
    if ( !AnimatedCursorFrame )
    {
      UserSetLastError(87LL);
      return v10;
    }
  }
  if ( *((_QWORD *)AnimatedCursorFrame + 16) )
  {
    if ( (a9 & 3) == 3 )
      v13 = 1;
    v41 = v13;
  }
  GetVirtualizedCursorSize(AnimatedCursorFrame, v32, v33);
  DpiDependentMetric = a5;
  v17 = a9 & 8;
  if ( !a5 )
  {
    if ( (a9 & 8) != 0 )
    {
      DpiForSystem = GetDpiForSystem(v15, v14);
      DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
      v17 = a9 & 8;
    }
    else
    {
      DpiDependentMetric = v32[0];
    }
  }
  v18 = a6;
  v19 = 2;
  if ( !a6 )
  {
    if ( v17 )
    {
      v31 = GetDpiForSystem(2LL, v14);
      v20 = GetDpiDependentMetric(6LL, v31);
      v19 = 2;
    }
    else
    {
      v20 = v33[0] / 2;
    }
    v18 = v20;
  }
  if ( !a8 )
  {
    if ( v13 )
    {
      v19 = 3;
      v25 = v11 != 0 ? 0x80000000 : 0;
    }
    else
    {
      v21 = a9 & 1;
      v22 = a9 & 2;
      v42 = v21;
      if ( v21 )
      {
        if ( v22 )
          v23 = v11 != 0 ? -2138570554 : 8913094;
        else
          v23 = v11 != 0 ? -2134114272 : 13369376;
        BltIcon(a1, v18, ghdcMem, (__int64)AnimatedCursorFrame, 1, v23);
        v21 = v42;
        v19 = 2;
      }
      if ( !v22 )
        return 1;
      if ( v21 )
      {
        v26 = v11 != 0 ? -2140798906 : 6684742;
        goto LABEL_24;
      }
      v25 = v11 != 0 ? 0x80000000 : 0;
    }
    v26 = v25 + 13369376;
LABEL_24:
    BltIcon(a1, v18, ghdcMem, (__int64)AnimatedCursorFrame, v19, v26);
    return 1;
  }
  CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
  if ( CompatibleDC )
  {
    *(_QWORD *)v32 = GreCreateCompatibleBitmapInternal(a1, 0LL, 0LL);
    if ( *(_QWORD *)v32 )
    {
      *(_QWORD *)v33 = GreSelectBitmap(CompatibleDC);
      GreGetBrushOrg(a1);
      GreSetBrushOrg(CompatibleDC);
      v37 = a8;
      v34 = 0LL;
      v35 = DpiDependentMetric;
      v36 = v18;
      GrePolyPatBlt(CompatibleDC, 0xF00021u, (struct _POLYPATBLT *)&v34, 1u);
      if ( v41 )
      {
        v28 = 3;
        v29 = v11 != 0 ? -2134114272 : 13369376;
      }
      else
      {
        BltIcon(CompatibleDC, v18, ghdcMem, (__int64)AnimatedCursorFrame, 1, v11 != 0 ? -2138570554 : 8913094);
        v28 = 2;
        v29 = v11 != 0 ? -2140798906 : 6684742;
      }
      BltIcon(CompatibleDC, v18, ghdcMem, (__int64)AnimatedCursorFrame, v28, v29);
      NtGdiBitBltInternal(a1, a2, a3, DpiDependentMetric, v18, CompatibleDC, 0, 0, 13369376, -1, 0);
      GreSelectBitmap(CompatibleDC);
      GreDeleteObject(*(_QWORD *)v32);
      v10 = 1;
    }
    GreDeleteDC(CompatibleDC);
  }
  return v10;
}
