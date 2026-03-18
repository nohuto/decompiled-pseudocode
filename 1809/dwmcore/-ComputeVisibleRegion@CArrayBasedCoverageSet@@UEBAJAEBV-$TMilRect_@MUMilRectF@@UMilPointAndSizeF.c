/*
 * XREFs of ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800AB640
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002F61C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180030B00 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x180065EA0 (-CalculateSubtractionRectangles@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ?IntersectAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0AEBV1@PEA_N2@Z @ 0x180067510 (-IntersectAndOptimize@@YA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800AA470 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AA600 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 *     floorf_0 @ 0x1800F000F (floorf_0.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::ComputeVisibleRegion(
        __int64 a1,
        struct D2D_RECT_F *a2,
        int a3,
        char a4,
        _BYTE *a5,
        struct D2D_RECT_F **a6,
        unsigned int *a7)
{
  _BYTE *v7; // r15
  int v8; // r10d
  unsigned int *v9; // r13
  __int64 v11; // r12
  float right; // xmm10_4
  float left; // xmm7_4
  float bottom; // xmm11_4
  float top; // xmm8_4
  char v16; // r14
  int v17; // esi
  __int64 v18; // r8
  __int64 v19; // r11
  int v20; // r15d
  int v21; // edi
  __int64 v22; // rcx
  bool DoesIntersectUnsafe; // al
  int v24; // r8d
  unsigned int v25; // r9d
  int v26; // r10d
  struct D2D_RECT_F v27; // xmm0
  char v28; // r8
  __int64 v29; // r11
  float v30; // xmm9_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm13_4
  float v34; // xmm14_4
  float v35; // xmm6_4
  __int64 v36; // r12
  __int64 v37; // rdi
  bool v38; // r14
  struct D2D_RECT_F **v39; // r9
  bool v41; // al
  float v42; // xmm1_4
  __m128 v43; // xmm2
  float v44; // xmm6_4
  float v45; // xmm7_4
  float v46; // xmm8_4
  float v47; // xmm3_4
  float v48; // xmm1_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm1_4
  float v52; // xmm1_4
  float v53; // xmm1_4
  unsigned int v54; // eax
  unsigned int v55; // ebx
  int v56; // r15d
  _OWORD *v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rax
  struct D2D_RECT_F **v60; // rcx
  __int64 v61; // r8
  __int128 *v62; // rdx
  _OWORD *v63; // rax
  __int128 v64; // xmm0
  struct D2D_RECT_F v65; // xmm0
  char v66; // [rsp+38h] [rbp-D0h] BYREF
  char v67; // [rsp+39h] [rbp-CFh] BYREF
  char v68; // [rsp+3Ah] [rbp-CEh]
  int v69; // [rsp+3Ch] [rbp-CCh]
  struct D2D_RECT_F **v70; // [rsp+40h] [rbp-C8h]
  __int64 v71; // [rsp+48h] [rbp-C0h]
  struct D2D_RECT_F v72; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v73[3]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int *v74; // [rsp+78h] [rbp-90h]
  struct D2D_RECT_F v75; // [rsp+80h] [rbp-88h] BYREF
  struct D2D_RECT_F v76; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v77[64]; // [rsp+A8h] [rbp-60h] BYREF
  _OWORD v78[4]; // [rsp+E8h] [rbp-20h] BYREF

  v7 = a5;
  v8 = a3;
  v9 = a7;
  v11 = a1;
  v68 = a4;
  *a5 = 0;
  *a7 = 0;
  v69 = a3;
  *(_QWORD *)&v72.left = a1;
  v73[0] = a5;
  v70 = a6;
  v74 = a7;
  if ( !a3 )
    return 0LL;
  right = a2->right;
  left = a2->left;
  if ( right <= a2->left )
    return 0LL;
  bottom = a2->bottom;
  top = a2->top;
  if ( bottom <= top )
    return 0LL;
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  if ( *(_DWORD *)(a1 + 440) )
  {
    v19 = *(_QWORD *)(a1 + 416);
    v20 = v8;
    do
    {
      v21 = v17;
      v22 = v19 + 36 * v18;
      if ( *(_DWORD *)(v22 + 16) > v20 )
        break;
      DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                              (float *)v22,
                              &a2->left);
      v17 = v26;
      if ( DoesIntersectUnsafe )
        v16 = 1;
      v18 = (unsigned int)(v24 + 1);
      if ( !DoesIntersectUnsafe )
        v17 = v21;
    }
    while ( (unsigned int)v18 < v25 );
    v7 = (_BYTE *)v73[0];
    v8 = v69;
  }
  v27 = *a2;
  LODWORD(v71) = 0;
  v28 = 0;
  v66 = 0;
  v75 = v27;
  v29 = 0LL;
  v30 = v27.bottom;
  v31 = v27.right;
  v32 = v27.top;
  v33 = 0.0;
  v34 = 0.0;
  v35 = (float)(bottom - top) * (float)(right - left);
  if ( *(_DWORD *)(v11 + 48) )
  {
    v36 = *(_QWORD *)(v11 + 24);
    do
    {
      v37 = v36 + 36 * v29;
      if ( *(_DWORD *)(v37 + 16) >= v8 )
      {
LABEL_16:
        v11 = *(_QWORD *)&v72.left;
        goto LABEL_17;
      }
      if ( !v16 || *(_DWORD *)(v37 + 16) > v17 )
      {
        *(_OWORD *)&v73[1] = *(_OWORD *)v37;
        if ( !IsEmpty((const struct D2D_RECT_F *)&v73[1]) )
        {
          v41 = IntersectAndOptimize(&v76, &v75.left, (float *)&v73[1], &v67, &v66);
          v28 = v66;
          v30 = v75.bottom;
          v31 = v75.right;
          v32 = v75.top;
          if ( v41 )
          {
            if ( v66 )
              goto LABEL_16;
            if ( v67 )
              v33 = v35 - (float)((float)(v75.right - v75.left) * (float)(v75.bottom - v75.top));
            v42 = (float)((float)(v76.right - v76.left) * (float)(v76.bottom - v76.top)) + v33;
            if ( v42 > v34 )
            {
              LODWORD(v71) = v29;
              v34 = (float)((float)(v76.right - v76.left) * (float)(v76.bottom - v76.top)) + v33;
              if ( v42 >= (float)(v35 * 0.69999999)
                && TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)v37, &v75.left) )
              {
                goto LABEL_16;
              }
            }
          }
          v8 = v69;
        }
      }
      v29 = (unsigned int)(v29 + 1);
    }
    while ( (unsigned int)v29 < *(_DWORD *)(*(_QWORD *)&v72.left + 48LL) );
    v11 = *(_QWORD *)&v72.left;
  }
LABEL_17:
  v38 = left == v75.left && top == v32 && right == v31 && bottom == v30
     || IsEmpty(a2) && IsEmpty(&v75)
     || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(&a2->left)
     && TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(&v75.left);
  if ( v28 )
  {
    *v7 = 1;
    *a7 = 0;
  }
  else if ( v34 > (float)(v35 * 0.1) )
  {
    v43 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v11 + 24) + 36LL * (unsigned int)v71));
    LODWORD(v44) = _mm_shuffle_ps(v43, v43, 85).m128_u32[0];
    LODWORD(v45) = _mm_shuffle_ps(v43, v43, 170).m128_u32[0];
    LODWORD(v46) = _mm_shuffle_ps(v43, v43, 255).m128_u32[0];
    if ( v75.left > v43.m128_f32[0] )
      v43.m128_i32[0] = LODWORD(v75.left);
    v47 = v44;
    if ( v32 > v44 )
    {
      v44 = v32;
      v47 = v32;
    }
    v48 = v45;
    if ( v45 > v31 )
    {
      v45 = v31;
      v48 = v31;
    }
    v49 = v46;
    if ( v46 > v30 )
    {
      v46 = v30;
      v49 = v30;
    }
    if ( v48 <= v43.m128_f32[0] || v49 <= v47 )
    {
      v46 = 0.0;
      v45 = 0.0;
      v44 = 0.0;
      v43.m128_i32[0] = 0;
    }
    v50 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v43.m128_f32[0]) & _xmm);
    if ( v50 < 8388608.0 )
      v43.m128_f32[0] = (float)(int)ceilf_0(v43.m128_f32[0]);
    LODWORD(v72.left) = v43.m128_i32[0];
    v51 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v44) & _xmm);
    if ( v51 < 8388608.0 )
      v44 = (float)(int)ceilf_0(v44);
    v72.top = v44;
    v52 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v45) & _xmm);
    if ( v52 < 8388608.0 )
      v45 = (float)(int)floorf_0(v45);
    v72.right = v45;
    v53 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v46) & _xmm);
    if ( v53 < 8388608.0 )
      v46 = (float)(int)floorf_0(v46);
    v72.bottom = v46;
    if ( !IsEmpty(&v72) )
    {
      v54 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
              &a2->left,
              &v72.left,
              v68,
              (__int64)v77);
      v55 = 0;
      if ( v54 )
      {
        v56 = v69;
        v57 = v77;
        v58 = v54;
        do
        {
          *(_OWORD *)&v73[1] = *v57;
          if ( !CArrayBasedCoverageSet::IsCovered(v11, (float *)&v73[1], v56) )
          {
            v59 = v55++;
            v78[v59] = *v57;
          }
          ++v57;
          --v58;
        }
        while ( v58 );
        v7 = (_BYTE *)v73[0];
        v9 = v74;
        v39 = v70;
        if ( v55 )
        {
          v60 = v70;
          v61 = v55;
          v62 = v78;
          do
          {
            v63 = *v60++;
            v64 = *v62++;
            *v63 = v64;
            --v61;
          }
          while ( v61 );
        }
      }
      else
      {
        v39 = v70;
      }
      *v7 = 1;
      *v9 = v55;
      goto LABEL_25;
    }
  }
  v39 = v70;
LABEL_25:
  if ( !*v7 && !v38 )
  {
    v65 = v75;
    *v7 = 1;
    *v9 = 1;
    **v39 = v65;
  }
  return 0LL;
}
