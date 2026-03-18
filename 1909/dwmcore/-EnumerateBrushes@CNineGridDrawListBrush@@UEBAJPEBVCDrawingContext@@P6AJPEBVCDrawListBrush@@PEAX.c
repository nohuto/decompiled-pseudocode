/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EE5A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ComputeMeshPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXAEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@0AEBUD2D_RECT_F@@M@Z @ 0x18002F16C (--$ComputeMeshPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail.c)
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18002F1F0 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x18002F3D4 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ??1?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18002F4E0 (--1-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QE.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x18002FC4C (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180036C70 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18003A18C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18003ECD0 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007E00C (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800954E4 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800BB274 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BB2A0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18015D404 (-terminate@details@gsl@@YAXXZ.c)
 *     ?SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z @ 0x1801FB030 (-SetSnapToPixelsReference@CSurfaceDrawListBrush@@QEAAXPEBUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        const struct CDrawingContext *a2,
        int (*a3)(const struct CDrawListBrush *, void *),
        void *a4)
{
  char *v4; // rsi
  __int64 v5; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // r14
  CSurfaceDrawListBrush *v15; // rcx
  CSurfaceDrawListBrush *v16; // rax
  unsigned int v17; // xmm0_4
  int v18; // xmm1_4
  FLOAT v19; // xmm4_4
  int v20; // xmm0_4
  unsigned int v21; // xmm1_4
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  gsl::details *v24; // rcx
  __m128 *v25; // rax
  unsigned __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rdx
  _BYTE *v29; // rcx
  unsigned int v30; // r10d
  float *v31; // r8
  _BYTE *v32; // r9
  float *v33; // rdx
  FLOAT *v34; // r14
  _DWORD *v35; // r15
  float v36; // xmm0_4
  __int64 v37; // r12
  float v38; // xmm2_4
  unsigned int v39; // r11d
  unsigned __int64 v40; // rax
  __int64 v41; // r10
  float v42; // xmm4_4
  __int64 v43; // rsi
  float v44; // xmm3_4
  float v45; // xmm2_4
  __int32 v46; // xmm1_4
  FLOAT v47; // xmm0_4
  unsigned int v48; // xmm1_4
  char v49; // r12
  float v50; // xmm4_4
  float v51; // xmm3_4
  float v52; // xmm7_4
  float v53; // xmm10_4
  float v54; // xmm2_4
  float v55; // xmm5_4
  struct D2D_MATRIX_3X2_F *v56; // r9
  float *v57; // rdi
  float v58; // xmm1_4
  float v59; // xmm0_4
  FLOAT v60; // xmm6_4
  float v61; // xmm0_4
  float v62; // xmm0_4
  float v63; // xmm1_4
  float v64; // xmm0_4
  FLOAT v65; // xmm4_4
  float v66; // xmm0_4
  float v67; // xmm0_4
  float *v68; // rax
  CSurfaceDrawListBrush *v69; // rcx
  void *v70; // rdx
  struct D2D_RECT_F v71; // xmm0
  CSurfaceDrawListBrush *v72; // rax
  int v73; // r11d
  signed int v74; // eax
  __int64 v75; // rcx
  float v76; // xmm2_4
  float v77; // xmm3_4
  float v78; // xmm4_4
  __int64 v79; // rax
  struct D2D_RECT_F v80; // xmm0
  int v81; // r11d
  struct D2D_MATRIX_3X2_F *v82; // r9
  __int64 v83; // rax
  __int64 v84; // xmm1_8
  __m128 left_low; // xmm2
  __int64 v86; // rax
  __m128 top_low; // xmm1
  float v88; // xmm0_4
  signed int v89; // eax
  __int64 v90; // rcx
  unsigned __int64 v91; // rax
  char v93; // [rsp+48h] [rbp-C0h]
  CSurfaceDrawListBrush *v94; // [rsp+50h] [rbp-B8h] BYREF
  int v95; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_RECT_F v96; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v97; // [rsp+78h] [rbp-90h] BYREF
  char v98; // [rsp+88h] [rbp-80h]
  int v99; // [rsp+98h] [rbp-70h]
  struct D2D_RECT_F v100; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v101; // [rsp+B0h] [rbp-58h]
  struct D2D_RECT_F v102; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v103; // [rsp+C8h] [rbp-40h]
  float v104; // [rsp+CCh] [rbp-3Ch] BYREF
  float v105; // [rsp+D0h] [rbp-38h] BYREF
  __m128 v106; // [rsp+D8h] [rbp-30h] BYREF
  void *v107; // [rsp+E8h] [rbp-20h]
  int (*v108)(const struct CDrawListBrush *, void *); // [rsp+F0h] [rbp-18h]
  __int64 v109; // [rsp+F8h] [rbp-10h]
  struct D2D_RECT_F v110; // [rsp+100h] [rbp-8h] BYREF
  __int128 v111; // [rsp+110h] [rbp+8h]
  __int128 v112; // [rsp+120h] [rbp+18h]
  __int128 v113; // [rsp+130h] [rbp+28h]
  int v114; // [rsp+140h] [rbp+38h]
  struct D2D_RECT_F v115; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int64 v116; // [rsp+158h] [rbp+50h]
  __int64 v117; // [rsp+160h] [rbp+58h]
  __int128 v118; // [rsp+168h] [rbp+60h]
  __int128 v119; // [rsp+178h] [rbp+70h]
  _OWORD v120[4]; // [rsp+198h] [rbp+90h] BYREF
  int v121; // [rsp+1D8h] [rbp+D0h]
  float *v122; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE *v123; // [rsp+1F0h] [rbp+E8h]
  void **v124; // [rsp+1F8h] [rbp+F0h]
  _BYTE v125[24]; // [rsp+200h] [rbp+F8h] BYREF
  float *v126; // [rsp+218h] [rbp+110h] BYREF
  _BYTE *v127; // [rsp+220h] [rbp+118h]
  void **v128; // [rsp+228h] [rbp+120h]
  _BYTE v129[24]; // [rsp+230h] [rbp+128h] BYREF
  void *v130[3]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v131[24]; // [rsp+260h] [rbp+158h] BYREF
  void *v132[3]; // [rsp+278h] [rbp+170h] BYREF
  _BYTE v133[24]; // [rsp+290h] [rbp+188h] BYREF
  __int64 v134; // [rsp+2A8h] [rbp+1A0h] BYREF

  v4 = (char *)this + 112;
  v107 = a4;
  v5 = *((_QWORD *)this + 15) - *((_QWORD *)this + 14);
  v108 = a3;
  v8 = 0;
  if ( (v5 & 0xFFFFFFFFFFFFFFF0uLL) != 0
    || ((*((_QWORD *)this + 38) - *((_QWORD *)this + 37)) & 0xFFFFFFFFFFFFFFF0uLL) != 0
    || ((*((_QWORD *)this + 61) - *((_QWORD *)this + 60)) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v12 = *((_QWORD *)this + 9);
    v94 = 0LL;
    v93 = 0;
    v13 = 1LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 8LL))(v12, 2LL) )
    {
      v14 = *((_QWORD *)this + 9);
      v97.m128_u64[0] = (unsigned __int64)&v94;
      v97.m128_u64[1] = 0LL;
      v98 = 1;
      LOWORD(v95) = *(_WORD *)(v14 + 80);
      BYTE2(v95) = *(_BYTE *)(v14 + 82);
      v8 = CSurfaceDrawListBrush::CreateWithTextureTransform(
             (struct CSurfaceDrawListBrush *)(v14 + 56),
             (__int16 *)&v95,
             (__int64)&Matrix3x3::Identity,
             &v97.m128_u64[1]);
      if ( v98 )
      {
        v15 = *(CSurfaceDrawListBrush **)v97.m128_u64[0];
        *(_QWORD *)v97.m128_u64[0] = v97.m128_u64[1];
        if ( v15 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v15, 1);
      }
      if ( (v8 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v15, 0LL, 0, v8, 0xA6u, 0LL);
LABEL_73:
        std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v94);
        return v8;
      }
      *(_OWORD *)((char *)v94 + 120) = *(_OWORD *)(v14 + 120);
      v16 = v94;
      *(_OWORD *)((char *)v94 + 8) = *(_OWORD *)((char *)this + 8);
      *((_QWORD *)v16 + 3) = *((_QWORD *)this + 3);
      *((_BYTE *)v94 + 144) = 0;
      if ( *((_BYTE *)this + 64) )
        CSurfaceDrawListBrush::SetSnapToPixelsReference(v94, (const struct D2D_VECTOR_2F *)this + 7);
      if ( *(_BYTE *)(v14 + 144) )
      {
        v93 = 1;
        v121 = 0;
        CMatrixStack::Top((const struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v120);
        v17 = *((_DWORD *)this + 3);
        v18 = *((_DWORD *)this + 5);
        v19 = *((float *)this + 2);
        v115.bottom = 0.0;
        *(_QWORD *)&v115.top = v17;
        LODWORD(v116) = *((_DWORD *)this + 4);
        v20 = *((_DWORD *)this + 6);
        HIDWORD(v116) = v18;
        v21 = *((_DWORD *)this + 7);
        LODWORD(v119) = v20;
        *(_QWORD *)((char *)&v119 + 4) = v21;
        v115.left = v19;
        v117 = 0LL;
        *(_QWORD *)&v118 = 0LL;
        v110 = v115;
        *((_QWORD *)&v118 + 1) = 1065353216LL;
        HIDWORD(v119) = 1065353216;
        v111 = v116;
        v114 = 0;
        v112 = v118;
        v113 = v119;
        CMILMatrix::Multiply((CMILMatrix *)&v110, (const struct CMILMatrix *)v120);
        v121 = v114;
        v120[0] = v110;
        v120[1] = v111;
        v120[2] = v112;
        v120[3] = v113;
        CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v120, &v104, &v105);
        *((_BYTE *)v94 + 145) = 1;
      }
    }
    v126 = (float *)v129;
    v127 = v129;
    v128 = v130;
    v122 = (float *)v125;
    v123 = v125;
    v124 = (void **)&v126;
    CoordMap::ComputeMeshPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
      (int)v4,
      (int)&v126,
      (int)&v122,
      (__int64)this + 32,
      SLODWORD(FLOAT_1_1920929eN7));
    v22 = (unsigned __int64)v122;
    v132[0] = v133;
    v132[1] = v133;
    v132[2] = &v134;
    v130[0] = v131;
    v130[1] = v131;
    v130[2] = v132;
    v23 = gsl::narrow<__int64,unsigned __int64>((v123 - (_BYTE *)v122) >> 2);
    v97.m128_u64[0] = v23;
    if ( v23 < 0
      || (v97.m128_u64[1] = v22) == 0 && v23
      || (v25 = (__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(
                            (__int64 *)&v102,
                            (__int64 *)&v97),
          v26 = (unsigned __int64)v126,
          v106 = *v25,
          v27 = gsl::narrow<__int64,unsigned __int64>((v127 - (_BYTE *)v126) >> 2),
          v97.m128_u64[0] = v27,
          v27 < 0)
      || (v97.m128_u64[1] = v26) == 0 && v27 )
    {
      gsl::details::terminate(v24);
      JUMPOUT(0x1800EF191LL);
    }
    v97 = *(__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(
                       (__int64 *)&v96,
                       (__int64 *)&v97);
    CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
      (__int64)v4,
      v28,
      (unsigned int *)&v97,
      (unsigned int *)&v106,
      (__int64)v132,
      (__int64)v130);
    v29 = v123;
    v30 = 1;
    v31 = v122;
    v99 = 1;
    if ( (unsigned __int64)((v123 - (_BYTE *)v122) >> 2) > 1 )
    {
      v32 = v127;
      v33 = v126;
      v34 = (FLOAT *)v132[0];
      v35 = v130[0];
      while ( 1 )
      {
        v36 = v31[v30 - 1] - v31[v13];
        v37 = v30 - 1;
        v103 = v30 - 1;
        v109 = v37;
        v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v36) & _xmm);
        if ( v38 > 0.0000011920929 )
        {
          v39 = 1;
          v95 = 1;
          v40 = (v32 - (_BYTE *)v33) >> 2;
          if ( v40 > 1 )
            break;
        }
LABEL_69:
        v13 = ++v30;
        v99 = v30;
        if ( v30 >= (unsigned __int64)((v29 - (_BYTE *)v31) >> 2) )
          goto LABEL_72;
      }
      v41 = 1LL;
      while ( 1 )
      {
        v42 = v33[v41];
        v43 = v39 - 1;
        v44 = v33[v43];
        v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v44 - v42)) & _xmm);
        if ( v45 > 0.0000011920929 )
        {
          v46 = LODWORD(v31[v13]);
          v106.m128_f32[1] = v31[v37];
          v47 = v34[v43];
          v106.m128_i32[3] = v46;
          v48 = v35[v37];
          v49 = *((_BYTE *)this + 569);
          v106.m128_f32[0] = v44;
          v106.m128_f32[2] = v42;
          v97.m128_u64[0] = __PAIR64__(v48, LODWORD(v47));
          v97.m128_u64[1] = __PAIR64__(v35[v13], LODWORD(v34[v41]));
          v96.left = v47;
          LODWORD(v50) = _mm_shuffle_ps(v97, v97, 85).m128_u32[0];
          LODWORD(v51) = _mm_shuffle_ps(v97, v97, 170).m128_u32[0];
          LODWORD(v52) = _mm_shuffle_ps(v97, v97, 255).m128_u32[0];
          LODWORD(v53) = _mm_shuffle_ps(v106, v106, 85).m128_u32[0];
          LODWORD(v54) = _mm_shuffle_ps(v106, v106, 170).m128_u32[0];
          LODWORD(v55) = _mm_shuffle_ps(v106, v106, 255).m128_u32[0];
          v96.top = v50;
          v96.right = v51;
          v96.bottom = v52;
          LODWORD(v102.left) = v106.m128_i32[0];
          v102.top = v53;
          v102.right = v54;
          v102.bottom = v55;
          if ( !v49
            || (float)(*((float *)this + 138) - v106.m128_f32[0]) > 0.0000011920929
            || (float)(*((float *)this + 139) - v53) > 0.0000011920929
            || (float)(v54 - *((float *)this + 140)) > 0.0000011920929
            || (float)(v55 - *((float *)this + 141)) > 0.0000011920929 )
          {
            if ( v39 == 1 )
              v56 = (struct D2D_MATRIX_3X2_F *)(*((_DWORD *)this + 12) & 0x3000000);
            else
              v56 = 0LL;
            if ( v94 )
            {
              v57 = (float *)*((_QWORD *)this + 9);
              if ( v93 )
              {
                if ( (float)(v51 - v97.m128_f32[0]) > 0.5 )
                {
                  v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)(v54 - v106.m128_f32[0])
                                                                                  / (float)(v51 - v97.m128_f32[0]))
                                                                          * v104)
                                                                  - 1.0)) & _xmm);
                  if ( v58 >= 0.000081380211 )
                  {
                    if ( v97.m128_f32[0] <= v57[8] )
                      v59 = 0.0;
                    else
                      v59 = FLOAT_0_5;
                    v60 = v97.m128_f32[0] + v59;
                    v61 = v57[10];
                    v96.left = v60;
                    if ( v61 <= v51 )
                      v62 = 0.0;
                    else
                      v62 = FLOAT_0_5;
                    v96.right = v51 - v62;
                  }
                }
                if ( (float)(v52 - v50) > 0.5 )
                {
                  v63 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)(v55 - v53)
                                                                                  / (float)(v52 - v50))
                                                                          * v105)
                                                                  - 1.0)) & _xmm);
                  if ( v63 >= 0.000081380211 )
                  {
                    if ( v50 <= v57[9] )
                      v64 = 0.0;
                    else
                      v64 = FLOAT_0_5;
                    v65 = v50 + v64;
                    v66 = v57[11];
                    v96.top = v65;
                    if ( v66 <= v52 )
                      v67 = 0.0;
                    else
                      v67 = FLOAT_0_5;
                    v96.bottom = v52 - v67;
                  }
                }
              }
              D2DMatrixHelper::ComputeRectangleTransform(&v102, &v96, &v100, v56);
              v110.right = 0.0;
              *(_QWORD *)&v111 = LODWORD(v100.bottom);
              v110.bottom = v100.right;
              *(_QWORD *)&v110.left = *(_QWORD *)&v100.left;
              *((_QWORD *)&v111 + 1) = v101;
              LODWORD(v112) = 1065353216;
              v68 = Matrix3x3::operator*(&v110.left, &v115.left, v57 + 21);
              v69 = v94;
              v70 = v107;
              *(_OWORD *)((char *)v94 + 84) = *(_OWORD *)v68;
              v71 = v102;
              *(_OWORD *)((char *)v69 + 100) = *((_OWORD *)v68 + 1);
              *((float *)v69 + 29) = v68[8];
              v72 = v94;
              *((_BYTE *)v94 + 52) = 1;
              *((struct D2D_RECT_F *)v72 + 2) = v71;
              *((_DWORD *)v72 + 12) = v73;
              v74 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v108)(v94, v70);
              v8 = v74;
              if ( v74 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v74, 0x18Eu, 0LL);
                break;
              }
            }
            else
            {
              v76 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v97.m128_f32[0] - v51)) & _xmm);
              if ( v76 <= 0.0009765625 )
              {
                v77 = (float)(v51 + v97.m128_f32[0]) * 0.5;
                v96.left = v77 - 0.00048828125;
                v96.right = v77 + 0.00048828125;
              }
              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v50 - v52)) & _xmm) <= 0.0009765625 )
              {
                v78 = (float)(v50 + v52) * 0.5;
                v96.top = v78 - 0.00048828125;
                v96.bottom = v78 + 0.00048828125;
              }
              D2DMatrixHelper::ComputeRectangleTransform(&v96, &v102, &v110, v56);
              v79 = *((_QWORD *)this + 9);
              v80 = v96;
              *(_BYTE *)(v79 + 52) = 1;
              *(struct D2D_RECT_F *)(v79 + 32) = v80;
              *(_DWORD *)(v79 + 48) = v81;
              D2D1::Matrix3x2F::SetProduct(
                (D2D1::Matrix3x2F *)&v100,
                (const struct D2D1::Matrix3x2F *)&v110,
                (CNineGridDrawListBrush *)((char *)this + 8));
              v83 = *((_QWORD *)this + 9);
              v84 = v101;
              *(struct D2D_RECT_F *)(v83 + 8) = v100;
              *(_QWORD *)(v83 + 24) = v84;
              if ( *((_BYTE *)this + 64) )
              {
                D2DMatrixHelper::ComputeRectangleTransform(&v102, &v96, &v100, v82);
                left_low = (__m128)LODWORD(v100.left);
                v86 = *((_QWORD *)this + 9);
                top_low = (__m128)LODWORD(v100.top);
                top_low.m128_f32[0] = v100.top * *((float *)this + 14);
                left_low.m128_f32[0] = (float)(v100.left * *((float *)this + 14))
                                     + (float)(v100.right * *((float *)this + 15));
                v88 = v100.bottom * *((float *)this + 15);
                *(_BYTE *)(v86 + 64) = 1;
                left_low.m128_f32[0] = left_low.m128_f32[0] + *(float *)&v101;
                top_low.m128_f32[0] = (float)(top_low.m128_f32[0] + v88) + *((float *)&v101 + 1);
                *(_QWORD *)(v86 + 56) = _mm_unpacklo_ps(left_low, top_low).m128_u64[0];
              }
              v89 = ((__int64 (__fastcall *)(_QWORD, void *))v108)(*((_QWORD *)this + 9), v107);
              v8 = v89;
              if ( v89 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v90, 0LL, 0, v89, 0x1BFu, 0LL);
                break;
              }
            }
            v32 = v127;
            v33 = v126;
            v29 = v123;
            v31 = v122;
            v34 = (FLOAT *)v132[0];
            v35 = v130[0];
          }
          v37 = v109;
        }
        v39 = v95 + 1;
        v91 = (v32 - (_BYTE *)v33) >> 2;
        v41 = v39;
        ++v95;
        if ( v39 >= v91 )
        {
          v30 = v99;
          goto LABEL_69;
        }
      }
    }
LABEL_72:
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(v130);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>(v132);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>((void **)&v122);
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::~vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>((void **)&v126);
    goto LABEL_73;
  }
  v9 = *((_QWORD *)this + 9);
  *(_OWORD *)(v9 + 8) = *(_OWORD *)((char *)this + 8);
  *(_QWORD *)(v9 + 24) = *((_QWORD *)this + 3);
  v10 = ((__int64 (__fastcall *)(_QWORD, void *))a3)(*((_QWORD *)this + 9), a4);
  v8 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x94u, 0LL);
  return v8;
}
