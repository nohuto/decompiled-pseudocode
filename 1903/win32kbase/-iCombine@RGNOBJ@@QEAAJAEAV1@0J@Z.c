/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0015690
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C00143D8 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0015EE0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0028890 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002A730 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0126D80 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C0131B00 (GreIntersectVisRect.c)
 * Callees:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C00158A0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0015978 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C001599C (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0022DF0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0026DA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r10
  struct RGNOBJ *v5; // r11
  struct RGNOBJ *v6; // r14
  RGNOBJ *v7; // rsi
  unsigned int v8; // edi
  _DWORD *v9; // rdx
  _DWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  __int64 result; // rax
  int v14; // eax
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // xmm0_8
  bool v20; // cc
  unsigned __int64 v21; // xmm1_8
  LONG v22; // r8d
  LONG v23; // edx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r11
  __int64 v27; // r8
  struct _RECTL v28; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)this;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( *(struct REGION **)this == prgnDefault )
    return RGNOBJ::iComplexity(this);
  v8 = 1;
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v9 = *(_DWORD **)a2;
    v10 = *(_DWORD **)a3;
    if ( v9[20] == 160 && v9[22] <= v10[22] && v9[24] >= v10[24] && v9[23] <= v10[23] && v9[25] >= v10[25] )
    {
      if ( a4 != 1 )
        v5 = v6;
      v11 = RGNOBJ::bCopy(v7, v5);
      v12 = *(_QWORD *)v7;
      if ( v11 )
      {
        if ( *(_DWORD *)(v12 + 84) != 1 )
          return (unsigned int)(*(_DWORD *)(v12 + 80) > 0xA0u) + 2;
        return v8;
      }
      else
      {
        *(_DWORD *)(v12 + 80) = 120;
        *(_QWORD *)(v12 + 84) = 1LL;
        *(_QWORD *)(v12 + 92) = 0LL;
        *(_DWORD *)(v12 + 100) = 0;
        result = 0LL;
        *(_DWORD *)(v12 + 104) = 0;
        *(_DWORD *)(v12 + 108) = 0x80000000;
        *(_QWORD *)(v12 + 112) = 0x7FFFFFFFLL;
        *(_QWORD *)(v12 + 40) = v12 + 120;
      }
      return result;
    }
    if ( v10[20] == 160 && (unsigned int)RGNOBJ::bContain(a3, v6) )
    {
      if ( a4 != 1 )
        v6 = v5;
      v14 = RGNOBJ::bCopy(v7, v6);
      goto LABEL_21;
    }
  }
  if ( a4 != 1 || *(_DWORD *)(*(_QWORD *)v6 + 80LL) != 160 || *(_DWORD *)(*(_QWORD *)v5 + 80LL) != 160 )
  {
    v14 = RGNOBJ::bMerge(v7, v6, v5, *((_BYTE *)&gafjRgnOp + a4));
LABEL_21:
    if ( !v14 )
    {
      v27 = *(_QWORD *)v7;
      *(_DWORD *)(v27 + 80) = 120;
      *(_QWORD *)(v27 + 84) = 1LL;
      *(_QWORD *)(v27 + 92) = 0LL;
      result = 0LL;
      *(_DWORD *)(v27 + 100) = 0;
      *(_DWORD *)(v27 + 104) = 0;
      *(_DWORD *)(v27 + 108) = 0x80000000;
      *(_QWORD *)(v27 + 112) = 0x7FFFFFFFLL;
      *(_QWORD *)(v27 + 40) = v27 + 120;
      return result;
    }
    this = v7;
    return RGNOBJ::iComplexity(this);
  }
  v15 = *(__m128i *)(*(_QWORD *)v5 + 88LL);
  v16 = *(__m128i *)(*(_QWORD *)v6 + 88LL);
  *(_QWORD *)&v28.left = 0LL;
  v17 = v15.m128i_i64[0];
  *(_QWORD *)&v28.right = 0LL;
  v18 = v16.m128i_i64[0];
  v19 = _mm_srli_si128(v15, 8).m128i_u64[0];
  v20 = v16.m128i_i32[0] <= (int)v17;
  v21 = _mm_srli_si128(v16, 8).m128i_u64[0];
  v22 = v17;
  if ( !v20 )
    v22 = v18;
  v28.left = v22;
  v23 = v19;
  if ( (int)v21 < (int)v19 )
    v23 = v21;
  v24 = HIDWORD(v18);
  v25 = HIDWORD(v17);
  v28.right = v23;
  if ( (int)v24 > (int)v25 )
    LODWORD(v25) = v24;
  v26 = HIDWORD(v19);
  v28.top = v25;
  if ( SHIDWORD(v21) < SHIDWORD(v19) )
    LODWORD(v26) = HIDWORD(v21);
  v28.bottom = v26;
  if ( (int)v25 >= (int)v26 || v22 >= v23 )
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
    RGNOBJ::vSet(v7, &v28);
  }
  return 2LL;
}
