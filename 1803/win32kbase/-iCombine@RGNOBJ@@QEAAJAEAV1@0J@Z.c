/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0020DF0
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0021700 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x1C0023EB0 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0025830 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C0025DB0 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00D9BA0 (GreIntersectVisRect.c)
 * Callees:
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0020A48 (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0020FD0 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0021B60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00220E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0022110 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r11
  struct RGNOBJ *v5; // r10
  struct RGNOBJ *v6; // rsi
  RGNOBJ *v7; // rdi
  _DWORD *v8; // rcx
  _DWORD *v9; // rdx
  struct RGNOBJ *v10; // rdx
  int v11; // eax
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __m128i v15; // xmm1
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // xmm0_8
  unsigned __int64 v18; // rax
  LONG v19; // r8d
  unsigned __int64 v20; // xmm1_8
  LONG v21; // edx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r10
  __int64 v25; // r8
  struct _RECTL v26; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)this;
  v5 = a3;
  v6 = a2;
  v7 = this;
  if ( *(struct REGION **)this == prgnDefault )
    return RGNOBJ::iComplexity(this);
  if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v8 = *(_DWORD **)a2;
    if ( *(_DWORD *)(*(_QWORD *)a2 + 80LL) == 160 )
    {
      v9 = *(_DWORD **)a3;
      if ( v8[22] <= *(_DWORD *)(*(_QWORD *)a3 + 88LL) && v8[24] >= v9[24] && v8[23] <= v9[23] && v8[25] >= v9[25] )
      {
        if ( a4 != 1 )
          v5 = v6;
        v10 = v5;
LABEL_11:
        v11 = RGNOBJ::bCopy(v7, v10);
        goto LABEL_12;
      }
    }
    if ( *(_DWORD *)(*(_QWORD *)a3 + 80LL) == 160 && RGNOBJ::bContain(a3, v6) )
    {
      if ( a4 != 1 )
        v6 = v5;
      v10 = v6;
      goto LABEL_11;
    }
  }
  if ( a4 == 1 )
  {
    v13 = *(_QWORD *)v6;
    if ( *(_DWORD *)(*(_QWORD *)v6 + 80LL) == 160 )
    {
      v14 = *(_QWORD *)v5;
      if ( *(_DWORD *)(*(_QWORD *)v5 + 80LL) == 160 )
      {
        v15 = *(__m128i *)(v13 + 88);
        v16 = *(_QWORD *)(v14 + 88);
        v17 = _mm_srli_si128(*(__m128i *)(v14 + 88), 8).m128i_u64[0];
        v18 = *(_QWORD *)(v13 + 88);
        v19 = v16;
        v20 = _mm_srli_si128(v15, 8).m128i_u64[0];
        if ( (int)v18 > (int)v16 )
          v19 = v18;
        v21 = v17;
        v26.left = v19;
        if ( (int)v20 < (int)v17 )
          v21 = v20;
        v22 = HIDWORD(v18);
        v23 = HIDWORD(v16);
        v26.right = v21;
        if ( (int)v22 > (int)v23 )
          LODWORD(v23) = v22;
        v24 = HIDWORD(v17);
        v26.top = v23;
        if ( SHIDWORD(v20) < SHIDWORD(v17) )
          LODWORD(v24) = HIDWORD(v20);
        v26.bottom = v24;
        if ( (int)v23 >= (int)v24 || v19 >= v21 )
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
          RGNOBJ::vSet(v7, &v26);
        }
        return 2LL;
      }
    }
  }
  v11 = RGNOBJ::bMerge(v7, v6, v5, *((_BYTE *)&gafjRgnOp + a4));
LABEL_12:
  if ( v11 )
  {
    this = v7;
    return RGNOBJ::iComplexity(this);
  }
  v25 = *(_QWORD *)v7;
  *(_DWORD *)(v25 + 80) = 120;
  *(_QWORD *)(v25 + 84) = 1LL;
  *(_QWORD *)(v25 + 92) = 0LL;
  result = 0LL;
  *(_DWORD *)(v25 + 100) = 0;
  *(_DWORD *)(v25 + 104) = 0;
  *(_DWORD *)(v25 + 108) = 0x80000000;
  *(_QWORD *)(v25 + 112) = 0x7FFFFFFFLL;
  *(_QWORD *)(v25 + 40) = v25 + 120;
  return result;
}
