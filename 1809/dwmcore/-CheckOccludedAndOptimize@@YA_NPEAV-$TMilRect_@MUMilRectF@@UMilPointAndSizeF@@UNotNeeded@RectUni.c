/*
 * XREFs of ?CheckOccludedAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV1@@Z @ 0x1800AA59C
 * Callers:
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800AA470 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     <none>
 */

char __fastcall CheckOccludedAndOptimize(float *a1, float *a2)
{
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm0_4
  float v6; // xmm1_4

  if ( *a1 < *a2 || a2[2] < a1[2] )
    return 0;
  v3 = a2[1];
  v4 = a1[1];
  v5 = a2[3];
  v6 = a1[3];
  if ( v4 < v3 )
  {
    if ( v5 >= v6 && v6 > v3 )
      a1[3] = v3;
    return 0;
  }
  if ( v5 < v6 )
  {
    if ( v5 > v4 )
      a1[1] = v5;
    return 0;
  }
  return 1;
}
