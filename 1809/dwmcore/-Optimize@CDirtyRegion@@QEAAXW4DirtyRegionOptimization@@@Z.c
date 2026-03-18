/*
 * XREFs of ?Optimize@CDirtyRegion@@QEAAXW4DirtyRegionOptimization@@@Z @ 0x1800461B0
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18005CB5C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x180066224 (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     ?CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z @ 0x18007034C (-CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AA600 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180176B28 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x180176C64 (-SetRedrawRects@CDirtyRegion@@AEAAXXZ.c)
 */

void __fastcall CDirtyRegion::Optimize(__int64 a1, int a2)
{
  unsigned int v3; // r14d
  unsigned int v4; // edi
  char v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned int v8; // eax
  int v9; // edx
  bool v10; // zf
  __int64 v11; // r8
  float *v12; // r13
  float *v13; // r9
  const struct MilRectF *v14; // rdx
  __int64 v15; // r10
  float v16; // xmm4_4
  float v17; // xmm1_4
  __int64 v18; // r9
  float v19; // xmm3_4
  float v20; // xmm2_4
  bool v21; // cc
  bool v22; // al
  float v23; // xmm2_4
  float v24; // xmm1_4
  __int64 v25; // rbp
  __int64 v26; // r11
  __int64 v27; // r8
  float *v28; // r10
  unsigned int v29; // edx
  __int64 v30; // rcx
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  __int64 v37; // rdx
  __int64 v38; // r8
  float *v39; // rcx
  float v40; // xmm1_4
  _QWORD *v41; // rdx
  _QWORD *v42; // r9
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm2_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm2_4
  float v63; // xmm2_4
  const struct CDirtyRegion::DirtyRegionCachedData *v64; // rdx
  CDirtyRegion *v65; // rcx
  float v66; // xmm0_4
  __int64 v67; // rdx
  float *v68; // rcx
  __int64 v69; // r10
  const struct D2D_RECT_F *v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rcx
  __int64 v73; // [rsp+20h] [rbp-A8h]
  __m128 v74; // [rsp+28h] [rbp-A0h] BYREF
  unsigned int v75; // [rsp+D0h] [rbp+8h]
  unsigned int v77; // [rsp+E0h] [rbp+18h]
  float *v78; // [rsp+E8h] [rbp+20h]

  if ( *(_BYTE *)(a1 + 2883) )
  {
    v9 = 1;
    goto LABEL_17;
  }
  v3 = 0;
  memset_0((void *)(a1 + 1116), 0, 0x80uLL);
  if ( *(_BYTE *)(a1 + 2885) )
  {
    v70 = (const struct D2D_RECT_F *)(a1 + 24);
    v71 = 8LL;
    do
    {
      if ( !IsEmpty(v70) )
        InflateRectF_InPlace(v72);
      ++v70;
      --v71;
    }
    while ( v71 );
  }
  v4 = 0;
  do
  {
    v5 = 0;
    v6 = 16LL * v4;
    v7 = v6 + a1;
    if ( *(float *)(v6 + a1 + 32) <= *(float *)(v6 + a1 + 24) )
      goto LABEL_5;
    if ( *(float *)(v7 + 36) <= *(float *)(v7 + 28) )
      goto LABEL_5;
    v11 = v4 + 1;
    v77 = v11;
    v75 = v4 + 1;
    if ( (unsigned int)v11 >= 8 )
      goto LABEL_5;
    v12 = (float *)(16LL * (unsigned int)v11 + a1 + 36);
    v13 = (float *)(a1 + 4 * (v4 + 8 * v11 + 134));
    v78 = v13;
    while ( 1 )
    {
      if ( *(v12 - 1) > *(v12 - 3) && *v12 > *(v12 - 2) )
      {
        v74.m128_u64[0] = 16LL * (unsigned int)v11 + a1 + 24;
        v73 = (unsigned int)v11;
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                v7 + 24,
                                v74.m128_u64[0]) )
          goto LABEL_28;
        if ( a2 )
          break;
      }
LABEL_24:
      LODWORD(v11) = v11 + 1;
      v13 += 8;
      v12 += 4;
      v75 = v11;
      v78 = v13;
      if ( (unsigned int)v11 >= 8 )
        goto LABEL_5;
    }
    if ( *v13 >= 0.86000001 )
      goto LABEL_28;
    if ( CalcOvehead((const struct MilRectF *)(v7 + 24), v14) >= 50000.0 )
    {
      LODWORD(v11) = v75;
      v13 = v78;
      goto LABEL_24;
    }
    v14 = (const struct MilRectF *)v74.m128_u64[0];
