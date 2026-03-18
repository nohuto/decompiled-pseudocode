/*
 * XREFs of _ScrollDC @ 0x1C002D2F8
 * Callers:
 *     NtUserScrollDC @ 0x1C002D4E0 (NtUserScrollDC.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01BBAF4 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C002C73C (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     FastWindowFromDC @ 0x1C002D404 (FastWindowFromDC.c)
 *     UnionRect @ 0x1C0072864 (UnionRect.c)
 *     SpbCheckRect @ 0x1C01CEB18 (SpbCheckRect.c)
 */

_BOOL8 __fastcall ScrollDC(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        __m128i *a4,
        struct tagRECT *a5,
        HRGN a6,
        struct tagRECT *a7)
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
  __m128i v22; // [rsp+60h] [rbp-10h] BYREF

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
      v20 = v22;
      v22.m128i_i32[2] += v19;
      v22.m128i_i32[3] += v18;
      v22.m128i_i32[1] += v18;
      v22.m128i_i32[0] = v19 + _mm_cvtsi128_si32(v20);
      v21.right = a2 + v22.m128i_i32[2];
      v21.bottom = a3 + v22.m128i_i32[3];
      v21.top = a3 + v22.m128i_i32[1];
      v21.left = a2 + v22.m128i_i32[0];
      UnionRect(&v21, &v21, &v22);
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
