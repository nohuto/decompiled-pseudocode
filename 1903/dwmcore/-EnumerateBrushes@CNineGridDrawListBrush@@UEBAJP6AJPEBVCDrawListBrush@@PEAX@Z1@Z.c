/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x18000EC90
 * Callers:
 *     <none>
 * Callees:
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x18000E9F8 (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18000EA7C (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18000F584 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x18000FB00 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x180051E20 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180052C34 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800BA038 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BA950 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800BF720 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800C75E0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801FC720 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        int (*a2)(const struct CDrawListBrush *, void *),
        void *a3)
{
  char *v3; // rsi
  __int64 v4; // rax
  int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r14
  CSurfaceDrawListBrush *v9; // rcx
  CSurfaceDrawListBrush *v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  __m128 *v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  unsigned int v18; // r13d
  _BYTE *v19; // r8
  __int64 v20; // r12
  _BYTE *v21; // r9
  _BYTE *v22; // rdx
  __int64 v23; // r14
  __int64 v24; // r15
  float v25; // xmm0_4
  float v26; // xmm2_4
  unsigned int v27; // r11d
  unsigned __int64 v28; // rax
  __int64 v29; // r10
  float v30; // xmm4_4
  __int64 v31; // rsi
  float v32; // xmm3_4
  float v33; // xmm2_4
  char v34; // r11
  unsigned int v35; // xmm1_4
  unsigned int v36; // xmm0_4
  unsigned int v37; // xmm0_4
  unsigned int v38; // xmm1_4
  float v39; // xmm12_4
  float v40; // xmm11_4
  float v41; // xmm4_4
  float v42; // xmm7_4
  float v43; // xmm5_4
  float v44; // xmm8_4
  struct D2D_MATRIX_3X2_F *v45; // r9
  int v46; // edx
  unsigned int v47; // edx
  int v48; // eax
  int v49; // edx
  int v50; // edi
  int v51; // edi
  __int64 v52; // r11
  __int64 v53; // rax
  CSurfaceDrawListBrush *v54; // rcx
  void *v55; // rdx
  struct D2D_RECT_F v56; // xmm0
  CSurfaceDrawListBrush *v57; // rax
  int v58; // eax
  unsigned int v59; // ecx
  void *v60; // rcx
  bool v61; // zf
  void *v62; // rcx
  void *v63; // rcx
  void *v64; // rcx
  float v66; // xmm1_4
  float v67; // xmm2_4
  __int64 v68; // rax
  struct D2D_RECT_F v69; // xmm0
  struct D2D_MATRIX_3X2_F *v70; // r9
  __int64 v71; // rax
  __int64 v72; // xmm1_8
  int v73; // eax
  unsigned int v74; // ecx
  __int64 v75; // rax
  int v76; // eax
  unsigned int v77; // ecx
  float v78; // xmm0_4
  float v79; // xmm4_4
  __m128 left_low; // xmm2
  __int64 v81; // rax
  __m128 top_low; // xmm1
  float v83; // xmm0_4
  void *v84; // rcx
  void *v85; // rcx
  void *v86; // rcx
  CSurfaceDrawListBrush *v87; // [rsp+48h] [rbp-C0h] BYREF
  int v88; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v89; // [rsp+68h] [rbp-A0h] BYREF
  char v90; // [rsp+78h] [rbp-90h]
  struct D2D_RECT_F v91; // [rsp+88h] [rbp-80h] BYREF
  struct D2D_RECT_F v92; // [rsp+98h] [rbp-70h] BYREF
  __int64 v93; // [rsp+A8h] [rbp-60h]
  struct D2D_RECT_F v94; // [rsp+B0h] [rbp-58h] BYREF
  __m128 v95; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v96; // [rsp+D8h] [rbp-30h]
  void *v97; // [rsp+E0h] [rbp-28h]
  int (*v98)(const struct CDrawListBrush *, void *); // [rsp+E8h] [rbp-20h]
  struct D2D_RECT_F v99; // [rsp+F0h] [rbp-18h] BYREF
  FLOAT bottom; // [rsp+100h] [rbp-8h]
  int v101; // [rsp+104h] [rbp-4h]
  __int64 v102; // [rsp+108h] [rbp+0h]
  int v103; // [rsp+110h] [rbp+8h]
  _BYTE v104[40]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE *v105; // [rsp+140h] [rbp+38h] BYREF
  _BYTE *v106; // [rsp+148h] [rbp+40h]
  _BYTE **v107; // [rsp+150h] [rbp+48h]
  _BYTE v108[24]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE *v109; // [rsp+170h] [rbp+68h] BYREF
  _BYTE *v110; // [rsp+178h] [rbp+70h]
  _QWORD *v111; // [rsp+180h] [rbp+78h]
  _BYTE v112[24]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v113[3]; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v114[24]; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v115[3]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE v116[24]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v117; // [rsp+200h] [rbp+F8h] BYREF

  v3 = (char *)this + 112;
  v97 = a3;
  v4 = *((_QWORD *)this + 15) - *((_QWORD *)this + 14);
  v98 = a2;
  v6 = 0;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) == 0
    && ((*((_QWORD *)this + 38) - *((_QWORD *)this + 37)) & 0xFFFFFFFFFFFFFFF0uLL) == 0
    && ((*((_QWORD *)this + 61) - *((_QWORD *)this + 60)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    v75 = *((_QWORD *)this + 9);
    *(_OWORD *)(v75 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v75 + 24) = *((_QWORD *)this + 3);
    v76 = ((__int64 (__fastcall *)(_QWORD, void *))a2)(*((_QWORD *)this + 9), a3);
    v6 = v76;
    if ( v76 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x96u, 0LL);
    return (unsigned int)v6;
  }
  v7 = *((_QWORD *)this + 9);
  v87 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, int (*)(const struct CDrawListBrush *, void *), void *))(*(_QWORD *)v7 + 8LL))(
         v7,
         2LL,
         a2,
         a3) )
  {
    v8 = *((_QWORD *)this + 9);
    v89.m128_u64[0] = (unsigned __int64)&v87;
    v89.m128_u64[1] = 0LL;
    v90 = 1;
    LOWORD(v88) = *(_WORD *)(v8 + 80);
    BYTE2(v88) = *(_BYTE *)(v8 + 82);
    v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(v8 + 56, &v88, &Matrix3x3::Identity, &v89.m128_u16[4]);
    if ( v90 )
    {
      v9 = *(CSurfaceDrawListBrush **)v89.m128_u64[0];
      *(_QWORD *)v89.m128_u64[0] = v89.m128_u64[1];
      if ( v9 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v9, 1u);
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, v6, 0xA5u, 0LL);
      goto LABEL_43;
    }
    *(_OWORD *)((char *)v87 + 120) = *(_OWORD *)(v8 + 120);
    v10 = v87;
    *(_OWORD *)((char *)v87 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v10 + 3) = *((_QWORD *)this + 3);
    *((_BYTE *)v87 + 144) = 0;
    if ( *((_BYTE *)this + 64) )
      CSurfaceDrawListBrush::SetSnapToPixelsReference(v87, (const struct D2D_VECTOR_2F *)this + 7);
  }
  v105 = v108;
  v106 = v108;
  v107 = &v109;
  v109 = v112;
  v110 = v112;
  v111 = v113;
  CoordMap::ComputeMeshPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (int)v3,
    (int)&v105,
    (int)&v109,
    (__int64)this + 32,
    SLODWORD(FLOAT_1_1920929eN7));
  v11 = (unsigned __int64)v109;
  v115[0] = v116;
  v115[1] = v116;
  v115[2] = &v117;
  v113[0] = v114;
  v113[1] = v114;
  v113[2] = v115;
  v12 = gsl::narrow<__int64,unsigned __int64>((v110 - v109) >> 2);
  v89.m128_u64[0] = v12;
  if ( v12 < 0
    || (v89.m128_u64[1] = v11) == 0 && v12
    || (v13 = (__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(&v94, &v89),
        v14 = (unsigned __int64)v105,
        v95 = *v13,
        v15 = gsl::narrow<__int64,unsigned __int64>((v106 - v105) >> 2),
        v89.m128_u64[0] = v15,
        v15 < 0)
    || (v89.m128_u64[1] = v14) == 0 && v15 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v89 = *(__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(&v91, &v89);
  CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (__int64)v3,
    v16,
    (unsigned int *)&v89,
    (unsigned int *)&v95,
    (__int64)v115,
    (__int64)v113);
  v17 = v110;
  v18 = 1;
  v19 = v109;
  if ( (unsigned __int64)((v110 - v109) >> 2) <= 1 )
  {
LABEL_34:
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v113);
    v60 = (void *)v113[0];
    v61 = v113[0] == (_QWORD)v114;
    v113[0] = 0LL;
    if ( v61 )
      v60 = 0LL;
    operator delete(v60);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v115);
    v62 = (void *)v115[0];
    v61 = v115[0] == (_QWORD)v116;
    v115[0] = 0LL;
    if ( v61 )
      v62 = 0LL;
    operator delete(v62);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v109);
    v63 = v109;
    v61 = v109 == v112;
    v109 = 0LL;
    if ( v61 )
      v63 = 0LL;
    operator delete(v63);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v105);
    v64 = v105;
    v61 = v105 == v108;
    v105 = 0LL;
    if ( v61 )
      v64 = 0LL;
    goto LABEL_42;
  }
  v20 = 1LL;
  v21 = v106;
  v22 = v105;
  v23 = v115[0];
  v24 = v113[0];
  while ( 1 )
  {
    v25 = *(float *)&v19[4 * v18 - 4] - *(float *)&v19[4 * v20];
    v96 = v18 - 1;
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v25) & _xmm);
    if ( v26 > 0.0000011920929 )
    {
      v27 = 1;
      v88 = 1;
      v28 = (v21 - v22) >> 2;
      if ( v28 > 1 )
        break;
    }
