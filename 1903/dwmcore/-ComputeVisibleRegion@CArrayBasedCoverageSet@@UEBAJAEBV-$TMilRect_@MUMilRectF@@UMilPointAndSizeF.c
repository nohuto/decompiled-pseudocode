/*
 * XREFs of ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x180083460
 * Callers:
 *     <none>
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180053490 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180053960 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180085BC4 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180089560 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IntersectAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0AEBV1@PEA_N2@Z @ 0x1800CA4DC (-IntersectAndOptimize@@YA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800CF608 (-CalculateSubtractionRectangles@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EC4DF (floorf_0.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::ComputeVisibleRegion(
        __int64 a1,
        const struct D2D_RECT_F *a2,
        unsigned int a3,
        char a4,
        _BYTE *a5,
        struct D2D_RECT_F **a6,
        unsigned int *a7)
{
  _BYTE *v7; // r12
  int v8; // r10d
  unsigned int *v9; // r13
  __int64 v11; // r15
  float right; // xmm11_4
  float left; // xmm6_4
  float bottom; // xmm12_4
  float top; // xmm10_4
  char v16; // r14
  int v17; // esi
  __int64 v18; // r8
  struct D2D_RECT_F v19; // xmm0
  __int64 v20; // r11
  char v21; // r8
  float v22; // xmm13_4
  float v23; // xmm14_4
  int v24; // r9d
  float v25; // xmm9_4
  float v26; // xmm8_4
  float v27; // xmm7_4
  float v28; // xmm4_4
  __int64 v29; // r15
  __int64 v30; // rbx
  char v31; // r14
  struct D2D_RECT_F **v32; // r9
  __int64 v34; // r11
  int v35; // r12d
  int v36; // ebx
  __int64 v37; // rcx
  char DoesIntersectUnsafe; // al
  int v39; // r8d
  unsigned int v40; // r9d
  int v41; // r10d
  char v42; // al
  float v43; // xmm5_4
  float v44; // xmm1_4
  __m128i v45; // xmm2
  float v46; // xmm6_4
  float v47; // xmm3_4
  float v48; // xmm7_4
  float v49; // xmm1_4
  float v50; // xmm8_4
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm1_4
  float v54; // xmm1_4
  __int64 v55; // r8
  __int64 v56; // rsi
  char v57; // r9
  unsigned int v58; // ebx
  unsigned int v59; // r12d
  struct D2D_RECT_F *v60; // rdi
  __int64 v61; // rax
  struct D2D_RECT_F **v62; // rcx
  __int64 v63; // r8
  __int128 *v64; // rdx
  _OWORD *v65; // rax
  __int128 v66; // xmm0
  struct D2D_RECT_F v67; // xmm0
  char X; // [rsp+38h] [rbp-D0h] BYREF
  char X_1; // [rsp+39h] [rbp-CFh] BYREF
  char X_2; // [rsp+3Ah] [rbp-CEh]
  unsigned int X_4; // [rsp+3Ch] [rbp-CCh]
  __m128i X_8; // [rsp+40h] [rbp-C8h] BYREF
  struct D2D_RECT_F **v73; // [rsp+50h] [rbp-B8h]
  __int64 v74; // [rsp+58h] [rbp-B0h]
  _BYTE *v75; // [rsp+60h] [rbp-A8h]
  unsigned int *v76; // [rsp+68h] [rbp-A0h]
  struct D2D_RECT_F v77; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_RECT_F v78; // [rsp+80h] [rbp-88h] BYREF
  float v79; // [rsp+90h] [rbp-78h] BYREF
  float v80; // [rsp+94h] [rbp-74h]
  float v81; // [rsp+98h] [rbp-70h]
  float v82; // [rsp+9Ch] [rbp-6Ch]
  char v83[64]; // [rsp+A8h] [rbp-60h] BYREF
  char v84[64]; // [rsp+E8h] [rbp-20h] BYREF

  v7 = a5;
  v8 = a3;
  v9 = a7;
  v11 = a1;
  X_2 = a4;
  *a5 = 0;
  *a7 = 0;
  X_4 = a3;
  X_8.m128i_i64[0] = a1;
  v75 = a5;
  v73 = a6;
  v76 = a7;
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
    v34 = *(_QWORD *)(a1 + 416);
    v35 = v8;
    do
    {
      v36 = v17;
      v37 = v34 + 36 * v18;
      if ( *(_DWORD *)(v37 + 16) > v35 )
        break;
      DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v37, a2);
      v17 = v41;
      if ( DoesIntersectUnsafe )
        v16 = 1;
      v18 = (unsigned int)(v39 + 1);
      if ( !DoesIntersectUnsafe )
        v17 = v36;
    }
    while ( (unsigned int)v18 < v40 );
    v7 = v75;
    v9 = v76;
    v8 = X_4;
  }
  v19 = *a2;
  LODWORD(v74) = 0;
  v20 = 0LL;
  v21 = 0;
  v22 = 0.0;
  v23 = 0.0;
  X = 0;
  v24 = 1;
  v78 = v19;
  v25 = v19.bottom;
  v26 = v19.right;
  v27 = v19.top;
  v28 = (float)(bottom - top) * (float)(right - left);
  if ( *(_DWORD *)(v11 + 48) )
  {
    v29 = *(_QWORD *)(v11 + 24);
    do
    {
      v30 = v29 + 36 * v20;
      if ( *(_DWORD *)(v30 + 16) >= v8 )
      {
LABEL_8:
        v11 = X_8.m128i_i64[0];
        LOBYTE(v24) = 1;
        goto LABEL_9;
      }
      if ( !v16 || *(_DWORD *)(v30 + 16) > v17 )
      {
        v77 = *(struct D2D_RECT_F *)v30;
        if ( !IsEmpty(&v77) )
        {
          v42 = IntersectAndOptimize(
                  (unsigned int)&v79,
                  (unsigned int)&v78,
                  (unsigned int)&v77,
                  (unsigned int)&X_1,
                  (__int64)&X);
          v21 = X;
          v25 = v78.bottom;
          v26 = v78.right;
          v27 = v78.top;
          if ( v42 )
          {
            if ( X )
              goto LABEL_8;
            if ( X_1 )
              v22 = v28 - (float)((float)(v78.right - v78.left) * (float)(v78.bottom - v78.top));
            v44 = (float)((float)(v81 - v79) * (float)(v82 - v80)) + v22;
            if ( v44 > v23 )
            {
              LODWORD(v74) = v20;
              v23 = (float)((float)(v81 - v79) * (float)(v82 - v80)) + v22;
              if ( v44 >= v43
                && TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)v30, &v78.left) )
              {
                goto LABEL_8;
              }
            }
          }
          v8 = X_4;
          v24 = 1;
        }
      }
      v20 = (unsigned int)(v24 + v20);
    }
    while ( (unsigned int)v20 < *(_DWORD *)(X_8.m128i_i64[0] + 48) );
    v11 = X_8.m128i_i64[0];
  }
LABEL_9:
  if ( left == v78.left && top == v27 && right == v26 && bottom == v25
    || IsEmpty(a2) && IsEmpty(&v78)
    || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a2)
    && (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(&v78) )
  {
    v31 = v24;
  }
  else
  {
    v31 = 0;
  }
  if ( v21 )
  {
    *v7 = v24;
    *v9 = 0;
  }
  else if ( v23 > (float)(v28 * 0.1) )
  {
    `vector constructor iterator'(
      v83,
      16LL,
      4LL,
      (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    v45 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v11 + 24) + 36LL * (unsigned int)v74));
    X_8 = v45;
    if ( v78.left > *(float *)v45.m128i_i32 )
      v45.m128i_i32[0] = LODWORD(v78.left);
    v46 = *(float *)&X_8.m128i_i32[1];
    v47 = *(float *)&X_8.m128i_i32[1];
    if ( v27 > *(float *)&X_8.m128i_i32[1] )
    {
      v46 = v27;
      v47 = v27;
    }
    v48 = *(float *)&X_8.m128i_i32[2];
    v49 = *(float *)&X_8.m128i_i32[2];
    if ( *(float *)&X_8.m128i_i32[2] > v26 )
    {
      v48 = v26;
      v49 = v26;
    }
    v50 = *(float *)&X_8.m128i_i32[3];
    v51 = *(float *)&X_8.m128i_i32[3];
    if ( *(float *)&X_8.m128i_i32[3] > v25 )
    {
      v50 = v25;
      v51 = v25;
    }
    if ( v49 <= *(float *)v45.m128i_i32 || v51 <= v47 )
    {
      v50 = 0.0;
      v48 = 0.0;
      v46 = 0.0;
      v45.m128i_i32[0] = 0;
    }
    v52 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v45.m128i_i32) & _xmm);
    if ( v52 < 8388608.0 )
      *(float *)v45.m128i_i32 = (float)(int)ceilf_0(*(float *)v45.m128i_i32);
    X_8.m128i_i32[0] = v45.m128i_i32[0];
    v53 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v46) & _xmm);
    if ( v53 < 8388608.0 )
      v46 = (float)(int)ceilf_0(v46);
    *(float *)&X_8.m128i_i32[1] = v46;
    v54 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v48) & _xmm);
    if ( v54 < 8388608.0 )
      v48 = (float)(int)floorf_0(v48);
    *(float *)&X_8.m128i_i32[2] = v48;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v50) & _xmm) < 8388608.0 )
      v50 = (float)(int)floorf_0(v50);
    *(float *)&X_8.m128i_i32[3] = v50;
    if ( !IsEmpty((const struct D2D_RECT_F *)&X_8) )
    {
      LOBYTE(v55) = X_2;
      v56 = (unsigned int)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(
                            a2,
                            &X_8,
                            v55,
                            v83);
      `vector constructor iterator'(
        v84,
        16LL,
        4LL,
        (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
      v58 = 0;
      if ( (_DWORD)v56 )
      {
        v59 = X_4;
        v60 = (struct D2D_RECT_F *)v83;
        do
        {
          v77 = *v60;
          if ( !CArrayBasedCoverageSet::IsCovered(v11, (__int64)&v77, v59, v57) )
          {
            v61 = 2LL * v58++;
            *(struct D2D_RECT_F *)&v84[8 * v61] = *v60;
          }
          ++v60;
          --v56;
        }
        while ( v56 );
        v7 = v75;
        v9 = v76;
        v32 = v73;
        if ( v58 )
        {
          v62 = v73;
          v63 = v58;
          v64 = (__int128 *)v84;
          do
          {
            v65 = *v62++;
            v66 = *v64++;
            *v65 = v66;
            --v63;
          }
          while ( v63 );
        }
      }
      else
      {
        v32 = v73;
      }
      *v7 = 1;
      *v9 = v58;
      goto LABEL_17;
    }
  }
  v32 = v73;
LABEL_17:
  if ( !*v7 && !v31 )
  {
    v67 = v78;
    *v7 = 1;
    *v9 = 1;
    **v32 = v67;
  }
  return 0LL;
}
