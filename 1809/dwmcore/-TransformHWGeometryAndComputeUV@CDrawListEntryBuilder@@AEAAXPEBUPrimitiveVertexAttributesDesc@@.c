/*
 * XREFs of ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800B9100
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?size@?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x180009CC0 (-size@-$vector_facade@UTextureStageInfo@@V-$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expans.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x18000CB9C (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?ComputeUVsFromXY@@YAXPEAU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V?$span@$$CBUTextureStageInfo@@$0?0@gsl@@@Z @ 0x180010988 (-ComputeUVsFromXY@@YAXPEAU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V-$span@$$.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18001B75C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::size @ 0x18005D410 (detail--vector_facade__CDrawListEntryBuilder--TransformHWGeometryAndComputeUV_--_15_--TexStageIn.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x180068294 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x1800BC290 (--$uninitialized_copy@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEA.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region @ 0x1800EEC48 (detail--vector_facade__CDrawListEntryBuilder--TransformHWGeometryAndComputeUV_--_15_ea_1800EEC48.c)
 *     ?clear_region@?$vector_facade@UTextureStageInfo@@V?$buffer_impl@UTextureStageInfo@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EECF4 (-clear_region@-$vector_facade@UTextureStageInfo@@V-$buffer_impl@UTextureStageInfo@@$01$00Vlibera.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x180152684 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 *     ??0narrowing_error@gsl@@QEAA@XZ @ 0x180152704 (--0narrowing_error@gsl@@QEAA@XZ.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$move_backward@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x180181820 (--$move_backward@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEAUText.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

void __fastcall CDrawListEntryBuilder::TransformHWGeometryAndComputeUV(
        CDrawListEntryBuilder *this,
        const struct PrimitiveVertexAttributesDesc *a2,
        const struct D2D1::Matrix3x2F *a3,
        const struct D2D1::Matrix3x2F *a4,
        unsigned int a5)
{
  float *v5; // rbx
  __int128 v6; // xmm10
  float *v7; // rsi
  const struct D2D1::Matrix3x2F *v8; // r12
  int v9; // eax
  char *v11; // r8
  const struct PrimitiveVertexAttributesDesc *v12; // r14
  int v13; // r13d
  CDrawListEntryBuilder *v14; // r15
  __int64 v15; // xmm1_8
  gsl::details *v16; // rcx
  float v17; // xmm2_4
  float v18; // xmm7_4
  float v19; // xmm12_4
  float v20; // xmm4_4
  float v21; // xmm13_4
  float v22; // xmm6_4
  unsigned int v23; // r12d
  char v24; // r13
  __int64 v25; // rcx
  int v26; // eax
  float v27; // xmm13_4
  __m128 v28; // xmm15
  float v29; // xmm9_4
  __m128 v30; // xmm1
  float v31; // xmm8_4
  float v32; // xmm14_4
  float v33; // xmm5_4
  float v34; // xmm4_4
  float v35; // xmm11_4
  float v36; // xmm10_4
  float v37; // xmm0_4
  float v38; // xmm7_4
  __m128 v39; // xmm3
  float v40; // xmm6_4
  __m128 v41; // xmm1
  __m128 v42; // xmm1
  __m128 v43; // xmm1
  __m128 v44; // xmm0
  __m128 v45; // xmm6
  __m128 v46; // xmm0
  __m128 v47; // xmm0
  char *v48; // rcx
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rbx
  void *v52; // rcx
  bool v53; // zf
  __int64 v54; // rax
  float *v55; // rdx
  unsigned __int64 v56; // r8
  float *v57; // r9
  unsigned __int64 v58; // r11
  unsigned __int64 v59; // rdi
  __int64 v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rax
  float *v63; // rax
  unsigned __int64 v64; // r15
  unsigned __int64 v65; // r14
  unsigned __int64 v66; // r10
  bool v67; // sf
  __int64 v68; // rax
  unsigned __int64 v69; // r14
  char *v70; // rcx
  unsigned __int64 v71; // rdi
  SIZE_T v72; // r10
  SIZE_T v73; // rax
  _BYTE *v74; // rbx
  void *v75; // rcx
  __int64 v76; // rax
  float *v77; // rdx
  __int64 v78; // r8
  unsigned __int64 v79; // r9
  unsigned __int64 v80; // r11
  __int64 v81; // rcx
  __int64 v82; // r10
  __int64 v83; // rax
  float *v84; // rax
  unsigned __int64 v85; // r15
  unsigned __int64 v86; // rdi
  bool v87; // sf
  __int64 v88; // rax
  float v89; // xmm6_4
  unsigned int v90; // r14d
  signed int v91; // edi
  signed int v92; // r13d
  __int64 v93; // r15
  __int64 v94; // r12
  gsl::details *v95; // rax
  gsl::details *v96; // rcx
  float v97; // xmm9_4
  float m11; // xmm11_4
  float v99; // xmm1_4
  double v100; // xmm2_8
  float v101; // xmm1_4
  float v102; // xmm1_4
  unsigned __int64 v103; // xmm1_8
  float v104; // xmm3_4
  float v105; // xmm1_4
  double v106; // xmm0_8
  float m12; // xmm13_4
  double v108; // xmm0_8
  __m128 v109; // xmm2
  __m128 v110; // xmm4
  __m128 v111; // xmm4
  __m128 v112; // xmm4
  __m128 v113; // xmm4
  float v114; // xmm4_4
  float *v115; // rbx
  __m128 *v116; // rcx
  __m128 v117; // xmm13
  float v118; // xmm12_4
  __m128 v119; // xmm15
  float v120; // xmm8_4
  float v121; // xmm6_4
  float v122; // xmm11_4
  float v123; // xmm9_4
  float v124; // xmm3_4
  float v125; // xmm5_4
  float v126; // xmm3_4
  __m128 v127; // xmm15
  __m128 v128; // xmm15
  __m128 v129; // xmm15
  float v130; // xmm3_4
  __m128 v131; // xmm13
  float v132; // xmm6_4
  __m128 v133; // xmm13
  float v134; // xmm1_4
  float v135; // xmm0_4
  __m128 v136; // xmm13
  unsigned int v137; // edi
  float v138; // xmm7_4
  float v139; // xmm10_4
  float v140; // xmm5_4
  float m21; // xmm6_4
  float v142; // xmm8_4
  float v143; // xmm9_4
  float v144; // xmm11_4
  float v145; // xmm13_4
  __int64 v146; // r14
  __int64 v147; // r12
  signed int v148; // ebx
  signed int v149; // esi
  float *v150; // r9
  float *v151; // r8
  float v152; // xmm0_4
  float v153; // xmm2_4
  float v154; // xmm3_4
  float v155; // xmm1_4
  _BYTE *v156; // r11
  __int64 v157; // rdx
  __int64 v158; // r10
  float *v159; // rax
  float v160; // xmm2_4
  float v161; // xmm15_4
  float v162; // xmm13_4
  float v163; // xmm14_4
  float v164; // xmm5_4
  float v165; // xmm6_4
  float v166; // xmm8_4
  float v167; // xmm1_4
  float v168; // xmm2_4
  float v169; // xmm0_4
  float v170; // xmm7_4
  float v171; // xmm4_4
  float v172; // xmm3_4
  float v173; // xmm1_4
  float v174; // xmm2_4
  float v175; // xmm0_4
  float v176; // xmm2_4
  float v177; // xmm1_4
  float v178; // xmm7_4
  float v179; // xmm3_4
  float v180; // xmm1_4
  __int64 v181; // rax
  __int64 v182; // rdx
  void *v183; // r8
  __int64 v184; // rax
  __int64 v185; // rdx
  unsigned __int8 v186; // [rsp+28h] [rbp-E0h]
  int v187; // [rsp+2Ch] [rbp-DCh]
  unsigned __int64 v188; // [rsp+2Ch] [rbp-DCh]
  float v189; // [rsp+30h] [rbp-D8h]
  float v190; // [rsp+34h] [rbp-D4h]
  FLOAT v191; // [rsp+34h] [rbp-D4h]
  float v192; // [rsp+38h] [rbp-D0h]
  float v193; // [rsp+38h] [rbp-D0h]
  __m128 v194; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v195; // [rsp+58h] [rbp-B0h]
  __int32 v196; // [rsp+68h] [rbp-A0h]
  float v197; // [rsp+6Ch] [rbp-9Ch]
  float v198; // [rsp+70h] [rbp-98h]
  float v199; // [rsp+74h] [rbp-94h]
  __int64 v200; // [rsp+78h] [rbp-90h]
  struct D2D_MATRIX_3X2_F v201; // [rsp+80h] [rbp-88h] BYREF
  __m128 v202; // [rsp+98h] [rbp-70h] BYREF
  __int64 v203; // [rsp+A8h] [rbp-60h]
  _QWORD v204[6]; // [rsp+B8h] [rbp-50h] BYREF
  float v205; // [rsp+E8h] [rbp-20h]
  __int64 v206[2]; // [rsp+F0h] [rbp-18h] BYREF
  __m128 v207; // [rsp+100h] [rbp-8h]
  __int64 v208; // [rsp+110h] [rbp+8h]
  __int64 v209; // [rsp+118h] [rbp+10h]
  __m128 v210; // [rsp+128h] [rbp+20h] BYREF
  __int64 v211; // [rsp+138h] [rbp+30h]
  __m128 v212; // [rsp+148h] [rbp+40h] BYREF
  __int64 v213; // [rsp+158h] [rbp+50h]
  __int64 v214; // [rsp+178h] [rbp+70h]
  __m128 v215; // [rsp+188h] [rbp+80h] BYREF
  __int64 v216; // [rsp+198h] [rbp+90h]
  __m128 v217[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE *v219; // [rsp+1E8h] [rbp+E0h] BYREF
  float *v220; // [rsp+1F0h] [rbp+E8h]
  char *v221; // [rsp+1F8h] [rbp+F0h]
  _BYTE v222[112]; // [rsp+200h] [rbp+F8h] BYREF
  char v223; // [rsp+270h] [rbp+168h] BYREF
  _OWORD v224[6]; // [rsp+278h] [rbp+170h] BYREF
  __int64 v225; // [rsp+2D8h] [rbp+1D0h] BYREF

  v5 = (float *)v222;
  v6 = LODWORD(FLOAT_1_0);
  v7 = (float *)v222;
  v209 = *((_QWORD *)this + 24);
  v8 = a4;
  v9 = *(_DWORD *)this;
  v206[0] = (__int64)a4;
  *(_QWORD *)&v201.m[1][0] = a2;
  v11 = &v223;
  *(_QWORD *)&v201.m11 = this;
  v12 = a2;
  v219 = v222;
  v13 = 8 * v9 + 16;
  v14 = this;
  v204[0] = *((_QWORD *)this + 148);
  v187 = v13;
  v220 = (float *)v222;
  v221 = &v223;
  if ( a2 )
  {
    v15 = *((_QWORD *)a3 + 2);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)a3;
    *(_QWORD *)&matrix.m[2][0] = v15;
    D2D1InvertMatrix(&matrix);
    v17 = *((float *)v8 + 2);
    LODWORD(v15) = *((_DWORD *)v8 + 4);
    v18 = (float)(*(float *)v8 * matrix.m11) + (float)(matrix.m21 * *((float *)v8 + 1));
    v19 = (float)(matrix.m12 * *(float *)v8) + (float)(matrix.m22 * *((float *)v8 + 1));
    v20 = matrix.m21 * *((float *)v8 + 5);
    v197 = (float)(v17 * matrix.m11) + (float)(matrix.m21 * *((float *)v8 + 3));
    v21 = matrix.m22 * *((float *)v8 + 5);
    v22 = matrix.m22 * *((float *)v8 + 3);
    v23 = 0;
    v192 = v18;
    v189 = v19;
    *(float *)&v200 = (float)((float)(*(float *)&v15 * matrix.m11) + v20) + matrix.dx;
    v190 = v22 + (float)(matrix.m12 * v17);
    v199 = (float)(v21 + (float)(matrix.m12 * *(float *)&v15)) + matrix.dy;
    if ( *((_DWORD *)v12 + 8) )
    {
      do
      {
        if ( v23 >= *((__int64 *)v12 + 4) )
        {
          gsl::details::terminate(v16);
          __debugbreak();
        }
        v24 = 0;
        v25 = *((_QWORD *)v12 + 5) + 52LL * v23;
        memset(v224, 0, 52);
        v26 = *((_DWORD *)v14 + 569);
        if ( _bittest(&v26, v23) )
        {
          v186 = 1;
          v194 = *(__m128 *)(v25 + 36);
          if ( v194.m128_f32[0] != 0.0
            || _mm_shuffle_ps(v194, v194, 85).m128_f32[0] != 0.0
            || _mm_shuffle_ps(v194, v194, 170).m128_f32[0] != *(float *)&v6
            || _mm_shuffle_ps(v194, v194, 255).m128_f32[0] != *(float *)&v6 )
          {
            v24 = 1;
          }
          v27 = *(float *)v25;
          v28 = (__m128)*(unsigned int *)(v25 + 12);
          v29 = *(float *)(v25 + 16);
          v30 = v28;
          v31 = *(float *)(v25 + 4);
          v32 = *(float *)(v25 + 24);
          v33 = *(float *)(v25 + 20);
          v34 = *(float *)(v25 + 8);
          v35 = *(float *)(v25 + 28);
          v36 = *(float *)(v25 + 12) * v190;
          v30.m128_f32[0] = (float)(v28.m128_f32[0] * v19) + (float)(v18 * *(float *)v25);
          v37 = v18;
          v38 = *(float *)(v25 + 32);
          v30.m128_f32[0] = v30.m128_f32[0] + (float)(v32 * 0.0);
          v217[0] = v30;
          v198 = (float)((float)(v19 * v29) + (float)(v37 * v31)) + (float)(v35 * 0.0);
          v39 = (__m128)LODWORD(v190);
          v39.m128_f32[0] = (float)((float)(v190 * v29) + (float)(v197 * v31)) + (float)(v35 * 0.0);
          v210 = v39;
          v40 = (float)((float)(v190 * v33) + (float)(v197 * v34)) + (float)(v38 * 0.0);
          v205 = (float)((float)(*(float *)&v200 * v34) + (float)(v199 * v33)) + v38;
          v41 = _mm_shuffle_ps(v217[0], v217[0], 225);
          v41.m128_f32[0] = v198;
          v42 = _mm_shuffle_ps(v41, v41, 198);
          v42.m128_f32[0] = (float)((float)(v19 * v33) + (float)(v192 * v34)) + (float)(v38 * 0.0);
          v43 = _mm_shuffle_ps(v42, v42, 39);
          v43.m128_f32[0] = (float)(v36 + (float)(v197 * v27)) + (float)(v32 * 0.0);
          v6 = LODWORD(FLOAT_1_0);
          v18 = v192;
          v19 = v189;
          v44 = _mm_shuffle_ps(v210, v210, 225);
          v44.m128_f32[0] = v40;
          v45 = v194;
          *(float *)&v224[2] = v205;
          v46 = _mm_shuffle_ps(v44, v44, 198);
          v46.m128_f32[0] = (float)((float)(*(float *)&v200 * v27) + (float)(v28.m128_f32[0] * v199)) + v32;
          v47 = _mm_shuffle_ps(v46, v46, 39);
          v47.m128_f32[0] = (float)((float)(*(float *)&v200 * v31) + (float)(v199 * v29)) + v35;
          v224[1] = _mm_shuffle_ps(v47, v47, 57);
          v224[0] = _mm_shuffle_ps(v43, v43, 57);
        }
        else
        {
          v45 = *(__m128 *)((char *)&v224[2] + 4);
          v186 = 0;
        }
        v48 = (char *)(v221 - (char *)v220);
        v49 = ((char *)v220 - v219) / 56;
        if ( !((v221 - (char *)v220) / 56) )
        {
          if ( v49 + 1 < v49 )
            std::_Xoverflow_error(v48);
          v50 = detail::liberal_expansion_policy::expand(
                  (detail::liberal_expansion_policy *)v48,
                  (v221 - v219) / 56,
                  v49 + 1);
          v194.m128_u64[0] = (unsigned __int64)operator new(saturated_mul(v50, 0x38uLL));
          v51 = v194.m128_u64[0];
          v194.m128_u64[1] = v49;
          v195 = 0LL;
          v213 = 0LL;
          v212 = v194;
          std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
            v217,
            v219,
            v220,
            &v212);
          v52 = v219;
          v53 = v219 == v222;
          v219 = (_BYTE *)v51;
          if ( v53 )
            v52 = 0LL;
          WPF::ProcessHeapImpl::Free(v52);
          v220 = (float *)&v219[56 * v49];
          v221 = &v219[56 * v50];
        }
        v54 = detail::vector_facade<TextureStageInfo,detail::buffer_impl<TextureStageInfo,2,1,detail::liberal_expansion_policy>>::size(&v219);
        v210.m128_u64[1] = 1LL;
        v59 = v54 - v49;
        v60 = v54;
        v61 = v58 + 56 * v54;
        v210.m128_u64[0] = v61;
        v211 = 0LL;
        v207 = v210;
        v208 = 0LL;
        if ( !v61 )
        {
LABEL_64:
          _o__invalid_parameter_noinfo_noreturn(v61, v55, v56, v57);
          __debugbreak();
        }
        v62 = 1LL;
        v208 = 1LL;
        v202 = v210;
        if ( v59 <= 1 )
          v62 = v59;
        v203 = 1LL;
        v61 = 56 * v62;
        v63 = &v57[-14 * v62];
        if ( v57 != v63 )
        {
          v64 = v202.m128_u64[1];
          v56 = v207.m128_u64[0] + 64;
          v65 = v202.m128_u64[0];
          v66 = v203;
          do
          {
            v55 = v57 - 14;
            v57 -= 14;
            if ( !v65 )
              goto LABEL_64;
            if ( !v66 )
              goto LABEL_64;
            --v66;
            v56 -= 56LL;
            if ( v66 >= v64 )
              goto LABEL_64;
            *(float *)(v56 - 8) = *v55;
            *(float *)(v56 - 4) = v55[1];
            *(float *)v56 = v55[2];
            *(float *)(v56 + 4) = v55[3];
            *(float *)(v56 + 8) = v55[4];
            *(float *)(v56 + 12) = v55[5];
            *(float *)(v56 + 16) = v55[6];
            *(float *)(v56 + 20) = v55[7];
            *(float *)(v56 + 24) = v55[8];
            *(_OWORD *)(v56 + 28) = *(_OWORD *)(v55 + 9);
            *(_BYTE *)(v56 + 44) = *((_BYTE *)v55 + 52);
            v61 = *((unsigned __int8 *)v55 + 53);
            *(_BYTE *)(v56 + 45) = v61;
          }
          while ( v55 != v63 );
          v57 = v220;
          v12 = *(const struct PrimitiveVertexAttributesDesc **)&v201.m[1][0];
          v14 = *(CDrawListEntryBuilder **)&v201.m11;
        }
        if ( v59 > 1 )
        {
          v194.m128_u64[0] = v58;
          v195 = 0LL;
          v194.m128_u64[1] = v60;
          v214 = 0LL;
          v67 = v60 < 0;
          if ( v60 )
          {
            if ( !v58 )
              goto LABEL_64;
            v67 = v60 < 0;
          }
          if ( v67 && v60 )
            goto LABEL_64;
          v215 = v194;
          v214 = v60;
          v216 = v60;
          std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
            &v194,
            v58 + 56 * v49,
            v58 + 56 * v60 - 56,
            &v215);
          v57 = v220;
        }
        v16 = (gsl::details *)v186;
        v68 = 56 * v49;
        v220 = v57 + 14;
        ++v23;
        *(_OWORD *)(v68 + v58) = v224[0];
        *(_OWORD *)(v68 + v58 + 16) = v224[1];
        *(_DWORD *)(v68 + v58 + 32) = v224[2];
        *(__m128 *)(v68 + v58 + 36) = v45;
        *(_BYTE *)(v68 + v58 + 52) = v24;
        *(_BYTE *)(v68 + v58 + 53) = v186;
      }
      while ( v23 < *((_DWORD *)v12 + 8) );
      v13 = v187;
    }
    v8 = (const struct D2D1::Matrix3x2F *)v206[0];
    v5 = (float *)v219;
    v7 = v220;
    v11 = v221;
  }
  v69 = ((char *)v7 - (char *)v5) / 56;
  if ( v69 < *(unsigned int *)v14 )
  {
    while ( 1 )
    {
      if ( !((v11 - (char *)v7) / 56) )
      {
        v70 = (char *)(v69 + 1);
        if ( v69 + 1 < v69 )
          std::_Xoverflow_error(v70);
        v71 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)v70,
                (v11 - (char *)v5) / 56,
                v69 + 1);
        v73 = 56 * v71;
        if ( !is_mul_ok(v71, 0x38uLL) )
          v73 = v72;
        v202.m128_u64[0] = (unsigned __int64)operator new(v73);
        v202.m128_u64[1] = v69;
        v74 = (_BYTE *)v202.m128_u64[0];
        v203 = 0LL;
        v215 = v202;
        v216 = 0LL;
        std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
          &v210,
          v219,
          v220,
          &v215);
        v75 = v219;
        v53 = v219 == v222;
        v219 = v74;
        if ( v53 )
          v75 = 0LL;
        WPF::ProcessHeapImpl::Free(v75);
        v5 = (float *)v219;
        v221 = &v219[56 * v71];
        v7 = (float *)&v219[56 * v69];
        v220 = v7;
      }
      v76 = detail::vector_facade<TextureStageInfo,detail::buffer_impl<TextureStageInfo,2,1,detail::liberal_expansion_policy>>::size(&v219);
      v207.m128_u64[1] = 1LL;
      v80 = v76 - v69;
      v208 = 0LL;
      v81 = (__int64)&v5[14 * v76];
      v207.m128_u64[0] = v81;
      v82 = v76;
      *(_QWORD *)&matrix.m[2][0] = 0LL;
      *(__m128 *)&matrix.m11 = v207;
      if ( !v81 )
        break;
      v83 = 1LL;
      *(_QWORD *)&matrix.m[2][0] = 1LL;
      v194 = v207;
      if ( v80 <= 1 )
        v83 = v80;
      v195 = 1LL;
      v81 = 56 * v83;
      v84 = &v7[-14 * v83];
      if ( v7 != v84 )
      {
        v85 = v194.m128_u64[1];
        v78 = *(_QWORD *)&matrix.m11 + 64LL;
        v86 = v194.m128_u64[0];
        v79 = v195;
        do
        {
          v77 = v7 - 14;
          v7 -= 14;
          if ( !v86 )
            goto LABEL_65;
          if ( !v79 )
            goto LABEL_65;
          --v79;
          v78 -= 56LL;
          if ( v79 >= v85 )
            goto LABEL_65;
          *(float *)(v78 - 8) = *v77;
          *(float *)(v78 - 4) = v77[1];
          *(float *)v78 = v77[2];
          *(float *)(v78 + 4) = v77[3];
          *(float *)(v78 + 8) = v77[4];
          *(float *)(v78 + 12) = v77[5];
          *(float *)(v78 + 16) = v77[6];
          *(float *)(v78 + 20) = v77[7];
          *(float *)(v78 + 24) = v77[8];
          *(_OWORD *)(v78 + 28) = *(_OWORD *)(v77 + 9);
          *(_BYTE *)(v78 + 44) = *((_BYTE *)v77 + 52);
          v81 = *((unsigned __int8 *)v77 + 53);
          *(_BYTE *)(v78 + 45) = v81;
        }
        while ( v77 != v84 );
        v7 = v220;
        v14 = *(CDrawListEntryBuilder **)&v201.m11;
      }
      if ( v80 > 1 )
      {
        v203 = 0LL;
        v202.m128_u64[0] = (unsigned __int64)v5;
        v202.m128_u64[1] = v82;
        v214 = 0LL;
        v87 = v82 < 0;
        if ( v82 )
        {
          if ( !v5 )
            break;
          v87 = v82 < 0;
        }
        if ( v87 && v82 )
          break;
        v212 = v202;
        v214 = v82;
        v213 = v82;
        std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
          &v202,
          &v5[14 * v69],
          &v5[14 * v82 - 14],
          &v212);
        v7 = v220;
      }
      v88 = 14 * v69;
      v220 = v7 + 14;
      *(_QWORD *)&v5[v88 + 8] = 0LL;
      *(_QWORD *)&v5[v88 + 10] = 0LL;
      *(_QWORD *)&v5[v88 + 12] = 0LL;
      *(_QWORD *)&v5[v88] = 0LL;
      *(_QWORD *)&v5[v88 + 2] = 0LL;
      *(_QWORD *)&v5[v88 + 4] = 0LL;
      *(_QWORD *)&v5[v88 + 6] = 0LL;
      v5[v88 + 8] = 0.0;
      *(_QWORD *)&v5[v88 + 9] = 0LL;
      *(_QWORD *)&v5[v88 + 11] = 0LL;
      LOWORD(v5[v88 + 13]) = 0;
      v7 = v220;
      v5 = (float *)v219;
      v69 = ((char *)v220 - v219) / 56;
      if ( v69 >= *(unsigned int *)v14 )
        goto LABEL_66;
      v11 = v221;
    }
LABEL_65:
    _o__invalid_parameter_noinfo_noreturn(v81, v77, v78, v79);
    __debugbreak();
  }
LABEL_66:
  v89 = *(float *)v8;
  if ( *(float *)v8 == *(float *)&v6
    && *((float *)v8 + 1) == 0.0
    && *((float *)v8 + 2) == 0.0
    && *((float *)v8 + 3) == *(float *)&v6
    && *((float *)v8 + 4) == 0.0
    && *((float *)v8 + 5) == 0.0 )
  {
    v90 = a5;
    if ( a5 < *((_DWORD *)v14 + 544) )
    {
      v91 = a5 * v13;
      v92 = a5 * v13;
      while ( 1 )
      {
        v93 = v209 + v92;
        v94 = v204[0] + v91;
        v95 = gsl::narrow<__int64,unsigned __int64>((gsl::details *)(((char *)v7 - (char *)v5) / 56));
        v206[0] = (__int64)v95;
        if ( (__int64)v95 < 0 || (v206[1] = (__int64)v5) == 0 && v95 )
        {
          gsl::details::terminate(v96);
          __debugbreak();
        }
        v194 = *(__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(
                            (__int64 *)&v210,
                            v206);
        ComputeUVsFromXY(v93, v94, (__int64 *)&v194);
        ++v90;
        v92 += v187;
        v91 += v187;
        v5 = (float *)v219;
        if ( v90 >= *(_DWORD *)(*(_QWORD *)&v201.m11 + 2176LL) )
          break;
        v7 = v220;
      }
    }
    goto LABEL_141;
  }
  v97 = *((float *)v8 + 1);
  m11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v97) & _xmm);
  v193 = m11;
  if ( m11 < 0.000081380211 )
  {
    v99 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v8 + 2)) & _xmm);
    if ( v99 < 0.000081380211 )
    {
      v100 = v89;
      goto LABEL_84;
    }
  }
  v100 = v89;
  v101 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v89) & _xmm);
  if ( v101 < 0.000081380211 )
  {
    v102 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v8 + 3)) & _xmm);
    if ( v102 < 0.000081380211 )
    {
LABEL_84:
      v103 = *((_QWORD *)v8 + 2);
      v104 = COERCE_DOUBLE(*(_QWORD *)&v100 & _xmm);
      v194 = *(__m128 *)v8;
      v195 = v103;
      if ( v104 >= 0.000081380211
        || (v105 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v8 + 3)) & _xmm), v105 >= 0.000081380211) )
      {
        m11 = COERCE_DOUBLE(*(_QWORD *)&v100 & _xmm);
        v193 = m11;
        *(_QWORD *)&v108 = COERCE_UNSIGNED_INT64(*((float *)v8 + 3)) & _xmm;
        v201.m21 = FLOAT_N1_0;
        m12 = v108;
        v191 = m12;
        if ( v194.m128_f32[0] >= 0.0 )
          LODWORD(v188) = v6;
        else
          *(float *)&v188 = FLOAT_N1_0;
        v196 = v194.m128_i32[2];
        HIDWORD(v188) = v194.m128_i32[1];
        if ( v194.m128_f32[3] >= 0.0 )
          LODWORD(v201.m21) = v6;
      }
      else
      {
        v106 = *((float *)v8 + 2);
        *(float *)&v196 = FLOAT_N1_0;
        m12 = COERCE_DOUBLE(*(_QWORD *)&v106 & _xmm);
        v191 = m12;
        if ( v194.m128_f32[1] >= 0.0 )
          HIDWORD(v188) = v6;
        else
          *((float *)&v188 + 1) = FLOAT_N1_0;
        LODWORD(v201.m21) = v194.m128_i32[3];
        LODWORD(v188) = v194.m128_i32[0];
        if ( v194.m128_f32[2] >= 0.0 )
          v196 = v6;
      }
      goto LABEL_97;
    }
  }
  D2DMatrixHelper::GetScaleDimensions(v8, &v201, &v201.m12, (float *)0x4924924924924925LL);
  m11 = v201.m11;
  v109 = (__m128)v6;
  m12 = v201.m12;
  v109.m128_f32[0] = *(float *)&v6 / v201.m11;
  v110 = v109;
  v193 = v201.m11;
  v110.m128_f32[0] = (float)(*(float *)&v6 / v201.m11) * v89;
  v111 = _mm_shuffle_ps(v110, v110, 225);
  v191 = v201.m12;
  v111.m128_f32[0] = (float)(*(float *)&v6 / v201.m11) * v97;
  v112 = _mm_shuffle_ps(v111, v111, 198);
  v112.m128_f32[0] = (float)(*(float *)&v6 / v201.m12) * *((float *)v8 + 2);
  v113 = _mm_shuffle_ps(v112, v112, 39);
  v113.m128_f32[0] = (float)(*(float *)&v6 / v201.m12) * *((float *)v8 + 3);
  v195 = _mm_unpacklo_ps((__m128)*((unsigned int *)v8 + 4), (__m128)*((unsigned int *)v8 + 5)).m128_u64[0];
  v194 = _mm_shuffle_ps(v113, v113, 57);
  LODWORD(v201.m21) = _mm_shuffle_ps(v194, v194, 255).m128_u32[0];
  v196 = v194.m128_i32[2];
  v188 = v194.m128_u64[0];
LABEL_97:
  v114 = *(float *)&v6 / m11;
  *(_QWORD *)&v224[0] = (char *)&v224[1] + 8;
  *((_QWORD *)&v224[0] + 1) = (char *)&v224[1] + 8;
  *(_QWORD *)&v224[1] = &v225;
  v115 = v5 + 6;
  *(float *)&v200 = *(float *)&v6 / m11;
  v197 = *(float *)&v6 / m12;
  *(float *)v206 = 0.0 - (float)((float)(*(float *)&v6 / m11) * 0.0);
  v199 = 0.0 - (float)((float)(*(float *)&v6 / m12) * 0.0);
  while ( 1 )
  {
    v116 = (__m128 *)(v115 - 6);
    if ( v115 - 6 == v7 )
      break;
    v117 = (__m128)*((unsigned int *)v115 - 2);
    v118 = *(v115 - 3);
    v119 = (__m128)v116->m128_u32[0];
    v120 = *(v115 - 5);
    v121 = *(v115 - 1);
    v122 = *v115;
    v123 = v115[1];
    v124 = *v115;
    v125 = v115[2];
    v198 = v119.m128_f32[0];
    v126 = v124 * 0.0;
    LODWORD(v201.m11) = v117.m128_i32[0];
    v119.m128_f32[0] = (float)((float)(v119.m128_f32[0] * v114) + (float)(v118 * 0.0)) + v126;
    v127 = _mm_shuffle_ps(v119, v119, 225);
    v127.m128_f32[0] = (float)((float)(v120 * v114) + (float)(v117.m128_f32[0] * 0.0)) + (float)(v123 * 0.0);
    v128 = _mm_shuffle_ps(v127, v127, 198);
    v128.m128_f32[0] = (float)((float)(*(v115 - 4) * *(float *)&v200) + (float)(v121 * 0.0)) + (float)(v125 * 0.0);
    v129 = _mm_shuffle_ps(v128, v128, 39);
    v117.m128_f32[0] = (float)((float)(v117.m128_f32[0] * v197) + (float)(v120 * 0.0)) + (float)(v123 * 0.0);
    v129.m128_f32[0] = (float)((float)(v118 * v197) + (float)(v198 * 0.0)) + v126;
    v130 = (float)((float)(v121 * v197) + (float)(*(v115 - 4) * 0.0)) + (float)(v125 * 0.0);
    v131 = _mm_shuffle_ps(v117, v117, 225);
    v132 = (float)((float)(v121 * v199) + (float)(*(v115 - 4) * *(float *)v206)) + v125;
    v131.m128_f32[0] = v130;
    v133 = _mm_shuffle_ps(v131, v131, 198);
    v134 = (float)(v198 * *(float *)v206) + (float)(v118 * v199);
    v135 = (float)((float)(v201.m11 * v199) + (float)(v120 * *(float *)v206)) + v123;
    *v116 = _mm_shuffle_ps(v129, v129, 57);
    v205 = v132;
    v133.m128_f32[0] = v134 + v122;
    v136 = _mm_shuffle_ps(v133, v133, 39);
    v136.m128_f32[0] = v135;
    v114 = *(float *)&v200;
    v115 += 14;
    v116[1] = _mm_shuffle_ps(v136, v136, 57);
    v116[2].m128_f32[0] = v132;
  }
  v137 = a5;
  if ( a5 < *((_DWORD *)v14 + 544) )
  {
    v138 = *((float *)&v195 + 1);
    v139 = *(float *)&v195;
    v140 = *(float *)&v196;
    m21 = v201.m21;
    v142 = *((float *)&v188 + 1);
    v143 = *(float *)&v188;
    v144 = v193;
    v145 = v191;
    v146 = v209;
    v147 = v204[0];
    v148 = a5 * v13;
    v149 = a5 * v13;
    do
    {
      v150 = (float *)(v146 + v149);
      v151 = (float *)(v147 + v148);
      v152 = v151[1];
      v153 = *v150 - *v151;
      v154 = *v151 * v144;
      v155 = v150[1] - v152;
      *v151 = v154;
      v151[1] = v152 * v145;
      *v150 = v154 + v153;
      v150[1] = v155 + v151[1];
      v156 = v219;
      v157 = ((char *)v220 - v219) / 56;
      if ( v157 < 0 )
      {
        v204[0] = 0LL;
        v204[1] = 0LL;
        gsl::narrowing_error::narrowing_error((gsl::narrowing_error *)v204);
        gsl::details::throw_exception<gsl::narrowing_error>();
      }
      if ( !v219 && v157 || !v219 && v157 )
      {
        gsl::details::terminate((gsl::details *)((char *)v220 - v219));
        JUMPOUT(0x1800BA801LL);
      }
      v158 = 0LL;
      if ( (_DWORD)v157 )
      {
        do
        {
          if ( (unsigned int)v158 >= v157 )
          {
            gsl::details::terminate((gsl::details *)(unsigned int)v158);
            __debugbreak();
          }
          v159 = (float *)&v156[56 * (unsigned int)v158];
          if ( *((_BYTE *)v159 + 53) )
          {
            v160 = v150[1];
            v161 = v159[8];
            v162 = v159[6];
            v163 = v159[7];
            v164 = (float)((float)(*v159 * *v150) + (float)(v159[3] * v160)) + v162;
            v165 = (float)((float)(v159[1] * *v150) + (float)(v159[4] * v160)) + v163;
            v166 = (float)((float)(v159[2] * *v150) + (float)(v159[5] * v160)) + v161;
            v167 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v166) & _xmm);
            if ( v167 >= 0.000081380211 )
            {
              v168 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v166 - 1.0)) & _xmm);
              if ( v168 >= 0.000081380211 )
              {
                v164 = v164 / v166;
                v165 = v165 / v166;
              }
            }
            v169 = v151[1];
            v170 = (float)((float)(v159[5] * v169) + (float)(v159[2] * *v151)) + v161;
            v171 = (float)((float)(v159[3] * v169) + (float)(*v159 * *v151)) + v162;
            v172 = (float)((float)(v159[4] * v169) + (float)(v159[1] * *v151)) + v163;
            v173 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v170) & _xmm);
            if ( v173 >= 0.000081380211 )
            {
              v174 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v170 - 1.0)) & _xmm);
              if ( v174 >= 0.000081380211 )
              {
                v171 = v171 / v170;
                v172 = v172 / v170;
              }
            }
            if ( *((_BYTE *)v159 + 52) )
            {
              v175 = v159[11];
              v176 = v159[9];
              if ( v164 <= v175 )
                v164 = fmaxf(v164, v176);
              else
                v164 = v159[11];
              v177 = v159[12];
              v178 = v159[10];
              if ( v165 <= v177 )
                v165 = fmaxf(v165, v178);
              else
                v165 = v159[12];
              if ( v171 <= v175 )
                v171 = fmaxf(v171, v176);
              else
                v171 = v159[11];
              if ( v172 <= v177 )
                v172 = fmaxf(v172, v178);
              else
                v172 = v159[12];
            }
            v150[2 * v158 + 4] = v164;
            v150[2 * v158 + 5] = v165;
            v151[2 * v158 + 4] = v171;
            v151[2 * v158 + 5] = v172;
          }
          else
          {
            *(_QWORD *)&v150[2 * v158 + 4] = 0LL;
            v204[0] = 0LL;
            *(_QWORD *)&v151[2 * v158 + 4] = 0LL;
          }
          v158 = (unsigned int)(v158 + 1);
        }
        while ( (unsigned int)v158 < (unsigned int)v157 );
        v140 = *(float *)&v196;
        m21 = v201.m21;
        v142 = *((float *)&v188 + 1);
        v143 = *(float *)&v188;
        v144 = v193;
        v138 = *((float *)&v195 + 1);
        v139 = *(float *)&v195;
        v145 = v191;
      }
      ++v137;
      v149 += v13;
      v148 += v13;
      v179 = (float)((float)(v150[1] * m21) + (float)(v142 * *v150)) + v138;
      *v150 = (float)((float)(v143 * *v150) + (float)(v150[1] * v140)) + v139;
      v150[1] = v179;
      v180 = (float)((float)(m21 * v151[1]) + (float)(v142 * *v151)) + v138;
      *v151 = (float)((float)(v140 * v151[1]) + (float)(v143 * *v151)) + v139;
      v151[1] = v180;
    }
    while ( v137 < *((_DWORD *)v14 + 544) );
  }
  v181 = detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::size(v224);
  if ( v181 )
    detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region(
      v224,
      v182,
      v181);
  v183 = *(void **)&v224[0];
  v53 = *(_QWORD *)&v224[0] == (_QWORD)&v224[1] + 8;
  *(_QWORD *)&v224[0] = 0LL;
  if ( v53 )
    v183 = 0LL;
  if ( v183 )
    HeapFree(WPF::g_processHeap, 0, v183);
  v5 = (float *)v219;
LABEL_141:
  v184 = detail::vector_facade<TextureStageInfo,detail::buffer_impl<TextureStageInfo,2,1,detail::liberal_expansion_policy>>::size(&v219);
  if ( v184 )
  {
    detail::vector_facade<TextureStageInfo,detail::buffer_impl<TextureStageInfo,2,1,detail::liberal_expansion_policy>>::clear_region(
      &v219,
      v185,
      v184);
    v5 = (float *)v219;
  }
  v219 = 0LL;
  if ( v5 == (float *)v222 )
    v5 = 0LL;
  if ( v5 )
    HeapFree(WPF::g_processHeap, 0, v5);
}
