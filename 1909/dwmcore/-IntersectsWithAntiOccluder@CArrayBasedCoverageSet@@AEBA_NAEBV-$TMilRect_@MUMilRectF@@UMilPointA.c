/*
 * XREFs of ?IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x18007DDF0
 * Callers:
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18007DD10 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180079F80 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::IntersectsWithAntiOccluder(__int64 a1, float *a2, int a3, _DWORD *a4)
{
  int v4; // r11d
  __int64 v5; // r10
  unsigned __int8 v6; // bl
  __int64 v7; // rdi
  int v8; // esi
  _DWORD *v9; // r9
  int v10; // r10d
  unsigned int v11; // r11d

  v4 = *(_DWORD *)(a1 + 440);
  v5 = 0LL;
  v6 = 0;
  *a4 = 0;
  if ( !v4 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 416);
  do
  {
    v8 = *(_DWORD *)(v7 + 36 * v5 + 16);
    if ( v8 > a3 )
      break;
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe((float *)(v7 + 36 * v5), a2) )
    {
      v6 = 1;
      *v9 = v8;
    }
    v5 = (unsigned int)(v10 + 1);
  }
  while ( (unsigned int)v5 < v11 );
  return v6;
}
