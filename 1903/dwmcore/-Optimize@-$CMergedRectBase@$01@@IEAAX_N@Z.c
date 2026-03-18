/*
 * XREFs of ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x18018712C
 * Callers:
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180183A58 (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180183D9C (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180089560 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x18008E98C (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A2930 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?SwapExisting@?$CMergedRectBase@$01@@IEAAXII@Z @ 0x180187558 (-SwapExisting@-$CMergedRectBase@$01@@IEAAXII@Z.c)
 */

void __fastcall CMergedRectBase<2>::Optimize(__int64 a1, char a2)
{
  __int64 v2; // r10
  unsigned int v3; // r9d
  float v4; // xmm6_4
  __int64 v5; // r11
  char v6; // si
  float v7; // xmm2_4
  float *v8; // rcx
  unsigned int v9; // r9d
  double v10; // xmm0_8
  unsigned int v11; // eax
  unsigned int v12; // r8d
  _BYTE *v13; // rbx
  __int64 v14; // rdi
  float *v15; // rdx
  unsigned int v16; // eax
  _BYTE *i; // rax

  v2 = a1;
  if ( a2 || (*(_BYTE *)(a1 + 36) & 3) == 0 )
  {
    v3 = 0;
    *(_DWORD *)(a1 + 36) = 1;
    if ( *(_DWORD *)(a1 + 40) <= 1u )
    {
      if ( *(_DWORD *)(a1 + 40) != 1 )
        return;
      for ( i = (_BYTE *)(a1 + 32); !*i; ++i )
      {
        if ( ++v3 >= 2 )
          return;
      }
    }
    else
    {
      v4 = 0.0;
      v5 = 0LL;
      do
      {
        v6 = 0;
        v7 = v4;
        if ( *(_BYTE *)(v2 + v5 + 32) )
        {
          v10 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(v2 + 16LL * (unsigned int)v5);
          if ( *(float *)&v10 > v4 )
            v4 = *(float *)&v10;
          v11 = v5;
          v12 = v5 + 1;
          if ( *(float *)&v10 <= v7 )
            v11 = v9;
          v3 = v11;
          if ( v12 < 2 )
          {
            v13 = (_BYTE *)(v12 + v2 + 32);
            while ( 1 )
            {
              if ( *v13 )
              {
                v14 = v12;
                if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                       v8,
                       (float *)(v2 + 16LL * v12)) )
                {
                  break;
                }
              }
              ++v12;
              ++v13;
              if ( v12 >= 2 )
                goto LABEL_17;
            }
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v8, v15);
            *(_BYTE *)(v14 + v2 + 32) = 0;
            v6 = 1;
            --*(_DWORD *)(v2 + 40);
          }
        }
LABEL_17:
        v16 = v5 + 1;
        v5 = 0LL;
        if ( !v6 )
          v5 = v16;
      }
      while ( (unsigned int)v5 < 2 );
    }
    if ( v3 )
      CMergedRectBase<2>::SwapExisting(v2, 0LL, v3);
  }
}
