/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x18000C120
 * Callers:
 *     <none>
 * Callees:
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x18000B8A0 (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18000B924 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x18000C9DC (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18000CB78 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x18000CB9C (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18002781C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18005C5B4 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x180068294 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        int (*a2)(const struct CDrawListBrush *, void *),
        void *a3)
{
  char *v3; // r14
  __int64 v4; // rax
  int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // r15
  CSurfaceDrawListBrush *v9; // rcx
  CSurfaceDrawListBrush *v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  gsl::details *v13; // rcx
  __m128 *v14; // rax
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE *v18; // rcx
  unsigned int v19; // r10d
  _BYTE *v20; // r8
  __int64 v21; // r13
  _BYTE *v22; // r9
  _BYTE *v23; // rdx
  __int64 v24; // r15
  __int64 v25; // r12
  float v26; // xmm0_4
  float v27; // xmm2_4
  unsigned int v28; // r11d
  unsigned __int64 v29; // rax
  __int64 v30; // r10
  float v31; // xmm4_4
  __int64 v32; // r14
  float v33; // xmm3_4
  float v34; // xmm2_4
  char v35; // r11
  unsigned int v36; // xmm1_4
  FLOAT v37; // xmm0_4
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm12_4
  float v41; // xmm7_4
  float v42; // xmm5_4
  float v43; // xmm8_4
  struct D2D_MATRIX_3X2_F *v44; // r9
  int v45; // edx
  unsigned int v46; // edx
  int v47; // eax
  int v48; // edx
  int v49; // esi
  int v50; // esi
  __int64 v51; // r11
  __int64 v52; // rax
  CSurfaceDrawListBrush *v53; // rcx
  void *v54; // rdx
  struct D2D_RECT_F v55; // xmm0
  CSurfaceDrawListBrush *v56; // rax
  int v57; // eax
  unsigned int v58; // ecx
  void *v59; // rcx
  bool v60; // zf
  void *v61; // rcx
  void *v62; // rcx
  void *v63; // rcx
  float v65; // xmm1_4
  float v66; // xmm2_4
  __int64 v67; // rax
  struct D2D_RECT_F v68; // xmm0
  __int64 v69; // rax
  void *v70; // rdx
  __int64 v71; // xmm1_8
  int v72; // eax
  unsigned int v73; // ecx
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // ecx
  __int128 v77; // xmm0
  int v78; // eax
  unsigned int v79; // ecx
  float v80; // xmm4_4
  float v81; // xmm3_4
  void *v82; // rcx
  void *v83; // rcx
  void *v84; // rcx
  CSurfaceDrawListBrush *v85; // [rsp+48h] [rbp-C0h] BYREF
  int v86; // [rsp+58h] [rbp-B0h] BYREF
  __m128 v87; // [rsp+68h] [rbp-A0h] BYREF
  char v88; // [rsp+78h] [rbp-90h]
  int v89; // [rsp+88h] [rbp-80h]
  struct D2D_RECT_F v90; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v91; // [rsp+A0h] [rbp-68h]
  struct D2D_RECT_F v92; // [rsp+A8h] [rbp-60h] BYREF
  __m128 v93; // [rsp+B8h] [rbp-50h] BYREF
  struct D2D_RECT_F v94; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v95; // [rsp+D8h] [rbp-30h]
  __int64 v96; // [rsp+E0h] [rbp-28h]
  void *v97; // [rsp+E8h] [rbp-20h]
  int (*v98)(const struct CDrawListBrush *, void *); // [rsp+F0h] [rbp-18h]
  struct D2D_RECT_F v99; // [rsp+F8h] [rbp-10h] BYREF
  FLOAT bottom; // [rsp+108h] [rbp+0h]
  int v101; // [rsp+10Ch] [rbp+4h]
  __int64 v102; // [rsp+110h] [rbp+8h]
  int v103; // [rsp+118h] [rbp+10h]
  _BYTE v104[40]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE *v105; // [rsp+148h] [rbp+40h] BYREF
  _BYTE *v106; // [rsp+150h] [rbp+48h]
  _BYTE **v107; // [rsp+158h] [rbp+50h]
  _BYTE v108[24]; // [rsp+160h] [rbp+58h] BYREF
  _BYTE *v109; // [rsp+178h] [rbp+70h] BYREF
  _BYTE *v110; // [rsp+180h] [rbp+78h]
  _QWORD *v111; // [rsp+188h] [rbp+80h]
  _BYTE v112[24]; // [rsp+190h] [rbp+88h] BYREF
  _QWORD v113[3]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v114[24]; // [rsp+1C0h] [rbp+B8h] BYREF
  _QWORD v115[3]; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v116[24]; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v117; // [rsp+208h] [rbp+100h] BYREF

  v3 = (char *)this + 96;
  v97 = a3;
  v4 = *((_QWORD *)this + 13) - *((_QWORD *)this + 12);
  v98 = a2;
  v6 = 0;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) == 0
    && ((*((_QWORD *)this + 36) - *((_QWORD *)this + 35)) & 0xFFFFFFFFFFFFFFF0uLL) == 0
    && ((*((_QWORD *)this + 59) - *((_QWORD *)this + 58)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
  {
    v74 = *((_QWORD *)this + 7);
    *(_OWORD *)(v74 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v74 + 24) = *((_QWORD *)this + 3);
    v75 = *((_QWORD *)this + 7);
    v76 = *((_DWORD *)this + 12);
    *(_BYTE *)(v75 + 52) = 1;
    v77 = *((_OWORD *)this + 2);
    *(_DWORD *)(v75 + 48) = v76;
    *(_OWORD *)(v75 + 32) = v77;
    v78 = ((__int64 (__fastcall *)(_QWORD, void *))a2)(*((_QWORD *)this + 7), a3);
    v6 = v78;
    if ( v78 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v79, 0LL, 0, v78, 0x8Au);
    return (unsigned int)v6;
  }
  v7 = *((_QWORD *)this + 7);
  v85 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, int (*)(const struct CDrawListBrush *, void *), void *))(*(_QWORD *)v7 + 8LL))(
         v7,
         2LL,
         a2,
         a3) )
  {
    v8 = *((_QWORD *)this + 7);
    v87.m128_u64[1] = 0LL;
    v88 = 1;
    LOWORD(v86) = *(_WORD *)(v8 + 80);
    BYTE2(v86) = *(_BYTE *)(v8 + 82);
    v87.m128_u64[0] = (unsigned __int64)&v85;
    v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(v8 + 56, &v86, &Matrix3x3::Identity, &v87.m128_u16[4]);
    if ( v88 )
    {
      v9 = *(CSurfaceDrawListBrush **)v87.m128_u64[0];
      *(_QWORD *)v87.m128_u64[0] = v87.m128_u64[1];
      if ( v9 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v9, 1u);
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v9, 0LL, 0, v6, 0x99u);
      goto LABEL_43;
    }
    *(_OWORD *)((char *)v85 + 120) = *(_OWORD *)(v8 + 120);
    v10 = v85;
    *(_OWORD *)((char *)v85 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v10 + 3) = *((_QWORD *)this + 3);
    *((_BYTE *)v85 + 136) = 0;
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
  v87.m128_u64[0] = v12;
  if ( v12 < 0
    || (v87.m128_u64[1] = v11) == 0 && v12
    || (v14 = (__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(&v92, &v87),
        v15 = (unsigned __int64)v105,
        v93 = *v14,
        v16 = gsl::narrow<__int64,unsigned __int64>((v106 - v105) >> 2),
        v87.m128_u64[0] = v16,
        v16 < 0)
    || (v87.m128_u64[1] = v15) == 0 && v16 )
  {
    gsl::details::terminate(v13);
    JUMPOUT(0x18000C9D3LL);
  }
  v87 = *(__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(&v90, &v87);
  CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (__int64)v3,
    v17,
    (unsigned int *)&v87,
    (unsigned int *)&v93,
    (__int64)v115,
    (__int64)v113);
  v18 = v110;
  v19 = 1;
  v20 = v109;
  v89 = 1;
  if ( (unsigned __int64)((v110 - v109) >> 2) <= 1 )
  {
LABEL_34:
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v113);
    v59 = (void *)v113[0];
    v60 = v113[0] == (_QWORD)v114;
    v113[0] = 0LL;
    if ( v60 )
      v59 = 0LL;
    WPF::ProcessHeapImpl::Free(v59);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v115);
    v61 = (void *)v115[0];
    v60 = v115[0] == (_QWORD)v116;
    v115[0] = 0LL;
    if ( v60 )
      v61 = 0LL;
    WPF::ProcessHeapImpl::Free(v61);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v109);
    v62 = v109;
    v60 = v109 == v112;
    v109 = 0LL;
    if ( v60 )
      v62 = 0LL;
    WPF::ProcessHeapImpl::Free(v62);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v105);
    v63 = v105;
    v60 = v105 == v108;
    v105 = 0LL;
    if ( v60 )
      v63 = 0LL;
    goto LABEL_42;
  }
  v21 = 1LL;
  v22 = v106;
  v23 = v105;
  v24 = v115[0];
  v25 = v113[0];
  while ( 1 )
  {
    v26 = *(float *)&v20[4 * v19 - 4] - *(float *)&v20[4 * v21];
    v91 = v19 - 1;
    v96 = v19 - 1;
    v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v26) & _xmm);
    if ( v27 > 0.0000011920929 )
    {
      v86 = 1;
      v28 = 1;
      v29 = (v22 - v23) >> 2;
      if ( v29 > 1 )
        break;
    }