LABEL_33:
    v20 = ++v18;
    if ( v18 >= (unsigned __int64)((v17 - v19) >> 2) )
      goto LABEL_34;
  }
  v29 = 1LL;
  while ( 1 )
  {
    v30 = *(float *)&v22[4 * v29];
    v31 = v27 - 1;
    v32 = *(float *)&v22[4 * v31];
    v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v32 - v30)) & _xmm);
    if ( v33 <= 0.0000011920929 )
      goto LABEL_32;
    v34 = *((_BYTE *)this + 569);
    v95.m128_i32[3] = *(_DWORD *)&v19[4 * v20];
    v35 = *(_DWORD *)(v24 + 4 * v96);
    v21 = v106;
    v95.m128_i32[1] = *(_DWORD *)&v19[4 * v96];
    v36 = *(_DWORD *)(v23 + 4 * v31);
    v95.m128_f32[2] = v30;
    v89.m128_u64[0] = __PAIR64__(v35, v36);
    v37 = *(_DWORD *)(v23 + 4 * v29);
    v38 = *(_DWORD *)(v24 + 4 * v20);
    v95.m128_f32[0] = v32;
    v89.m128_u64[1] = __PAIR64__(v38, v37);
    LODWORD(v91.left) = v89.m128_i32[0];
    LODWORD(v39) = _mm_shuffle_ps(v89, v89, 85).m128_u32[0];
    LODWORD(v40) = _mm_shuffle_ps(v89, v89, 170).m128_u32[0];
    LODWORD(v41) = _mm_shuffle_ps(v89, v89, 255).m128_u32[0];
    LODWORD(v42) = _mm_shuffle_ps(v95, v95, 85).m128_u32[0];
    LODWORD(v43) = _mm_shuffle_ps(v95, v95, 170).m128_u32[0];
    LODWORD(v44) = _mm_shuffle_ps(v95, v95, 255).m128_u32[0];
    v91.top = v39;
    v91.right = v40;
    v91.bottom = v41;
    v94.left = v32;
    v94.top = v42;
    v94.right = v43;
    v94.bottom = v44;
    if ( v34 )
    {
      if ( (float)(*((float *)this + 138) - v95.m128_f32[0]) <= 0.0000011920929
        && (float)(*((float *)this + 139) - v42) <= 0.0000011920929
        && (float)(v43 - *((float *)this + 140)) <= 0.0000011920929
        && (float)(v44 - *((float *)this + 141)) <= 0.0000011920929 )
      {
        goto LABEL_32;
      }
    }
    if ( (_DWORD)v31 )
      v45 = 0LL;
    else
      v45 = (struct D2D_MATRIX_3X2_F *)(*((_DWORD *)this + 12) & 0x3000000);
    if ( v18 == 1 )
      v46 = *((_DWORD *)this + 12) & 3;
    else
      v46 = 0;
    v47 = (unsigned int)v45 | v46;
    if ( v29 == v28 - 1 )
      v48 = *((_DWORD *)this + 12) & 0x300;
    else
      v48 = 0;
    v49 = v48 | v47;
    if ( v20 == ((v17 - v19) >> 2) - 1 )
      v50 = *((_DWORD *)this + 12) & 0x30000;
    else
      v50 = 0;
    v51 = v49 | v50;
    if ( v34 && v51 != 50529027 )
    {
      v66 = *((float *)this + 139);
      if ( v42 >= v66 && *((float *)this + 141) >= v44 )
      {
        if ( v95.m128_f32[0] == *((float *)this + 140) )
          v51 |= 0x3000000u;
        if ( v43 == *((float *)this + 138) )
          v51 |= 0x300u;
      }
      if ( v95.m128_f32[0] >= *((float *)this + 138) && *((float *)this + 140) >= v43 )
      {
        if ( v42 == *((float *)this + 141) )
          v51 |= 3u;
        if ( v44 == v66 )
          v51 |= 0x30000u;
      }
    }
    if ( !v87 )
    {
      v67 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v89.m128_f32[0] - v40)) & _xmm);
      if ( v67 <= 0.0009765625 )
      {
        v78 = (float)(v89.m128_f32[0] + v40) * 0.5;
        v91.right = v78 + 0.00048828125;
        v91.left = v78 - 0.00048828125;
      }
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v39 - v41)) & _xmm) <= 0.0009765625 )
      {
        v79 = (float)(v41 + v39) * 0.5;
        v91.bottom = v79 + 0.00048828125;
        v91.top = v79 - 0.00048828125;
      }
      D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v91, &v94, &v99, v45);
      v68 = *((_QWORD *)this + 9);
      v69 = v91;
      *(_BYTE *)(v68 + 52) = 1;
      *(struct D2D_RECT_F *)(v68 + 32) = v69;
      *(_DWORD *)(v68 + 48) = v51;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v92,
        (const struct D2D1::Matrix3x2F *)&v99,
        (CNineGridDrawListBrush *)((char *)this + 8));
      v71 = *((_QWORD *)this + 9);
      v72 = v93;
      *(struct D2D_RECT_F *)(v71 + 8) = v92;
      *(_QWORD *)(v71 + 24) = v72;
      if ( *((_BYTE *)this + 64) )
      {
        D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v94, &v91, &v92, v70);
        left_low = (__m128)LODWORD(v92.left);
        v81 = *((_QWORD *)this + 9);
        top_low = (__m128)LODWORD(v92.top);
        top_low.m128_f32[0] = v92.top * *((float *)this + 14);
        left_low.m128_f32[0] = (float)(v92.left * *((float *)this + 14)) + (float)(v92.right * *((float *)this + 15));
        v83 = v92.bottom * *((float *)this + 15);
        *(_BYTE *)(v81 + 64) = 1;
        left_low.m128_f32[0] = left_low.m128_f32[0] + *(float *)&v93;
        top_low.m128_f32[0] = (float)(top_low.m128_f32[0] + v83) + *((float *)&v93 + 1);
        *(_QWORD *)(v81 + 56) = _mm_unpacklo_ps(left_low, top_low).m128_u64[0];
      }
      v73 = ((__int64 (__fastcall *)(_QWORD, void *))v98)(*((_QWORD *)this + 9), v97);
      v6 = v73;
      if ( v73 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x16Eu, 0LL);
        goto LABEL_86;
      }
      goto LABEL_31;
    }
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v94, &v91, &v92, v45);
    v99.right = 0.0;
    v101 = 0;
    bottom = v92.bottom;
    v99.bottom = v92.right;
    *(_QWORD *)&v99.left = *(_QWORD *)&v92.left;
    v102 = v93;
    v103 = 1065353216;
    v53 = Matrix3x3::operator*(&v99, v104, v52 + 84);
    v54 = v87;
    v55 = v97;
    *(_OWORD *)((char *)v87 + 84) = *(_OWORD *)v53;
    v56 = v94;
    *(_OWORD *)((char *)v54 + 100) = *(_OWORD *)(v53 + 16);
    *((_DWORD *)v54 + 29) = *(_DWORD *)(v53 + 32);
    v57 = v87;
    *((_BYTE *)v87 + 52) = 1;
    *((struct D2D_RECT_F *)v57 + 2) = v56;
    *((_DWORD *)v57 + 12) = v51;
    v58 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v98)(v87, v55);
    v6 = v58;
    if ( v58 < 0 )
      break;
