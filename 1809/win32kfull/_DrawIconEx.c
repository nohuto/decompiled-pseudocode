/*
 * XREFs of _DrawIconEx @ 0x1C006D774
 * Callers:
 *     NtUserDrawIconEx @ 0x1C006D5B0 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01DE658 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022AF18 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C0232894 (xxxRealDrawMenuItem.c)
 * Callees:
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0018228 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     BltIcon @ 0x1C006DB60 (BltIcon.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GreSetBrushOrg @ 0x1C007B4B8 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C007B620 (GrePolyPatBlt.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetBrushOrg @ 0x1C012C9D0 (GreGetBrushOrg.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C015BC7C (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 */

__int64 __fastcall DrawIconEx(HDC a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, __int64 a8, char a9)
{
  unsigned int v10; // ebx
  int v11; // edi
  struct tagCURSOR *AnimatedCursorFrame; // rsi
  int v13; // r13d
  __int64 v14; // rdx
  __int64 v15; // r8
  int DpiDependentMetric; // r12d
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
  __int64 CompatibleBitmapInternal; // rax
  int v29; // ecx
  int v30; // eax
  unsigned int DpiForSystem; // eax
  __int64 v32; // r8
  unsigned int v33; // eax
  __int64 v34; // r8
  int v35[2]; // [rsp+68h] [rbp-31h] BYREF
  int v36[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v37; // [rsp+78h] [rbp-21h] BYREF
  int v38; // [rsp+80h] [rbp-19h]
  int v39; // [rsp+84h] [rbp-15h]
  __int64 v40; // [rsp+88h] [rbp-11h]
  int v44; // [rsp+128h] [rbp+8Fh]
  int v45; // [rsp+128h] [rbp+8Fh]

  v10 = 0;
  v11 = a9 & 0x10;
  v44 = 0;
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
    v44 = v13;
  }
  GetVirtualizedCursorSize(AnimatedCursorFrame, v35, v36);
  DpiDependentMetric = a5;
  v17 = a9 & 8;
  if ( !a5 )
  {
    if ( (a9 & 8) != 0 )
    {
      DpiForSystem = GetDpiForSystem();
      DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem, v32);
      v17 = a9 & 8;
    }
    else
    {
      DpiDependentMetric = v35[0];
    }
  }
  v18 = a6;
  v19 = 2;
  if ( !a6 )
  {
    if ( v17 )
    {
      v33 = GetDpiForSystem();
      v20 = GetDpiDependentMetric(6LL, v33, v34);
      v19 = 2;
    }
    else
    {
      v14 = (unsigned int)(v36[0] >> 31);
      LODWORD(v14) = v36[0] % 2;
      v20 = v36[0] / 2;
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
      v45 = v21;
      if ( v21 )
      {
        if ( v22 )
          v23 = v11 != 0 ? -2138570554 : 8913094;
        else
          v23 = v11 != 0 ? -2134114272 : 13369376;
        BltIcon(a1, v18, ghdcMem, (__int64)AnimatedCursorFrame, 1, v23);
        v21 = v45;
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
  CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v14, v15);
  if ( CompatibleDC )
  {
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, 0LL, 0LL);
    *(_QWORD *)v35 = CompatibleBitmapInternal;
    if ( CompatibleBitmapInternal )
    {
      *(_QWORD *)v36 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
      GreGetBrushOrg(a1);
      GreSetBrushOrg(CompatibleDC);
      v40 = a8;
      v37 = 0LL;
      v38 = DpiDependentMetric;
      v39 = v18;
      GrePolyPatBlt(CompatibleDC, 0xF00021u, (struct _POLYPATBLT *)&v37, 1u);
      if ( v44 )
      {
        v29 = 3;
        v30 = v11 != 0 ? -2134114272 : 13369376;
      }
      else
      {
        BltIcon(CompatibleDC, v18, ghdcMem, (__int64)AnimatedCursorFrame, 1, v11 != 0 ? -2138570554 : 8913094);
        v29 = 2;
        v30 = v11 != 0 ? -2140798906 : 6684742;
      }
      BltIcon(CompatibleDC, v18, ghdcMem, (__int64)AnimatedCursorFrame, v29, v30);
      NtGdiBitBltInternal(a1, a2, a3, DpiDependentMetric, v18, CompatibleDC, 0, 0, 13369376, -1, 0);
      GreSelectBitmap(CompatibleDC, *(_QWORD *)v36);
      GreDeleteObject(*(_QWORD *)v35);
      v10 = 1;
    }
    GreDeleteDC(CompatibleDC);
  }
  return v10;
}