LABEL_28:
    v74 = *(__m128 *)(v7 + 24);
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v74, v14);
    v16 = v74.m128_f32[0];
    v17 = v74.m128_f32[3];
    v18 = v6 + a1 + 408;
    v19 = v74.m128_f32[1];
    v20 = _mm_shuffle_ps(v74, v74, 170).m128_f32[0];
    v21 = v20 <= v74.m128_f32[0];
    *(__m128 *)(v7 + 24) = v74;
    v22 = v21 || v17 <= v19;
    *(_BYTE *)(v18 + 12) = v22;
    v23 = v20 - v16;
    v24 = v17 - v19;
    v25 = 16 * v15;
    *(float *)(v18 + 8) = v23 * v24;
    *(float *)v18 = (float)(v23 * 0.5) + v16;
    *(float *)(v18 + 4) = (float)(v24 * 0.5) + v19;
    *(_BYTE *)(a1 + v25 + 420) = 1;
    *(_DWORD *)(a1 + 16 * (v15 + 26)) = 0;
    *(_QWORD *)(a1 + v25 + 408) = 0LL;
    *(_QWORD *)(a1 + v25 + 32) = 0LL;
    *(_QWORD *)(a1 + v25 + 24) = 0LL;
    if ( v4 )
    {
      v64 = (const struct CDirtyRegion::DirtyRegionCachedData *)(a1 + 408);
      v65 = (CDirtyRegion *)(32LL * v4 + a1 + 536);
      do
      {
        v66 = CDirtyRegion::CalcAcceleration(v65, v64, (const struct CDirtyRegion::DirtyRegionCachedData *)v18);
        v64 = (const struct CDirtyRegion::DirtyRegionCachedData *)(v67 + 16);
        *v68 = v66;
        v65 = (CDirtyRegion *)(v68 + 1);
      }
      while ( v69 != 1 );
    }
    v26 = v77;
    if ( v77 < 8 )
    {
      if ( 8 - v77 >= 6 )
      {
        v27 = 16LL * v77 + a1 + 412;
        v28 = (float *)(a1 + 4 * (v4 + 8LL * v77 + 142));
        v29 = (2 - v77) / 6 + 1;
        v30 = v29;
        v26 = v77 + 6 * v29;
        do
        {
          v31 = 0.0;
          if ( *(_BYTE *)(v27 + 8) )
          {
            if ( !*(_BYTE *)(v18 + 12) )
              v31 = FLOAT_3_4028235e38;
          }
          else if ( !*(_BYTE *)(v18 + 12) )
          {
            v57 = (float)((float)(*(float *)v27 - *(float *)(v18 + 4)) * (float)(*(float *)v27 - *(float *)(v18 + 4)))
                + (float)((float)(*(float *)(v27 - 4) - *(float *)v18) * (float)(*(float *)(v27 - 4) - *(float *)v18));
            if ( v57 != 0.0 )
              v31 = (float)(*(float *)(v27 + 4) + *(float *)(v18 + 8)) / v57;
          }
          *(v28 - 8) = v31;
          v32 = 0.0;
          if ( *(_BYTE *)(v27 + 24) )
          {
            if ( !*(_BYTE *)(v18 + 12) )
              v32 = FLOAT_3_4028235e38;
          }
          else if ( !*(_BYTE *)(v18 + 12) )
          {
            v58 = (float)((float)(*(float *)(v27 + 16) - *(float *)(v18 + 4))
                        * (float)(*(float *)(v27 + 16) - *(float *)(v18 + 4)))
                + (float)((float)(*(float *)(v27 + 12) - *(float *)v18) * (float)(*(float *)(v27 + 12) - *(float *)v18));
            if ( v58 != 0.0 )
              v32 = (float)(*(float *)(v27 + 20) + *(float *)(v18 + 8)) / v58;
          }
          *v28 = v32;
          v33 = 0.0;
          if ( *(_BYTE *)(v27 + 40) )
          {
            if ( !*(_BYTE *)(v18 + 12) )
              v33 = FLOAT_3_4028235e38;
          }
          else if ( !*(_BYTE *)(v18 + 12) )
          {
            v59 = (float)((float)(*(float *)(v27 + 32) - *(float *)(v18 + 4))
                        * (float)(*(float *)(v27 + 32) - *(float *)(v18 + 4)))
                + (float)((float)(*(float *)(v27 + 28) - *(float *)v18) * (float)(*(float *)(v27 + 28) - *(float *)v18));
            if ( v59 != 0.0 )
              v33 = (float)(*(float *)(v27 + 36) + *(float *)(v18 + 8)) / v59;
          }
          v28[8] = v33;
          v34 = 0.0;
          if ( *(_BYTE *)(v27 + 56) )
          {
            if ( !*(_BYTE *)(v18 + 12) )
              v34 = FLOAT_3_4028235e38;
          }
          else if ( !*(_BYTE *)(v18 + 12) )
          {
            v60 = (float)((float)(*(float *)(v27 + 48) - *(float *)(v18 + 4))
                        * (float)(*(float *)(v27 + 48) - *(float *)(v18 + 4)))
                + (float)((float)(*(float *)(v27 + 44) - *(float *)v18) * (float)(*(float *)(v27 + 44) - *(float *)v18));
            if ( v60 != 0.0 )
              v34 = (float)(*(float *)(v27 + 52) + *(float *)(v18 + 8)) / v60;
          }
          v28[16] = v34;
          v35 = 0.0;
          if ( *(_BYTE *)(v27 + 72) )
          {
            if ( !*(_BYTE *)(v18 + 12) )
              v35 = FLOAT_3_4028235e38;
          }
          else if ( !*(_BYTE *)(v18 + 12) )
          {
            v61 = (float)((float)(*(float *)(v27 + 64) - *(float *)(v18 + 4))
                        * (float)(*(float *)(v27 + 64) - *(float *)(v18 + 4)))
                + (float)((float)(*(float *)(v27 + 60) - *(float *)v18) * (float)(*(float *)(v27 + 60) - *(float *)v18));
            if ( v61 != 0.0 )
              v35 = (float)(*(float *)(v27 + 68) + *(float *)(v18 + 8)) / v61;
          }
          v28[24] = v35;
          v36 = 0.0;
          if ( *(_BYTE *)(v27 + 88) )
          {
            if ( !*(_BYTE *)(v18 + 12) )
              v36 = FLOAT_3_4028235e38;
          }
          else if ( !*(_BYTE *)(v18 + 12) )
          {
            v62 = (float)((float)(*(float *)(v27 + 80) - *(float *)(v18 + 4))
                        * (float)(*(float *)(v27 + 80) - *(float *)(v18 + 4)))
                + (float)((float)(*(float *)(v27 + 76) - *(float *)v18) * (float)(*(float *)(v27 + 76) - *(float *)v18));
            if ( v62 != 0.0 )
              v36 = (float)(*(float *)(v27 + 84) + *(float *)(v18 + 8)) / v62;
          }
          v28[32] = v36;
          v27 += 96LL;
          v28 += 48;
          --v30;
        }
        while ( v30 );
      }
      if ( (unsigned int)v26 < 8 )
      {
        v37 = 16LL * (unsigned int)v26 + a1 + 412;
        v38 = (unsigned int)(8 - v26);
        v39 = (float *)(a1 + 4 * (v4 + 8 * v26 + 134));
        do
        {
          v40 = 0.0;
          if ( *(_BYTE *)(v37 + 8) )
          {
            if ( !*(_BYTE *)(v18 + 12) )
              v40 = FLOAT_3_4028235e38;
          }
          else if ( !*(_BYTE *)(v18 + 12) )
          {
            v63 = (float)((float)(*(float *)v37 - *(float *)(v18 + 4)) * (float)(*(float *)v37 - *(float *)(v18 + 4)))
                + (float)((float)(*(float *)(v37 - 4) - *(float *)v18) * (float)(*(float *)(v37 - 4) - *(float *)v18));
            if ( v63 != 0.0 )
              v40 = (float)(*(float *)(v37 + 4) + *(float *)(v18 + 8)) / v63;
          }
          *v39 = v40;
          v37 += 16LL;
          v39 += 8;
          --v38;
        }
        while ( v38 );
      }
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6 + a1 + 152, v25 + a1 + 152);
    v41[1] = 0LL;
    v42 = (_QWORD *)(v25 + a1 + 280);
    *v41 = 0LL;
    if ( (_QWORD *)*v42 != v42 )
    {
      **(_QWORD **)(a1 + 16 * (v4 + 18LL)) = *v42;
      *(_QWORD *)(*v42 + 8LL) = *(_QWORD *)(a1 + 16 * (v4 + 18LL));
      **(_QWORD **)(a1 + 16 * (v73 + 18)) = v6 + a1 + 280;
      *(_QWORD *)(a1 + 16 * (v4 + 18LL)) = *(_QWORD *)(a1 + 16 * (v73 + 18));
      v42[1] = v42;
      *v42 = v42;
    }
    v5 = 1;
