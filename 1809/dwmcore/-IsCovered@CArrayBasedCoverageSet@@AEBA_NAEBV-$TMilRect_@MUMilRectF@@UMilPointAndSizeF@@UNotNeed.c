/*
 * XREFs of ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800AA470
 * Callers:
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1800AA460 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800AB640 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 * Callees:
 *     ?CheckOccludedAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV1@@Z @ 0x1800AA59C (-CheckOccludedAndOptimize@@YA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AA600 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall CArrayBasedCoverageSet::IsCovered(__int64 a1, float *a2, int a3)
{
  __int64 v3; // r10
  unsigned int v4; // ebx
  char v5; // r15
  __int64 v6; // r9
  int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // r11
  int v10; // r14d
  int v11; // ebp
  unsigned int v12; // r11d
  char DoesIntersectUnsafe; // al
  __int64 v15; // r9
  int v16; // eax
  float *v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  v4 = *(_DWORD *)(a1 + 440);
  v5 = 0;
  v6 = a1;
  v7 = 0;
  v8 = 0;
  if ( v4 )
  {
    v9 = *(_QWORD *)(a1 + 416);
    do
    {
      v10 = v7;
      v11 = *(_DWORD *)(v9 + 36LL * v8 + 16);
      if ( v11 > a3 )
        break;
      DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v9 + 36LL * v8, a2);
      v7 = v11;
      if ( DoesIntersectUnsafe )
        v5 = 1;
      ++v8;
      if ( !DoesIntersectUnsafe )
        v7 = v10;
    }
    while ( v8 < v4 );
  }
  v12 = *(_DWORD *)(v6 + 48);
  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
    return 1;
  v18 = *(_OWORD *)a2;
  if ( v12 )
  {
    v15 = *(_QWORD *)(v6 + 24);
    do
    {
      v16 = *(_DWORD *)(v15 + 36 * v3 + 16);
      v17 = (float *)(v15 + 36 * v3);
      if ( v16 >= a3 )
        break;
      if ( v17[2] > *v17 && v17[3] > v17[1] && (!v5 || v16 > v7) && (unsigned __int8)CheckOccludedAndOptimize(&v18) )
        return 1;
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < v12 );
  }
  return 0;
}
