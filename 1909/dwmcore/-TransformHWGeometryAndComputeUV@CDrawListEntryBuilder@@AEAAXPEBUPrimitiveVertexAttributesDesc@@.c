/*
 * XREFs of ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800917D0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800901F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?ComputeUVsFromXY@@YAXPEAU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V?$span@$$CBUTextureStageInfo@@$0?0@gsl@@@Z @ 0x180013C84 (-ComputeUVsFromXY@@YAXPEAU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V-$span@$$.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x1800155D4 (--$uninitialized_copy@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEA.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x18002F3D4 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x18002FC4C (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_J@Z @ 0x18002FC80 (--0-$extent_type@$0-0@details@gsl@@QEAA@_J@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180064938 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18015D404 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x1801819B0 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 *     ??0narrowing_error@gsl@@QEAA@XZ @ 0x180181FC0 (--0narrowing_error@gsl@@QEAA@XZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x1801AD8F0 (--$move_backward@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEAUText.c)
 *     detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region @ 0x1801AE548 (detail--vector_facade__CDrawListEntryBuilder--TransformHWGeometryAndComputeUV_--_15_--TexStageIn.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x180228C2C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

void __fastcall CDrawListEntryBuilder::TransformHWGeometryAndComputeUV(
        CDrawListEntryBuilder *this,
        const struct PrimitiveVertexAttributesDesc *a2,
        const struct D2D1::Matrix3x2F *a3,
        const struct D2D1::Matrix3x2F *a4,
        unsigned int a5)
{
  float *v5; // r14
  __m128 v6; // xmm8
  char *v8; // r8
  int v9; // eax
  const struct PrimitiveVertexAttributesDesc *v11; // rbx
  CDrawListEntryBuilder *v12; // r13
  __int64 v13; // xmm1_8
  unsigned int v14; // r12d
  float v15; // xmm4_4
  float v16; // xmm5_4
  unsigned int *v17; // rcx
  int v18; // eax
  __m128 v19; // xmm14
  float v20; // xmm11_4
  __m128 v21; // xmm15
  float v22; // xmm9_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  __m128 v25; // xmm15
  __m128 v26; // xmm15
  float v27; // xmm6_4
  float v28; // xmm0_4
  __m128 v29; // xmm14
  __m128 v30; // xmm15
  float v31; // xmm1_4
  float v32; // xmm12_4
  __m128 v33; // xmm14
  float v34; // xmm10_4
  float v35; // xmm5_4
  __m128 v36; // xmm14
  __int128 v37; // xmm6
  __int64 v38; // r8
  unsigned __int64 v39; // r14
  char *v40; // rcx
  unsigned __int64 v41; // r13
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rbx
  void *v44; // rcx
  bool v45; // zf
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r15
  unsigned __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // r12
  __int64 v53; // rdi
  unsigned __int64 v54; // rsi
  bool v55; // sf
  __int64 v56; // rax
  unsigned __int64 v57; // r15
  char *v58; // rcx
  unsigned __int64 v59; // rdi
  SIZE_T v60; // r9
  SIZE_T v61; // rax
  __int64 v62; // rbx
  void *v63; // rcx
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // r12
  unsigned __int64 v67; // rdi
  __int64 v68; // rax
  _BYTE *v69; // rcx
  unsigned __int64 v70; // r13
  unsigned __int64 v71; // rdi
  unsigned __int64 v72; // rsi
  bool v73; // sf
  __int64 v74; // rax
  D2DMatrixHelper *v75; // rbx
  float v76; // xmm6_4
  unsigned int v77; // edi
  int v78; // ebx
  int v79; // r12d
  __int64 v80; // rsi
  __int64 v81; // r15
  __int64 v82; // rax
  gsl::details *v83; // rcx
  __int64 v84; // rdx
  HANDLE v85; // rax
  float v86; // xmm7_4
  float *v87; // r9
  unsigned __int64 v88; // xmm1_8
  float m21; // xmm11_4
  double v90; // xmm0_8
  float m22; // xmm13_4
  double v92; // xmm0_8
  __m128 v93; // xmm2
  __m128 v94; // xmm1
  __m128 v95; // xmm4
  __m128 v96; // xmm4
  __m128 v97; // xmm4
  __m128 v98; // xmm4
  __int64 v99; // rdx
  __m128 m21_low; // xmm4
  float *v101; // r14
  __m128 *v102; // rcx
  float v103; // xmm13_4
  __m128 v104; // xmm1
  float v105; // xmm8_4
  float v106; // xmm14_4
  float v107; // xmm10_4
  float v108; // xmm6_4
  float v109; // xmm5_4
  float v110; // xmm15_4
  float v111; // xmm12_4
  float v112; // xmm7_4
  float v113; // xmm3_4
  float v114; // xmm11_4
  __m128 v115; // xmm4
  float v116; // xmm2_4
  __m128 v117; // xmm1
  __m128 v118; // xmm1
  float v119; // eax
  __m128 v120; // xmm0
  __m128 v121; // xmm1
  __m128 v122; // xmm0
  __m128 v123; // xmm0
  unsigned int v124; // esi
  int v125; // r15d
  float v126; // xmm8_4
  float v127; // xmm9_4
  float v128; // xmm5_4
  float v129; // xmm6_4
  float v130; // xmm7_4
  float v131; // xmm10_4
  float m11; // xmm11_4
  float v133; // xmm13_4
  __int64 v134; // r12
  int v135; // edi
  int v136; // r14d
  float *v137; // r9
  float *v138; // r8
  float v139; // xmm3_4
  float v140; // xmm2_4
  float v141; // xmm4_4
  __int64 v142; // rbx
  __int64 v143; // r10
  __int64 v144; // rcx
  unsigned int v145; // r11d
  float v146; // xmm1_4
  float v147; // xmm10_4
  float v148; // xmm3_4
  float v149; // xmm11_4
  float v150; // xmm7_4
  float v151; // xmm15_4
  float v152; // xmm14_4
  float v153; // xmm6_4
  float v154; // xmm8_4
  float *v155; // r8
  float v156; // xmm1_4
  float v157; // xmm7_4
  float v158; // xmm3_4
  __int64 v159; // rdx
  float v160; // xmm4_4
  float v161; // xmm5_4
  float v162; // xmm0_4
  float v163; // xmm2_4
  float v164; // xmm1_4
  float v165; // xmm7_4
  float v166; // xmm3_4
  float v167; // xmm4_4
  _OWORD *v168; // rbx
  __int64 v169; // rdx
  HANDLE ProcessHeap; // rax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  char v174; // [rsp+28h] [rbp-E0h]
  char v175; // [rsp+29h] [rbp-DFh]
  FLOAT v176; // [rsp+2Ch] [rbp-DCh]
  __m128 v177; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v178; // [rsp+40h] [rbp-C8h]
  __int32 v179; // [rsp+48h] [rbp-C0h]
  __int32 v180; // [rsp+4Ch] [rbp-BCh]
  __int32 v181; // [rsp+50h] [rbp-B8h]
  unsigned int v182; // [rsp+54h] [rbp-B4h]
  D2DMatrixHelper *v183; // [rsp+58h] [rbp-B0h]
  __int64 v184; // [rsp+60h] [rbp-A8h]
  __int64 v185; // [rsp+68h] [rbp-A0h]
  struct D2D_MATRIX_3X2_F v186; // [rsp+70h] [rbp-98h] BYREF
  __m128 v187; // [rsp+98h] [rbp-70h] BYREF
  __m128 v188; // [rsp+A8h] [rbp-60h]
  float v189; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v190; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v191; // [rsp+D0h] [rbp-38h]
  __m128 v192; // [rsp+D8h] [rbp-30h]
  __int64 v193; // [rsp+E8h] [rbp-20h]
  __int128 v194; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v195[4]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v196; // [rsp+128h] [rbp+20h]
  float v197; // [rsp+138h] [rbp+30h]
  __m128 v198; // [rsp+148h] [rbp+40h] BYREF
  __int64 v199; // [rsp+158h] [rbp+50h]
  __m128 v200; // [rsp+168h] [rbp+60h] BYREF
  __int64 v201; // [rsp+178h] [rbp+70h]
  __m128 v202; // [rsp+188h] [rbp+80h] BYREF
  __int64 v203; // [rsp+198h] [rbp+90h]
  __int64 v204; // [rsp+1B8h] [rbp+B0h]
  _BYTE *v205; // [rsp+1C8h] [rbp+C0h]
  _BYTE *v206; // [rsp+1D0h] [rbp+C8h]
  char *v207; // [rsp+1D8h] [rbp+D0h]
  _BYTE v208[112]; // [rsp+1E0h] [rbp+D8h] BYREF
  char v209; // [rsp+250h] [rbp+148h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+258h] [rbp+150h] BYREF
  _OWORD v211[6]; // [rsp+278h] [rbp+170h] BYREF
  __int64 v212; // [rsp+2D8h] [rbp+1D0h] BYREF

  v5 = (float *)v208;
  v6 = (__m128)(unsigned int)FLOAT_1_0;
  v184 = *((_QWORD *)this + 24);
  v8 = &v209;
  v9 = *(_DWORD *)this;
  v183 = a4;
  v182 = (unsigned int)FLOAT_1_0;
  v11 = a2;
  *(_QWORD *)&v186.m11 = a2;
  v12 = this;
  *(_QWORD *)&v194 = this;
  LODWORD(v185) = 8 * v9 + 16;
  v195[0] = *((_QWORD *)this + 148);
  v206 = v208;
  v205 = v208;
  v207 = &v209;
  if ( a2 )
  {
    v13 = *((_QWORD *)a3 + 2);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)a3;
    *(_QWORD *)&matrix.m[2][0] = v13;
    D2D1InvertMatrix(&matrix);
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v177, a4, (const struct D2D1::Matrix3x2F *)&matrix);
    v14 = 0;
    v176 = 0.0;
    if ( *((_DWORD *)v11 + 10) )
    {
      v15 = v177.m128_f32[1];
      v16 = v177.m128_f32[0];
      do
      {
        if ( (unsigned __int64)v14 >= *((_QWORD *)v11 + 5) )
        {
          ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
          __debugbreak();
        }
        v17 = (unsigned int *)(*((_QWORD *)v11 + 6) + 52LL * v14);
        memset(v211, 0, 52);
        v174 = 0;
        v18 = *((_DWORD *)v12 + 569);
        if ( _bittest(&v18, v14) )
        {
          v175 = 1;
          *(_OWORD *)&v186.m[1][0] = *(_OWORD *)(v17 + 9);
          if ( v186.m21 != 0.0
            || _mm_shuffle_ps(*(__m128 *)&v186.m[1][0], *(__m128 *)&v186.m[1][0], 85).m128_f32[0] != 0.0
            || _mm_shuffle_ps(*(__m128 *)&v186.m[1][0], *(__m128 *)&v186.m[1][0], 170).m128_f32[0] != v6.m128_f32[0]
            || _mm_shuffle_ps(*(__m128 *)&v186.m[1][0], *(__m128 *)&v186.m[1][0], 255).m128_f32[0] != v6.m128_f32[0] )
          {
            v174 = 1;
          }
          v19 = (__m128)v17[1];
          v20 = *((float *)v17 + 6);
          v21 = (__m128)*v17;
          v22 = *((float *)v17 + 7);
          v21.m128_f32[0] = (float)(v21.m128_f32[0] * v16) + (float)(*((float *)v17 + 3) * v15);
          v23 = *((float *)v17 + 4) * v15;
          v24 = *((float *)v17 + 8);
          v21.m128_f32[0] = v21.m128_f32[0] + (float)(v20 * 0.0);
          v25 = _mm_shuffle_ps(v21, v21, 225);
          v25.m128_f32[0] = (float)((float)(*((float *)v17 + 1) * v16) + v23) + (float)(v22 * 0.0);
          v26 = _mm_shuffle_ps(v25, v25, 198);
          v26.m128_f32[0] = (float)((float)(*((float *)v17 + 2) * v177.m128_f32[0])
                                  + (float)(*((float *)v17 + 5) * v177.m128_f32[1]))
                          + (float)(v24 * 0.0);
          v27 = *((float *)v17 + 2) * *(float *)&v178;
          v19.m128_f32[0] = (float)((float)(v19.m128_f32[0] * v177.m128_f32[2])
                                  + (float)(*((float *)v17 + 4) * v177.m128_f32[3]))
                          + (float)(v22 * 0.0);
          v28 = *((float *)v17 + 1);
          v29 = _mm_shuffle_ps(v19, v19, 225);
          v30 = _mm_shuffle_ps(v26, v26, 39);
          v31 = *(float *)v17;
          v30.m128_f32[0] = (float)((float)(*(float *)v17 * v177.m128_f32[2])
                                  + (float)(*((float *)v17 + 3) * v177.m128_f32[3]))
                          + (float)(v20 * 0.0);
          v29.m128_f32[0] = (float)((float)(*((float *)v17 + 2) * v177.m128_f32[2])
                                  + (float)(*((float *)v17 + 5) * v177.m128_f32[3]))
                          + (float)(v24 * 0.0);
          v32 = *((float *)v17 + 3) * *((float *)&v178 + 1);
          v33 = _mm_shuffle_ps(v29, v29, 198);
          v34 = *((float *)v17 + 4) * *((float *)&v178 + 1);
          v35 = *((float *)v17 + 5) * *((float *)&v178 + 1);
          v187 = _mm_shuffle_ps(v30, v30, 57);
          v211[0] = v187;
          v33.m128_f32[0] = (float)((float)(v31 * *(float *)&v178) + v32) + v20;
          v36 = _mm_shuffle_ps(v33, v33, 39);
          v36.m128_f32[0] = (float)((float)(v28 * *(float *)&v178) + v34) + v22;
          v189 = (float)(v27 + v35) + v24;
          v37 = *(_OWORD *)&v186.m[1][0];
          *(float *)&v211[2] = v189;
          v188 = _mm_shuffle_ps(v36, v36, 57);
          v211[1] = v188;
        }
        else
        {
          v37 = *(_OWORD *)((char *)&v211[2] + 4);
          v175 = 0;
        }
        v38 = (__int64)v206;
        v39 = (unsigned __int64)v205;
        v40 = (char *)(v207 - v206);
        v41 = (v206 - v205) / 56;
        if ( !((v207 - v206) / 56) )
        {
          if ( v41 + 1 < v41 )
            std::_Xoverflow_error(v40);
          v42 = detail::liberal_expansion_policy::expand(
                  (detail::liberal_expansion_policy *)v40,
                  (v207 - v205) / 56,
                  v41 + 1);
          v187.m128_u64[0] = (unsigned __int64)operator new(saturated_mul(v42, 0x38uLL));
          v43 = v187.m128_u64[0];
          v187.m128_u64[1] = v41;
          v188.m128_u64[0] = 0LL;
          v200 = v187;
          v201 = 0LL;
          std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
            (__int64)v186.m[1],
            (__int64)v205,
            (__int64)v206,
            &v200);
          v44 = v205;
          v45 = v205 == v208;
          v205 = (_BYTE *)v43;
          if ( v45 )
            v44 = 0LL;
          operator delete(v44);
          v39 = (unsigned __int64)v205;
          v38 = (__int64)&v205[56 * v41];
          v206 = (_BYTE *)v38;
          v207 = &v205[56 * v42];
        }
        v198.m128_u64[1] = 1LL;
        v46 = v38;
        v47 = (unsigned __int128)((__int64)(v38 - v39) * (__int128)0x4924924924924925LL) >> 64;
        v48 = (__int64)(v38 - v39) / 56;
        v49 = v48 - v41;
        v191 = v48 - v41;
        v198.m128_u64[0] = v39 + 56 * v48;
        v199 = 0LL;
        if ( !v198.m128_u64[0] )
        {
          _o__invalid_parameter_noinfo_noreturn(v38 - v39, v47);
          __debugbreak();
        }
        v50 = 1LL;
        v204 = 1LL;
        v192 = v198;
        if ( v49 <= 1 )
          v50 = v48 - v41;
        v193 = 1LL;
        v51 = v38 - 56 * v50;
        if ( v38 != v51 )
        {
          v52 = v192.m128_u64[0];
          v53 = v193;
          do
          {
            v46 -= 56LL;
            if ( !v52 )
            {
              _o__invalid_parameter_noinfo_noreturn(v51, v47);
              __debugbreak();
            }
            if ( !v53 )
            {
              _o__invalid_parameter_noinfo_noreturn(v51, v47);
              __debugbreak();
            }
            if ( --v53 >= v192.m128_u64[1] )
            {
              _o__invalid_parameter_noinfo_noreturn(v51, v47);
              __debugbreak();
            }
            v54 = v52 + 56 * v53;
            *(_DWORD *)v54 = *(_DWORD *)v46;
            *(_DWORD *)(v54 + 4) = *(_DWORD *)(v46 + 4);
            *(_DWORD *)(v54 + 8) = *(_DWORD *)(v46 + 8);
            *(_DWORD *)(v54 + 12) = *(_DWORD *)(v46 + 12);
            *(_DWORD *)(v54 + 16) = *(_DWORD *)(v46 + 16);
            *(_DWORD *)(v54 + 20) = *(_DWORD *)(v46 + 20);
            *(_DWORD *)(v54 + 24) = *(_DWORD *)(v46 + 24);
            *(_DWORD *)(v54 + 28) = *(_DWORD *)(v46 + 28);
            *(_DWORD *)(v54 + 32) = *(_DWORD *)(v46 + 32);
            *(_OWORD *)(v54 + 36) = *(_OWORD *)(v46 + 36);
            *(_BYTE *)(v54 + 52) = *(_BYTE *)(v46 + 52);
            *(_BYTE *)(v54 + 53) = *(_BYTE *)(v46 + 53);
          }
          while ( v46 != v51 );
          v38 = (__int64)v206;
          v49 = v191;
          v14 = LODWORD(v176);
        }
        if ( v49 > 1 )
        {
          v187.m128_u64[0] = v39;
          v187.m128_u64[1] = v48;
          v188.m128_u64[0] = 0LL;
          v55 = v48 < 0;
          if ( v48 )
          {
            if ( !v39 )
              goto LABEL_36;
            v55 = v48 < 0;
          }
          if ( v55 && v48 )
          {
LABEL_36:
            _o__invalid_parameter_noinfo_noreturn(v51, v47);
            __debugbreak();
          }
          v202 = v187;
          v196 = v48;
          v203 = v48;
          std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
            &v198,
            v39 + 56 * v41,
            v39 + 56 * v48 - 56,
            &v202);
          v38 = (__int64)v206;
        }
        v11 = *(const struct PrimitiveVertexAttributesDesc **)&v186.m11;
        ++v14;
        v6 = (__m128)v182;
        v15 = v177.m128_f32[1];
        v16 = v177.m128_f32[0];
        v56 = 56 * v41;
        v12 = (CDrawListEntryBuilder *)v194;
        v206 = (_BYTE *)(v38 + 56);
        v176 = *(float *)&v14;
        *(_OWORD *)(v56 + v39) = v211[0];
        *(_OWORD *)(v56 + v39 + 16) = v211[1];
        *(_DWORD *)(v56 + v39 + 32) = v211[2];
        *(_BYTE *)(v56 + v39 + 52) = v174;
        *(_BYTE *)(v56 + v39 + 53) = v175;
        *(_OWORD *)(v56 + v39 + 36) = v37;
      }
      while ( v14 < *((_DWORD *)v11 + 10) );
    }
    v5 = (float *)v205;
    v8 = v207;
  }
  v57 = (v206 - (_BYTE *)v5) / 56;
  if ( v57 < *(unsigned int *)v12 )
  {
    while ( 1 )
    {
      v58 = (char *)(v8 - v206);
      if ( !((v8 - v206) / 56) )
      {
        if ( v57 + 1 < v57 )
          std::_Xoverflow_error(v58);
        v59 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)v58,
                (v8 - (char *)v5) / 56,
                v57 + 1);
        v61 = 56 * v59;
        if ( !is_mul_ok(v59, 0x38uLL) )
          v61 = v60;
        v192.m128_u64[0] = (unsigned __int64)operator new(v61);
        v192.m128_u64[1] = v57;
        v62 = v192.m128_u64[0];
        v193 = 0LL;
        v202 = v192;
        v203 = 0LL;
        std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
          (__int64)&matrix,
          (__int64)v205,
          (__int64)v206,
          &v202);
        v63 = v205;
        v45 = v205 == v208;
        v205 = (_BYTE *)v62;
        if ( v45 )
          v63 = 0LL;
        operator delete(v63);
        v5 = (float *)v205;
        v206 = &v205[56 * v57];
        v207 = &v205[56 * v59];
      }
      v64 = (__int64)v206;
      v177.m128_u64[1] = 1LL;
      v65 = (unsigned __int128)((v206 - (_BYTE *)v5) * (__int128)0x4924924924924925LL) >> 64;
      v66 = (v206 - (_BYTE *)v5) / 56;
      v67 = v66 - v57;
      v190 = v66 - v57;
      v177.m128_u64[0] = (unsigned __int64)&v5[14 * v66];
      v178 = 0LL;
      if ( !v177.m128_u64[0] )
      {
        _o__invalid_parameter_noinfo_noreturn(v206 - (_BYTE *)v5, v65);
        __debugbreak();
      }
      v68 = 1LL;
      v196 = 1LL;
      v187 = v177;
      if ( v67 <= 1 )
        v68 = v66 - v57;
      v188.m128_u64[0] = 1LL;
      v69 = &v206[-56 * v68];
      if ( v206 != v69 )
      {
        v70 = v187.m128_u64[0];
        v71 = v188.m128_u64[0];
        do
        {
          v64 -= 56LL;
          if ( !v70 )
          {
            _o__invalid_parameter_noinfo_noreturn(v69, v65);
            __debugbreak();
          }
          if ( !v71 )
          {
            _o__invalid_parameter_noinfo_noreturn(v69, v65);
            __debugbreak();
          }
          if ( --v71 >= v187.m128_u64[1] )
          {
            _o__invalid_parameter_noinfo_noreturn(v69, v65);
            __debugbreak();
          }
          v72 = v70 + 56 * v71;
          *(_DWORD *)v72 = *(_DWORD *)v64;
          *(_DWORD *)(v72 + 4) = *(_DWORD *)(v64 + 4);
          *(_DWORD *)(v72 + 8) = *(_DWORD *)(v64 + 8);
          *(_DWORD *)(v72 + 12) = *(_DWORD *)(v64 + 12);
          *(_DWORD *)(v72 + 16) = *(_DWORD *)(v64 + 16);
          *(_DWORD *)(v72 + 20) = *(_DWORD *)(v64 + 20);
          *(_DWORD *)(v72 + 24) = *(_DWORD *)(v64 + 24);
          *(_DWORD *)(v72 + 28) = *(_DWORD *)(v64 + 28);
          *(_DWORD *)(v72 + 32) = *(_DWORD *)(v64 + 32);
          *(_OWORD *)(v72 + 36) = *(_OWORD *)(v64 + 36);
          *(_BYTE *)(v72 + 52) = *(_BYTE *)(v64 + 52);
          *(_BYTE *)(v72 + 53) = *(_BYTE *)(v64 + 53);
        }
        while ( (_BYTE *)v64 != v69 );
        v67 = v190;
        v12 = (CDrawListEntryBuilder *)v194;
      }
      if ( v67 > 1 )
      {
        v192.m128_u64[0] = (unsigned __int64)v5;
        v192.m128_u64[1] = v66;
        v193 = 0LL;
        v73 = v66 < 0;
        if ( v66 )
        {
          if ( !v5 )
            goto LABEL_68;
          v73 = v66 < 0;
        }
        if ( v73 && v66 )
        {
LABEL_68:
          _o__invalid_parameter_noinfo_noreturn(v69, v65);
          __debugbreak();
        }
        v200 = v192;
        v204 = v66;
        v201 = v66;
        std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
          &matrix,
          &v5[14 * v57],
          &v5[14 * v66 - 14],
          &v200);
      }
      v206 += 56;
      v74 = 14 * v57;
      v5[v74 + 13] = 0.0;
      *(_QWORD *)&v5[v74] = 0LL;
      *(_QWORD *)&v5[v74 + 2] = 0LL;
      *(_QWORD *)&v5[v74 + 4] = 0LL;
      *(_QWORD *)&v5[v74 + 6] = 0LL;
      v5[v74 + 8] = 0.0;
      *(_QWORD *)&v5[v74 + 9] = 0LL;
      *(_QWORD *)&v5[v74 + 11] = 0LL;
      v5 = (float *)v205;
      v57 = (v206 - v205) / 56;
      if ( v57 >= *(unsigned int *)v12 )
        break;
      v8 = v207;
    }
  }
  v75 = v183;
  v76 = *(float *)v183;
  if ( *(float *)v183 == v6.m128_f32[0]
    && *((float *)v183 + 1) == 0.0
    && *((float *)v183 + 2) == 0.0
    && *((float *)v183 + 3) == v6.m128_f32[0]
    && *((float *)v183 + 4) == 0.0
    && *((float *)v183 + 5) == 0.0 )
  {
    v77 = a5;
    if ( a5 < *((_DWORD *)v12 + 544) )
    {
      v78 = a5 * v185;
      v79 = a5 * v185;
      do
      {
        v80 = v184 + v79;
        v81 = v195[0] + v78;
        v82 = gsl::narrow<__int64,unsigned __int64>((v206 - (_BYTE *)v5) / 56);
        gsl::details::extent_type<-1>::extent_type<-1>((__int64 *)v186.m[1], v82);
        *(_QWORD *)&v186.m[2][0] = v5;
        if ( *(__int64 *)&v186.m[1][0] < 0 || !v5 && *(_QWORD *)&v186.m[1][0] )
        {
          gsl::details::terminate(v83);
          __debugbreak();
        }
        v194 = *(_OWORD *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(
                            (__int64 *)&v187,
                            (__int64 *)v186.m[1]);
        ComputeUVsFromXY(v80, v81, &v194);
        v79 += v185;
        ++v77;
        v78 += v185;
        v5 = (float *)v205;
      }
      while ( v77 < *((_DWORD *)v12 + 544) );
    }
  }
  else
  {
    v86 = *((float *)v183 + 1);
    if ( IsCloseRealZero(v86, 0.000081380211) && IsCloseRealZero(*((float *)v75 + 2), 0.000081380211)
      || IsCloseRealZero(v76, 0.000081380211) && IsCloseRealZero(*((float *)v75 + 3), 0.000081380211) )
    {
      v88 = *((_QWORD *)v75 + 2);
      v177 = *(__m128 *)v75;
      v178 = v88;
      if ( IsCloseRealZero(v76, 0.000081380211) && IsCloseRealZero(*((float *)v75 + 3), 0.000081380211) )
      {
        *(float *)&v179 = FLOAT_N1_0;
        m21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v86) & _xmm);
        v90 = *((float *)v75 + 2);
        v186.m11 = m21;
        m22 = COERCE_DOUBLE(*(_QWORD *)&v90 & _xmm);
        v176 = m22;
        if ( v177.m128_f32[1] >= 0.0 )
          v181 = v6.m128_i32[0];
        else
          *(float *)&v181 = FLOAT_N1_0;
        v180 = v177.m128_i32[3];
        LODWORD(v183) = v177.m128_i32[0];
        if ( v177.m128_f32[2] >= 0.0 )
          v179 = v6.m128_i32[0];
      }
      else
      {
        m21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v76) & _xmm);
        v92 = *((float *)v75 + 3);
        v186.m11 = m21;
        m22 = COERCE_DOUBLE(*(_QWORD *)&v92 & _xmm);
        *(float *)&v180 = FLOAT_N1_0;
        v176 = m22;
        if ( v177.m128_f32[0] >= 0.0 )
          LODWORD(v183) = v6.m128_i32[0];
        else
          *(float *)&v183 = FLOAT_N1_0;
        v179 = v177.m128_i32[2];
        v181 = v177.m128_i32[1];
        if ( v177.m128_f32[3] >= 0.0 )
          v180 = v6.m128_i32[0];
      }
    }
    else
    {
      D2DMatrixHelper::GetScaleDimensions(v75, (struct D2D_MATRIX_3X2_F *)v186.m[1], &v186.m22, v87);
      m21 = v186.m21;
      v93 = v6;
      m22 = v186.m22;
      v94 = (__m128)*((unsigned int *)v75 + 5);
      v93.m128_f32[0] = v6.m128_f32[0] / v186.m21;
      v95 = v93;
      v186.m11 = v186.m21;
      v95.m128_f32[0] = (float)(v6.m128_f32[0] / v186.m21) * v76;
      v96 = _mm_shuffle_ps(v95, v95, 225);
      v176 = v186.m22;
      v96.m128_f32[0] = (float)(v6.m128_f32[0] / v186.m21) * v86;
      v97 = _mm_shuffle_ps(v96, v96, 198);
      v97.m128_f32[0] = (float)(v6.m128_f32[0] / v186.m22) * *((float *)v75 + 2);
      v98 = _mm_shuffle_ps(v97, v97, 39);
      v98.m128_f32[0] = (float)(v6.m128_f32[0] / v186.m22) * *((float *)v75 + 3);
      v178 = _mm_unpacklo_ps((__m128)*((unsigned int *)v75 + 4), v94).m128_u64[0];
      v177 = _mm_shuffle_ps(v98, v98, 57);
      v180 = _mm_shuffle_ps(v177, v177, 255).m128_u32[0];
      v179 = v177.m128_i32[2];
      v181 = v177.m128_i32[1];
      LODWORD(v183) = v177.m128_i32[0];
    }
    v99 = (__int64)v206;
    m21_low = v6;
    *(_QWORD *)&v211[0] = (char *)&v211[1] + 8;
    m21_low.m128_f32[0] = v6.m128_f32[0] / m21;
    v101 = v5 + 6;
    *((_QWORD *)&v211[0] + 1) = (char *)&v211[1] + 8;
    *(_QWORD *)&v211[1] = &v212;
    v186.m21 = v6.m128_f32[0] / m21;
    *(float *)&v182 = v6.m128_f32[0] / m22;
    *(float *)&v190 = 0.0 - (float)((float)(v6.m128_f32[0] / m21) * 0.0);
    *(float *)&v191 = 0.0 - (float)((float)(v6.m128_f32[0] / m22) * 0.0);
    while ( 1 )
    {
      v102 = (__m128 *)(v101 - 6);
      if ( v101 - 6 == (float *)v99 )
        break;
      v103 = *(v101 - 3);
      v104 = m21_low;
      v105 = *(v101 - 5);
      v106 = v102->m128_f32[0];
      v107 = *(v101 - 2);
      v108 = *(v101 - 1);
      v109 = *(v101 - 4);
      v110 = *v101;
      v111 = v101[1];
      v112 = v101[2];
      v113 = *v101 * 0.0;
      v114 = m21_low.m128_f32[0] * v109;
      v104.m128_f32[0] = (float)((float)(m21_low.m128_f32[0] * v102->m128_f32[0]) + (float)(v103 * 0.0)) + v113;
      v198 = v104;
      v104.m128_i32[0] = m21_low.m128_i32[0];
      v115 = (__m128)v182;
      *(float *)&v194 = (float)((float)(v104.m128_f32[0] * v105) + (float)(v107 * 0.0)) + (float)(v111 * 0.0);
      v115.m128_f32[0] = (float)((float)(*(float *)&v182 * v107) + (float)(v105 * 0.0)) + (float)(v111 * 0.0);
      v187 = v115;
      v116 = (float)((float)(*(float *)&v190 * v105) + (float)(*(float *)&v191 * v107)) + v111;
      v197 = (float)((float)(*(float *)&v190 * v109) + (float)(*(float *)&v191 * v108)) + v112;
      v117 = _mm_shuffle_ps(v198, v198, 225);
      v117.m128_f32[0] = *(float *)&v194;
      v118 = _mm_shuffle_ps(v117, v117, 198);
      v118.m128_f32[0] = (float)(v114 + (float)(v108 * 0.0)) + (float)(v112 * 0.0);
      v119 = v197;
      v101 += 14;
      v120 = _mm_shuffle_ps(v187, v187, 225);
      v120.m128_f32[0] = (float)((float)(*(float *)&v182 * v108) + (float)(v109 * 0.0)) + (float)(v112 * 0.0);
      v121 = _mm_shuffle_ps(v118, v118, 39);
      m21_low = (__m128)LODWORD(v186.m21);
      v121.m128_f32[0] = (float)((float)(*(float *)&v182 * v103) + (float)(v106 * 0.0)) + v113;
      v122 = _mm_shuffle_ps(v120, v120, 198);
      v122.m128_f32[0] = (float)((float)(*(float *)&v191 * v103) + (float)(*(float *)&v190 * v106)) + v110;
      v123 = _mm_shuffle_ps(v122, v122, 39);
      *v102 = _mm_shuffle_ps(v121, v121, 57);
      v123.m128_f32[0] = v116;
      v102[1] = _mm_shuffle_ps(v123, v123, 57);
      v102[2].m128_f32[0] = v119;
    }
    v124 = a5;
    if ( a5 < *((_DWORD *)v12 + 544) )
    {
      v125 = v185;
      v126 = *((float *)&v178 + 1);
      v127 = *(float *)&v178;
      v128 = *(float *)&v179;
      v129 = *(float *)&v180;
      v130 = *(float *)&v181;
      v131 = *(float *)&v183;
      m11 = v186.m11;
      v133 = v176;
      v134 = v184;
      v135 = a5 * v185;
      v136 = a5 * v185;
      do
      {
        v137 = (float *)(v134 + v136);
        v138 = (float *)(v195[0] + v135);
        v139 = *v137 - *v138;
        v140 = v137[1] - v138[1];
        v141 = *v138 * m11;
        v138[1] = v133 * v138[1];
        *v138 = v141;
        *v137 = v141 + v139;
        v137[1] = v140 + v138[1];
        v142 = (__int64)v205;
        v143 = (v206 - v205) / 56;
        if ( v143 < 0 )
        {
          v195[0] = 0LL;
          v195[1] = 0LL;
          gsl::narrowing_error::narrowing_error((gsl::narrowing_error *)v195);
          gsl::details::throw_exception<gsl::narrowing_error>(v172, v171, v173);
          __debugbreak();
        }
        if ( !v205 && v143 || !v205 && v143 )
        {
          gsl::details::terminate((gsl::details *)(v206 - v205));
          JUMPOUT(0x180092DFBLL);
        }
        v144 = 0LL;
        v145 = 0;
        if ( (_DWORD)v143 )
        {
          do
          {
            if ( v145 >= (unsigned __int64)v143 )
            {
              gsl::details::terminate((gsl::details *)v144);
              __debugbreak();
            }
            v144 = v142 + 56LL * v145;
            if ( *(_BYTE *)(v144 + 53) )
            {
              v146 = v137[1];
              v147 = *(float *)(v144 + 16);
              v148 = *(float *)(v144 + 4);
              v149 = *(float *)(v144 + 20);
              v150 = *(float *)(v144 + 8);
              v151 = *(float *)(v144 + 32);
              v152 = *(float *)(v144 + 28);
              v153 = (float)((float)(v147 * v146) + (float)(v148 * *v137)) + v152;
              v154 = (float)((float)(v149 * v146) + (float)(v150 * *v137)) + v151;
              if ( !IsCloseRealZero(v154, 0.000081380211) && !IsCloseRealOne(v154, 0.000081380211) )
                v153 = v153 / v154;
              v156 = v155[1];
              v157 = (float)((float)(v150 * *v155) + (float)(v149 * v156)) + v151;
              v158 = (float)((float)(v148 * *v155) + (float)(v147 * v156)) + v152;
              if ( !IsCloseRealZero(v157, 0.000081380211) && !IsCloseRealOne(v157, 0.000081380211) )
              {
                v160 = v160 / v157;
                v158 = v158 / v157;
              }
              if ( *(_BYTE *)(v144 + 52) )
              {
                v162 = *(float *)(v144 + 44);
                v163 = *(float *)(v144 + 36);
                if ( v161 <= v162 )
                  v161 = fmaxf(v161, v163);
                else
                  v161 = *(float *)(v144 + 44);
                v164 = *(float *)(v144 + 48);
                v165 = *(float *)(v144 + 40);
                if ( v153 <= v164 )
                  v153 = fmaxf(v153, v165);
                else
                  v153 = *(float *)(v144 + 48);
                if ( v160 <= v162 )
                  v160 = fmaxf(v160, v163);
                else
                  v160 = *(float *)(v144 + 44);
                if ( v158 <= v164 )
                  v158 = fmaxf(v158, v165);
                else
                  v158 = *(float *)(v144 + 48);
              }
              v137[2 * v159 + 4] = v161;
              v137[2 * v159 + 5] = v153;
              v138[2 * v159 + 4] = v160;
              v138[2 * v159 + 5] = v158;
            }
            else
            {
              v137[2 * v145 + 4] = 0.0;
              v137[2 * v145 + 5] = 0.0;
              v184 = 0LL;
              v138[2 * v145 + 4] = 0.0;
              v138[2 * v145 + 5] = 0.0;
            }
            ++v145;
          }
          while ( v145 < (unsigned int)v143 );
          v128 = *(float *)&v179;
          v129 = *(float *)&v180;
          v130 = *(float *)&v181;
          v131 = *(float *)&v183;
          v126 = *((float *)&v178 + 1);
          v127 = *(float *)&v178;
          m11 = v186.m11;
          v133 = v176;
        }
        ++v124;
        v136 += v125;
        v135 += v125;
        v166 = (float)((float)(v137[1] * v129) + (float)(*v137 * v130)) + v126;
        *v137 = (float)((float)(v137[1] * v128) + (float)(*v137 * v131)) + v127;
        v137[1] = v166;
        v167 = (float)((float)(v138[1] * v129) + (float)(*v138 * v130)) + v126;
        *v138 = (float)((float)(v138[1] * v128) + (float)(*v138 * v131)) + v127;
        v138[1] = v167;
      }
      while ( v124 < *((_DWORD *)v12 + 544) );
    }
    v168 = *(_OWORD **)&v211[0];
    v169 = (*((_QWORD *)&v211[0] + 1) - *(_QWORD *)&v211[0]) / 36LL;
    if ( v169 )
    {
      detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region(
        v211,
        v169,
        (*((_QWORD *)&v211[0] + 1) - *(_QWORD *)&v211[0]) / 36LL);
      v168 = *(_OWORD **)&v211[0];
    }
    *(_QWORD *)&v211[0] = 0LL;
    if ( v168 == (_OWORD *)((char *)&v211[1] + 8) )
      v168 = 0LL;
    if ( v168 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v168);
    }
    v5 = (float *)v205;
  }
  v84 = (v206 - (_BYTE *)v5) / 56;
  if ( v84 )
    v206 -= 56 * v84;
  v205 = 0LL;
  if ( v5 == (float *)v208 )
    v5 = 0LL;
  if ( v5 )
  {
    v85 = GetProcessHeap();
    HeapFree(v85, 0, v5);
  }
}
