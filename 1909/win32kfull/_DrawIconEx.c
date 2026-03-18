/*
 * XREFs of _DrawIconEx @ 0x1C00226D0
 * Callers:
 *     NtUserDrawIconEx @ 0x1C0022EF0 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F43BC (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0243808 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C024ADD4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     BltIcon @ 0x1C0022AC0 (BltIcon.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0025590 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C004CFE8 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetBrushOrg @ 0x1C011110C (GreGetBrushOrg.c)
 *     GreSetBrushOrg @ 0x1C012BE74 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C012BFB4 (GrePolyPatBlt.c)
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
  unsigned int DpiDependentMetric; // r12d
  int v15; // eax
  int v16; // r15d
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // r14d
  int v21; // ecx
  unsigned int v23; // eax
  int v24; // eax
  HDC CompatibleDC; // r14
  __int64 CompatibleBitmapInternal; // rax
  int v27; // ecx
  int v28; // eax
  unsigned int v29; // eax
  unsigned int DpiForSystem; // eax
  int v31[2]; // [rsp+68h] [rbp-31h] BYREF
  int v32[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v33; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v34; // [rsp+80h] [rbp-19h]
  int v35; // [rsp+84h] [rbp-15h]
  __int64 v36; // [rsp+88h] [rbp-11h]
  int v40; // [rsp+128h] [rbp+8Fh]
  int v41; // [rsp+128h] [rbp+8Fh]

  v10 = 0;
  v11 = a9 & 0x10;
  v40 = 0;
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
    v40 = v13;
  }
  GetVirtualizedCursorSize(AnimatedCursorFrame, v31, v32);
  DpiDependentMetric = a5;
  v15 = a9 & 8;
  if ( !a5 )
  {
    if ( (a9 & 8) != 0 )
    {
      v29 = ((__int64 (*)(void))GetDpiForSystem)();
      DpiDependentMetric = GetDpiDependentMetric(5LL, v29);
      v15 = a9 & 8;
    }
    else
    {
      DpiDependentMetric = v31[0];
    }
  }
  v16 = a6;
  v17 = 2;
  if ( !a6 )
  {
    if ( v15 )
    {
      DpiForSystem = GetDpiForSystem(2LL);
      v18 = GetDpiDependentMetric(6LL, DpiForSystem);
      v17 = 2;
    }
    else
    {
      v18 = v32[0] / 2;
    }
    v16 = v18;
  }
  if ( !a8 )
  {
    if ( v13 )
    {
      v17 = 3;
      v23 = v11 != 0 ? 0x80000000 : 0;
    }
    else
    {
      v19 = a9 & 1;
      v20 = a9 & 2;
      v41 = v19;
      if ( v19 )
      {
        if ( v20 )
          v21 = v11 != 0 ? -2138570554 : 8913094;
        else
          v21 = v11 != 0 ? -2134114272 : 13369376;
        BltIcon(a1, v16, ghdcMem, (__int64)AnimatedCursorFrame, 1, v21);
        v19 = v41;
        v17 = 2;
      }
      if ( !v20 )
        return 1;
      if ( v19 )
      {
        v24 = v11 != 0 ? -2140798906 : 6684742;
        goto LABEL_24;
      }
      v23 = v11 != 0 ? 0x80000000 : 0;
    }
    v24 = v23 + 13369376;
LABEL_24:
    BltIcon(a1, v16, ghdcMem, (__int64)AnimatedCursorFrame, v17, v24);
    return 1;
  }
  CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
  if ( CompatibleDC )
  {
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, 0LL, 0LL);
    *(_QWORD *)v31 = CompatibleBitmapInternal;
    if ( CompatibleBitmapInternal )
    {
      *(_QWORD *)v32 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
      GreGetBrushOrg(a1);
      GreSetBrushOrg(CompatibleDC);
      v36 = a8;
      v33 = 0LL;
      v34 = DpiDependentMetric;
      v35 = v16;
      GrePolyPatBlt(CompatibleDC, 0xF00021u, (struct _POLYPATBLT *)&v33, 1u);
      if ( v40 )
      {
        v27 = 3;
        v28 = v11 != 0 ? -2134114272 : 13369376;
      }
      else
      {
        BltIcon(CompatibleDC, v16, ghdcMem, (__int64)AnimatedCursorFrame, 1, v11 != 0 ? -2138570554 : 8913094);
        v27 = 2;
        v28 = v11 != 0 ? -2140798906 : 6684742;
      }
      BltIcon(CompatibleDC, v16, ghdcMem, (__int64)AnimatedCursorFrame, v27, v28);
      NtGdiBitBltInternal(a1, a2, a3, DpiDependentMetric, v16, CompatibleDC, 0, 0, 13369376, -1, 0);
      GreSelectBitmap(CompatibleDC, *(_QWORD *)v32);
      GreDeleteObject(*(_QWORD *)v31);
      v10 = 1;
    }
    GreDeleteDC(CompatibleDC);
  }
  return v10;
}
