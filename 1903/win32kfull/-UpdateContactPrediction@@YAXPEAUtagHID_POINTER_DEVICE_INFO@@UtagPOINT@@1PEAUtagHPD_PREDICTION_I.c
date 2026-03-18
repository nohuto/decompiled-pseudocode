/*
 * XREFs of ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01EE370
 * Callers:
 *     DoPrediction @ 0x1C01EF4A0 (DoPrediction.c)
 * Callees:
 *     ??KPrediction@@YA?AVCFixPred@0@AEBV10@0@Z @ 0x1C01ECCC4 (--KPrediction@@YA-AVCFixPred@0@AEBV10@0@Z.c)
 *     ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x1C01ED00C (-DeltaOvershootCompensation@Prediction@@YA_J_J0@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01ED108 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01EE1E0 (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 */

void __fastcall UpdateContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  struct tagHPD_PREDICTION_INFO *v6; // r13
  int v7; // r9d
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r12
  bool v15; // zf
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rax
  unsigned __int64 v27; // rsi
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r13
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r9
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // r11
  unsigned __int64 v51; // rcx
  int v52; // r10d
  __int64 v53; // r8
  unsigned __int64 v54; // rdx
  __int64 *v55; // rax
  __int64 *v56; // rsi
  __int64 *v57; // rax
  __int64 v58; // rax
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rbx
  __int64 *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r13
  unsigned __int64 v70; // rcx
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // r9
  unsigned __int64 v79; // rsi
  unsigned __int64 v80; // r11
  unsigned __int64 v81; // rcx
  int v82; // r10d
  __int64 v83; // r8
  unsigned __int64 v84; // rdx
  __int64 *v85; // rax
  __int64 *v86; // rsi
  __int64 *v87; // rax
  __int64 v88; // rax
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // rdx
  __int64 v92; // rax
  int v93; // eax
  __int64 v94; // rcx
  __int64 v95; // rbx
  __int64 v96; // rbx
  __int64 *v97; // rax
  __int64 v98; // rdx
  __int64 v99; // r13
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rsi
  unsigned __int64 v102; // r8
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rdx
  __int64 v108; // r9
  unsigned __int64 v109; // rsi
  unsigned __int64 v110; // r11
  unsigned __int64 v111; // rcx
  int v112; // r10d
  __int64 v113; // r8
  unsigned __int64 v114; // rdx
  __int64 *v115; // rax
  __int64 *v116; // rsi
  __int64 *v117; // rax
  __int64 v118; // rax
  __int64 v119; // r9
  __int64 v120; // rdx
  __int64 v121; // rdx
  __int64 v122; // rax
  int v123; // eax
  __int64 v124; // rcx
  __int64 v125; // rbx
  __int64 v126; // rbx
  __int64 *v127; // rax
  __int64 v128; // rdx
  __int64 v129; // r13
  unsigned __int64 v130; // rcx
  unsigned __int64 v131; // rsi
  unsigned __int64 v132; // r8
  unsigned __int64 v133; // rcx
  unsigned __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // r15
  int v139; // esi
  int v140; // r11d
  unsigned __int64 v141; // r8
  unsigned __int64 v142; // rcx
  unsigned __int64 v143; // rdx
  __int64 *v144; // rax
  __int64 *v145; // rsi
  __int64 *v146; // rax
  __int64 v147; // rax
  __int64 v148; // r9
  __int64 v149; // rdx
  __int64 v150; // rdx
  __int64 v151; // rax
  int v152; // eax
  __int64 v153; // rcx
  LONG x; // r8d
  LONG v155; // eax
  LONG v156; // eax
  LONG y; // r8d
  LONG v158; // eax
  LONG v159; // eax
  LONG v160; // eax
  LONG v161; // edx
  LONG v162; // edx
  LONG v163; // eax
  LONG v164; // edx
  LONG v165; // edx
  __int64 v166; // [rsp+30h] [rbp-50h] BYREF
  __int64 v167; // [rsp+38h] [rbp-48h] BYREF
  __int64 v168; // [rsp+40h] [rbp-40h] BYREF
  int v169; // [rsp+48h] [rbp-38h] BYREF
  __int64 v170; // [rsp+50h] [rbp-30h] BYREF
  __int64 v171; // [rsp+58h] [rbp-28h] BYREF
  __int64 v172; // [rsp+60h] [rbp-20h]
  __int64 v173; // [rsp+68h] [rbp-18h]
  __int64 v174; // [rsp+70h] [rbp-10h]
  __int64 v175; // [rsp+78h] [rbp-8h]

  v6 = a4;
  if ( gbTOUCH_DRIVER_HW_STACK_TIMESTAMP != 1 || (v7 = *((_DWORD *)a1 + 197) - *((_DWORD *)a1 + 198)) == 0 )
    v7 = glTOUCH_DRIVER_HW_STACK_SAMPLETIME;
  if ( !v7 )
  {
    *a5 = a2;
    *a6 = a3;
    return;
  }
  v8 = 0LL;
  v170 = 0LL;
  v9 = 0LL;
  v169 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = (__int64)a2.x << 32;
  v13 = 0LL;
  v171 = (__int64)v7 << 32;
  v173 = (__int64)a3.x << 32;
  v174 = (__int64)a3.y << 32;
  v172 = (__int64)a2.y << 32;
  v14 = (__int64)glTOUCH_DRIVER_HW_STACK_LATENCY << 32;
  v15 = v12 == *((_QWORD *)v6 + 270);
  v167 = v12 - *((_QWORD *)v6 + 270);
  v175 = v12;
  if ( !v15 )
  {
    v16 = Prediction::operator/(&v170, &v167, &v171);
    v17 = 0LL;
    if ( &v166 != v16 )
      v17 = *v16;
    v11 = (v17 + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
    v170 = v11 - *((_QWORD *)v6 + 262);
    v18 = Prediction::operator/(&v167, &v170, &v171);
    v19 = 0LL;
    if ( &v166 == v18 || (v8 = *v18, v19 = *v18, *v18 >= 0) )
      v20 = v19;
    else
      v20 = -v8;
    v21 = *((_QWORD *)v6 + 266);
    if ( v20 > v21 )
    {
      v21 = v19;
      if ( v19 < 0 )
        v21 = -v19;
      *((_QWORD *)v6 + 266) = v21;
    }
    if ( v21 )
    {
      v167 = v21;
      v22 = v19;
      v170 = v19;
      if ( v19 < 0 )
        v22 = -v19;
      v166 = v22;
      v23 = Prediction::operator/(&v168, &v166, &v167);
      v24 = (_QWORD *)((char *)v6 + 1888);
      if ( (_QWORD *)((char *)v6 + 1888) != v23 )
        *v24 = *v23;
      v19 = v170;
      if ( (_QWORD *)((char *)v6 + 1856) != v24 )
      {
        *((_QWORD *)v6 + 232) = *v24;
        v19 = v170;
      }
    }
    v25 = *((_QWORD *)v6 + 264);
    if ( v19 < 0 )
      v19 = -v19;
    if ( v25 < 0 )
      v25 = -v25;
    *((_QWORD *)v6 + 262) = v11;
    v170 = v19 - v25;
    *((_QWORD *)v6 + 264) = v8;
  }
  v167 = v172 - *((_QWORD *)v6 + 271);
  if ( v167 )
  {
    v26 = Prediction::operator/(&v168, &v167, &v171);
    if ( &v166 != v26 )
      v11 = *v26;
    v27 = (v11 + 0x80000000) & 0xFFFFFFFF00000000uLL;
    v166 = v27 - *((_QWORD *)v6 + 263);
    v28 = Prediction::operator/(&v168, &v166, &v171);
    if ( &v166 != v28 )
      v8 = *v28;
    v29 = v8;
    if ( v8 < 0 )
      v29 = -v8;
    v30 = *((_QWORD *)v6 + 267);
    if ( v29 > v30 )
    {
      v30 = v8;
      if ( v8 < 0 )
        v30 = -v8;
      *((_QWORD *)v6 + 267) = v30;
    }
    if ( v30 )
    {
      v166 = v30;
      v31 = v8;
      if ( v8 < 0 )
        v31 = -v8;
      v167 = v31;
      v32 = Prediction::operator/(&v168, &v167, &v166);
      v33 = (_QWORD *)((char *)v6 + 1904);
      if ( (_QWORD *)((char *)v6 + 1904) != v32 )
        *v33 = *v32;
      if ( (_QWORD *)((char *)v6 + 1872) != v33 )
        *((_QWORD *)v6 + 234) = *v33;
    }
    v34 = *((_QWORD *)v6 + 265);
    v35 = v8;
    if ( v8 < 0 )
      v35 = -v8;
    if ( v34 < 0 )
      v34 = -v34;
    v13 = v35 - v34;
    *((_QWORD *)v6 + 263) = v27;
    *((_QWORD *)v6 + 265) = v8;
  }
  v36 = v173 - *((_QWORD *)v6 + 268);
  v167 = v36;
  if ( v36 )
  {
    v37 = Prediction::operator/(&v168, &v167, &v171);
    v38 = -*v37;
    v39 = (v14 ^ *v37) >> 63;
    if ( *v37 >= 0 )
      v38 = *v37;
    v40 = -v14;
    if ( v14 >= 0 )
      v40 = v14;
    v41 = (unsigned int)v40 * (unsigned __int64)(unsigned int)v38;
    v42 = HIDWORD(v40);
    v43 = HIDWORD(v41) + (unsigned int)v40 * (unsigned __int64)HIDWORD(v38);
    v44 = v39 ^ ((unsigned int)(v43 + v38 * v42) | ((unsigned __int64)(unsigned int)((((unsigned int)v43
                                                                                     + (unsigned int)v38 * v42) >> 32)
                                                                                   + HIDWORD(v38) * v42
                                                                                   + HIDWORD(v43)) << 32));
    v45 = v44 - v39;
    v6 = a4;
    if ( (_DWORD)v41 )
      v45 = v44;
    if ( v170 < 0 )
    {
      v46 = *((_QWORD *)a4 + 232);
      v47 = 0x100000000LL - v46;
      v166 = ((0x100000000LL - v46) ^ v45) >> 63;
      if ( v45 < 0 )
        v45 = -v45;
      if ( v47 < 0 )
        v47 = v46 - 0x100000000LL;
      v48 = (unsigned int)v45;
      v49 = (unsigned int)v47 * (unsigned __int64)(unsigned int)v45;
      v50 = HIDWORD(v45);
      v51 = HIDWORD(v49) + (unsigned int)v47 * HIDWORD(v45);
      v52 = v50 * HIDWORD(v47);
      v53 = (unsigned int)v51 + v48 * HIDWORD(v47);
      v54 = v166 ^ ((unsigned int)v53 | ((unsigned __int64)(unsigned int)(HIDWORD(v53)
                                                                        + v50 * HIDWORD(v47)
                                                                        + HIDWORD(v51)) << 32));
      v45 = (v166 ^ ((unsigned int)v53 | ((unsigned __int64)(unsigned int)(HIDWORD(v53) + v52 + HIDWORD(v51)) << 32)))
          - v166;
      if ( (_DWORD)v49 )
        v45 = v54;
    }
    v166 = v45;
    v167 = v36;
    v55 = Prediction::tagRlsFilter::Filter(a4, &v168, (__int64)&v167, (__int64)&v166, &v169);
    if ( &v167 != v55 )
      v9 = *v55;
    v56 = (__int64 *)((char *)a4 + 1856);
    v166 = v9;
    v57 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 232, &v168, &v166);
    if ( v169 )
    {
      if ( &v167 != v57 )
        v10 = *v57;
      *((_QWORD *)a4 + 276) += v10;
      v61 = *((_QWORD *)a4 + 276) + v173;
      v62 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)a4 + 272) = v61;
      if ( v56 != &v168 )
        *v56 = v62;
      if ( (__int64 *)((char *)a4 + 1864) != &v168 )
        *((_QWORD *)a4 + 233) = 0LL;
    }
    else
    {
      if ( &v167 != v57 )
        v10 = *v57;
      v58 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 276), v36);
      v60 = v58 + v59 + v173;
      *((_QWORD *)a4 + 276) = v58 + v59;
      v61 = v10 + v60;
    }
    v63 = 1;
    if ( v36 < 0 )
      v63 = -1;
    v64 = *((_QWORD *)a4 + 272);
    if ( v63 == 1 )
    {
      if ( v61 > v64 )
        v64 = v61;
    }
    else if ( v61 < v64 )
    {
      goto LABEL_86;
    }
    v61 = v64;
  }
  else
  {
    v61 = *((_QWORD *)v6 + 272);
  }
