/*
 * XREFs of _ScrollDC @ 0x1C00C7F58
 * Callers:
 *     NtUserScrollDC @ 0x1C00C8150 (NtUserScrollDC.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F453C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 * Callees:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C00C65E0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     FastWindowFromDC @ 0x1C00C8070 (FastWindowFromDC.c)
 *     UnionRect @ 0x1C010FF60 (UnionRect.c)
 *     SpbCheckRect @ 0x1C0209430 (SpbCheckRect.c)
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
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  struct tagRECT v24; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT v25; // [rsp+60h] [rbp-10h] BYREF

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
      v25 = *a4;
      v20 = (__m128i)v25;
      v25.right += v19;
      v25.bottom += v18;
      v25.top += v18;
      v25.left = v19 + _mm_cvtsi128_si32(v20);
      v24.right = a2 + v25.right;
      v24.bottom = a3 + v25.bottom;
      v24.top = a3 + v25.top;
      v24.left = a2 + v25.left;
      UnionRect(&v24, &v24, &v25);
    }
    else
    {
      v24 = *(struct tagRECT *)(v17 + 104);
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v21, v22, v23);
    SpbCheckRect((struct tagWND *)v14, &v24, 0);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v15;
}