LABEL_31:
    v21 = v106;
    v22 = v105;
    v17 = v110;
    v19 = v109;
    v23 = v115[0];
    v24 = v113[0];
LABEL_32:
    v27 = v88 + 1;
    v28 = (v21 - v22) >> 2;
    v29 = v27;
    ++v88;
    if ( v27 >= v28 )
      goto LABEL_33;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x13Du, 0LL);
LABEL_86:
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v113);
  v84 = (void *)v113[0];
  v61 = v113[0] == (_QWORD)v114;
  v113[0] = 0LL;
  if ( v61 )
    v84 = 0LL;
  operator delete(v84);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v115);
  v85 = (void *)v115[0];
  v61 = v115[0] == (_QWORD)v116;
  v115[0] = 0LL;
  if ( v61 )
    v85 = 0LL;
  operator delete(v85);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v109);
  v86 = v109;
  v61 = v109 == v112;
  v109 = 0LL;
  if ( v61 )
    v86 = 0LL;
  operator delete(v86);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v105);
  v64 = v105;
  v61 = v105 == v108;
  v105 = 0LL;
  if ( v61 )
    v64 = 0LL;
LABEL_42:
  operator delete(v64);
LABEL_43:
  if ( v87 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v87, 1u);
  return (unsigned int)v6;
}