LABEL_33:
    v21 = ++v19;
    v89 = v19;
    if ( v19 >= (unsigned __int64)((v18 - v20) >> 2) )
      goto LABEL_34;
  }
  v30 = 1LL;
  while ( 1 )
  {
    v31 = *(float *)&v23[4 * v30];
    v32 = v28 - 1;
    v33 = *(float *)&v23[4 * v32];
    v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v33 - v31)) & _xmm);
    if ( v34 <= 0.0000011920929 )
      goto LABEL_31;
    v35 = *((_BYTE *)this + 553);
    v93.m128_i32[3] = *(_DWORD *)&v20[4 * v21];
    v36 = *(_DWORD *)(v25 + 4 * v96);
    v22 = v106;
    v93.m128_i32[1] = *(_DWORD *)&v20[4 * v96];
    v37 = *(FLOAT *)(v24 + 4 * v32);
    v93.m128_f32[0] = v33;
    v93.m128_f32[2] = v31;
    v87.m128_u64[0] = __PAIR64__(v36, LODWORD(v37));
    v87.m128_u64[1] = __PAIR64__(*(_DWORD *)(v25 + 4 * v21), *(_DWORD *)(v24 + 4 * v30));
    v90.left = v37;
    LODWORD(v38) = _mm_shuffle_ps(v87, v87, 85).m128_u32[0];
    LODWORD(v39) = _mm_shuffle_ps(v87, v87, 170).m128_u32[0];
    LODWORD(v40) = _mm_shuffle_ps(v87, v87, 255).m128_u32[0];
    LODWORD(v41) = _mm_shuffle_ps(v93, v93, 85).m128_u32[0];
    LODWORD(v42) = _mm_shuffle_ps(v93, v93, 170).m128_u32[0];
    LODWORD(v43) = _mm_shuffle_ps(v93, v93, 255).m128_u32[0];
    v90.top = v38;
    v90.right = v39;
    v90.bottom = v40;
    LODWORD(v92.left) = v93.m128_i32[0];
    v92.top = v41;
    v92.right = v42;
    v92.bottom = v43;
    if ( v35 )
    {
      if ( (float)(*((float *)this + 134) - v93.m128_f32[0]) <= 0.0000011920929
        && (float)(*((float *)this + 135) - v41) <= 0.0000011920929
        && (float)(v42 - *((float *)this + 136)) <= 0.0000011920929
        && (float)(v43 - *((float *)this + 137)) <= 0.0000011920929 )
      {
        goto LABEL_31;
      }
    }
    if ( (_DWORD)v32 )
      v44 = 0LL;
    else
      v44 = (struct D2D_MATRIX_3X2_F *)(*((_DWORD *)this + 12) & 0x3000000);
    if ( v91 )
      v45 = 0;
    else
      v45 = *((_DWORD *)this + 12) & 3;
    v46 = (unsigned int)v44 | v45;
    if ( v30 == v29 - 1 )
      v47 = *((_DWORD *)this + 12) & 0x300;
    else
      v47 = 0;
    v48 = v47 | v46;
    if ( v21 == ((v18 - v20) >> 2) - 1 )
      v49 = *((_DWORD *)this + 12) & 0x30000;
    else
      v49 = 0;
    v50 = v48 | v49;
    if ( v35 && v50 != 50529027 )
    {
      v65 = *((float *)this + 135);
      if ( v41 >= v65 && *((float *)this + 137) >= v43 )
      {
        if ( v93.m128_f32[0] == *((float *)this + 136) )
          v50 |= 0x3000000u;
        if ( v42 == *((float *)this + 134) )
          v50 |= 0x300u;
      }
      if ( v93.m128_f32[0] >= *((float *)this + 134) && *((float *)this + 136) >= v42 )
      {
        if ( v41 == *((float *)this + 137) )
          v50 |= 3u;
        if ( v43 == v65 )
          v50 |= 0x30000u;
      }
    }
    if ( !v85 )
    {
      v66 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v87.m128_f32[0] - v39)) & _xmm);
      if ( v66 <= 0.0009765625 )
      {
        v80 = (float)(v39 + v87.m128_f32[0]) * 0.5;
        v90.left = v80 - 0.00048828125;
        v90.right = v80 + 0.00048828125;
      }
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v38 - v40)) & _xmm) <= 0.0009765625 )
      {
        v81 = (float)(v38 + v40) * 0.5;
        v90.top = v81 - 0.00048828125;
        v90.bottom = v81 + 0.00048828125;
      }
      D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v90, &v92, &v99, v44);
      v67 = *((_QWORD *)this + 7);
      v68 = v90;
      *(_BYTE *)(v67 + 52) = 1;
      *(struct D2D_RECT_F *)(v67 + 32) = v68;
      *(_DWORD *)(v67 + 48) = v50;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v94,
        (const struct D2D1::Matrix3x2F *)&v99,
        (CNineGridDrawListBrush *)((char *)this + 8));
      v69 = *((_QWORD *)this + 7);
      v70 = v97;
      v71 = v95;
      *(struct D2D_RECT_F *)(v69 + 8) = v94;
      *(_QWORD *)(v69 + 24) = v71;
      v72 = ((__int64 (__fastcall *)(_QWORD, void *))v98)(*((_QWORD *)this + 7), v70);
      v6 = v72;
      if ( v72 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0x14Cu);
        goto LABEL_85;
      }
      goto LABEL_30;
    }
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v92, &v90, &v94, v44);
    v99.right = 0.0;
    v101 = 0;
    v99.left = v94.left;
    v99.top = v94.top;
    v99.bottom = v94.right;
    bottom = v94.bottom;
    v102 = v95;
    v103 = 1065353216;
    v52 = Matrix3x3::operator*(&v99, v104, v51 + 84);
    v53 = v85;
    v54 = v97;
    *(_OWORD *)((char *)v85 + 84) = *(_OWORD *)v52;
    v55 = v92;
    *(_OWORD *)((char *)v53 + 100) = *(_OWORD *)(v52 + 16);
    *((_DWORD *)v53 + 29) = *(_DWORD *)(v52 + 32);
    v56 = v85;
    *((_BYTE *)v85 + 52) = 1;
    *((struct D2D_RECT_F *)v56 + 2) = v55;
    *((_DWORD *)v56 + 12) = v50;
    v57 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v98)(v85, v54);
    v6 = v57;
    if ( v57 < 0 )
      break;