LABEL_86:
  v65 = v175;
  *((_QWORD *)v6 + 272) = v61;
  a6->x = (unsigned __int64)(v61 + 0x80000000LL) >> 32;
  v66 = v65 - *((_QWORD *)v6 + 270);
  v167 = v66;
  if ( v66 )
  {
    v67 = Prediction::operator/(&v168, &v167, &v171);
    v68 = -*v67;
    v69 = (v14 ^ *v67) >> 63;
    if ( *v67 >= 0 )
      v68 = *v67;
    v70 = -v14;
    if ( v14 >= 0 )
      v70 = v14;
    v71 = (unsigned int)v70 * (unsigned __int64)(unsigned int)v68;
    v72 = HIDWORD(v70);
    v73 = HIDWORD(v71) + (unsigned int)v70 * (unsigned __int64)HIDWORD(v68);
    v74 = v69 ^ ((unsigned int)(v73 + v68 * v72) | ((unsigned __int64)(unsigned int)((((unsigned int)v73
                                                                                     + (unsigned int)v68 * v72) >> 32)
                                                                                   + HIDWORD(v68) * v72
                                                                                   + HIDWORD(v73)) << 32));
    v75 = v74 - v69;
    v6 = a4;
    if ( (_DWORD)v71 )
      v75 = v74;
    if ( v170 < 0 )
    {
      v76 = *((_QWORD *)a4 + 236);
      v77 = 0x100000000LL - v76;
      v166 = (v75 ^ (0x100000000LL - v76)) >> 63;
      if ( v75 < 0 )
        v75 = -v75;
      if ( v77 < 0 )
        v77 = v76 - 0x100000000LL;
      v78 = (unsigned int)v75;
      v79 = (unsigned int)v77 * (unsigned __int64)(unsigned int)v75;
      v80 = HIDWORD(v75);
      v81 = HIDWORD(v79) + (unsigned int)v77 * HIDWORD(v75);
      v82 = v80 * HIDWORD(v77);
      v83 = (unsigned int)v81 + v78 * HIDWORD(v77);
      v84 = v166 ^ ((unsigned int)v83 | ((unsigned __int64)(unsigned int)(HIDWORD(v83)
                                                                        + v80 * HIDWORD(v77)
                                                                        + HIDWORD(v81)) << 32));
      v75 = (v166 ^ ((unsigned int)v83 | ((unsigned __int64)(unsigned int)(HIDWORD(v83) + v82 + HIDWORD(v81)) << 32)))
          - v166;
      if ( (_DWORD)v79 )
        v75 = v84;
    }
    v166 = v75;
    v170 = v66;
    v85 = Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 108, &v168, (__int64)&v170, (__int64)&v166, &v169);
    if ( &v167 != v85 )
      v9 = *v85;
    v86 = (__int64 *)((char *)a4 + 1888);
    v166 = v9;
    v87 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 236, &v168, &v166);
    if ( v169 )
    {
      if ( &v167 != v87 )
        v10 = *v87;
      *((_QWORD *)a4 + 278) += v10;
      v91 = v175 + *((_QWORD *)a4 + 278);
      v92 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)a4 + 274) = v91;
      if ( v86 != &v168 )
        *v86 = v92;
      if ( (__int64 *)((char *)a4 + 1896) != &v168 )
        *((_QWORD *)a4 + 237) = 0LL;
    }
    else
    {
      if ( &v167 != v87 )
        v10 = *v87;
      v88 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 278), v66);
      v90 = v88 + v89 + v175;
      *((_QWORD *)a4 + 278) = v88 + v89;
      v91 = v10 + v90;
    }
    v93 = 1;
    if ( v66 < 0 )
      v93 = -1;
    v94 = *((_QWORD *)a4 + 274);
    if ( v93 == 1 )
    {
      if ( v91 > v94 )
        v94 = v91;
    }
    else if ( v91 < v94 )
    {
      goto LABEL_121;
    }
    v91 = v94;
  }
  else
  {
    v91 = *((_QWORD *)v6 + 274);
  }
