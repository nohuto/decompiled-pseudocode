/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008B168
 * Callers:
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x18008B8B8 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x180219090 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180089560 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18008B6D8 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18008E98C (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A2930 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

_UNKNOWN **__fastcall CMergedRectBase<4>::Add(__int64 a1, float *a2)
{
  _UNKNOWN **result; // rax
  float v5; // xmm6_4
  unsigned int v6; // r14d
  unsigned int v7; // esi
  unsigned int v8; // r9d
  _BYTE *v9; // r10
  __int128 *v10; // rbp
  float *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // r8
  float v20; // xmm0_4
  float v21; // xmm4_4
  float v22; // xmm4_4
  __int128 v23; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a2[2] > *a2 && a2[3] > a2[1] )
  {
    v5 = FLOAT_3_4028235e38;
    v6 = -1;
    v7 = -1;
    CMergedRectBase<4>::Optimize(a1, 0LL);
    v8 = 0;
    v9 = (_BYTE *)(a1 + 64);
    v10 = (__int128 *)a1;
    do
    {
      if ( *v9 )
      {
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe((float *)(a1 + 16LL * v8), a2) )
          goto LABEL_11;
        if ( *(_DWORD *)(a1 + 72) == 4 )
        {
          v23 = *v10;
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v23, v11);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v23, v13, v14);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v17, v15, v16);
          v20 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a2, v18, v19);
          v22 = v21 - v20;
          if ( v5 > v22 )
          {
            v5 = v22;
            v6 = v8;
          }
        }
      }
      else
      {
        v7 = v8;
      }
      ++v8;
      ++v9;
      ++v10;
    }
    while ( v8 < 4 );
    if ( v7 != -1 )
    {
      result = (_UNKNOWN **)(2LL * v7);
      *(_OWORD *)(a1 + 16LL * v7) = *(_OWORD *)a2;
      *(_BYTE *)(v7 + a1 + 64) = 1;
      ++*(_DWORD *)(a1 + 68);
      ++*(_DWORD *)(a1 + 72);
      return result;
    }
    v11 = a2;
    v12 = a1 + 16LL * v6;
LABEL_11:
    result = (_UNKNOWN **)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v12, v11);
    ++*(_DWORD *)(a1 + 68);
  }
  return result;
}