LABEL_5:
    v8 = v4 + 1;
    v4 = 0;
    if ( !v5 )
      v4 = v8;
  }
  while ( v4 < 8 );
  if ( *(float *)(a1 + 32) > *(float *)(a1 + 24) && *(float *)(a1 + 36) > *(float *)(a1 + 28) )
  {
    *(_OWORD *)(a1 + 1116) = *(_OWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 1244) = 0;
    v3 = 1;
  }
  if ( *(float *)(a1 + 48) > *(float *)(a1 + 40) && *(float *)(a1 + 52) > *(float *)(a1 + 44) )
  {
    v43 = 2LL * v3;
    v44 = v3++;
    *(_OWORD *)(a1 + 8 * v43 + 1116) = *(_OWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 4 * v44 + 1244) = 1;
  }
  if ( *(float *)(a1 + 64) > *(float *)(a1 + 56) && *(float *)(a1 + 68) > *(float *)(a1 + 60) )
  {
    v45 = 2LL * v3;
    v46 = v3++;
    *(_OWORD *)(a1 + 8 * v45 + 1116) = *(_OWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 4 * v46 + 1244) = 2;
  }
  if ( *(float *)(a1 + 80) > *(float *)(a1 + 72) && *(float *)(a1 + 84) > *(float *)(a1 + 76) )
  {
    v47 = 2LL * v3;
    v48 = v3++;
    *(_OWORD *)(a1 + 8 * v47 + 1116) = *(_OWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 4 * v48 + 1244) = 3;
  }
  if ( *(float *)(a1 + 96) > *(float *)(a1 + 88) && *(float *)(a1 + 100) > *(float *)(a1 + 92) )
  {
    v49 = 2LL * v3;
    v50 = v3++;
    *(_OWORD *)(a1 + 8 * v49 + 1116) = *(_OWORD *)(a1 + 88);
    *(_DWORD *)(a1 + 4 * v50 + 1244) = 4;
  }
  if ( *(float *)(a1 + 112) > *(float *)(a1 + 104) && *(float *)(a1 + 116) > *(float *)(a1 + 108) )
  {
    v51 = 2LL * v3;
    v52 = v3++;
    *(_OWORD *)(a1 + 8 * v51 + 1116) = *(_OWORD *)(a1 + 104);
    *(_DWORD *)(a1 + 4 * v52 + 1244) = 5;
  }
  if ( *(float *)(a1 + 128) > *(float *)(a1 + 120) && *(float *)(a1 + 132) > *(float *)(a1 + 124) )
  {
    v53 = 2LL * v3;
    v54 = v3++;
    *(_OWORD *)(a1 + 8 * v53 + 1116) = *(_OWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 4 * v54 + 1244) = 6;
  }
  if ( *(float *)(a1 + 144) > *(float *)(a1 + 136) && *(float *)(a1 + 148) > *(float *)(a1 + 140) )
  {
    v55 = 2LL * v3;
    v56 = v3++;
    *(_OWORD *)(a1 + 8 * v55 + 1116) = *(_OWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 4 * v56 + 1244) = 7;
  }
  v9 = v3;
LABEL_17:
  *(_DWORD *)(a1 + 1276) = v9;
  v10 = *(_BYTE *)(a1 + 2881) == 0;
  *(_BYTE *)(a1 + 2886) = 1;
  if ( v10 )
  {
    if ( *(_BYTE *)(a1 + 2882) )
    {
      CDirtyRegion::SetFullDirty((CDirtyRegion *)a1);
      *(_BYTE *)(a1 + 2882) = 0;
    }
  }
  else
  {
    CDirtyRegion::SetRedrawRects((CDirtyRegion *)a1);
    CDirtyRegion::SetFullDirty((CDirtyRegion *)a1);
    *(_WORD *)(a1 + 2881) = 0;
  }
}
