/*
 * XREFs of ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800AC260
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800CBF94 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Initialize@CDrawListPrimitive@@IEAAX_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IPEBGIAEBUD2D_VECTOR_2F@@0@Z @ 0x18003AE80 (-Initialize@CDrawListPrimitive@@IEAAX_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18005EBC8 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___ @ 0x1800AD4A8 (std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd7.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x1800AD61C (PrimitiveStorage--Alloc_16_.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800AD850 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?_Reallocate_exactly@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x1800C4750 (-_Reallocate_exactly@-$vector@GV-$allocator@G@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@?$vector@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@QEAAPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAV2@$$QEAV2@@Z @ 0x1800C50D4 (--$_Emplace_reallocate@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ??$_Emplace_reallocate@G@?$vector@GV?$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z @ 0x180189E5C (--$_Emplace_reallocate@G@-$vector@GV-$allocator@G@std@@@std@@QEAAPEAGQEAG$$QEAG@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CMegaRect::UpdatePrimitive(
        FastRegion::Internal::CRgnData ***this,
        struct CMegaRect::UpdatePrimitiveWorkingBuffers *a2)
{
  void **v2; // rdi
  CMegaRect *v3; // r15
  struct CMegaRect::UpdatePrimitiveWorkingBuffers *v4; // r14
  int v5; // eax
  FastRegion::Internal::CRgnData **v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // r10d
  __int64 v9; // rdx
  FastRegion::Internal::CRgnData *v10; // rcx
  unsigned int v11; // r8d
  _OWORD *v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned int v17; // r12d
  int v18; // r10d
  __int64 v19; // rdx
  int v20; // r9d
  __int64 v21; // rbx
  int v22; // r8d
  __int64 v23; // r11
  float *v24; // r13
  int v25; // ecx
  __m128 v26; // xmm8
  float v27; // xmm9_4
  float v28; // xmm1_4
  _WORD *v29; // rdx
  _WORD *v30; // rdx
  _WORD *v31; // rdx
  __int16 v32; // ax
  _WORD *v33; // rdx
  _WORD *v34; // rdx
  _WORD *v35; // rdx
  _DWORD *v36; // rdx
  unsigned int v37; // ecx
  _DWORD *v38; // r10
  __int64 v39; // rax
  float v40; // xmm7_4
  float v41; // xmm6_4
  float v42; // xmm10_4
  float v43; // xmm14_4
  float *v44; // r15
  __int64 v45; // r14
  __int64 v46; // rdi
  char *v47; // r8
  char *v48; // r9
  char *v49; // r11
  float v50; // xmm2_4
  float v51; // xmm1_4
  float v52; // xmm3_4
  float v53; // xmm4_4
  float v54; // xmm2_4
  float v55; // xmm1_4
  float v56; // xmm1_4
  float v57; // xmm3_4
  unsigned int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // r10
  __int64 v61; // rax
  float v62; // xmm14_4
  float v63; // xmm10_4
  float v64; // xmm12_4
  float v65; // xmm15_4
  float *v66; // r15
  __int64 v67; // r14
  __int64 v68; // rdi
  char *v69; // r8
  __int64 v70; // r9
  __int64 v71; // r11
  float v72; // xmm5_4
  float v73; // xmm7_4
  float v74; // xmm5_4
  float v75; // xmm7_4
  float v76; // xmm4_4
  float v77; // xmm10_4
  int v78; // r10d
  _DWORD *v79; // rdx
  _DWORD *v80; // rcx
  unsigned int v81; // eax
  float v82; // xmm7_4
  float v83; // xmm10_4
  char *v84; // r10
  __int64 v85; // rdi
  __int64 v86; // r9
  float v87; // xmm12_4
  char *v88; // r8
  char *v89; // r11
  float *v90; // rax
  float v91; // xmm5_4
  float v92; // xmm6_4
  float v93; // xmm0_4
  float v94; // xmm0_4
  float v95; // xmm6_4
  float v96; // xmm0_4
  __int64 v97; // rax
  float v98; // xmm3_4
  float v99; // xmm4_4
  unsigned int v100; // ecx
  __int64 v101; // rdx
  __int64 v102; // r10
  __int64 v103; // rax
  float v104; // xmm9_4
  float v105; // xmm7_4
  float v106; // xmm13_4
  float *v107; // rcx
  float v108; // xmm8_4
  __int64 v109; // r9
  __int64 v110; // r8
  char *v111; // r11
  __int64 v112; // rdi
  __int64 v113; // r14
  float v114; // xmm5_4
  float v115; // xmm6_4
  float v116; // xmm5_4
  float v117; // xmm6_4
  float v118; // xmm5_4
  float v119; // xmm6_4
  float v120; // xmm2_4
  gsl::details *v121; // rcx
  float v122; // xmm1_4
  float v123; // xmm0_4
  float v124; // xmm0_4
  void *Src; // rsi
  __int64 v126; // rdi
  __int64 v127; // rdi
  __int64 v128; // rax
  unsigned int v129; // r14d
  __int64 v130; // rcx
  char v131; // r13
  unsigned int v132; // ecx
  __int64 v133; // rbx
  __int64 v134; // rcx
  __int64 (__fastcall ***v135)(_QWORD, __int64); // rdi
  char *v136; // rcx
  __int64 (__fastcall ***v137)(_QWORD, __int64); // rax
  char *v138; // r15
  char *v139; // rcx
  __int64 (__fastcall ***v140)(_QWORD, __int64); // rdx
  unsigned int v142; // ecx
  int v143; // [rsp+50h] [rbp-B0h]
  int v144; // [rsp+54h] [rbp-ACh]
  int v145; // [rsp+58h] [rbp-A8h]
  __int64 v146; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v147; // [rsp+68h] [rbp-98h] BYREF
  int v148; // [rsp+70h] [rbp-90h]
  __int64 v149; // [rsp+78h] [rbp-88h]
  int v150; // [rsp+80h] [rbp-80h]
  __int64 v151; // [rsp+88h] [rbp-78h]
  char *v152; // [rsp+90h] [rbp-70h]
  char *v153; // [rsp+98h] [rbp-68h]
  char *v154; // [rsp+A0h] [rbp-60h]
  unsigned int v155; // [rsp+A8h] [rbp-58h]
  int v156; // [rsp+ACh] [rbp-54h]
  __int64 v157; // [rsp+B0h] [rbp-50h]
  __int64 v158; // [rsp+B8h] [rbp-48h]
  char *v159; // [rsp+C0h] [rbp-40h]
  struct CMegaRect::UpdatePrimitiveWorkingBuffers *v160; // [rsp+C8h] [rbp-38h]
  int v161; // [rsp+D0h] [rbp-30h]
  int v162; // [rsp+D4h] [rbp-2Ch]
  int v163; // [rsp+D8h] [rbp-28h]
  char *v164; // [rsp+E0h] [rbp-20h]
  __int64 v165; // [rsp+E8h] [rbp-18h] BYREF
  CMegaRect *v166; // [rsp+F0h] [rbp-10h]
  int v167[2]; // [rsp+F8h] [rbp-8h] BYREF
  int v168; // [rsp+100h] [rbp+0h]
  int v169; // [rsp+104h] [rbp+4h]
  char v170; // [rsp+108h] [rbp+8h] BYREF
  char v171[8]; // [rsp+110h] [rbp+10h] BYREF
  char v172[8]; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v173; // [rsp+120h] [rbp+20h]
  _DWORD *v174; // [rsp+128h] [rbp+28h]
  __int64 v175; // [rsp+130h] [rbp+30h]
  int v176; // [rsp+138h] [rbp+38h]
  __int128 v177; // [rsp+148h] [rbp+48h] BYREF
  int v178[4]; // [rsp+158h] [rbp+58h] BYREF
  void *retaddr; // [rsp+248h] [rbp+148h]

  v2 = (void **)((char *)a2 + 72);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  v3 = (CMegaRect *)this;
  v4 = a2;
  *((_QWORD *)a2 + 4) = *((_QWORD *)a2 + 3);
  *((_QWORD *)a2 + 7) = *((_QWORD *)a2 + 6);
  *((_QWORD *)a2 + 10) = *((_QWORD *)a2 + 9);
  v5 = *((_DWORD *)this + 6);
  v6 = this[2];
  v166 = (CMegaRect *)this;
  v160 = a2;
  *(_QWORD *)v167 = (char *)a2 + 72;
  v150 = 8 * v5;
  v7 = (unsigned int)(8 * v5 + 16);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a2;
  v156 = 8 * v5 + 16;
  v143 = v156;
  FastRegion::Internal::CRgnData::BeginIterator(*this[1], (struct FastRegion::CRegion::Iterator *)v172);
  while ( (unsigned __int64)v174 < v173 )
  {
    v8 = v174[2];
    DWORD1(v177) = *v174;
    v9 = 2 * v176;
    v10 = (FastRegion::Internal::CRgnData *)*(unsigned int *)(v175 + 4 * v9);
    v11 = *(_DWORD *)(v175 + 4 * v9 + 4);
    v12 = (_OWORD *)*((_QWORD *)v4 + 1);
    LODWORD(v177) = (_DWORD)v10;
    *((_QWORD *)&v177 + 1) = __PAIR64__(v8, v11);
    if ( *((_OWORD **)v4 + 2) == v12 )
    {
      std::vector<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>::_Emplace_reallocate<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>>(
        v4,
        v12,
        &v177);
    }
    else
    {
      *v12 = v177;
      *((_QWORD *)v4 + 1) += 16LL;
    }
    FastRegion::Internal::CRgnData::StepIterator(v10, (struct FastRegion::CRegion::Iterator *)v172);
  }
  v13 = (__int64)(*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4;
  v165 = v13;
  v14 = 4 * v13 * v7;
  *(_QWORD *)&v177 = 4 * v13;
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
    (char *)v4 + 24,
    v14);
  v158 = *((_QWORD *)v4 + 3);
  std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2___(
    (char *)v4 + 48,
    v14);
  v15 = *((_QWORD *)v4 + 6);
  v16 = ((_BYTE *)v2[2] - (_BYTE *)*v2) >> 1;
  v157 = v15;
  if ( 6 * v13 > v16 )
  {
    if ( (unsigned __int64)(6 * v13) > 0x7FFFFFFFFFFFFFFFLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    std::vector<unsigned short>::_Reallocate_exactly(v2);
  }
  v17 = 0;
  v18 = 0;
  v155 = 0;
  if ( v13 )
  {
    v19 = 0LL;
    v20 = 0;
    v21 = (__int64)v6 + v150 + 16;
    v22 = v143;
    v23 = (__int64)v6 + 2 * v156;
    v163 = -v143;
    v24 = (float *)((char *)v6 + 3 * v156);
    v25 = 2 * v143;
    v161 = -2 * v143;
    v149 = v23;
    v162 = -2 * v143;
    v144 = 0;
    v148 = 2 * v143;
    v145 = 2 * v143;
    do
    {
      v26 = _mm_mul_ps(_mm_cvtepi32_ps(_mm_loadu_si128((const __m128i *)(*(_QWORD *)v4 + 16 * v19))), (__m128)_xmm);
      *(__m128 *)v178 = v26;
      v27 = _mm_shuffle_ps(v26, v26, 170).m128_f32[0];
      if ( v27 <= v26.m128_f32[0] || v26.m128_f32[3] <= v26.m128_f32[1] )
        v28 = 0.0;
      else
        v28 = (float)(v26.m128_f32[3] - v26.m128_f32[1]) * (float)(v27 - v26.m128_f32[0]);
      v29 = v2[1];
      LOWORD(v147) = v20;
      v150 = (int)v28 + v18;
      if ( v2[2] == v29 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v2, v29, &v147);
        v22 = v143;
        v20 = v144;
        v23 = v149;
        v25 = v145;
      }
      else
      {
        *v29 = v20;
        v2[1] = (char *)v2[1] + 2;
      }
      v30 = v2[1];
      LOWORD(v147) = v20 + 1;
      if ( v2[2] == v30 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v2, v30, &v147);
        v31 = (_WORD *)*((_QWORD *)v4 + 10);
        v22 = v143;
        v20 = v144;
        v23 = v149;
        v25 = v145;
      }
      else
      {
        *v30 = v20 + 1;
        v2[1] = (char *)v2[1] + 2;
        v31 = v2[1];
      }
      v32 = v20 + 3;
      LOWORD(v147) = v20 + 3;
      LOWORD(v146) = v20 + 3;
      if ( v2[2] == v31 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v2, v31, &v146);
        v33 = (_WORD *)*((_QWORD *)v4 + 10);
        v32 = v147;
        v22 = v143;
        v20 = v144;
        v23 = v149;
        v25 = v145;
      }
      else
      {
        *v31 = v32;
        v2[1] = (char *)v2[1] + 2;
        v33 = v2[1];
      }
      LOWORD(v146) = v20;
      if ( v2[2] == v33 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v2, v33, &v146);
        v34 = (_WORD *)*((_QWORD *)v4 + 10);
        v32 = v147;
        v22 = v143;
        v20 = v144;
        v23 = v149;
        v25 = v145;
      }
      else
      {
        *v33 = v20;
        v2[1] = (char *)v2[1] + 2;
        v34 = v2[1];
      }
      LOWORD(v146) = v32;
      if ( v2[2] == v34 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v2, v34, &v146);
        v35 = (_WORD *)*((_QWORD *)v4 + 10);
        v22 = v143;
        v20 = v144;
        v23 = v149;
        v25 = v145;
      }
      else
      {
        *v34 = v32;
        v2[1] = (char *)v2[1] + 2;
        v35 = v2[1];
      }
      LOWORD(v146) = v20 + 2;
      if ( v2[2] == v35 )
      {
        std::vector<unsigned short>::_Emplace_reallocate<unsigned short>(v2, v35, &v146);
        v22 = v143;
        v20 = v144;
        v23 = v149;
        v25 = v145;
      }
      else
      {
        *v35 = v20 + 2;
        v2[1] = (char *)v2[1] + 2;
      }
      v36 = (_DWORD *)(v25 + v161 + v157);
      v37 = *((_DWORD *)v3 + 6);
      v38 = (_DWORD *)(v158 + v162 + v148);
      *v38 = v26.m128_i32[0];
      v38[1] = v26.m128_i32[1];
      v38[2] = 1065353216;
      v38[3] = *((_DWORD *)v6 + 3);
      *v36 = v26.m128_i32[0];
      v36[1] = v26.m128_i32[1];
      v36[2] = 0;
      v36[3] = 1065353216;
      v39 = 0LL;
      v40 = (float)(v26.m128_f32[0] - *(float *)v6) / (float)(*v24 - *(float *)v6);
      v41 = 1.0 - v40;
      v42 = (float)(v26.m128_f32[1] - *((float *)v6 + 1)) / (float)(v24[1] - *((float *)v6 + 1));
      if ( v37 >= 2 )
      {
        v154 = (char *)(v21 + 20);
        v43 = 1.0 - v42;
        v44 = (float *)(v21 + 20);
        v151 = (__int64)v6 - v21;
        v45 = (__int64)v6 - v21;
        v147 = v23 - v21;
        v46 = v23 - v21;
        v159 = (char *)v24 - v21;
        v47 = (char *)v24 - v21;
        v152 = (char *)v38 - v21;
        v48 = (char *)v38 - v21;
        v153 = (char *)v36 - v21;
        v49 = (char *)v36 - v21;
        v146 = ((v37 - 2) >> 1) + 1;
        v39 = (unsigned int)(2 * v146);
        do
        {
          v50 = (float)(v43 * (float)((float)(*(v44 - 1) * v40) + (float)(v41 * *(float *)((char *)v44 + v45 - 4))))
              + (float)(v42
                      * (float)((float)(v41 * *(float *)((char *)v44 + v46 - 4))
                              + (float)(v40 * *(float *)&v47[(_QWORD)v44 - 4])));
          v51 = (float)(v43 * (float)((float)(v40 * *v44) + (float)(v41 * *(float *)((char *)v44 + v45))))
              + (float)(v42
                      * (float)((float)(v41 * *(float *)((char *)v44 + v46))
                              + (float)(*(float *)((char *)v44 + (_QWORD)v47) * v40)));
          *(float *)&v48[(_QWORD)v44 - 4] = v50;
          *(float *)((char *)v44 + (_QWORD)v48) = v51;
          *(float *)((char *)v44 + (_QWORD)v49) = v51;
          *(float *)&v49[(_QWORD)v44 - 4] = v50;
          v52 = (float)(v41 * *(float *)((char *)v44 + v46 + 8))
              + (float)(*(float *)((char *)v44 + (_QWORD)v47 + 8) * v40);
          v53 = (float)(v40 * v44[2]) + (float)(v41 * *(float *)((char *)v44 + v45 + 8));
          v54 = (float)(v43 * (float)((float)(v44[1] * v40) + (float)(v41 * *(float *)((char *)v44 + v45 + 4))))
              + (float)(v42
                      * (float)((float)(v41 * *(float *)((char *)v44 + v46 + 4))
                              + (float)(v40 * *(float *)((char *)v44 + (_QWORD)v47 + 4))));
          *(float *)((char *)v44 + (_QWORD)v48 + 4) = v54;
          v55 = (float)(v43 * v53) + (float)(v42 * v52);
          *(float *)((char *)v44 + (_QWORD)v48 + 8) = v55;
          *(float *)((char *)v44 + (_QWORD)v49 + 4) = v54;
          *(float *)((char *)v44 + (_QWORD)v49 + 8) = v55;
          v44 += 4;
          --v146;
        }
        while ( v146 );
        v4 = v160;
        v3 = v166;
        v22 = v143;
        v20 = v144;
        v23 = v149;
        v2 = (void **)((char *)v160 + 72);
      }
      if ( (unsigned int)v39 < v37 )
      {
        v56 = (float)((float)(1.0 - v42)
                    * (float)((float)(*(float *)(v21 + 8 * v39 + 16) * v40) + (float)(v41 * *(float *)&v6[v39 + 2])))
            + (float)(v42 * (float)((float)(v40 * v24[2 * v39 + 4]) + (float)(v41 * *(float *)(v23 + 8 * v39 + 16))));
        v57 = (float)((float)(1.0 - v42)
                    * (float)((float)(v40 * *(float *)(v21 + 8 * v39 + 20)) + (float)(v41 * *((float *)&v6[v39 + 2] + 1))))
            + (float)(v42 * (float)((float)(v41 * *(float *)(v23 + 8 * v39 + 20)) + (float)(v24[2 * v39 + 5] * v40)));
        *(float *)&v38[2 * v39 + 4] = v56;
        *(float *)&v38[2 * v39 + 5] = v57;
        *(float *)&v36[2 * v39 + 4] = v56;
        *(float *)&v36[2 * v39 + 5] = v57;
      }
      v58 = *((_DWORD *)v3 + 6);
      v59 = v157 + v163 + v145;
      v60 = v158 + v163 + v148;
      *(_DWORD *)(v60 + 4) = v26.m128_i32[1];
      *(float *)v60 = v27;
      *(_DWORD *)(v60 + 8) = 1065353216;
      *(_DWORD *)(v60 + 12) = *((_DWORD *)v6 + 3);
      *(_DWORD *)(v59 + 4) = v26.m128_i32[1];
      *(float *)v59 = v27;
      *(_DWORD *)(v59 + 8) = 0;
      *(_DWORD *)(v59 + 12) = 1065353216;
      v61 = 0LL;
      v62 = (float)(v27 - *(float *)v6) / (float)(*v24 - *(float *)v6);
      v63 = 1.0 - v62;
      v64 = (float)(v26.m128_f32[1] - *((float *)v6 + 1)) / (float)(v24[1] - *((float *)v6 + 1));
      if ( v58 >= 2 )
      {
        v147 = v21 + 20;
        v65 = 1.0 - v64;
        v66 = (float *)(v21 + 20);
        v154 = (char *)v6 - v21;
        v67 = (__int64)v6 - v21;
        v153 = (char *)(v23 - v21);
        v68 = v23 - v21;
        v152 = (char *)v24 - v21;
        v69 = (char *)v24 - v21;
        v159 = (char *)(v60 - v21);
        v70 = v60 - v21;
        v151 = v59 - v21;
        v71 = v59 - v21;
        v146 = ((v58 - 2) >> 1) + 1;
        v61 = (unsigned int)(2 * v146);
        do
        {
          v72 = (float)((float)((float)(*(float *)((char *)v66 + (_QWORD)v69 - 4) * v62)
                              + (float)(*(float *)((char *)v66 + v68 - 4) * v63))
                      * v64)
              + (float)((float)((float)(*(v66 - 1) * v62) + (float)(*(float *)((char *)v66 + v67 - 4) * v63)) * v65);
          v73 = (float)((float)((float)(*(float *)((char *)v66 + v68) * v63)
                              + (float)(*(float *)((char *)v66 + (_QWORD)v69) * v62))
                      * v64)
              + (float)((float)((float)(*(float *)((char *)v66 + v67) * v63) + (float)(*v66 * v62)) * v65);
          *(float *)((char *)v66 + v70 - 4) = v72;
          *(float *)((char *)v66 + v70) = v73;
          *(float *)((char *)v66 + v71 - 4) = v72;
          *(float *)((char *)v66 + v71) = v73;
          v74 = (float)((float)((float)(*(float *)((char *)v66 + (_QWORD)v69 + 4) * v62)
                              + (float)(*(float *)((char *)v66 + v68 + 4) * v63))
                      * v64)
              + (float)((float)((float)(v66[1] * v62) + (float)(*(float *)((char *)v66 + v67 + 4) * v63)) * v65);
          v75 = (float)((float)((float)(*(float *)((char *)v66 + v68 + 8) * v63)
                              + (float)(*(float *)((char *)v66 + (_QWORD)v69 + 8) * v62))
                      * v64)
              + (float)((float)((float)(*(float *)((char *)v66 + v67 + 8) * v63) + (float)(v66[2] * v62)) * v65);
          *(float *)((char *)v66 + v70 + 4) = v74;
          *(float *)((char *)v66 + v70 + 8) = v75;
          *(float *)((char *)v66 + v71 + 4) = v74;
          *(float *)((char *)v66 + v71 + 8) = v75;
          v66 += 4;
          --v146;
        }
        while ( v146 );
        v4 = v160;
        v3 = v166;
        v22 = v143;
        v20 = v144;
        v23 = v149;
        v2 = (void **)((char *)v160 + 72);
      }
      if ( (unsigned int)v61 < v58 )
      {
        v76 = (float)((float)((float)(v24[2 * v61 + 4] * v62) + (float)(v63 * *(float *)(v23 + 8 * v61 + 16))) * v64)
            + (float)((float)((float)(*(float *)(v21 + 8 * v61 + 16) * v62) + (float)(v63 * *(float *)&v6[v61 + 2]))
                    * (float)(1.0 - v64));
        v77 = (float)((float)((float)(v63 * *(float *)(v23 + 8 * v61 + 20)) + (float)(v24[2 * v61 + 5] * v62)) * v64)
            + (float)((float)((float)(*(float *)(v21 + 8 * v61 + 20) * v62) + (float)(v63 * *((float *)&v6[v61 + 2] + 1)))
                    * (float)(1.0 - v64));
        *(float *)(v60 + 8 * v61 + 16) = v76;
        *(float *)(v60 + 8 * v61 + 20) = v77;
        *(float *)(v59 + 8 * v61 + 16) = v76;
        *(float *)(v59 + 8 * v61 + 20) = v77;
      }
      v78 = v148;
      v79 = (_DWORD *)(v148 + v158);
      v80 = (_DWORD *)(v157 + v145);
      LODWORD(v147) = *((_DWORD *)v3 + 6);
      LODWORD(v146) = 0;
      *v79 = v26.m128_i32[0];
      v79[1] = v26.m128_i32[3];
      v79[2] = 1065353216;
      v79[3] = *((_DWORD *)v6 + 3);
      v81 = v147;
      *v80 = v26.m128_i32[0];
      v80[1] = v26.m128_i32[3];
      v80[2] = 0;
      v80[3] = 1065353216;
      v26.m128_f32[0] = (float)(v26.m128_f32[0] - *(float *)v6) / (float)(*v24 - *(float *)v6);
      v82 = 1.0 - v26.m128_f32[0];
      v83 = (float)(v26.m128_f32[3] - *((float *)v6 + 1)) / (float)(v24[1] - *((float *)v6 + 1));
      if ( v81 >= 2 )
      {
        v154 = (char *)(v21 + 20);
        v152 = (char *)(v23 - v21);
        v151 = ((v81 - 2) >> 1) + 1;
        v164 = (char *)v79 - v21;
        v84 = (char *)v79 - v21;
        v153 = (char *)v6 - v21;
        v4 = v160;
        v85 = (__int64)v6 - v21;
        v159 = (char *)v24 - v21;
        v86 = v23 - v21;
        *(_QWORD *)v178 = (char *)v80 - v21;
        v87 = 1.0 - v83;
        v88 = (char *)v24 - v21;
        v89 = (char *)v80 - v21;
        LODWORD(v146) = 2 * v151;
        v90 = (float *)(v21 + 20);
        do
        {
          v91 = (float)((float)(*(float *)((char *)v90 + v85) * v82) + (float)(*v90 * v26.m128_f32[0])) * v87;
          v92 = (float)((float)((float)(*(float *)((char *)v90 + v86 - 4) * v82)
                              + (float)(*(float *)((char *)v90 + (_QWORD)v88 - 4) * v26.m128_f32[0]))
                      * v83)
              + (float)((float)((float)(*(float *)((char *)v90 + v85 - 4) * v82) + (float)(*(v90 - 1) * v26.m128_f32[0]))
                      * v87);
          v93 = (float)((float)(v82 * *(float *)((char *)v90 + v86))
                      + (float)(*(float *)((char *)v90 + (_QWORD)v88) * v26.m128_f32[0]))
              * v83;
          *(float *)((char *)v90 + (_QWORD)v84 - 4) = v92;
          v94 = v93 + v91;
          *(float *)((char *)v90 + (_QWORD)v84) = v94;
          *(float *)((char *)v90 + (_QWORD)v89) = v94;
          *(float *)((char *)v90 + (_QWORD)v89 - 4) = v92;
          v95 = (float)((float)((float)(*(float *)((char *)v90 + v86 + 4) * v82)
                              + (float)(*(float *)((char *)v90 + (_QWORD)v88 + 4) * v26.m128_f32[0]))
                      * v83)
              + (float)((float)((float)(*(float *)((char *)v90 + v85 + 4) * v82) + (float)(v90[1] * v26.m128_f32[0]))
                      * v87);
          v96 = (float)((float)((float)(v82 * *(float *)((char *)v90 + v86 + 8))
                              + (float)(*(float *)((char *)v90 + (_QWORD)v88 + 8) * v26.m128_f32[0]))
                      * v83)
              + (float)((float)((float)(*(float *)((char *)v90 + v85 + 8) * v82) + (float)(v90[2] * v26.m128_f32[0]))
                      * v87);
          *(float *)((char *)v90 + (_QWORD)v84 + 4) = v95;
          *(float *)((char *)v90 + (_QWORD)v84 + 8) = v96;
          *(float *)((char *)v90 + (_QWORD)v89 + 4) = v95;
          *(float *)((char *)v90 + (_QWORD)v89 + 8) = v96;
          v90 += 4;
          --v151;
        }
        while ( v151 );
        v2 = *(void ***)v167;
        v22 = v143;
        v20 = v144;
        v23 = v149;
        v78 = v148;
        v81 = v147;
      }
      if ( (unsigned int)v146 < v81 )
      {
        v97 = (unsigned int)v146;
        v98 = (float)((float)((float)(v24[2 * (unsigned int)v146 + 4] * v26.m128_f32[0])
                            + (float)(v82 * *(float *)(v23 + 8LL * (unsigned int)v146 + 16)))
                    * v83)
            + (float)((float)((float)(*(float *)(v21 + 8LL * (unsigned int)v146 + 16) * v26.m128_f32[0])
                            + (float)(v82 * *(float *)&v6[(unsigned int)v146 + 2]))
                    * (float)(1.0 - v83));
        v99 = (float)((float)((float)(v24[2 * (unsigned int)v146 + 5] * v26.m128_f32[0])
                            + (float)(v82 * *(float *)(v23 + 8LL * (unsigned int)v146 + 20)))
                    * v83)
            + (float)((float)((float)(*(float *)(v21 + 8LL * (unsigned int)v146 + 20) * v26.m128_f32[0])
                            + (float)(v82 * *((float *)&v6[(unsigned int)v146 + 2] + 1)))
                    * (float)(1.0 - v83));
        *(float *)&v79[2 * (unsigned int)v146 + 4] = v98;
        *(float *)&v79[2 * v97 + 5] = v99;
        *(float *)&v80[2 * v97 + 4] = v98;
        *(float *)&v80[2 * v97 + 5] = v99;
      }
      LODWORD(v146) = *((_DWORD *)v3 + 6);
      v100 = v146;
      v101 = v157 + v22 + v145;
      v102 = v158 + v78 + v22;
      *(float *)v102 = v27;
      *(_DWORD *)(v102 + 4) = v26.m128_i32[3];
      *(_DWORD *)(v102 + 8) = 1065353216;
      *(_DWORD *)(v102 + 12) = *((_DWORD *)v6 + 3);
      *(float *)v101 = v27;
      *(_DWORD *)(v101 + 4) = v26.m128_i32[3];
      *(_DWORD *)(v101 + 8) = 0;
      *(_DWORD *)(v101 + 12) = 1065353216;
      v103 = 0LL;
      v104 = (float)(v27 - *(float *)v6) / (float)(*v24 - *(float *)v6);
      v105 = 1.0 - v104;
      v106 = (float)(v26.m128_f32[3] - *((float *)v6 + 1)) / (float)(v24[1] - *((float *)v6 + 1));
      if ( v100 >= 2 )
      {
        v107 = (float *)(v21 + 20);
        *(_QWORD *)v178 = (char *)v6 - v21;
        v108 = 1.0 - v106;
        v109 = (__int64)v6 - v21;
        v164 = (char *)(v23 - v21);
        v110 = v23 - v21;
        v154 = (char *)v24 - v21;
        v111 = (char *)v24 - v21;
        v153 = (char *)(v102 - v21);
        v112 = v102 - v21;
        v152 = (char *)(v101 - v21);
        v113 = v101 - v21;
        v151 = ((unsigned int)(v146 - 2) >> 1) + 1;
        v103 = (unsigned int)(2 * v151);
        do
        {
          v114 = (float)((float)((float)(*(float *)&v111[(_QWORD)v107 - 4] * v104)
                               + (float)(*(float *)((char *)v107 + v110 - 4) * v105))
                       * v106)
               + (float)((float)((float)(*(v107 - 1) * v104) + (float)(v105 * *(float *)((char *)v107 + v109 - 4)))
                       * v108);
          v115 = (float)((float)((float)(*v107 * v104) + (float)(v105 * *(float *)((char *)v107 + v109))) * v108)
               + (float)((float)((float)(*(float *)((char *)v107 + (_QWORD)v111) * v104)
                               + (float)(*(float *)((char *)v107 + v110) * v105))
                       * v106);
          *(float *)((char *)v107 + v112 - 4) = v114;
          *(float *)((char *)v107 + v112) = v115;
          *(float *)((char *)v107 + v113 - 4) = v114;
          *(float *)((char *)v107 + v113) = v115;
          v116 = (float)((float)((float)(*(float *)((char *)v107 + (_QWORD)v111 + 4) * v104)
                               + (float)(*(float *)((char *)v107 + v110 + 4) * v105))
                       * v106)
               + (float)((float)((float)(v107[1] * v104) + (float)(v105 * *(float *)((char *)v107 + v109 + 4))) * v108);
          v117 = (float)((float)((float)(v107[2] * v104) + (float)(v105 * *(float *)((char *)v107 + v109 + 8))) * v108)
               + (float)((float)((float)(*(float *)((char *)v107 + (_QWORD)v111 + 8) * v104)
                               + (float)(*(float *)((char *)v107 + v110 + 8) * v105))
                       * v106);
          *(float *)((char *)v107 + v112 + 4) = v116;
          *(float *)((char *)v107 + v112 + 8) = v117;
          *(float *)((char *)v107 + v113 + 4) = v116;
          *(float *)((char *)v107 + v113 + 8) = v117;
          v107 += 4;
          --v151;
        }
        while ( v151 );
        v4 = v160;
        v22 = v143;
        v20 = v144;
        v23 = v149;
        v100 = v146;
        v2 = (void **)((char *)v160 + 72);
      }
      if ( (unsigned int)v103 < v100 )
      {
        v118 = (float)((float)((float)(v24[2 * v103 + 4] * v104) + (float)(*(float *)(v23 + 8 * v103 + 16) * v105))
                     * v106)
             + (float)((float)((float)(*(float *)(v21 + 8 * v103 + 16) * v104) + (float)(v105 * *(float *)&v6[v103 + 2]))
                     * (float)(1.0 - v106));
        v119 = (float)((float)((float)(*(float *)(v21 + 8 * v103 + 20) * v104)
                             + (float)(v105 * *((float *)&v6[v103 + 2] + 1)))
                     * (float)(1.0 - v106))
             + (float)((float)((float)(v24[2 * v103 + 5] * v104) + (float)(*(float *)(v23 + 8 * v103 + 20) * v105))
                     * v106);
        *(float *)(v102 + 8 * v103 + 16) = v118;
        *(float *)(v102 + 8 * v103 + 20) = v119;
        *(float *)(v101 + 8 * v103 + 16) = v118;
        *(float *)(v101 + 8 * v103 + 20) = v119;
      }
      v148 += 4 * v22;
      v20 += 4;
      v25 = 4 * v22 + v145;
      v19 = ++v155;
      v18 = v150;
      v144 = v20;
      v145 = v25;
    }
    while ( v155 < (unsigned __int64)v165 );
    v15 = v157;
  }
  else
  {
    v22 = v143;
  }
  v120 = *((float *)v6 + 1);
  v121 = (gsl::details *)(3 * v156);
  v122 = *(float *)((char *)v6 + (_QWORD)v121);
  v123 = *(float *)((char *)v6 + (_QWORD)v121 + 4);
  if ( v122 <= *(float *)v6 || v123 <= v120 )
    v124 = 0.0;
  else
    v124 = (float)(v123 - v120) * (float)(v122 - *(float *)v6);
  Src = *v2;
  v126 = (_BYTE *)v2[1] - (_BYTE *)*v2;
  CHWDrawListEngineMetrics::s_cMegaRectPixelsSaved += (int)v124 - v18;
  v127 = v126 >> 1;
  v165 = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)LODWORD(FLOAT_1_0)).m128_u64[0];
  if ( v127 < 0 || !Src && v127 )
  {
    gsl::details::terminate(v121);
    JUMPOUT(0x1800AD4A0LL);
  }
  v128 = *(_QWORD *)v3;
  v129 = *((_DWORD *)v3 + 6);
  *(_QWORD *)v167 = v15;
  v168 = v22;
  v130 = *(_QWORD *)(v128 + 136);
  v169 = v177;
  v178[2] = v22;
  v131 = *(_BYTE *)(v130 + 97);
  *(_QWORD *)v178 = v158;
  v178[3] = v177;
  *(_QWORD *)((char *)&v177 + 4) = __PAIR64__(v127, v129);
  if ( (unsigned int)v177 > 0x10000 || (unsigned int)v127 > 0x1FFFE )
  {
    LODWORD(v177) = 0;
    DWORD2(v177) = 0;
  }
  v133 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)&v177);
  if ( !v133 )
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v132, 0LL, 0, -2147024882, 0x4Eu);
    MilInstrumentationCheckHR_MaybeFailFast(v142, 0LL, 0, -2147024882, 0x19Eu);
    return v17;
  }
  CDrawListPrimitive::Initialize(v133, 1, (__int64)v178, (__int64)v167, v129, Src, v127, (__int64)&v165, v131);
  v134 = *(_QWORD *)v3;
  v135 = (__int64 (__fastcall ***)(_QWORD, __int64))v133;
  *(_OWORD *)((char *)v3 + 40) = *(_OWORD *)(*(_QWORD *)v3 + 56LL);
  *(_OWORD *)((char *)v3 + 56) = *(_OWORD *)(v134 + 72);
  *(_OWORD *)((char *)v3 + 72) = *(_OWORD *)(v134 + 88);
  *(_OWORD *)((char *)v3 + 88) = *(_OWORD *)(v134 + 104);
  *((_DWORD *)v3 + 26) = *(_DWORD *)(v134 + 120);
  *(_OWORD *)(v134 + 56) = CMILMatrix::Identity;
  *(_OWORD *)(v134 + 72) = xmmword_1803073B0;
  *(_OWORD *)(v134 + 88) = xmmword_1803073C0;
  *(_OWORD *)(v134 + 104) = xmmword_1803073D0;
  *(_DWORD *)(v134 + 120) = dword_1803073E0;
  v136 = (char *)(v134 + 136);
  v137 = *(__int64 (__fastcall ****)(_QWORD, __int64))v136;
  *(_QWORD *)v136 = 0LL;
  if ( v136 != &v170 )
  {
    v135 = 0LL;
    *(_QWORD *)v136 = v133;
  }
  v138 = (char *)v3 + 32;
  v139 = v171;
  if ( v138 == v171 )
  {
    if ( !v137 )
      goto LABEL_62;
    v140 = v137;
  }
  else
  {
    v140 = *(__int64 (__fastcall ****)(_QWORD, __int64))v138;
    *(_QWORD *)v138 = v137;
    if ( !v140 )
      goto LABEL_62;
  }
  std::default_delete<CShape>::operator()((__int64)v171, v140);
LABEL_62:
  if ( v135 )
    std::default_delete<CShape>::operator()((__int64)v139, v135);
  return v17;
}
