/*
 * XREFs of ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18007C3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180079F80 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007D9D4 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x18007DD10 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18007DF3C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0AEBV1@PEA_N2@Z @ 0x1800C9FB4 (-IntersectAndOptimize@@YA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x1800CF7F8 (-CalculateSubtractionRectangles@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800F0187 (ceilf_0.c)
 *     floorf_0 @ 0x1800F019F (floorf_0.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::ComputeVisibleRegion(
        __int64 a1,
        struct D2D_RECT_F *a2,
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
  bool DoesIntersectUnsafe; // al
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
  unsigned int v57; // ebx
  unsigned int v58; // r12d
  struct D2D_RECT_F *v59; // rdi
  __int64 v60; // rax
  struct D2D_RECT_F **v61; // rcx
  __int64 v62; // r8
  __int128 *v63; // rdx
  _OWORD *v64; // rax
  __int128 v65; // xmm0
  struct D2D_RECT_F v66; // xmm0
  char X; // [rsp+38h] [rbp-D0h] BYREF
  char X_1; // [rsp+39h] [rbp-CFh] BYREF
  char X_2; // [rsp+3Ah] [rbp-CEh]
  unsigned int X_4; // [rsp+3Ch] [rbp-CCh]
  __m128i X_8; // [rsp+40h] [rbp-C8h] BYREF
  struct D2D_RECT_F **v72; // [rsp+50h] [rbp-B8h]
  __int64 v73; // [rsp+58h] [rbp-B0h]
  _BYTE *v74; // [rsp+60h] [rbp-A8h]
  unsigned int *v75; // [rsp+68h] [rbp-A0h]
  struct D2D_RECT_F v76; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_RECT_F v77; // [rsp+80h] [rbp-88h] BYREF
  float v78; // [rsp+90h] [rbp-78h] BYREF
  float v79; // [rsp+94h] [rbp-74h]
  float v80; // [rsp+98h] [rbp-70h]
  float v81; // [rsp+9Ch] [rbp-6Ch]
  char v82[64]; // [rsp+A8h] [rbp-60h] BYREF
  char v83[64]; // [rsp+E8h] [rbp-20h] BYREF

  v7 = a5;
  v8 = a3;
  v9 = a7;
  v11 = a1;
  X_2 = a4;
  *a5 = 0;
  *a7 = 0;
  X_4 = a3;
  X_8.m128i_i64[0] = a1;
  v74 = a5;
  v72 = a6;
  v75 = a7;
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
      DoesIntersectUnsafe = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                              (float *)v37,
                              &a2->left);
      v17 = v41;
      if ( DoesIntersectUnsafe )
        v16 = 1;
      v18 = (unsigned int)(v39 + 1);
      if ( !DoesIntersectUnsafe )
        v17 = v36;
    }
    while ( (unsigned int)v18 < v40 );
    v7 = v74;
    v9 = v75;
    v8 = X_4;
  }
  v19 = *a2;
  LODWORD(v73) = 0;
  v20 = 0LL;
  v21 = 0;
  v22 = 0.0;
  v23 = 0.0;
  X = 0;
  v24 = 1;
  v77 = v19;
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
        v76 = *(struct D2D_RECT_F *)v30;
        if ( !IsEmpty(&v76) )
        {
          v42 = IntersectAndOptimize(
                  (unsigned int)&v78,
                  (unsigned int)&v77,
                  (unsigned int)&v76,
                  (unsigned int)&X_1,
                  (__int64)&X);
          v21 = X;
          v25 = v77.bottom;
          v26 = v77.right;
          v27 = v77.top;
          if ( v42 )
          {
            if ( X )
              goto LABEL_8;
            if ( X_1 )
              v22 = v28 - (float)((float)(v77.right - v77.left) * (float)(v77.bottom - v77.top));
            v44 = (float)((float)(v80 - v78) * (float)(v81 - v79)) + v22;
            if ( v44 > v23 )
            {
              LODWORD(v73) = v20;
              v23 = (float)((float)(v80 - v78) * (float)(v81 - v79)) + v22;
              if ( v44 >= v43 )
              {
                if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(v30, &v77) )
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
  if ( left == v77.left && top == v27 && right == v26 && bottom == v25
    || IsEmpty(a2) && IsEmpty(&v77)
    || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a2)
    && (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(&v77) )
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
      v82,
      16LL,
      4LL,
      (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    v45 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v11 + 24) + 36LL * (unsigned int)v73));
    X_8 = v45;
    if ( v77.left > *(float *)v45.m128i_i32 )
      v45.m128i_i32[0] = LODWORD(v77.left);
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
                            v82);
      `vector constructor iterator'(
        v83,
        16LL,
        4LL,
        (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
      v57 = 0;
      if ( (_DWORD)v56 )
      {
        v58 = X_4;
        v59 = (struct D2D_RECT_F *)v82;
        do
        {
          v76 = *v59;
          if ( !(unsigned __int8)CArrayBasedCoverageSet::IsCovered(v11, &v76, v58) )
          {
            v60 = 2LL * v57++;
            *(struct D2D_RECT_F *)&v83[8 * v60] = *v59;
          }
          ++v59;
          --v56;
        }
        while ( v56 );
        v7 = v74;
        v9 = v75;
        v32 = v72;
        if ( v57 )
        {
          v61 = v72;
          v62 = v57;
          v63 = (__int128 *)v83;
          do
          {
            v64 = *v61++;
            v65 = *v63++;
            *v64 = v65;
            --v62;
          }
          while ( v62 );
        }
      }
      else
      {
        v32 = v72;
      }
      *v7 = 1;
      *v9 = v57;
      goto LABEL_17;
    }
  }
  v32 = v72;
LABEL_17:
  if ( !*v7 && !v31 )
  {
    v66 = v77;
    *v7 = 1;
    *v9 = 1;
    **v32 = v66;
  }
  return 0LL;
}