LABEL_121:
  v95 = v174;
  *((_QWORD *)v6 + 274) = v91;
  a5->x = (unsigned __int64)(v91 + 0x80000000LL) >> 32;
  v96 = v95 - *((_QWORD *)v6 + 269);
  v167 = v96;
  if ( v96 )
  {
    v97 = Prediction::operator/(&v168, &v167, &v171);
    v98 = -*v97;
    v99 = (v14 ^ *v97) >> 63;
    if ( *v97 >= 0 )
      v98 = *v97;
    v100 = -v14;
    if ( v14 >= 0 )
      v100 = v14;
    v101 = (unsigned int)v100 * (unsigned __int64)(unsigned int)v98;
    v102 = HIDWORD(v100);
    v103 = HIDWORD(v101) + (unsigned int)v100 * (unsigned __int64)HIDWORD(v98);
    v104 = v99 ^ ((unsigned int)(v103 + v98 * v102) | ((unsigned __int64)(unsigned int)((((unsigned int)v103
                                                                                        + (unsigned int)v98 * v102) >> 32)
                                                                                      + HIDWORD(v98) * v102
                                                                                      + HIDWORD(v103)) << 32));
    v105 = v104 - v99;
    v6 = a4;
    if ( (_DWORD)v101 )
      v105 = v104;
    if ( v13 < 0 )
    {
      v106 = *((_QWORD *)a4 + 234);
      v107 = 0x100000000LL - v106;
      v166 = (v105 ^ (0x100000000LL - v106)) >> 63;
      if ( v105 < 0 )
        v105 = -v105;
      if ( v107 < 0 )
        v107 = v106 - 0x100000000LL;
      v108 = (unsigned int)v105;
      v109 = (unsigned int)v107 * (unsigned __int64)(unsigned int)v105;
      v110 = HIDWORD(v105);
      v111 = HIDWORD(v109) + (unsigned int)v107 * HIDWORD(v105);
      v112 = v110 * HIDWORD(v107);
      v113 = (unsigned int)v111 + v108 * HIDWORD(v107);
      v114 = v166 ^ ((unsigned int)v113 | ((unsigned __int64)(unsigned int)(HIDWORD(v113)
                                                                          + v110 * HIDWORD(v107)
                                                                          + HIDWORD(v111)) << 32));
      v105 = (v166 ^ ((unsigned int)v113 | ((unsigned __int64)(unsigned int)(HIDWORD(v113) + v112 + HIDWORD(v111)) << 32)))
           - v166;
      if ( (_DWORD)v109 )
        v105 = v114;
    }
    v166 = v105;
    v170 = v96;
    v115 = Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 54, &v168, (__int64)&v170, (__int64)&v166, &v169);
    if ( &v167 != v115 )
      v9 = *v115;
    v116 = (__int64 *)((char *)a4 + 1872);
    v166 = v9;
    v117 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 234, &v168, &v166);
    if ( v169 )
    {
      if ( &v167 != v117 )
        v10 = *v117;
      *((_QWORD *)a4 + 277) += v10;
      v121 = v174 + *((_QWORD *)a4 + 277);
      v122 = gPredictorRLSExpoSmoothAlpha;
      *((_QWORD *)a4 + 273) = v121;
      if ( v116 != &v168 )
        *v116 = v122;
      if ( (__int64 *)((char *)a4 + 1880) != &v168 )
        *((_QWORD *)a4 + 235) = 0LL;
    }
    else
    {
      if ( &v167 != v117 )
        v10 = *v117;
      v118 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 277), v96);
      v120 = v118 + v119 + v174;
      *((_QWORD *)a4 + 277) = v118 + v119;
      v121 = v10 + v120;
    }
    v123 = 1;
    if ( v96 < 0 )
      v123 = -1;
    v124 = *((_QWORD *)a4 + 273);
    if ( v123 == 1 )
    {
      if ( v121 > v124 )
        v124 = v121;
    }
    else if ( v121 < v124 )
    {
      goto LABEL_156;
    }
    v121 = v124;
  }
  else
  {
    v121 = *((_QWORD *)v6 + 273);
  }
