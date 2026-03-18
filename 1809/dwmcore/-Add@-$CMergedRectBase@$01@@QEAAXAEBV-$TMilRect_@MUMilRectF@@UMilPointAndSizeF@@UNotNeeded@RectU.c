/*
 * XREFs of ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180168A98
 * Callers:
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180168DF8 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800AA428 (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AA600 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x18016C2C4 (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 */

char __fastcall CMergedRectBase<2>::Add(__int64 a1, struct D2D_RECT_F *a2)
{
  char result; // al
  float v5; // xmm6_4
  unsigned int v6; // r14d
  unsigned int v7; // esi
  unsigned int v8; // r9d
  _BYTE *v9; // r10
  struct D2D_RECT_F *v10; // rbp
  float *p_left; // rdx
  float *v12; // rcx
  const struct D2D_RECT_F *v13; // r11
  double v14; // xmm0_8
  float v15; // xmm4_4
  float v16; // xmm4_4
  struct D2D_RECT_F v17; // [rsp+20h] [rbp-28h] BYREF

  result = IsEmpty(a2);
  if ( !result )
  {
    v5 = FLOAT_3_4028235e38;
    v6 = -1;
    v7 = -1;
    CMergedRectBase<2>::Optimize(a1, 0LL);
    v8 = 0;
    v9 = (_BYTE *)(a1 + 32);
    v10 = (struct D2D_RECT_F *)a1;
    do
    {
      if ( *v9 )
      {
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
               (float *)(a1 + 16LL * v8),
               &a2->left) )
        {
          goto LABEL_13;
        }
        if ( *(_DWORD *)(a1 + 40) == 2 )
        {
          v17 = *v10;
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v17.left, p_left);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe(&v17);
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
    while ( v8 < 2 );
    if ( v7 != -1 )
    {
      result = 2 * v7;
      *(struct D2D_RECT_F *)(a1 + 16LL * v7) = *a2;
      *(_BYTE *)(v7 + a1 + 32) = 1;
      ++*(_DWORD *)(a1 + 36);
      ++*(_DWORD *)(a1 + 40);
      return result;
    }
    p_left = &a2->left;
    v12 = (float *)(a1 + 16LL * v6);
LABEL_13:
    result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v12, p_left);
    ++*(_DWORD *)(a1 + 36);
  }
  return result;
}
