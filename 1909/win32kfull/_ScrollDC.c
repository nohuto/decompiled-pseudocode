/*
 * XREFs of _ScrollDC @ 0x1C0069628
 * Callers:
 *     NtUserScrollDC @ 0x1C0069820 (NtUserScrollDC.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F43BC (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     UnionRect @ 0x1C0032D48 (UnionRect.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067CB0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     FastWindowFromDC @ 0x1C0069740 (FastWindowFromDC.c)
 *     SpbCheckRect @ 0x1C0209180 (SpbCheckRect.c)
 */

_BOOL8 __fastcall ScrollDC(HDC a1, int a2, int a3, struct tagRECT *a4, struct tagRECT *a5, HRGN a6, struct tagRECT *a7)
{
  HRGN v8; // rdi
  __int64 v12; // rax
  struct tagWND *v13; // rcx
  __int64 v14; // rbx
  BOOL v15; // r14d
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  __m128i v20; // xmm0
  struct tagRECT v21; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v22; // [rsp+60h] [rbp-10h] BYREF

  v8 = 0LL;
  v12 = FastWindowFromDC();
  v14 = v12;
  if ( v12 )
  {
    v8 = *(HRGN *)(*(_QWORD *)(v12 + 40) + 136LL);
    if ( v8 == (HRGN)1 )
      v8 = 0LL;
  }
  v15 = InternalScrollDC(v13, a1, a2, a3, a4, a5, v8, a6, a7, 1) != 0;
  GreLockVisRgnSharedOrExclusive(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v14 && *(_QWORD *)(gpDispInfo + 32LL) )
  {
    v17 = *(_QWORD *)(v14 + 40);
    if ( a4 )
    {
      v18 = *(_DWORD *)(v17 + 108);
      v19 = *(_DWORD *)(v17 + 104);
      v22 = *a4;
      v20 = (__m128i)v22;
      v22.right += v19;
      v22.bottom += v18;
      v22.top += v18;
      v22.left = v19 + _mm_cvtsi128_si32(v20);
      v21.right = a2 + v22.right;
      v21.bottom = a3 + v22.bottom;
      v21.top = a3 + v22.top;
      v21.left = a2 + v22.left;
      UnionRect(&v21, &v21.left, &v22.left);
    }
    else
    {
      v21 = *(struct tagRECT *)(v17 + 104);
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    SpbCheckRect((struct tagWND *)v14, &v21, 0);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v15;
}