LABEL_156:
  v125 = v172;
  *((_QWORD *)v6 + 273) = v121;
  a6->y = (unsigned __int64)(v121 + 0x80000000LL) >> 32;
  v126 = v125 - *((_QWORD *)v6 + 271);
  v167 = v126;
  if ( !v126 )
  {
    v150 = *((_QWORD *)v6 + 275);
    goto LABEL_191;
  }
  v127 = Prediction::operator/(&v168, &v167, &v171);
  v128 = -*v127;
  v129 = (v14 ^ *v127) >> 63;
  if ( *v127 >= 0 )
    v128 = *v127;
  v130 = -v14;
  if ( v14 >= 0 )
    v130 = v14;
  v131 = (unsigned int)v130 * (unsigned __int64)(unsigned int)v128;
  v132 = HIDWORD(v130);
  v133 = HIDWORD(v131) + (unsigned int)v130 * (unsigned __int64)HIDWORD(v128);
  v134 = v129 ^ ((unsigned int)(v133 + v128 * v132) | ((unsigned __int64)(unsigned int)((((unsigned int)v133
                                                                                        + (unsigned int)v128 * v132) >> 32)
                                                                                      + HIDWORD(v128) * v132
                                                                                      + HIDWORD(v133)) << 32));
  v135 = v134 - v129;
  v6 = a4;
  if ( (_DWORD)v131 )
    v135 = v134;
  if ( v13 < 0 )
  {
    v136 = *((_QWORD *)a4 + 238);
    v137 = 0x100000000LL - v136;
    v138 = (v135 ^ (0x100000000LL - v136)) >> 63;
    if ( v135 < 0 )
      v135 = -v135;
    if ( v137 < 0 )
      v137 = v136 - 0x100000000LL;
    v139 = v135 * v137;
    v140 = HIDWORD(v135) * HIDWORD(v137);
    v141 = (unsigned int)v135 * (unsigned __int64)HIDWORD(v137);
    v142 = (((unsigned int)v135 * (unsigned __int64)(unsigned int)v137) >> 32) + (unsigned int)v137 * HIDWORD(v135);
    v143 = v138 ^ ((unsigned int)(v142 + v141) | ((unsigned __int64)(unsigned int)((((unsigned int)v142 + v141) >> 32)
                                                                                 + v140
                                                                                 + HIDWORD(v142)) << 32));
    v135 = v143 - v138;
    if ( v139 )
      v135 = v143;
  }
  v166 = v135;
  v171 = v126;
  v144 = Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 162, &v168, (__int64)&v171, (__int64)&v166, &v169);
  if ( &v167 != v144 )
    v9 = *v144;
  v145 = (__int64 *)((char *)a4 + 1904);
  v166 = v9;
  v146 = Prediction::tagExpoSmoother::Smooth((_QWORD *)a4 + 238, &v168, &v166);
  if ( v169 )
  {
    if ( &v167 != v146 )
      v10 = *v146;
    *((_QWORD *)a4 + 279) += v10;
    v150 = *((_QWORD *)a4 + 279) + v172;
    v151 = gPredictorRLSExpoSmoothAlpha;
    *((_QWORD *)a4 + 275) = v150;
    if ( v145 != &v168 )
      *v145 = v151;
    if ( (__int64 *)((char *)a4 + 1912) != &v168 )
      *((_QWORD *)a4 + 239) = 0LL;
  }
  else
  {
    if ( &v167 != v146 )
      v10 = *v146;
    v147 = Prediction::DeltaOvershootCompensation(*((_QWORD *)a4 + 279), v126);
    v149 = v147 + v148 + v172;
    *((_QWORD *)a4 + 279) = v147 + v148;
    v150 = v10 + v149;
  }
  v152 = 1;
  if ( v126 < 0 )
    v152 = -1;
  v153 = *((_QWORD *)a4 + 275);
  if ( v152 == 1 )
  {
    if ( v150 > v153 )
      v153 = v150;
    goto LABEL_189;
  }
  if ( v150 >= v153 )
