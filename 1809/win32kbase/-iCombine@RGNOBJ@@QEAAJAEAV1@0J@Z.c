/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C00202F0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025890 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0029190 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00707AC (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0070AF0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00FA8E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C0107810 (GreIntersectVisRect.c)
 * Callees:
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C001F140 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C001F9D0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0020004 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0023940 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // rdi
  RGNOBJ *v5; // r11
  struct RGNOBJ *v6; // r10
  RGNOBJ *v7; // rbx
  int v8; // eax
  struct RGNOBJ *v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128i v13; // xmm1
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // xmm0_8
  unsigned __int64 v16; // rax
  LONG v17; // r8d
  unsigned __int64 v18; // xmm1_8
  LONG v19; // edx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // r10
  __int64 v23; // r8
  struct _RECTL v24; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)this;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( *(struct REGION **)this == prgnDefault )
    return RGNOBJ::iComplexity(this);
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a2 + 80LL) == 160 && RGNOBJ::bContain(a2, a3) )
    {
      if ( a4 != 1 )
        v5 = v6;
      v9 = v5;
    }
    else
    {
      if ( *(_DWORD *)(*(_QWORD *)v5 + 80LL) != 160 || !RGNOBJ::bContain(v5, v6) )
        goto LABEL_3;
      if ( a4 != 1 )
        v6 = v5;
      v9 = v6;
    }
    v8 = RGNOBJ::bCopy(v7, v9);
    goto LABEL_11;
  }
LABEL_3:
  if ( a4 != 1
    || (v11 = *(_QWORD *)v6, *(_DWORD *)(*(_QWORD *)v6 + 80LL) != 160)
    || (v12 = *(_QWORD *)v5, *(_DWORD *)(*(_QWORD *)v5 + 80LL) != 160) )
  {
    v8 = RGNOBJ::bMerge(v7, v6, v5, *((_BYTE *)&gafjRgnOp + a4));
LABEL_11:
    if ( !v8 )
    {
      v23 = *(_QWORD *)v7;
      *(_DWORD *)(v23 + 80) = 120;
      *(_QWORD *)(v23 + 84) = 1LL;
      *(_QWORD *)(v23 + 92) = 0LL;
      result = 0LL;
      *(_DWORD *)(v23 + 100) = 0;
      *(_DWORD *)(v23 + 104) = 0;
      *(_DWORD *)(v23 + 108) = 0x80000000;
      *(_QWORD *)(v23 + 112) = 0x7FFFFFFFLL;
      *(_QWORD *)(v23 + 40) = v23 + 120;
      return result;
    }
    this = v7;
    return RGNOBJ::iComplexity(this);
  }
  v13 = *(__m128i *)(v11 + 88);
  v14 = *(_QWORD *)(v12 + 88);
  v15 = _mm_srli_si128(*(__m128i *)(v12 + 88), 8).m128i_u64[0];
  v16 = *(_QWORD *)(v11 + 88);
  v17 = v14;
  v18 = _mm_srli_si128(v13, 8).m128i_u64[0];
  if ( (int)v16 > (int)v14 )
    v17 = v16;
  v19 = v15;
  v24.left = v17;
  if ( (int)v18 < (int)v15 )
    v19 = v18;
  v20 = HIDWORD(v16);
  v21 = HIDWORD(v14);
  v24.right = v19;
  if ( (int)v20 > (int)v21 )
    LODWORD(v21) = v20;
  v22 = HIDWORD(v15);
  v24.top = v21;
  if ( SHIDWORD(v18) < SHIDWORD(v15) )
    LODWORD(v22) = HIDWORD(v18);
  v24.bottom = v22;
  if ( (int)v21 >= (int)v22 || v17 >= v19 )
  {
    *(_DWORD *)(v4 + 80) = 120;
    *(_QWORD *)(v4 + 84) = 1LL;
    *(_QWORD *)(v4 + 92) = 0LL;
    *(_DWORD *)(v4 + 100) = 0;
    *(_DWORD *)(v4 + 104) = 0;
    *(_DWORD *)(v4 + 108) = 0x80000000;
    *(_QWORD *)(v4 + 112) = 0x7FFFFFFFLL;
    *(_QWORD *)(v4 + 40) = v4 + 120;
  }
  else
  {
    RGNOBJ::vSet(v7, &v24);
  }
  return 2LL;
}