LABEL_30:
    v22 = v106;
    v23 = v105;
    v18 = v110;
    v20 = v109;
    v24 = v115[0];
    v25 = v113[0];
LABEL_31:
    v28 = v86 + 1;
    v29 = (v22 - v23) >> 2;
    v30 = v28;
    ++v86;
    if ( v28 >= v29 )
    {
      v19 = v89;
      goto LABEL_33;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x12Du);
LABEL_85:
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v113);
  v82 = (void *)v113[0];
  v60 = v113[0] == (_QWORD)v114;
  v113[0] = 0LL;
  if ( v60 )
    v82 = 0LL;
  WPF::ProcessHeapImpl::Free(v82);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(v115);
  v83 = (void *)v115[0];
  v60 = v115[0] == (_QWORD)v116;
  v115[0] = 0LL;
  if ( v60 )
    v83 = 0LL;
  WPF::ProcessHeapImpl::Free(v83);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v109);
  v84 = v109;
  v60 = v109 == v112;
  v109 = 0LL;
  if ( v60 )
    v84 = 0LL;
  WPF::ProcessHeapImpl::Free(v84);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(&v105);
  v63 = v105;
  v60 = v105 == v108;
  v105 = 0LL;
  if ( v60 )
    v63 = 0LL;
LABEL_42:
  WPF::ProcessHeapImpl::Free(v63);
LABEL_43:
  if ( v85 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v85, 1u);
  return (unsigned int)v6;
}