LABEL_189:
    v150 = v153;
LABEL_191:
  *((_QWORD *)v6 + 275) = v150;
  a5->y = (unsigned __int64)(v150 + 0x80000000LL) >> 32;
  *((_QWORD *)v6 + 268) = v173;
  *((_QWORD *)v6 + 269) = v174;
  *((_QWORD *)v6 + 270) = v175;
  *((_QWORD *)v6 + 271) = v172;
  x = a6->x;
  v155 = *((_DWORD *)a1 + 40);
  if ( a6->x < v155 )
  {
    a6->x = v155;
    x = v155;
  }
  v156 = *((_DWORD *)a1 + 42) - 1;
  if ( x > v156 )
    a6->x = v156;
  y = a6->y;
  v158 = *((_DWORD *)a1 + 41);
  if ( y < v158 )
  {
    a6->y = v158;
    y = v158;
  }
  v159 = *((_DWORD *)a1 + 43) - 1;
  if ( y > v159 )
    a6->y = v159;
  v160 = a5->x;
  v161 = *((_DWORD *)a1 + 44);
  if ( a5->x < v161 )
  {
    a5->x = v161;
    v160 = v161;
  }
  v162 = *((_DWORD *)a1 + 46);
  if ( v160 > v162 )
    a5->x = v162;
  v163 = a5->y;
  v164 = *((_DWORD *)a1 + 45);
  if ( v163 < v164 )
  {
    a5->y = v164;
    v163 = v164;
  }
  v165 = *((_DWORD *)a1 + 47);
  if ( v163 > v165 )
    a5->y = v165;
}
