/*
 * XREFs of ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01B614C
 * Callers:
 *     DoPrediction @ 0x1C01B7410 (DoPrediction.c)
 * Callees:
 *     ??KPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1C01B4BD0 (--KPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 *     ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x1C01B4EDC (-DeltaOvershootCompensation@Prediction@@YA_J_J0@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01B4FD8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01B5F9C (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 */

void __fastcall UpdateContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  int v6; // r10d
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rdi
  bool v15; // zf
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rbx
  unsigned __int64 v27; // rsi
  __int64 *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  struct tagHPD_PREDICTION_INFO *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 *v38; // r14
  __int64 v39; // rsi
  __int64 *v40; // rax
  unsigned int v41; // r9d
  __int64 v42; // rcx
  unsigned int v43; // edx
  __int64 v44; // r8
  unsigned __int64 v45; // rax
  __int64 v46; // r8
  int v47; // r11d
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r8
  signed __int64 v50; // rax
  signed __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rcx
  unsigned int v54; // r14d
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // r11
  unsigned __int64 v57; // r10
  __int64 v58; // rax
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // rdx
  __int64 *v62; // rax
  __int64 *v63; // rax
  __int64 v64; // rax
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rdx
  __int64 *v68; // rcx
  __int64 v69; // rax
  int v70; // r8d
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rsi
  __int64 *v74; // rax
  unsigned int v75; // r9d
  __int64 v76; // rcx
  unsigned int v77; // edx
  __int64 v78; // r8
  unsigned __int64 v79; // rax
  __int64 v80; // r8
  int v81; // r11d
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // r8
  signed __int64 v84; // rax
  signed __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  unsigned int v88; // r14d
  __int64 v89; // r12
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // r11
  unsigned __int64 v92; // r10
  __int64 v93; // rax
  unsigned __int64 v94; // r14
  unsigned __int64 v95; // r8
  unsigned __int64 v96; // rdx
  __int64 *v97; // rax
  __int64 *v98; // r12
  __int64 *v99; // rax
  __int64 v100; // rax
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 *v104; // rcx
  __int64 v105; // rax
  int v106; // r8d
  __int64 v107; // rax
  __int64 v108; // rsi
  __int64 v109; // rsi
  __int64 *v110; // rax
  unsigned int v111; // r9d
  __int64 v112; // rcx
  unsigned int v113; // edx
  __int64 v114; // r8
  unsigned __int64 v115; // rax
  __int64 v116; // r8
  unsigned __int64 v117; // r14
  int v118; // r11d
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // r8
  signed __int64 v121; // rax
  signed __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rcx
  unsigned int v125; // r14d
  unsigned __int64 v126; // rax
  unsigned __int64 v127; // r11
  unsigned __int64 v128; // r10
  __int64 v129; // rax
  unsigned __int64 v130; // r14
  unsigned __int64 v131; // r8
  unsigned __int64 v132; // rdx
  __int64 *v133; // rax
  __int64 *v134; // rax
  __int64 v135; // rax
  __int64 v136; // r9
  __int64 v137; // rdx
  __int64 v138; // rdx
  __int64 *v139; // rcx
  __int64 v140; // rax
  int v141; // r8d
  __int64 v142; // rax
  struct tagPOINT *v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // rsi
  __int64 *v146; // rax
  unsigned int v147; // r9d
  __int64 v148; // rcx
  unsigned int v149; // edx
  __int64 v150; // r8
  unsigned __int64 v151; // rax
  __int64 v152; // r8
  unsigned __int64 v153; // rdi
  int v154; // r11d
  unsigned __int64 v155; // rcx
  unsigned __int64 v156; // r8
  signed __int64 v157; // rax
  __int64 v158; // r8
  __int64 v159; // r9
  signed __int64 v160; // rcx
  unsigned int v161; // ebx
  __int64 v162; // rdi
  unsigned __int64 v163; // rax
  unsigned __int64 v164; // r11
  unsigned __int64 v165; // r10
  __int64 v166; // rax
  unsigned __int64 v167; // rbx
  unsigned __int64 v168; // r8
  unsigned __int64 v169; // rdx
  __int64 *v170; // rax
  __int64 *v171; // rbx
  __int64 *v172; // rax
  __int64 v173; // rax
  __int64 v174; // r9
  __int64 v175; // rdx
  __int64 v176; // rdx
  __int64 *v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rax
  LONG x; // ecx
  LONG v181; // eax
  int v182; // eax
  LONG y; // ecx
  LONG v184; // eax
  int v185; // eax
  LONG v186; // eax
  LONG v187; // ecx
  LONG v188; // ecx
  LONG v189; // eax
  LONG v190; // ecx
  LONG v191; // ecx
  __int64 v192; // [rsp+30h] [rbp-50h] BYREF
  __int64 v193; // [rsp+38h] [rbp-48h] BYREF
  __int64 v194; // [rsp+40h] [rbp-40h] BYREF
  int v195; // [rsp+48h] [rbp-38h] BYREF
  __int64 v196; // [rsp+50h] [rbp-30h] BYREF
  __int64 v197; // [rsp+58h] [rbp-28h] BYREF
  __int64 v198; // [rsp+60h] [rbp-20h]
  __int64 v199; // [rsp+68h] [rbp-18h]
  __int64 v200; // [rsp+70h] [rbp-10h]
  __int64 v201; // [rsp+78h] [rbp-8h]
  struct tagHPD_PREDICTION_INFO *v203; // [rsp+D8h] [rbp+58h]

  v203 = a4;
  if ( gbTOUCH_DRIVER_HW_STACK_TIMESTAMP != 1 || (v6 = *((_DWORD *)a1 + 187) - *((_DWORD *)a1 + 188)) == 0 )
    v6 = glTOUCH_DRIVER_HW_STACK_SAMPLETIME;
  if ( v6 )
  {
    v7 = 0LL;
    v195 = 0;
    v8 = 0LL;
    v9 = 0LL;
    v10 = (__int64)a2.x << 32;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v197 = (__int64)v6 << 32;
    v199 = (__int64)a3.x << 32;
    v200 = (__int64)a3.y << 32;
    v198 = (__int64)a2.y << 32;
    v14 = (__int64)glTOUCH_DRIVER_HW_STACK_LATENCY << 32;
    v15 = v10 == *((_QWORD *)a4 + 270);
    v193 = v10 - *((_QWORD *)a4 + 270);
    v201 = v10;
    v196 = 0LL;
    if ( !v15 )
    {
      v16 = Prediction::operator/(&v196, &v193, &v197);
      v17 = 0LL;
      if ( &v192 != v16 )
        v17 = *v16;
      v11 = (v17 + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
      v193 = v11 - *((_QWORD *)v203 + 262);
      v18 = Prediction::operator/(&v196, &v193, &v197);
      if ( &v192 == v18 || (v12 = *v18, v196 = v12, v13 = v12, v12 >= 0) )
      {
        v196 = v13;
        v19 = v13;
      }
      else
      {
        v19 = -v12;
      }
      a4 = v203;
      v20 = *((_QWORD *)v203 + 266);
      if ( v19 > v20 )
      {
        v20 = v13;
        if ( v13 < 0 )
          v20 = -v13;
        *((_QWORD *)v203 + 266) = v20;
        v196 = v13;
      }
      if ( v20 )
      {
        v193 = v20;
        v21 = v13;
        if ( v13 < 0 )
          v21 = -v13;
        v196 = v13;
        v192 = v21;
        v22 = Prediction::operator/(&v194, &v192, &v193);
        a4 = v203;
        v23 = (_QWORD *)((char *)v203 + 1888);
        if ( (_QWORD *)((char *)v203 + 1888) == v22 )
          v196 = v13;
        else
          *v23 = *v22;
        if ( (_QWORD *)((char *)v203 + 1856) != v23 )
        {
          *((_QWORD *)v203 + 232) = *v23;
          v196 = v13;
        }
      }
      v24 = *((_QWORD *)a4 + 264);
      if ( v13 < 0 )
        v13 = -v13;
      if ( v24 < 0 )
        v24 = -v24;
      v13 -= v24;
      *((_QWORD *)a4 + 262) = v11;
      *((_QWORD *)a4 + 264) = v12;
    }
    v193 = v198 - *((_QWORD *)a4 + 271);
    if ( v193 )
    {
      v25 = Prediction::operator/(&v194, &v193, &v197);
      v26 = v196;
      if ( &v192 != v25 )
        v11 = *v25;
      v27 = (v11 + 0x80000000) & 0xFFFFFFFF00000000uLL;
      v192 = v27 - *((_QWORD *)v203 + 263);
      v28 = Prediction::operator/(&v194, &v192, &v197);
      v29 = v26;
      v30 = v26;
      if ( &v192 != v28 )
      {
        v12 = *v28;
        v26 = *v28;
        v29 = *v28;
        v30 = *v28;
      }
      if ( v29 >= 0 )
        v31 = v30;
      else
        v31 = -v26;
      if ( v29 >= 0 )
        v26 = v30;
      v32 = v203;
      v33 = *((_QWORD *)v203 + 267);
      if ( v31 > v33 )
      {
        v33 = v26;
        if ( v26 < 0 )
          v33 = -v26;
        *((_QWORD *)v203 + 267) = v33;
      }
      if ( v33 )
      {
        v192 = v33;
        v34 = v26;
        if ( v26 < 0 )
          v34 = -v26;
        v193 = v34;
        v35 = Prediction::operator/(&v194, &v193, &v192);
        v32 = v203;
        v36 = (_QWORD *)((char *)v203 + 1904);
        if ( (_QWORD *)((char *)v203 + 1904) != v35 )
          *v36 = *v35;
        if ( (_QWORD *)((char *)v203 + 1872) != v36 )
          *((_QWORD *)v203 + 234) = *v36;
      }
      v37 = *((_QWORD *)v32 + 265);
      if ( v26 < 0 )
        v26 = -v26;
      if ( v37 < 0 )
        v37 = -v37;
      v7 = v26 - v37;
      *((_QWORD *)v32 + 263) = v27;
      *((_QWORD *)v32 + 265) = v12;
    }
    v38 = (__int64 *)v203;
    LODWORD(v196) = -1;
    v39 = v199 - *((_QWORD *)v203 + 268);
    v193 = v39;
    if ( v39 )
    {
      v40 = Prediction::operator/(&v194, &v193, &v197);
      v41 = v14;
      v42 = *v40;
      v43 = *v40;
      v192 = (*v40 ^ v14) >> 63;
      if ( v42 < 0 )
        v43 = -v43;
      v44 = -v42;
      if ( v42 >= 0 )
        HIDWORD(v44) = HIDWORD(v42);
      v45 = -v14;
      if ( v14 < 0 )
        v41 = -(int)v14;
      v46 = HIDWORD(v44);
      if ( v14 >= 0 )
        v45 = v14;
      v47 = HIDWORD(v45) * v46;
      v48 = ((v43 * (unsigned __int64)v41) >> 32) + v41 * v46;
      v49 = (unsigned int)v48 + v43 * HIDWORD(v45);
      v50 = (v192 ^ ((unsigned int)v49 | ((unsigned __int64)(unsigned int)(HIDWORD(v49) + v47 + HIDWORD(v48)) << 32)))
          - v192;
      if ( v43 * v41 )
        v50 = v192 ^ ((unsigned int)v49 | ((unsigned __int64)(unsigned int)(HIDWORD(v49) + v47 + HIDWORD(v48)) << 32));
      if ( v13 < 0 )
      {
        LODWORD(v51) = v50;
        v52 = *((_QWORD *)v203 + 232);
        v53 = 0x100000000LL - v52;
        v54 = -(int)v52;
        v192 = (v50 ^ (0x100000000LL - v52)) >> 63;
        if ( v50 < 0 )
          v51 = -v50;
        v55 = abs64(v50);
        if ( v53 < 0 )
          v54 = v52;
        v56 = HIDWORD(v55);
        v57 = v52 - 0x100000000LL;
        v58 = v54;
        if ( v53 >= 0 )
          v57 = 0x100000000LL - v52;
        v59 = v54 * (unsigned __int64)(unsigned int)v51;
        v60 = ((__PAIR64__(v56, v51) * (unsigned int)v58) >> 32) + (unsigned int)v51 * HIDWORD(v57);
        v61 = v192 ^ ((unsigned int)v60 | ((unsigned __int64)(unsigned int)(HIDWORD(v60)
                                                                          + v56 * HIDWORD(v57)
                                                                          + ((HIDWORD(v59) + v58 * v56) >> 32)) << 32));
        v50 = v61 - v192;
        if ( (_DWORD)v59 )
          v50 = v61;
      }
      v38 = (__int64 *)v203;
      v192 = v50;
      v193 = v39;
      v62 = Prediction::tagRlsFilter::Filter((__int64 *)v203, &v194, (__int64)&v193, (__int64)&v192, &v195);
      if ( &v193 != v62 )
        v8 = *v62;
      v192 = v8;
      v63 = Prediction::tagExpoSmoother::Smooth((_QWORD *)v203 + 232, &v194, &v192);
      if ( v195 )
      {
        if ( &v193 != v63 )
          v9 = *v63;
        *((_QWORD *)v203 + 276) += v9;
        v67 = *((_QWORD *)v203 + 276) + v199;
        v68 = (__int64 *)((char *)v203 + 2176);
        v69 = gPredictorRLSExpoSmoothAlpha;
        *((_QWORD *)v203 + 272) = v67;
        if ( (__int64 *)((char *)v203 + 1856) != &v194 )
          *((_QWORD *)v203 + 232) = v69;
        if ( (__int64 *)((char *)v203 + 1864) != &v194 )
          *((_QWORD *)v203 + 233) = 0LL;
      }
      else
      {
        if ( &v193 != v63 )
          v9 = *v63;
        v64 = Prediction::DeltaOvershootCompensation(*((_QWORD *)v203 + 276), v39);
        v66 = v64 + v65 + v199;
        *((_QWORD *)v203 + 276) = v64 + v65;
        v67 = v9 + v66;
        v68 = (__int64 *)((char *)v203 + 2176);
      }
      if ( v39 >= 0 )
        v70 = 1;
      else
        v70 = -1;
      v71 = *v68;
      if ( v70 == 1 )
      {
        if ( v67 > v71 )
          v71 = v67;
      }
      else
      {
        if ( v67 >= v71 )
          v67 = *v68;
        v71 = v67;
      }
    }
    else
    {
      v68 = (__int64 *)((char *)v203 + 2176);
      v71 = *((_QWORD *)v203 + 272);
    }
    v72 = v201;
    *v68 = v71;
    a6->x = (unsigned __int64)(v71 + 0x80000000LL) >> 32;
    v73 = v72 - v38[270];
    v193 = v73;
    if ( v73 )
    {
      v74 = Prediction::operator/(&v194, &v193, &v197);
      v75 = v14;
      v76 = *v74;
      v77 = *v74;
      v192 = (*v74 ^ v14) >> 63;
      if ( v76 < 0 )
        v77 = -v77;
      v78 = -v76;
      if ( v76 >= 0 )
        HIDWORD(v78) = HIDWORD(v76);
      v79 = -v14;
      if ( v14 < 0 )
        v75 = -(int)v14;
      v80 = HIDWORD(v78);
      if ( v14 >= 0 )
        v79 = v14;
      v81 = HIDWORD(v79) * v80;
      v82 = ((v77 * (unsigned __int64)v75) >> 32) + v75 * v80;
      v83 = (unsigned int)v82 + v77 * HIDWORD(v79);
      v84 = (v192 ^ ((unsigned int)v83 | ((unsigned __int64)(unsigned int)(HIDWORD(v83) + v81 + HIDWORD(v82)) << 32)))
          - v192;
      if ( v77 * v75 )
        v84 = v192 ^ ((unsigned int)v83 | ((unsigned __int64)(unsigned int)(HIDWORD(v83) + v81 + HIDWORD(v82)) << 32));
      if ( v13 < 0 )
      {
        LODWORD(v85) = v84;
        v86 = *((_QWORD *)v203 + 236);
        v87 = 0x100000000LL - v86;
        v88 = -(int)v86;
        v89 = (v84 ^ (0x100000000LL - v86)) >> 63;
        if ( v84 < 0 )
          v85 = -v84;
        v90 = abs64(v84);
        if ( v87 < 0 )
          v88 = *((_QWORD *)v203 + 236);
        v91 = HIDWORD(v90);
        v92 = v86 - 0x100000000LL;
        v93 = v88;
        if ( v87 >= 0 )
          v92 = 0x100000000LL - v86;
        v94 = v88 * (unsigned __int64)(unsigned int)v85;
        v95 = ((__PAIR64__(v91, v85) * (unsigned int)v93) >> 32) + (unsigned int)v85 * HIDWORD(v92);
        v96 = v89 ^ ((unsigned int)v95 | ((unsigned __int64)(unsigned int)(HIDWORD(v95)
                                                                         + v91 * HIDWORD(v92)
                                                                         + ((HIDWORD(v94) + v93 * v91) >> 32)) << 32));
        v84 = v96 - v89;
        if ( (_DWORD)v94 )
          v84 = v96;
      }
      v38 = (__int64 *)v203;
      v192 = v84;
      v193 = v73;
      v97 = Prediction::tagRlsFilter::Filter((__int64 *)v203 + 108, &v194, (__int64)&v193, (__int64)&v192, &v195);
      if ( &v193 != v97 )
        v8 = *v97;
      v98 = (__int64 *)((char *)v203 + 1888);
      v192 = v8;
      v99 = Prediction::tagExpoSmoother::Smooth((_QWORD *)v203 + 236, &v194, &v192);
      if ( v195 )
      {
        if ( &v193 != v99 )
          v9 = *v99;
        *((_QWORD *)v203 + 278) += v9;
        v104 = (__int64 *)((char *)v203 + 2192);
        v103 = *((_QWORD *)v203 + 278) + v201;
        v105 = gPredictorRLSExpoSmoothAlpha;
        *((_QWORD *)v203 + 274) = v103;
        if ( v98 != &v194 )
          *v98 = v105;
        if ( (__int64 *)((char *)v203 + 1896) != &v194 )
          *((_QWORD *)v203 + 237) = 0LL;
      }
      else
      {
        if ( &v193 != v99 )
          v9 = *v99;
        v100 = Prediction::DeltaOvershootCompensation(*((_QWORD *)v203 + 278), v73);
        v102 = v100 + v101 + v201;
        *((_QWORD *)v203 + 278) = v100 + v101;
        v103 = v9 + v102;
        v104 = (__int64 *)((char *)v203 + 2192);
      }
      if ( v73 >= 0 )
        v106 = 1;
      else
        v106 = -1;
      v107 = *v104;
      if ( v106 == 1 )
      {
        if ( v103 > v107 )
          v107 = v103;
      }
      else
      {
        if ( v103 >= v107 )
          v103 = *v104;
        v107 = v103;
      }
    }
    else
    {
      v104 = v38 + 274;
      v107 = v38[274];
    }
    v108 = v200;
    *v104 = v107;
    a5->x = (unsigned __int64)(v107 + 0x80000000LL) >> 32;
    v109 = v108 - v38[269];
    v193 = v109;
    if ( v109 )
    {
      v110 = Prediction::operator/(&v194, &v193, &v197);
      v111 = v14;
      v112 = *v110;
      v113 = *v110;
      v192 = (*v110 ^ v14) >> 63;
      if ( v112 < 0 )
        v113 = -v113;
      v114 = -v112;
      if ( v112 >= 0 )
        HIDWORD(v114) = HIDWORD(v112);
      v115 = -v14;
      if ( v14 < 0 )
        v111 = -(int)v14;
      v116 = HIDWORD(v114);
      if ( v14 >= 0 )
        v115 = v14;
      v117 = v111 * (unsigned __int64)v113;
      v118 = HIDWORD(v115) * v116;
      v119 = HIDWORD(v117) + v111 * v116;
      v120 = (unsigned int)v119 + v113 * HIDWORD(v115);
      v121 = (v192 ^ ((unsigned int)v120 | ((unsigned __int64)(unsigned int)(HIDWORD(v120) + v118 + HIDWORD(v119)) << 32)))
           - v192;
      if ( (_DWORD)v117 )
        v121 = v192 ^ ((unsigned int)v120 | ((unsigned __int64)(unsigned int)(HIDWORD(v120) + v118 + HIDWORD(v119)) << 32));
      if ( v7 < 0 )
      {
        LODWORD(v122) = v121;
        v123 = *((_QWORD *)v203 + 234);
        v124 = 0x100000000LL - v123;
        v125 = -(int)v123;
        v192 = (v121 ^ (0x100000000LL - v123)) >> 63;
        if ( v121 < 0 )
          v122 = -v121;
        v126 = abs64(v121);
        if ( v124 < 0 )
          v125 = v123;
        v127 = HIDWORD(v126);
        v128 = v123 - 0x100000000LL;
        v129 = v125;
        if ( v124 >= 0 )
          v128 = 0x100000000LL - v123;
        v130 = v125 * (unsigned __int64)(unsigned int)v122;
        v131 = ((__PAIR64__(v127, v122) * (unsigned int)v129) >> 32) + (unsigned int)v122 * HIDWORD(v128);
        v132 = v192 ^ ((unsigned int)v131 | ((unsigned __int64)(unsigned int)(HIDWORD(v131)
                                                                            + v127 * HIDWORD(v128)
                                                                            + ((HIDWORD(v130) + v129 * v127) >> 32)) << 32));
        v121 = v132 - v192;
        if ( (_DWORD)v130 )
          v121 = v132;
      }
      v38 = (__int64 *)v203;
      v192 = v121;
      v193 = v109;
      v133 = Prediction::tagRlsFilter::Filter((__int64 *)v203 + 54, &v194, (__int64)&v193, (__int64)&v192, &v195);
      if ( &v193 != v133 )
        v8 = *v133;
      v192 = v8;
      v134 = Prediction::tagExpoSmoother::Smooth((_QWORD *)v203 + 234, &v194, &v192);
      if ( v195 )
      {
        if ( &v193 != v134 )
          v9 = *v134;
        *((_QWORD *)v203 + 277) += v9;
        v138 = v200 + *((_QWORD *)v203 + 277);
        v139 = (__int64 *)((char *)v203 + 2184);
        v140 = gPredictorRLSExpoSmoothAlpha;
        *((_QWORD *)v203 + 273) = v138;
        if ( (__int64 *)((char *)v203 + 1872) != &v194 )
          *((_QWORD *)v203 + 234) = v140;
        if ( (__int64 *)((char *)v203 + 1880) != &v194 )
          *((_QWORD *)v203 + 235) = 0LL;
      }
      else
      {
        if ( &v193 != v134 )
          v9 = *v134;
        v135 = Prediction::DeltaOvershootCompensation(*((_QWORD *)v203 + 277), v109);
        v137 = v135 + v136 + v200;
        *((_QWORD *)v203 + 277) = v135 + v136;
        v138 = v9 + v137;
        v139 = (__int64 *)((char *)v203 + 2184);
      }
      if ( v109 >= 0 )
        v141 = 1;
      else
        v141 = -1;
      v142 = *v139;
      if ( v141 == 1 )
      {
        if ( v138 > v142 )
          v142 = v138;
      }
      else
      {
        if ( v138 >= v142 )
          v138 = *v139;
        v142 = v138;
      }
    }
    else
    {
      v139 = v38 + 273;
      v142 = v38[273];
    }
    v143 = a6;
    v144 = v198;
    *v139 = v142;
    a6->y = (unsigned __int64)(v142 + 0x80000000LL) >> 32;
    v145 = v144 - v38[271];
    v193 = v145;
    if ( v145 )
    {
      v146 = Prediction::operator/(&v194, &v193, &v197);
      v147 = v14;
      v148 = *v146;
      v149 = *v146;
      v192 = (v14 ^ *v146) >> 63;
      if ( v148 < 0 )
        v149 = -v149;
      v150 = -v148;
      if ( v148 >= 0 )
        HIDWORD(v150) = HIDWORD(v148);
      v151 = -v14;
      if ( v14 < 0 )
        v147 = -(int)v14;
      v152 = HIDWORD(v150);
      if ( v14 >= 0 )
        v151 = v14;
      v153 = v147 * (unsigned __int64)v149;
      v154 = HIDWORD(v151) * v152;
      v155 = HIDWORD(v153) + v147 * v152;
      v156 = (unsigned int)v155 + v149 * HIDWORD(v151);
      v157 = (v192 ^ ((unsigned int)v156 | ((unsigned __int64)(unsigned int)(HIDWORD(v156) + v154 + HIDWORD(v155)) << 32)))
           - v192;
      if ( (_DWORD)v153 )
        v157 = v192 ^ ((unsigned int)v156 | ((unsigned __int64)(unsigned int)(HIDWORD(v156) + v154 + HIDWORD(v155)) << 32));
      if ( v7 < 0 )
      {
        v158 = v38[238];
        v159 = 0x100000000LL - v158;
        LODWORD(v160) = v157;
        v161 = -(int)v158;
        v162 = (v157 ^ (0x100000000LL - v158)) >> 63;
        if ( v157 < 0 )
          v160 = -v157;
        v163 = abs64(v157);
        if ( v159 < 0 )
          v161 = v38[238];
        v164 = HIDWORD(v163);
        v165 = v158 - 0x100000000LL;
        v166 = v161;
        if ( v159 >= 0 )
          v165 = 0x100000000LL - v158;
        v167 = (unsigned int)v160 * (unsigned __int64)v161;
        v168 = (unsigned int)(HIDWORD(v167) + v166 * v164) + (unsigned int)v160 * HIDWORD(v165);
        v169 = v162 ^ ((unsigned int)v168 | ((unsigned __int64)(unsigned int)(HIDWORD(v168)
                                                                            + v164 * HIDWORD(v165)
                                                                            + ((HIDWORD(v167) + v166 * v164) >> 32)) << 32));
        v157 = v169 - v162;
        if ( (_DWORD)v167 )
          v157 = v169;
      }
      v192 = v157;
      v197 = v145;
      v170 = Prediction::tagRlsFilter::Filter(v38 + 162, &v194, (__int64)&v197, (__int64)&v192, &v195);
      if ( &v193 != v170 )
        v8 = *v170;
      v171 = v38 + 238;
      v192 = v8;
      v172 = Prediction::tagExpoSmoother::Smooth(v38 + 238, &v194, &v192);
      if ( v195 )
      {
        if ( &v193 != v172 )
          v9 = *v172;
        v38[279] += v9;
        v177 = v38 + 275;
        v176 = v198 + v38[279];
        v178 = gPredictorRLSExpoSmoothAlpha;
        v38[275] = v176;
        if ( v171 != &v194 )
          *v171 = v178;
        if ( v38 + 239 != &v194 )
          v38[239] = 0LL;
      }
      else
      {
        if ( &v193 != v172 )
          v9 = *v172;
        v173 = Prediction::DeltaOvershootCompensation(v38[279], v145);
        v175 = v173 + v174 + v198;
        v38[279] = v173 + v174;
        v176 = v9 + v175;
        v177 = v38 + 275;
      }
      if ( v145 >= 0 )
        LODWORD(v196) = 1;
      v179 = *v177;
      if ( (_DWORD)v196 == 1 )
      {
        if ( v176 > v179 )
          v179 = v176;
      }
      else
      {
        if ( v176 >= v179 )
          v176 = *v177;
        v179 = v176;
      }
      v143 = a6;
    }
    else
    {
      v177 = v38 + 275;
      v179 = v38[275];
    }
    *v177 = v179;
    a5->y = (unsigned __int64)(v179 + 0x80000000LL) >> 32;
    v38[268] = v199;
    v38[269] = v200;
    v38[270] = v201;
    v38[271] = v198;
    x = v143->x;
    v181 = *((_DWORD *)a1 + 40);
    if ( v143->x < v181 )
    {
      v143->x = v181;
      x = v181;
    }
    v182 = *((_DWORD *)a1 + 42) - 1;
    if ( x > v182 )
      v143->x = v182;
    y = v143->y;
    v184 = *((_DWORD *)a1 + 41);
    if ( y < v184 )
    {
      v143->y = v184;
      y = v184;
    }
    v185 = *((_DWORD *)a1 + 43) - 1;
    if ( y > v185 )
      v143->y = v185;
    v186 = a5->x;
    v187 = *((_DWORD *)a1 + 44);
    if ( a5->x < v187 )
    {
      a5->x = v187;
      v186 = v187;
    }
    v188 = *((_DWORD *)a1 + 46);
    if ( v186 > v188 )
      a5->x = v188;
    v189 = a5->y;
    v190 = *((_DWORD *)a1 + 45);
    if ( v189 < v190 )
    {
      a5->y = v190;
      v189 = v190;
    }
    v191 = *((_DWORD *)a1 + 47);
    if ( v189 > v191 )
      a5->y = v191;
  }
  else
  {
    *a5 = a2;
    *a6 = a3;
  }
}
