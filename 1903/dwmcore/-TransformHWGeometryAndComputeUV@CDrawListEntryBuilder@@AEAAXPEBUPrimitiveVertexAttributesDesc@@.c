/*
 * XREFs of ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x18002BE80
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x18000FB00 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?ComputeUVsFromXY@@YAXPEAU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V?$span@$$CBUTextureStageInfo@@$0?0@gsl@@@Z @ 0x180015390 (-ComputeUVsFromXY@@YAXPEAU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@PEAUVertexAAFixup_UVxN@@V-$span@$$.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x180016C28 (--$uninitialized_copy@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEA.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_J@Z @ 0x180027930 (--0-$extent_type@$0-0@details@gsl@@QEAA@_J@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180052C34 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800C75E0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18015EAE4 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z @ 0x1801830B0 (--$throw_exception@Unarrowing_error@gsl@@@details@gsl@@YAX$$QEAUnarrowing_error@1@@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUTextureStageInfo@@@std@@V?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUTextureStageInfo@@@stdext@@V?$move_iterator@PEAUTextureStageInfo@@@0@0V12@@Z @ 0x1801AF1B0 (--$move_backward@V-$move_iterator@PEAUTextureStageInfo@@@std@@V-$checked_array_iterator@PEAUText.c)
 *     detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region @ 0x1801AFE08 (detail--vector_facade__CDrawListEntryBuilder--TransformHWGeometryAndComputeUV_--_15_--TexStageIn.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18022A33C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

void __fastcall CDrawListEntryBuilder::TransformHWGeometryAndComputeUV(
        CDrawListEntryBuilder *this,
        const struct PrimitiveVertexAttributesDesc *a2,
        const struct D2D1::Matrix3x2F *a3,
        const struct D2D1::Matrix3x2F *a4,
        unsigned int a5)
{
  int v6; // eax
  __int64 v7; // r9
  __m128 v8; // xmm6
  float *v9; // r14
  float *v10; // rbx
  char *v11; // r8
  __int64 v14; // xmm1_8
  unsigned int v15; // r14d
  float v16; // xmm9_4
  __int128 v17; // xmm11
  __int64 v18; // rbx
  int v19; // eax
  float v20; // xmm13_4
  float v21; // xmm14_4
  __int128 v22; // xmm1
  float v23; // xmm10_4
  float v24; // xmm4_4
  float v25; // xmm6_4
  float v26; // xmm15_4
  float v27; // xmm12_4
  float v28; // xmm7_4
  float v29; // xmm8_4
  __m128 v30; // xmm5
  __m128 v31; // xmm1
  __m128 v32; // xmm1
  __m128 v33; // xmm6
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm0
  __m128 v37; // xmm0
  char *v38; // r8
  _BYTE *v39; // rbx
  char *v40; // rcx
  unsigned __int64 v41; // rsi
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  char *v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rsi
  __m128 v48; // xmm7
  float v49; // xmm11_4
  float m11; // xmm4_4
  float v51; // xmm1_4
  double v52; // xmm2_8
  unsigned __int64 v53; // xmm1_8
  float v54; // xmm3_4
  float v55; // xmm2_4
  float m12; // xmm9_4
  __m128 m11_low; // xmm10
  float *v58; // r14
  __m128 *v59; // rcx
  float v60; // xmm12_4
  __m128 v61; // xmm1
  float v62; // xmm7_4
  float v63; // xmm9_4
  float v64; // xmm5_4
  float v65; // xmm4_4
  float v66; // xmm13_4
  float v67; // xmm11_4
  float v68; // xmm6_4
  float v69; // xmm3_4
  float v70; // xmm8_4
  __m128 v71; // xmm14
  float v72; // xmm2_4
  __m128 v73; // xmm0
  __m128 v74; // xmm0
  __m128 v75; // xmm0
  float v76; // eax
  __m128 v77; // xmm14
  __m128 v78; // xmm14
  __m128 v79; // xmm14
  unsigned int v80; // edi
  int v81; // r14d
  float v82; // xmm6_4
  float v83; // xmm7_4
  float v84; // xmm5_4
  float v85; // xmm11_4
  float v86; // xmm12_4
  float v87; // xmm13_4
  __int64 v88; // r15
  signed int v89; // ebx
  signed int v90; // esi
  float *v91; // r10
  float v92; // xmm0_4
  float v93; // xmm2_4
  float v94; // xmm3_4
  float v95; // xmm1_4
  char *v96; // r11
  __int64 v97; // r8
  unsigned int v98; // edx
  float *v99; // rax
  float v100; // xmm3_4
  float v101; // xmm4_4
  unsigned __int16 *v102; // rbx
  signed __int64 v103; // rdx
  __int64 v104; // rdx
  float v105; // xmm1_4
  float v106; // xmm14_4
  float v107; // xmm15_4
  float v108; // xmm12_4
  float v109; // xmm11_4
  float v110; // xmm13_4
  float v111; // xmm5_4
  float v112; // xmm3_4
  float v113; // xmm6_4
  float v114; // xmm1_4
  float v115; // xmm0_4
  float v116; // xmm4_4
  float v117; // xmm3_4
  float v118; // xmm7_4
  __int64 v119; // rcx
  __int64 v120; // r8
  unsigned __int64 v121; // rdx
  __int64 v122; // rax
  char *v123; // rax
  float *v124; // rbx
  float v125; // xmm0_4
  float v126; // xmm2_4
  float v127; // xmm1_4
  float v128; // xmm3_4
  unsigned int v129; // esi
  signed int v130; // edi
  signed int v131; // eax
  __int64 v132; // r15
  __int64 v133; // r12
  __int64 v134; // rax
  gsl::details *v135; // rcx
  unsigned __int64 v136; // rdi
  void *v137; // rbx
  _BYTE *v138; // rax
  void *v139; // rcx
  char *v140; // rcx
  unsigned __int64 v141; // rdi
  SIZE_T v142; // r11
  SIZE_T v143; // rax
  void *v144; // rbx
  void *v145; // rax
  bool v146; // zf
  void *v147; // rcx
  HANDLE v148; // rax
  unsigned __int64 v149; // rdi
  unsigned __int64 v150; // r10
  char *v151; // r11
  bool v152; // sf
  unsigned __int64 v153; // r11
  char *v154; // r10
  bool v155; // sf
  float v156; // xmm1_4
  float v157; // xmm1_4
  float v158; // xmm3_4
  __m128 v159; // xmm7
  __m128 v160; // xmm7
  __m128 v161; // xmm7
  float v162; // xmm1_4
  HANDLE ProcessHeap; // rax
  char v164; // [rsp+28h] [rbp-E0h]
  char v165; // [rsp+29h] [rbp-DFh]
  __int32 v166; // [rsp+2Ch] [rbp-DCh]
  __int32 v167; // [rsp+30h] [rbp-D8h]
  __int32 v168; // [rsp+34h] [rbp-D4h]
  __int32 v169; // [rsp+38h] [rbp-D0h]
  float v170; // [rsp+3Ch] [rbp-CCh]
  unsigned int v171; // [rsp+3Ch] [rbp-CCh]
  __m128 v172; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v173; // [rsp+58h] [rbp-B0h]
  __int64 v174; // [rsp+68h] [rbp-A0h]
  __int64 v175; // [rsp+70h] [rbp-98h]
  float v176; // [rsp+78h] [rbp-90h]
  int v177; // [rsp+7Ch] [rbp-8Ch]
  float v178; // [rsp+80h] [rbp-88h]
  __m128 v179; // [rsp+88h] [rbp-80h] BYREF
  __int64 v180; // [rsp+98h] [rbp-70h]
  float v181; // [rsp+A8h] [rbp-60h]
  float v182; // [rsp+ACh] [rbp-5Ch]
  __m128 v183; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v184; // [rsp+C0h] [rbp-48h]
  __m128 v185; // [rsp+C8h] [rbp-40h]
  __int64 v186; // [rsp+D8h] [rbp-30h]
  float v187; // [rsp+108h] [rbp+0h]
  struct D2D_MATRIX_3X2_F v188; // [rsp+118h] [rbp+10h] BYREF
  __m128 v189; // [rsp+138h] [rbp+30h]
  __int64 v190; // [rsp+148h] [rbp+40h]
  __int64 v191; // [rsp+150h] [rbp+48h]
  __m128 v192; // [rsp+158h] [rbp+50h] BYREF
  __int64 v193; // [rsp+168h] [rbp+60h]
  __int64 v194; // [rsp+188h] [rbp+80h]
  __m128 v195; // [rsp+198h] [rbp+90h] BYREF
  __int64 v196; // [rsp+1A8h] [rbp+A0h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+1B8h] [rbp+B0h] BYREF
  void *v198; // [rsp+1D8h] [rbp+D0h]
  char *v199; // [rsp+1E0h] [rbp+D8h]
  char *v200; // [rsp+1E8h] [rbp+E0h]
  _BYTE v201[112]; // [rsp+1F0h] [rbp+E8h] BYREF
  char v202; // [rsp+260h] [rbp+158h] BYREF
  LPVOID lpMem[2]; // [rsp+268h] [rbp+160h] BYREF
  __m128 v204; // [rsp+278h] [rbp+170h] BYREF
  float v205; // [rsp+288h] [rbp+180h]
  __m128 v206; // [rsp+28Ch] [rbp+184h]
  __int64 v207; // [rsp+2C8h] [rbp+1C0h] BYREF

  v6 = *(_DWORD *)this;
  v7 = (__int64)a3;
  v8 = (__m128)(unsigned int)FLOAT_1_0;
  v9 = (float *)v201;
  v191 = *((_QWORD *)this + 24);
  v198 = v201;
  v10 = (float *)v201;
  v199 = v201;
  v177 = 8 * v6 + 16;
  v11 = &v202;
  v175 = *((_QWORD *)this + 148);
  v200 = &v202;
  if ( a2 )
  {
    v14 = *(_QWORD *)(v7 + 16);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)v7;
    *(_QWORD *)&matrix.m[2][0] = v14;
    D2D1InvertMatrix(&matrix);
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v183, a4, (const struct D2D1::Matrix3x2F *)&matrix);
    v15 = 0;
    if ( !*((_DWORD *)a2 + 10) )
    {
LABEL_18:
      v11 = v200;
      v10 = (float *)v199;
      v9 = (float *)v198;
      goto LABEL_19;
    }
    v16 = v183.m128_f32[1];
    v17 = v183.m128_u32[0];
    while ( 1 )
    {
      if ( (unsigned __int64)v15 >= *((_QWORD *)a2 + 5) )
      {
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v18 = *((_QWORD *)a2 + 6) + 52LL * v15;
      memset_0(lpMem, 0, 0x34uLL);
      v19 = *((_DWORD *)this + 569);
      v164 = 0;
      if ( _bittest(&v19, v15) )
      {
        v165 = 1;
        v179 = *(__m128 *)(v18 + 36);
        if ( v179.m128_f32[0] != 0.0
          || _mm_shuffle_ps(v179, v179, 85).m128_f32[0] != 0.0
          || _mm_shuffle_ps(v179, v179, 170).m128_f32[0] != v8.m128_f32[0]
          || _mm_shuffle_ps(v179, v179, 255).m128_f32[0] != v8.m128_f32[0] )
        {
          v164 = 1;
        }
        v20 = *(float *)(v18 + 12);
        v21 = *(float *)v18;
        v22 = v17;
        v23 = *(float *)(v18 + 4);
        v24 = *(float *)(v18 + 20);
        v25 = *(float *)(v18 + 8);
        v26 = *(float *)(v18 + 24);
        v27 = *(float *)(v18 + 28);
        v28 = *(float *)(v18 + 32);
        v29 = *(float *)(v18 + 16);
        *(float *)&v22 = (float)((float)(*(float *)&v17 * *(float *)v18) + (float)(v16 * v20)) + (float)(v26 * 0.0);
        *(_OWORD *)&v188.m11 = v22;
        *(float *)&v174 = (float)((float)(*(float *)&v17 * v23) + (float)(v16 * v29)) + (float)(v27 * 0.0);
        v30 = (__m128)v183.m128_u32[2];
        v30.m128_f32[0] = (float)((float)(v183.m128_f32[2] * v23) + (float)(v183.m128_f32[3] * v29))
                        + (float)(v27 * 0.0);
        v172 = v30;
        v30.m128_f32[0] = (float)((float)(v183.m128_f32[2] * v25) + (float)(v183.m128_f32[3] * v24))
                        + (float)(v28 * 0.0);
        v187 = (float)((float)(*((float *)&v184 + 1) * v24) + (float)(*(float *)&v184 * v25)) + v28;
        v31 = _mm_shuffle_ps(*(__m128 *)&v188.m11, *(__m128 *)&v188.m11, 225);
        v31.m128_f32[0] = *(float *)&v174;
        v32 = _mm_shuffle_ps(v31, v31, 198);
        v32.m128_f32[0] = (float)((float)(*(float *)&v17 * v25) + (float)(v16 * v24)) + (float)(v28 * 0.0);
        v33 = v179;
        v205 = v187;
        v17 = v183.m128_u32[0];
        v34 = _mm_shuffle_ps(v172, v172, 225);
        v34.m128_f32[0] = v30.m128_f32[0];
        v35 = _mm_shuffle_ps(v32, v32, 39);
        v36 = _mm_shuffle_ps(v34, v34, 198);
        v35.m128_f32[0] = (float)((float)(v183.m128_f32[2] * v21) + (float)(v183.m128_f32[3] * v20))
                        + (float)(v26 * 0.0);
        v16 = v183.m128_f32[1];
        v36.m128_f32[0] = (float)((float)(*((float *)&v184 + 1) * v20) + (float)(*(float *)&v184 * v21)) + v26;
        v37 = _mm_shuffle_ps(v36, v36, 39);
        v37.m128_f32[0] = (float)((float)(*((float *)&v184 + 1) * v29) + (float)(*(float *)&v184 * v23)) + v27;
        v204 = _mm_shuffle_ps(v37, v37, 57);
        *(__m128 *)lpMem = _mm_shuffle_ps(v35, v35, 57);
      }
      else
      {
        v33 = v206;
        v165 = 0;
      }
      v38 = v199;
      v39 = v198;
      v40 = (char *)(v200 - v199);
      v41 = (v199 - (_BYTE *)v198) / 56;
      if ( !((v200 - v199) / 56) )
      {
        if ( v41 + 1 < v41 )
          std::_Xoverflow_error(v40);
        v136 = detail::liberal_expansion_policy::expand(
                 (detail::liberal_expansion_policy *)v40,
                 (v200 - (_BYTE *)v198) / 56,
                 v41 + 1);
        v179.m128_u64[0] = (unsigned __int64)operator new(saturated_mul(v136, 0x38uLL));
        v137 = (void *)v179.m128_u64[0];
        v179.m128_u64[1] = v41;
        v180 = 0LL;
        v192 = v179;
        v193 = 0LL;
        std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
          (__int64)&v188,
          (__int64)v198,
          (__int64)v199,
          &v192);
        v138 = v198;
        v139 = 0LL;
        v198 = v137;
        if ( v138 != v201 )
          v139 = v138;
        operator delete(v139);
        v39 = v198;
        v38 = (char *)v198 + 56 * v41;
        v199 = v38;
        v200 = (char *)v198 + 56 * v136;
      }
      v173 = 0LL;
      v42 = v38 - v39;
      v190 = 0LL;
      v172.m128_u64[1] = 1LL;
      v7 = (v38 - v39) / 56;
      v43 = v7 - v41;
      v172.m128_u64[0] = (unsigned __int64)&v39[56 * v7];
      v189 = v172;
      if ( !v172.m128_u64[0] )
        break;
      v190 = 1LL;
      v44 = (v38 - v39) / 56 - v41;
      if ( v43 > 1 )
        v44 = 1LL;
      v185 = v172;
      v42 = 56 * v44;
      v186 = 1LL;
      v45 = &v38[-56 * v44];
      if ( v38 != v45 )
      {
        v149 = v186;
        v150 = v189.m128_u64[0] + 64;
        do
        {
          v151 = v38 - 56;
          v38 -= 56;
          if ( !v185.m128_u64[0] )
            goto LABEL_123;
          if ( !v149 )
            goto LABEL_123;
          --v149;
          v150 -= 56LL;
          if ( v149 >= v185.m128_u64[1] )
            goto LABEL_123;
          *(_DWORD *)(v150 - 8) = *(_DWORD *)v151;
          *(_DWORD *)(v150 - 4) = *((_DWORD *)v151 + 1);
          *(_DWORD *)v150 = *((_DWORD *)v151 + 2);
          *(_DWORD *)(v150 + 4) = *((_DWORD *)v151 + 3);
          *(_DWORD *)(v150 + 8) = *((_DWORD *)v151 + 4);
          *(_DWORD *)(v150 + 12) = *((_DWORD *)v151 + 5);
          *(_DWORD *)(v150 + 16) = *((_DWORD *)v151 + 6);
          *(_DWORD *)(v150 + 20) = *((_DWORD *)v151 + 7);
          *(_DWORD *)(v150 + 24) = *((_DWORD *)v151 + 8);
          *(_OWORD *)(v150 + 28) = *(_OWORD *)(v151 + 36);
          *(_BYTE *)(v150 + 44) = v151[52];
          v42 = (unsigned __int8)v151[53];
          *(_BYTE *)(v150 + 45) = v42;
        }
        while ( v151 != v45 );
        v38 = v199;
      }
      if ( v43 > 1 )
      {
        v180 = 0LL;
        v179.m128_u64[0] = (unsigned __int64)v39;
        v179.m128_u64[1] = v7;
        v194 = 0LL;
        v152 = v7 < 0;
        if ( v7 )
        {
          if ( !v39 )
            break;
          v152 = v7 < 0;
        }
        if ( v152 && v7 )
          break;
        v195 = v179;
        v194 = v7;
        v196 = v7;
        std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
          &v172,
          &v39[56 * v41],
          &v39[56 * v7 - 56],
          &v195);
        v38 = v199;
      }
      v46 = 56 * v41;
      v199 = v38 + 56;
      ++v15;
      *(_OWORD *)&v39[v46] = *(_OWORD *)lpMem;
      *(__m128 *)&v39[v46 + 16] = v204;
      *(float *)&v39[v46 + 32] = v205;
      v39[v46 + 52] = v164;
      *(__m128 *)&v39[v46 + 36] = v33;
      v39[v46 + 53] = v165;
      v8 = (__m128)(unsigned int)FLOAT_1_0;
      if ( v15 >= *((_DWORD *)a2 + 10) )
        goto LABEL_18;
    }
LABEL_123:
    _o__invalid_parameter_noinfo_noreturn(v42, v43, v38, v7);
    JUMPOUT(0x1800F064CLL);
  }
LABEL_19:
  while ( 1 )
  {
    v47 = ((char *)v10 - (char *)v9) / 56;
    if ( v47 >= *(unsigned int *)this )
      break;
    if ( !((v11 - (char *)v10) / 56) )
    {
      v140 = (char *)(v47 + 1);
      if ( v47 + 1 < v47 )
        std::_Xoverflow_error(v140);
      v141 = detail::liberal_expansion_policy::expand(
               (detail::liberal_expansion_policy *)v140,
               (v11 - (char *)v9) / 56,
               v47 + 1);
      v143 = 56 * v141;
      if ( !is_mul_ok(v141, 0x38uLL) )
        v143 = v142;
      v185.m128_u64[0] = (unsigned __int64)operator new(v143);
      v144 = (void *)v185.m128_u64[0];
      v185.m128_u64[1] = v47;
      v186 = 0LL;
      v195 = v185;
      v196 = 0LL;
      std::uninitialized_copy<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        (__int64)&matrix,
        (__int64)v198,
        (__int64)v199,
        &v195);
      v145 = v198;
      v146 = v198 == v201;
      v198 = v144;
      v147 = 0LL;
      if ( !v146 )
        v147 = v145;
      operator delete(v147);
      v9 = (float *)v198;
      v10 = (float *)((char *)v198 + 56 * v47);
      v199 = (char *)v10;
      v200 = (char *)v198 + 56 * v141;
    }
    v189.m128_u64[1] = 1LL;
    v119 = (char *)v10 - (char *)v9;
    v190 = 0LL;
    v184 = 0LL;
    v120 = ((char *)v10 - (char *)v9) / 56;
    v121 = v120 - v47;
    v189.m128_u64[0] = (unsigned __int64)&v9[14 * v120];
    v183 = v189;
    if ( !v189.m128_u64[0] )
      goto LABEL_137;
    v184 = 1LL;
    v122 = ((char *)v10 - (char *)v9) / 56 - v47;
    if ( v121 > 1 )
      v122 = 1LL;
    v179 = v189;
    v119 = 56 * v122;
    v180 = 1LL;
    v123 = (char *)&v10[-14 * v122];
    if ( v10 != (float *)v123 )
    {
      v153 = v180;
      v7 = v183.m128_u64[0] + 64;
      do
      {
        v154 = (char *)(v10 - 14);
        v10 -= 14;
        if ( !v179.m128_u64[0] )
          goto LABEL_137;
        if ( !v153 )
          goto LABEL_137;
        --v153;
        v7 -= 56LL;
        if ( v153 >= v179.m128_u64[1] )
          goto LABEL_137;
        *(_DWORD *)(v7 - 8) = *(_DWORD *)v154;
        *(_DWORD *)(v7 - 4) = *((_DWORD *)v154 + 1);
        *(_DWORD *)v7 = *((_DWORD *)v154 + 2);
        *(_DWORD *)(v7 + 4) = *((_DWORD *)v154 + 3);
        *(_DWORD *)(v7 + 8) = *((_DWORD *)v154 + 4);
        *(_DWORD *)(v7 + 12) = *((_DWORD *)v154 + 5);
        *(_DWORD *)(v7 + 16) = *((_DWORD *)v154 + 6);
        *(_DWORD *)(v7 + 20) = *((_DWORD *)v154 + 7);
        *(_DWORD *)(v7 + 24) = *((_DWORD *)v154 + 8);
        *(_OWORD *)(v7 + 28) = *(_OWORD *)(v154 + 36);
        *(_BYTE *)(v7 + 44) = v154[52];
        v119 = (unsigned __int8)v154[53];
        *(_BYTE *)(v7 + 45) = v119;
      }
      while ( v154 != v123 );
      v10 = (float *)v199;
    }
    if ( v121 > 1 )
    {
      v186 = 0LL;
      v185.m128_u64[0] = (unsigned __int64)v9;
      v185.m128_u64[1] = v120;
      v194 = 0LL;
      v155 = v120 < 0;
      if ( v120 )
      {
        if ( !v9 )
          goto LABEL_137;
        v155 = v120 < 0;
      }
      if ( v155 && v120 )
      {
LABEL_137:
        _o__invalid_parameter_noinfo_noreturn(v119, v121, v120, v7);
        JUMPOUT(0x1800F0789LL);
      }
      v194 = v120;
      v192 = v185;
      v193 = v120;
      std::move_backward<std::move_iterator<TextureStageInfo *>,stdext::checked_array_iterator<TextureStageInfo *>>(
        &matrix,
        &v9[14 * v47],
        &v9[14 * v120 - 14],
        &v192);
      v10 = (float *)v199;
    }
    v199 = (char *)(v10 + 14);
    v124 = &v9[14 * v47];
    *((_WORD *)v124 + 27) = 0;
    memset_0(v124, 0, 0x24uLL);
    *(_QWORD *)(v124 + 9) = 0LL;
    *(_QWORD *)(v124 + 11) = 0LL;
    *((_WORD *)v124 + 26) = 0;
    v11 = v200;
    v10 = (float *)v199;
    v9 = (float *)v198;
  }
  v48 = (__m128)*(unsigned int *)a4;
  if ( v48.m128_f32[0] != v8.m128_f32[0]
    || *((float *)a4 + 1) != 0.0
    || *((float *)a4 + 2) != 0.0
    || *((float *)a4 + 3) != v8.m128_f32[0]
    || *((float *)a4 + 4) != 0.0
    || *((float *)a4 + 5) != 0.0 )
  {
    v49 = *((float *)a4 + 1);
    m11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v49) & _xmm);
    v178 = m11;
    if ( m11 >= 0.000081380211
      || (v51 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a4 + 2)) & _xmm), v51 >= 0.000081380211) )
    {
      v52 = v48.m128_f32[0];
      v156 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v48.m128_f32[0]) & _xmm);
      if ( v156 >= 0.000081380211
        || (v157 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a4 + 3)) & _xmm), v157 >= 0.000081380211) )
      {
        D2DMatrixHelper::GetScaleDimensions(a4, &v188, &v188.m12, (float *)v7);
        m11 = v188.m11;
        m12 = v188.m12;
        v48.m128_f32[0] = v48.m128_f32[0] * (float)(v8.m128_f32[0] / v188.m11);
        v158 = (float)(v8.m128_f32[0] / v188.m12) * *((float *)a4 + 3);
        v159 = _mm_shuffle_ps(v48, v48, 225);
        v159.m128_f32[0] = v49 * (float)(v8.m128_f32[0] / v188.m11);
        v160 = _mm_shuffle_ps(v159, v159, 198);
        v160.m128_f32[0] = (float)(v8.m128_f32[0] / v188.m12) * *((float *)a4 + 2);
        v173 = _mm_unpacklo_ps((__m128)*((unsigned int *)a4 + 4), (__m128)*((unsigned int *)a4 + 5)).m128_u64[0];
        v161 = _mm_shuffle_ps(v160, v160, 39);
        v161.m128_f32[0] = v158;
        v178 = v188.m11;
        v172 = _mm_shuffle_ps(v161, v161, 57);
        v166 = _mm_shuffle_ps(v172, v172, 255).m128_u32[0];
        v170 = v188.m12;
        v167 = v172.m128_i32[2];
        v168 = v172.m128_i32[1];
        v169 = v172.m128_i32[0];
LABEL_29:
        m11_low = v8;
        m11_low.m128_f32[0] = v8.m128_f32[0] / m11;
        lpMem[0] = &v204.m128_u16[4];
        lpMem[1] = &v204.m128_u16[4];
        v204.m128_u64[0] = (unsigned __int64)&v207;
        v58 = v9 + 6;
        v188.m11 = v8.m128_f32[0] / m11;
        v181 = v8.m128_f32[0] / m12;
        v182 = 0.0 - (float)((float)(v8.m128_f32[0] / m11) * 0.0);
        *(float *)&v174 = 0.0 - (float)((float)(v8.m128_f32[0] / m12) * 0.0);
        while ( 1 )
        {
          v59 = (__m128 *)(v58 - 6);
          if ( v58 - 6 == v10 )
            break;
          v60 = *(v58 - 3);
          v61 = m11_low;
          v62 = *(v58 - 5);
          v63 = *(v58 - 2);
          v64 = *(v58 - 1);
          v65 = *(v58 - 4);
          v66 = *v58;
          v67 = v58[1];
          v68 = v58[2];
          v61.m128_f32[0] = (float)(m11_low.m128_f32[0] * v59->m128_f32[0]) + (float)(v60 * 0.0);
          v69 = *v58 * 0.0;
          v176 = v59->m128_f32[0];
          v61.m128_f32[0] = v61.m128_f32[0] + v69;
          v179 = v61;
          v70 = (float)((float)(v181 * v60) + (float)(v176 * 0.0)) + v69;
          v71 = (__m128)LODWORD(v181);
          v71.m128_f32[0] = (float)((float)(v181 * v63) + (float)(v62 * 0.0)) + (float)(v67 * 0.0);
          v72 = (float)((float)(v182 * v62) + (float)(*(float *)&v174 * v63)) + v67;
          v176 = (float)((float)(v176 * v182) + (float)(*(float *)&v174 * v60)) + v66;
          v73 = _mm_shuffle_ps(v179, v179, 225);
          v73.m128_f32[0] = (float)((float)(m11_low.m128_f32[0] * v62) + (float)(v63 * 0.0)) + (float)(v67 * 0.0);
          v74 = _mm_shuffle_ps(v73, v73, 198);
          v74.m128_f32[0] = (float)((float)(m11_low.m128_f32[0] * v65) + (float)(v64 * 0.0)) + (float)(v68 * 0.0);
          v75 = _mm_shuffle_ps(v74, v74, 39);
          v75.m128_f32[0] = v70;
          v187 = (float)((float)(v182 * v65) + (float)(*(float *)&v174 * v64)) + v68;
          v76 = v187;
          v58 += 14;
          m11_low = (__m128)LODWORD(v188.m11);
          v77 = _mm_shuffle_ps(v71, v71, 225);
          v77.m128_f32[0] = (float)((float)(v181 * v64) + (float)(v65 * 0.0)) + (float)(v68 * 0.0);
          v78 = _mm_shuffle_ps(v77, v77, 198);
          *v59 = _mm_shuffle_ps(v75, v75, 57);
          v78.m128_f32[0] = v176;
          v79 = _mm_shuffle_ps(v78, v78, 39);
          v79.m128_f32[0] = v72;
          v59[1] = _mm_shuffle_ps(v79, v79, 57);
          v59[2].m128_f32[0] = v76;
        }
        v80 = a5;
        if ( a5 < *((_DWORD *)this + 544) )
        {
          v81 = v177;
          v82 = *((float *)&v173 + 1);
          v83 = *(float *)&v173;
          v84 = *(float *)&v166;
          v85 = *(float *)&v167;
          v86 = *(float *)&v168;
          v87 = *(float *)&v169;
          v88 = v175;
          v89 = a5 * v177;
          v90 = a5 * v177;
          do
          {
            v91 = (float *)(v191 + v90);
            v7 = v88 + v89;
            v92 = *(float *)(v7 + 4);
            v93 = *v91 - *(float *)v7;
            v94 = *(float *)v7 * v178;
            v95 = v91[1] - v92;
            *(float *)v7 = v94;
            *(float *)(v7 + 4) = v92 * v170;
            *v91 = v94 + v93;
            v91[1] = v95 + *(float *)(v7 + 4);
            v96 = (char *)v198;
            v97 = (v199 - (_BYTE *)v198) / 56;
            if ( v97 < 0 )
            {
              gsl::details::throw_exception<gsl::narrowing_error>();
              JUMPOUT(0x18002D06ALL);
            }
            if ( !v198 && v97 || !v198 && v97 )
            {
LABEL_153:
              ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
              __debugbreak();
            }
            v98 = 0;
            if ( (_DWORD)v97 )
            {
              do
              {
                if ( v98 >= (unsigned __int64)v97 )
                  goto LABEL_153;
                v99 = (float *)&v96[56 * v98];
                if ( *((_BYTE *)v99 + 53) )
                {
                  v105 = v91[1];
                  v106 = v99[5];
                  v107 = v99[2];
                  v108 = v99[1];
                  v109 = v99[6];
                  v110 = v99[7];
                  v111 = (float)((float)(v99[3] * v105) + (float)(*v99 * *v91)) + v109;
                  v112 = (float)((float)(*v91 * v107) + (float)(v105 * v106)) + v99[8];
                  v113 = (float)((float)(v99[4] * v105) + (float)(*v91 * v108)) + v110;
                  v114 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v112) & _xmm);
                  if ( v114 >= 0.000081380211
                    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v112 - 1.0)) & _xmm) >= 0.000081380211 )
                  {
                    v111 = v111 / v112;
                    v113 = v113 / v112;
                  }
                  v115 = *(float *)(v7 + 4);
                  v116 = (float)((float)(*v99 * *(float *)v7) + (float)(v99[3] * v115)) + v109;
                  v117 = (float)((float)(*(float *)v7 * v107) + (float)(v115 * v106)) + v99[8];
                  v118 = (float)((float)(*(float *)v7 * v108) + (float)(v99[4] * v115)) + v110;
                  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v117) & _xmm) >= 0.000081380211
                    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v117 - 1.0)) & _xmm) >= 0.000081380211 )
                  {
                    v116 = v116 / v117;
                    v118 = v118 / v117;
                  }
                  if ( *((_BYTE *)v99 + 52) )
                  {
                    v125 = v99[11];
                    v126 = v99[9];
                    if ( v111 > v125 )
                      v111 = v99[11];
                    else
                      v111 = fmaxf(v111, v126);
                    v127 = v99[12];
                    v128 = v99[10];
                    if ( v113 > v127 )
                      v113 = v99[12];
                    else
                      v113 = fmaxf(v113, v128);
                    if ( v116 > v125 )
                      v116 = v99[11];
                    else
                      v116 = fmaxf(v116, v126);
                    if ( v118 > v127 )
                      v118 = v99[12];
                    else
                      v118 = fmaxf(v118, v128);
                  }
                  v91[2 * v98 + 4] = v111;
                  v91[2 * v98 + 5] = v113;
                  *(float *)(v7 + 8LL * v98 + 16) = v116;
                  *(float *)(v7 + 8LL * v98 + 20) = v118;
                }
                else
                {
                  v91[2 * v98 + 4] = 0.0;
                  v91[2 * v98 + 5] = 0.0;
                  v175 = 0LL;
                  *(_DWORD *)(v7 + 8LL * v98 + 16) = 0;
                  *(_DWORD *)(v7 + 8LL * v98 + 20) = 0;
                }
                ++v98;
              }
              while ( v98 < (unsigned int)v97 );
              v84 = *(float *)&v166;
              v82 = *((float *)&v173 + 1);
              v83 = *(float *)&v173;
              v85 = *(float *)&v167;
              v86 = *(float *)&v168;
              v87 = *(float *)&v169;
            }
            ++v80;
            v90 += v81;
            v89 += v81;
            v100 = (float)((float)(v91[1] * v84) + (float)(*v91 * v86)) + v82;
            *v91 = (float)((float)(v91[1] * v85) + (float)(*v91 * v87)) + v83;
            v91[1] = v100;
            v101 = (float)((float)(*(float *)(v7 + 4) * v84) + (float)(*(float *)v7 * v86)) + v82;
            *(float *)v7 = (float)((float)(*(float *)(v7 + 4) * v85) + (float)(*(float *)v7 * v87)) + v83;
            *(float *)(v7 + 4) = v101;
          }
          while ( v80 < *((_DWORD *)this + 544) );
        }
        v102 = (unsigned __int16 *)lpMem[0];
        v103 = ((char *)lpMem[1] - (char *)lpMem[0]) / 36;
        if ( v103 )
        {
          detail::vector_facade__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_detail::buffer_impl__CDrawListEntryBuilder::TransformHWGeometryAndComputeUV_::_15_::TexStageInfoExt_2_1_detail::liberal_expansion_policy___::clear_region(
            lpMem,
            v103,
            ((char *)lpMem[1] - (char *)lpMem[0]) / 36,
            v7);
          v102 = (unsigned __int16 *)lpMem[0];
        }
        lpMem[0] = 0LL;
        if ( v102 != &v204.m128_u16[4] && v102 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v102);
        }
        goto LABEL_47;
      }
    }
    else
    {
      v52 = v48.m128_f32[0];
    }
    v53 = *((_QWORD *)a4 + 2);
    v54 = COERCE_DOUBLE(*(_QWORD *)&v52 & _xmm);
    v55 = *((float *)a4 + 3);
    v172 = *(__m128 *)a4;
    v173 = v53;
    if ( v54 >= 0.000081380211 || (v162 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v55) & _xmm), v162 >= 0.000081380211) )
    {
      m11 = v54;
      v178 = v54;
      *(float *)&v166 = FLOAT_N1_0;
      m12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v55) & _xmm);
      v170 = m12;
      if ( v172.m128_f32[0] < 0.0 )
        *(float *)&v169 = FLOAT_N1_0;
      else
        v169 = v8.m128_i32[0];
      v167 = v172.m128_i32[2];
      v168 = v172.m128_i32[1];
      if ( v172.m128_f32[3] >= 0.0 )
        v166 = v8.m128_i32[0];
    }
    else
    {
      *(float *)&v167 = FLOAT_N1_0;
      m12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a4 + 2)) & _xmm);
      v170 = m12;
      if ( v172.m128_f32[1] >= 0.0 )
        v168 = v8.m128_i32[0];
      else
        *(float *)&v168 = FLOAT_N1_0;
      v166 = v172.m128_i32[3];
      v169 = v172.m128_i32[0];
      if ( v172.m128_f32[2] >= 0.0 )
        v167 = v8.m128_i32[0];
    }
    goto LABEL_29;
  }
  v129 = a5;
  if ( a5 < *((_DWORD *)this + 544) )
  {
    v130 = a5 * v177;
    v131 = a5 * v177;
    v171 = a5 * v177;
    while ( 1 )
    {
      v132 = v191 + v131;
      v133 = v175 + v130;
      v134 = gsl::narrow<__int64,unsigned __int64>(((char *)v10 - (char *)v9) / 56);
      gsl::details::extent_type<-1>::extent_type<-1>((__int64 *)&v188, v134);
      *(_QWORD *)&v188.m[1][0] = v9;
      if ( *(__int64 *)&v188.m11 < 0 || !v9 && *(_QWORD *)&v188.m11 )
      {
        gsl::details::terminate(v135);
        __debugbreak();
      }
      v179 = *(__m128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(
                          (__int64 *)&v172,
                          (__int64 *)&v188);
      ComputeUVsFromXY(v132, v133, &v179);
      ++v129;
      v131 = v177 + v171;
      v130 += v177;
      v171 += v177;
      if ( v129 >= *((_DWORD *)this + 544) )
        break;
      v10 = (float *)v199;
      v9 = (float *)v198;
    }
LABEL_47:
    v9 = (float *)v198;
    v10 = (float *)v199;
  }
  v104 = ((char *)v10 - (char *)v9) / 56;
  if ( v104 )
    v199 = (char *)&v10[-14 * v104];
  v198 = 0LL;
  if ( v9 == (float *)v201 )
    v9 = 0LL;
  if ( v9 )
  {
    v148 = GetProcessHeap();
    HeapFree(v148, 0, v9);
  }
}
