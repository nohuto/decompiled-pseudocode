/*
 * XREFs of ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18007DD10
 * Callers:
 *     ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18007C3E0 (-ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18007DD00 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x18007DDF0 (-IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 */

char __fastcall CArrayBasedCoverageSet::IsCovered(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // di
  const struct D2D_RECT_F *v6; // rdx
  __int128 *v7; // rdx
  int v8; // r8d
  int v9; // r11d
  __int64 v11; // r9
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  __int64 v15; // r10
  int v16; // ebx
  int v17; // edx
  float *v18; // rcx
  int v19; // r9d
  unsigned int v20; // r11d
  float v21; // xmm4_4
  float v22; // xmm5_4
  __int128 v23; // [rsp+20h] [rbp-18h]
  int v24; // [rsp+58h] [rbp+20h] BYREF

  LOBYTE(v24) = a4;
  v5 = CArrayBasedCoverageSet::IntersectsWithAntiOccluder(a1, a2, a3, &v24);
  if ( IsEmpty(v6) )
    return 1;
  v11 = 0LL;
  v23 = *v7;
  if ( v9 )
  {
    v15 = *(_QWORD *)(a1 + 24);
    v16 = v24;
    LODWORD(v14) = HIDWORD(*v7);
    do
    {
      if ( *(_DWORD *)(v15 + 36 * v11 + 16) >= v8 )
        break;
      if ( !IsEmpty((const struct D2D_RECT_F *)(v15 + 36 * v11))
        && (!v5 || v17 > v16)
        && *(float *)&v23 >= *v18
        && v18[2] >= v22 )
      {
        v12 = v18[1];
        v13 = v18[3];
        if ( v21 < v12 )
        {
          if ( v13 >= v14 && v14 > v12 )
            v14 = v18[1];
        }
        else if ( v13 >= v14 )
        {
          return 1;
        }
      }
      v11 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v11 < v20 );
  }
  return 0;
}
