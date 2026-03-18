/*
 * XREFs of _DrawIconEx @ 0x1C0012DE0
 * Callers:
 *     NtUserDrawIconEx @ 0x1C00134C0 (NtUserDrawIconEx.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01BBAF4 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C0202548 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     xxxRealDrawMenuItem @ 0x1C02095E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     BltIcon @ 0x1C001316C (BltIcon.c)
 *     _GetIconSize @ 0x1C0016068 (_GetIconSize.c)
 *     GetAnimatedCursorFrame @ 0x1C001C38C (GetAnimatedCursorFrame.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GrePolyPatBlt @ 0x1C009F6B0 (GrePolyPatBlt.c)
 *     GreSetBrushOrg @ 0x1C009FA48 (GreSetBrushOrg.c)
 *     GreGetBrushOrg @ 0x1C0133BE8 (GreGetBrushOrg.c)
 */

__int64 __fastcall DrawIconEx(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9)
{
  char v9; // r15
  unsigned int v10; // ebx
  char v11; // al
  __int64 AnimatedCursorFrame; // rdi
  int v13; // ecx
  unsigned int v14; // r12d
  __int64 v15; // rcx
  unsigned int DpiDependentMetric; // r14d
  int v17; // esi
  int v18; // eax
  char v19; // al
  int v20; // r15d
  int v21; // eax
  HDC CompatibleDC; // r15
  __int64 CompatibleBitmapInternal; // rax
  int v25; // eax
  int v26; // edx
  unsigned int DpiForSystem; // eax
  unsigned int v28; // eax
  __int64 v29; // [rsp+68h] [rbp-31h] BYREF
  __int64 v30; // [rsp+70h] [rbp-29h]
  __int64 v31; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v32; // [rsp+80h] [rbp-19h]
  int v33; // [rsp+84h] [rbp-15h]
  __int64 v34; // [rsp+88h] [rbp-11h]
  unsigned int v38; // [rsp+100h] [rbp+67h] BYREF

  v9 = a9;
  v10 = 0;
  v11 = a9;
  a9 = 0;
  AnimatedCursorFrame = a4;
  v13 = 0;
  v14 = (v11 & 0x10) != 0 ? 0x80000000 : 0;
  if ( (*(_DWORD *)(a4 + 80) & 8) != 0 )
  {
    AnimatedCursorFrame = GetAnimatedCursorFrame(a4, a7);
    if ( !AnimatedCursorFrame )
    {
      UserSetLastError(87LL);
      return v10;
    }
    v13 = 0;
  }
  if ( *(_QWORD *)(AnimatedCursorFrame + 128) )
  {
    if ( (v9 & 3) == 3 )
      v13 = 1;
    a9 = v13;
  }
  GetIconSize(AnimatedCursorFrame, &v38, &v29);
  DpiDependentMetric = a5;
  if ( !a5 )
  {
    if ( (v9 & 8) != 0 )
    {
      DpiForSystem = GetDpiForSystem(v15);
      DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
    }
    else
    {
      DpiDependentMetric = v38;
    }
  }
  v17 = a6;
  if ( !a6 )
  {
    if ( (v9 & 8) != 0 )
    {
      v28 = GetDpiForSystem(2LL);
      v18 = GetDpiDependentMetric(6LL, v28);
    }
    else
    {
      v18 = (int)v29 / 2;
    }
    v17 = v18;
  }
  if ( a8 )
  {
    CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
    if ( CompatibleDC )
    {
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a1, 0LL, 0LL);
      v30 = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        v29 = GreSelectBitmap(CompatibleDC, CompatibleBitmapInternal);
        GreGetBrushOrg(a1);
        GreSetBrushOrg(CompatibleDC);
        v34 = a8;
        v31 = 0LL;
        v32 = DpiDependentMetric;
        v33 = v17;
        GrePolyPatBlt(CompatibleDC, 0xF00021u, (struct _POLYPATBLT *)&v31, 1u);
        if ( a9 )
        {
          v26 = 13369376;
          v25 = 3;
        }
        else
        {
          BltIcon(CompatibleDC, v17, ghdcMem, AnimatedCursorFrame, 1, v14 | 0x8800C6);
          v25 = 2;
          v26 = 6684742;
        }
        BltIcon(CompatibleDC, v17, ghdcMem, AnimatedCursorFrame, v25, v26 | v14);
        NtGdiBitBltInternal(a1, a2, a3, DpiDependentMetric, v17, CompatibleDC, 0, 0, 13369376, -1, 0);
        GreSelectBitmap(CompatibleDC, v29);
        GreDeleteObject(v30);
        v10 = 1;
      }
      GreDeleteDC(CompatibleDC);
    }
  }
  else
  {
    if ( a9 )
    {
      BltIcon(a1, v17, ghdcMem, AnimatedCursorFrame, 3, v14 | 0xCC0020);
    }
    else
    {
      v19 = v9;
      v20 = v9 & 2;
      v21 = v19 & 1;
      a9 = v21;
      if ( v21 )
      {
        BltIcon(a1, v17, ghdcMem, AnimatedCursorFrame, 1, v14 | (v20 != 0 ? 8913094 : 13369376));
        v21 = a9;
      }
      if ( v20 )
        BltIcon(a1, v17, ghdcMem, AnimatedCursorFrame, 2, v14 | (v21 != 0 ? 6684742 : 13369376));
    }
    return 1;
  }
  return v10;
}
