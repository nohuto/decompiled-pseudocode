/*
 * XREFs of ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007968C
 * Callers:
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180079560 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x1802179A0 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18006C3FC (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180079BF8 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180079F80 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

_UNKNOWN **__fastcall CMergedRectBase<4>::Add(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  float v5; // xmm6_4
  unsigned int v6; // r14d
  unsigned int v7; // esi
  unsigned int v8; // r9d
  _BYTE *v9; // r10
  __int128 *v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r11
  double v14; // xmm0_8
  float v15; // xmm4_4
  float v16; // xmm4_4
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(float *)(a2 + 8) > *(float *)a2 && *(float *)(a2 + 12) > *(float *)(a2 + 4) )
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
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                a1 + 16LL * v8,
                                a2) )
          goto LABEL_11;
        if ( *(_DWORD *)(a1 + 72) == 4 )
        {
          v17 = *v10;
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v17, v11);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v17);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v13);
          v14 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(a2);
          v16 = v15 - *(float *)&v14;
          if ( v5 > v16 )
          {
            v5 = v16;
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
