/*
 * XREFs of ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02A6578
 * Callers:
 *     EngPlgBlt @ 0x1C025CFE0 (EngPlgBlt.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C0104EB4 (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     QDIV @ 0x1C02A6498 (QDIV.c)
 *     ROT_DIV @ 0x1C02A64E8 (ROT_DIV.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1C02A6538 (-bAddOverflow@@YAH_J0@Z.c)
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1C02A77EC (-bMulOverflow@@YAH_J0@Z.c)
 *     bScalePlgDDALToPlgDDA @ 0x1C02A7874 (bScalePlgDDALToPlgDDA.c)
 *     ?bSubOverflow@@YAH_J0@Z @ 0x1C02A83CC (-bSubOverflow@@YAH_J0@Z.c)
 */

void *__fastcall bInitPlgDDA(struct _PLGDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _POINTFIX *a4)
{
  unsigned int v6; // ebx
  void *result; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // r14
  struct _POINTFIX v11; // r10
  unsigned __int64 v12; // rax
  struct _POINTFIX v13; // r11
  LONG left; // r8d
  int v15; // r15d
  int v16; // r9d
  LONG top; // r12d
  int v18; // r8d
  int v19; // r8d
  LONG right; // r13d
  int v21; // ecx
  int v22; // r8d
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r14
  unsigned int v25; // edx
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // r10
  int v31; // ecx
  int v32; // r8d
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rsi
  __int64 v40; // r10
  __int64 v41; // r11
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // r9
  __int64 v54; // r10
  __int64 v55; // r11
  __int64 v56; // r15
  __int64 v57; // r14
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r10
  __int64 v63; // rdx
  __int64 v64; // r10
  __int64 v65; // rcx
  unsigned int v66; // r11d
  unsigned __int64 v67; // rsi
  __int64 v68; // r8
  unsigned __int64 v69; // r8
  _OWORD *v70; // rcx
  __int64 v71; // r9
  __int64 v72; // r10
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // r8
  unsigned __int64 v78; // rdx
  __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // r9
  __int64 v83; // rcx
  __int64 v84; // r11
  __int64 v85; // r9
  __int64 v86; // r10
  __int128 *v87; // rcx
  __int128 v88; // xmm0
  __int64 v89; // xmm1_8
  __int64 v90; // r8
  __int64 v91; // r9
  __int128 *v92; // rcx
  __int128 v93; // xmm0
  __int64 v94; // xmm1_8
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // r9
  __int64 v98; // rsi
  __int64 v99; // r9
  __int64 v100; // r11
  __int64 v101; // rcx
  __int64 v102; // r10
  __int64 v103; // r9
  __int64 v104; // r9
  __int64 v105; // r12
  __int64 v106; // r13
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // r9
  __int64 v110; // r14
  __int64 v111; // r12
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r9
  __int64 v115; // r12
  __int64 v116; // rdx
  __int64 v117; // r12
  __int64 v118; // r9
  __int64 v119; // r12
  __int64 v120; // r9
  __int64 v121; // r13
  __int64 v122; // r9
  __int64 v123; // rdx
  __int64 v124; // r9
  __int64 v125; // r10
  __int64 v126; // r11
  __int64 v127; // r9
  __int64 v128; // r10
  __int64 v129; // rdx
  __int64 v130; // r9
  __int64 v131; // rcx
  __int64 v132; // r13
  __int64 v133; // rdx
  __int64 v134; // r9
  __int64 v135; // r10
  __int64 v136; // r9
  __int64 v137; // r10
  __int64 v138; // rdx
  __int64 v139; // r9
  __int64 v140; // r9
  unsigned __int64 v141; // r8
  __int64 v142; // r11
  __int64 v143; // r9
  __int64 v144; // r10
  __int64 v145; // r11
  __int64 v146; // r10
  __int64 v147; // r9
  __int64 v148; // r11
  __int64 *v149; // r13
  __int64 v150; // r9
  __int64 v151; // r9
  __int64 v152; // r10
  __int64 v153; // r11
  __int64 v154; // rcx
  __int64 v155; // r10
  unsigned __int64 v156; // r8
  __int64 v157; // r11
  __int64 v158; // r9
  __int64 v159; // r10
  __int64 v160; // r11
  __int64 v161; // r10
  __int64 v162; // r9
  __int64 v163; // r11
  __int64 v164; // r9
  __int64 v165; // r9
  __int64 v166; // r10
  __int64 v167; // r11
  __int64 v168; // rcx
  __int64 v169; // r10
  unsigned __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // rdx
  __int64 v173; // r9
  unsigned int v174; // r11d
  __int64 v175; // rcx
  __int64 v176; // r9
  __int64 v177; // r11
  __int64 v178; // r9
  __int64 v179; // r11
  __int64 v180; // r9
  __int64 v181; // r11
  __int64 v182; // rdx
  __int64 v183; // r9
  __int64 v184; // r10
  __int64 v185; // r11
  __int64 v186; // r14
  __int64 v187; // r9
  __int64 v188; // r10
  __int64 v189; // r11
  __int64 v190; // rdx
  __int64 v191; // r9
  __int64 v192; // r9
  __int64 v193; // r13
  __int64 v194; // r15
  __int64 v195; // rdx
  __int64 v196; // r9
  __int64 v197; // r10
  __int64 v198; // r9
  __int64 v199; // r10
  __int64 v200; // rdx
  __int64 v201; // r9
  __int64 v202; // rdx
  unsigned __int64 v203; // r8
  __int64 v204; // r11
  __int64 v205; // r9
  __int64 v206; // r10
  __int64 v207; // r11
  __int64 v208; // r9
  __int64 v209; // r11
  __int64 *v210; // r13
  __int64 v211; // r10
  __int64 v212; // r9
  __int64 v213; // r10
  __int64 v214; // r11
  __int64 v215; // r9
  __int64 v216; // r10
  unsigned __int64 v217; // r8
  __int64 v218; // r11
  __int64 v219; // r9
  __int64 v220; // r10
  __int64 v221; // r11
  __int64 v222; // rsi
  __int64 v223; // r11
  __int64 v224; // r13
  __int64 v225; // rsi
  __int64 v226; // r9
  __int64 v227; // r9
  __int64 v228; // r10
  __int64 v229; // r9
  unsigned __int64 v230; // r8
  __int64 v231; // rdx
  __int64 v232; // xmm1_8
  __int128 v233; // xmm0
  __int64 v234; // xmm1_8
  __int128 *v235; // rcx
  __int128 v236; // xmm0
  __int64 v237; // xmm1_8
  __int128 v238; // xmm0
  __int64 v239; // xmm1_8
  __int128 v240; // xmm0
  __int64 v241; // xmm1_8
  __int128 v242; // xmm0
  __int64 v243; // xmm1_8
  struct _PLGDDA *v244; // rdx
  __int64 v245[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v246; // [rsp+30h] [rbp-D0h]
  __int64 v247; // [rsp+38h] [rbp-C8h]
  __int64 v248; // [rsp+40h] [rbp-C0h]
  __int64 *p_left; // [rsp+48h] [rbp-B8h]
  __int64 v250; // [rsp+50h] [rbp-B0h]
  __int64 v251; // [rsp+58h] [rbp-A8h]
  __int64 v252; // [rsp+60h] [rbp-A0h]
  __int64 v253; // [rsp+68h] [rbp-98h]
  __int64 v254; // [rsp+70h] [rbp-90h]
  __int64 v255; // [rsp+78h] [rbp-88h]
  __int64 v256; // [rsp+80h] [rbp-80h]
  __int64 v257; // [rsp+88h] [rbp-78h]
  __int64 v258; // [rsp+90h] [rbp-70h]
  __int64 v259; // [rsp+98h] [rbp-68h]
  __int64 v260; // [rsp+A0h] [rbp-60h]
  __int64 v261; // [rsp+A8h] [rbp-58h]
  __int64 v262; // [rsp+B0h] [rbp-50h]
  __int64 v263; // [rsp+B8h] [rbp-48h]
  struct _PLGDDA *v264; // [rsp+C0h] [rbp-40h]
  __int64 v265; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v266; // [rsp+D0h] [rbp-30h]
  __int64 v267; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v268; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v269; // [rsp+F8h] [rbp-8h]
  struct _POINTFIX v270; // [rsp+100h] [rbp+0h]
  struct _POINTFIX v271; // [rsp+108h] [rbp+8h]
  int v272; // [rsp+110h] [rbp+10h]
  int v273; // [rsp+114h] [rbp+14h]

  p_left = (__int64 *)&a2->left;
  v264 = a1;
  v6 = 0;
  result = PALLOCMEM2(0x318uLL, 1633969223LL, 1);
  v9 = (__int64)result;
  if ( result )
  {
    v10 = (unsigned __int64)*a4;
    v11 = a4[2];
    v12 = (unsigned __int64)*a4;
    v13 = a4[1];
    left = a3->left;
    v15 = v13.x + v11.x - *(_QWORD *)a4;
    v269 = v10;
    v270 = v13;
    v16 = v13.y + v11.y - HIDWORD(v12);
    v271 = v11;
    v272 = v15;
    v273 = v16;
    if ( left || a3->top )
    {
      LODWORD(v247) = a2->left;
      if ( bSubOverflow(v247, left) )
        goto LABEL_171;
      top = a3->top;
      LODWORD(v248) = a2->top;
      if ( bSubOverflow(v248, top) )
        goto LABEL_171;
      LODWORD(v246) = a2->right;
      if ( bSubOverflow(v246, v18) )
        goto LABEL_171;
      LODWORD(v245[0]) = a2->bottom;
      if ( bSubOverflow(v245[0], top) )
        goto LABEL_171;
      right = a3->right;
      if ( bSubOverflow(right, v19) || bSubOverflow(a3->bottom, top) )
        goto LABEL_171;
      a3 = (struct _RECTL *)&v267;
      v267 = 0LL;
      LODWORD(v265) = v247 - v22;
      LODWORD(v268) = right - v22;
      HIDWORD(v265) = v248 - top;
      LODWORD(v266) = v246 - v22;
      HIDWORD(v266) = LODWORD(v245[0]) - top;
      HIDWORD(v268) = v21 - top;
      p_left = &v265;
    }
    v23 = HIDWORD(*(unsigned __int64 *)&v13);
    v24 = HIDWORD(v10);
    v25 = 0;
    v26 = ((int)v23 > (int)v24) ^ ((int)v23 <= v16);
    if ( *((_DWORD *)&v269 + 2 * v26 + 1) > *((_DWORD *)&v269 + 2 * (v26 ^ 3LL) + 1) )
      v26 ^= 3u;
    if ( v26 )
    {
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            v29 = HIDWORD(*(unsigned __int64 *)&v11);
            if ( (int)v23 < (int)v29 || (int)v23 <= (int)v29 && v270.x < v271.x )
            {
              v25 = 6;
LABEL_40:
              v31 = a3->bottom - a3->top;
              v32 = a3->right - a3->left;
LABEL_41:
              v33 = v32;
              v34 = v31;
              if ( !v31 )
                goto LABEL_171;
              if ( !v32 )
                goto LABEL_171;
              v35 = v25;
              v36 = *((int *)p_left + 1);
              v37 = *(int *)p_left;
              v38 = 3 * v35;
              v39 = SLODWORD((&aiPlgConst)[3 * v35]);
              v40 = dword_1C02DF1CC[6 * v35];
              v35 *= 2LL;
              v41 = dword_1C02DF1D0[2 * v38];
              v42 = dword_1C02DF1C4[2 * v38];
              v43 = (v34 - 1) * dword_1C02DF1C8[2 * v38];
              v250 = v39;
              v248 = v40;
              v256 = v41;
              v252 = v42;
              v254 = v42 * v36 + v39 * v37 + v43;
              v44 = v37 * v40;
              v45 = dword_1C02DF144[2 * v35];
              v46 = *((int *)&v269 + 2 * v45);
              v47 = v36 * v41 + v44 + (v33 - 1) * dword_1C02DF1D4[2 * v38];
              v48 = *((int *)&aiPlgSort + 2 * v35);
              v253 = v47;
              v49 = *((int *)&v269 + 2 * v48);
              v50 = *((int *)&v269 + 2 * v48 + 1);
              v51 = v46 - v49;
              v52 = dword_1C02DF148[2 * v35];
              v53 = *((int *)&v269 + 2 * v45 + 1) - v50;
              v260 = v49;
              v259 = v50;
              v54 = *((int *)&v269 + 2 * v52) - v49;
              v55 = *((int *)&v269 + 2 * v52 + 1) - v50;
              v251 = v51;
              v247 = v54;
              v255 = v53;
              v246 = v55;
              if ( v51 )
              {
                if ( (unsigned int)bMulOverflow(v33, v51) )
                  goto LABEL_171;
              }
              if ( v53 && (unsigned int)bMulOverflow(v33, v53) )
                goto LABEL_171;
              if ( v54 && (unsigned int)bMulOverflow(v34, v54) )
                goto LABEL_171;
              if ( v55 && (unsigned int)bMulOverflow(v34, v55) )
                goto LABEL_171;
              v56 = v55 * v34;
              v257 = v51 * v33;
              v57 = v53 * v33;
              v258 = v54 * v34;
              if ( !(v55 * v34) )
                goto LABEL_171;
              if ( (unsigned int)bMulOverflow(v34, v33) )
                goto LABEL_171;
              if ( bAddOverflow(v259, 16LL) )
                goto LABEL_171;
              if ( (unsigned int)bMulOverflow(v34 * v33, v58 + 16) )
                goto LABEL_171;
              if ( (unsigned int)bMulOverflow(v254, v57) )
                goto LABEL_171;
              if ( bAddOverflow(v60, v59 * v57) )
                goto LABEL_171;
              if ( (unsigned int)bMulOverflow(v253, v56) )
                goto LABEL_171;
              if ( bAddOverflow(v62, v61 * v56) )
                goto LABEL_171;
              if ( (unsigned int)bSubOverflow(v64 + v63, 1LL) )
                goto LABEL_171;
              v245[0] = v65 - 1;
              if ( (unsigned int)bMulOverflow(v34 * v33, v66) )
                goto LABEL_171;
              v67 = 16 * v34 * v33;
              if ( !v67 )
                goto LABEL_171;
              ROT_DIV(&v265, v57, v67);
              ROT_DIV(&v267, v56, v68);
              QDIV((unsigned __int64 *)(v9 + 8), (unsigned __int64 *)v245, v69);
              v71 = v265;
              v72 = v266;
              *(_OWORD *)(v9 + 24) = *v70;
              v73 = v71 + *(_QWORD *)(v9 + 24);
              v74 = v72 + *(_QWORD *)(v9 + 32);
              *(_QWORD *)(v9 + 24) = v73;
              *(_QWORD *)(v9 + 32) = v74;
              if ( v74 >= v67 )
              {
                *(_QWORD *)(v9 + 24) = v73 + 1;
                *(_QWORD *)(v9 + 32) = v74 - v67;
              }
              v75 = v267;
              v76 = v268;
              *(_OWORD *)(v9 + 40) = *(_OWORD *)(v9 + 8);
              v77 = *(_QWORD *)(v9 + 40) + v75;
              v78 = *(_QWORD *)(v9 + 48) + v76;
              *(_QWORD *)(v9 + 40) = v77;
              *(_QWORD *)(v9 + 48) = v78;
              if ( v78 >= v67 )
              {
                *(_QWORD *)(v9 + 40) = v77 + 1;
                *(_QWORD *)(v9 + 48) = v78 - v67;
              }
              *(_OWORD *)(v9 + 56) = *(_OWORD *)(v9 + 40);
              v79 = v71 + *(_QWORD *)(v9 + 56);
              v80 = v72 + *(_QWORD *)(v9 + 64);
              *(_QWORD *)(v9 + 56) = v79;
              *(_QWORD *)(v9 + 64) = v80;
              if ( v80 >= v67 )
              {
                *(_QWORD *)(v9 + 56) = v79 + 1;
                *(_QWORD *)(v9 + 64) = v80 - v67;
              }
              if ( (unsigned int)bMulOverflow(v250, v57) )
                goto LABEL_171;
              if ( (unsigned int)bMulOverflow(v248, v56) )
                goto LABEL_171;
              v265 = v82 * v57;
              if ( bAddOverflow(v82 * v57, v81 * v56) )
                goto LABEL_171;
              if ( (unsigned int)bMulOverflow(v252, v57) )
                goto LABEL_171;
              if ( (unsigned int)bMulOverflow(v256, v56) )
                goto LABEL_171;
              if ( bAddOverflow(v252 * v57, v83 * v56) )
                goto LABEL_171;
              ROT_DIV((__int64 *)(v9 + 264), v84 + v265, v67);
              *(_QWORD *)(v9 + 280) = v67;
              v88 = *v87;
              v89 = *((_QWORD *)v87 + 2);
              *(_OWORD *)(v9 + 288) = *v87;
              *(_OWORD *)(v9 + 312) = v88;
              *(_OWORD *)(v9 + 336) = v88;
              *(_QWORD *)(v9 + 304) = v89;
              *(_QWORD *)(v9 + 328) = v89;
              *(_QWORD *)(v9 + 352) = v89;
              ROT_DIV((__int64 *)(v9 + 360), v86 + v85, v90);
              v91 = v246;
              *(_QWORD *)(v9 + 376) = v67;
              v93 = *v92;
              v94 = *((_QWORD *)v92 + 2);
              v95 = v251;
              *(_OWORD *)(v9 + 384) = v93;
              *(_OWORD *)(v9 + 408) = v93;
              *(_OWORD *)(v9 + 432) = v93;
              *(_QWORD *)(v9 + 400) = v94;
              *(_QWORD *)(v9 + 424) = v94;
              *(_QWORD *)(v9 + 448) = v94;
              if ( (unsigned int)bMulOverflow(v95, v91) )
                goto LABEL_171;
              v98 = v96 * v97;
              if ( (unsigned int)bMulOverflow(v255, v247) )
                goto LABEL_171;
              p_left = (__int64 *)(v99 * v100);
              if ( (unsigned int)bSubOverflow(v98, v99 * v100) )
                goto LABEL_171;
              v261 = v101 - v102;
              if ( (unsigned int)bMulOverflow(v34, 16LL) )
                goto LABEL_171;
              if ( (unsigned int)bMulOverflow(v33, 16LL) )
                goto LABEL_171;
              if ( (unsigned int)bMulOverflow(v250, v103) )
                goto LABEL_171;
              if ( (unsigned int)bMulOverflow(v248, v246) )
                goto LABEL_171;
              v105 = 16 * v34;
              if ( !v105 )
                goto LABEL_171;
              v106 = 16 * v33;
              if ( !v106 )
                goto LABEL_171;
              ROT_DIV(v245, v250 * v104, v105);
              ROT_DIV(&v265, v248 * v246, v106);
              v262 = v265;
              v263 = v245[0];
              if ( bAddOverflow(v245[0], v265) )
                goto LABEL_171;
              ROT_DIV(v245, v252 * v107, v105);
              ROT_DIV(&v265, v256 * v246, v106);
              v108 = v265;
              v267 = v265;
              v265 = v245[0];
              if ( bAddOverflow(v245[0], v108) )
                goto LABEL_171;
              if ( !v57 )
              {
                *(_QWORD *)(v9 + 648) = 0LL;
                v110 = 0LL;
                *(_QWORD *)(v9 + 656) = 0LL;
                v111 = v109;
                *(_QWORD *)(v9 + 664) = 0LL;
                *(_QWORD *)(v9 + 456) = 0LL;
                *(_QWORD *)(v9 + 464) = 0LL;
                *(_QWORD *)(v9 + 472) = 0LL;
                *(_QWORD *)(v9 + 552) = 0LL;
                *(_QWORD *)(v9 + 560) = 0LL;
                *(_QWORD *)(v9 + 568) = 0LL;
                *(_QWORD *)(v9 + 72) = 0LL;
                *(_QWORD *)(v9 + 80) = 0LL;
                *(_QWORD *)(v9 + 120) = 0LL;
                *(_QWORD *)(v9 + 128) = 0LL;
                *(_QWORD *)(v9 + 744) = 0LL;
                *(_QWORD *)(v9 + 752) = 0LL;
                goto LABEL_129;
              }
              if ( !(unsigned int)bMulOverflow(*(_QWORD *)(v9 + 8), 16LL)
                && !(unsigned int)bSubOverflow(16 * v112, v259)
                && !(unsigned int)bMulOverflow(v257, v114 - v113) )
              {
                v115 = v260;
                if ( !bAddOverflow(v260, 16LL) )
                {
                  v117 = v116 + v115;
                  if ( !(unsigned int)bMulOverflow(v57, v117) )
                  {
                    v119 = v57 * v117;
                    if ( !bAddOverflow(v118, v119) )
                    {
                      v121 = v253;
                      v122 = v119 + v120;
                      if ( (!v253 || !(unsigned int)bMulOverflow(v253, v98))
                        && !(unsigned int)bSubOverflow(v122, v121 * v98) )
                      {
                        v111 = v255;
                        v127 = v124 - v123;
                        if ( (!v121 || !(unsigned int)bMulOverflow(v126, v255)
                                    && !(unsigned int)bMulOverflow(v121, v128))
                          && !bAddOverflow(v127, v121 * v125)
                          && !(unsigned int)bSubOverflow(v130 + v129, 1LL) )
                        {
                          v132 = v131 - 1;
                          v245[0] = v131 - 1;
                          if ( !(unsigned int)bMulOverflow(16LL, v57) )
                          {
                            v110 = 16 * v57;
                            *(_QWORD *)(v9 + 664) = v110;
                            *(_QWORD *)(v9 + 472) = v110;
                            *(_QWORD *)(v9 + 568) = v110;
                            if ( v110 )
                            {
                              QDIV((unsigned __int64 *)(v9 + 72), (unsigned __int64 *)v245, v110);
                              if ( !(unsigned int)bMulOverflow(16LL, v257)
                                && !(unsigned int)bSubOverflow(*(_QWORD *)(v9 + 40), *(_QWORD *)(v9 + 8)) )
                              {
                                v253 = 16 * v135;
                                if ( !(unsigned int)bMulOverflow(16 * v135, v134 - v133)
                                  && !(unsigned int)bSubOverflow(16 * v137 * v136, v261)
                                  && !bAddOverflow(v132, v139 - v138) )
                                {
                                  v141 = *(_QWORD *)(v9 + 664);
                                  v245[0] = v140 + v132;
                                  QDIV((unsigned __int64 *)(v9 + 120), (unsigned __int64 *)v245, v141);
                                  ROT_DIV((__int64 *)(v9 + 648), v253, *(_QWORD *)(v9 + 664));
                                  v142 = v248;
                                  if ( !v246
                                    || !(unsigned int)bMulOverflow(v248, v251)
                                    && !(unsigned int)bMulOverflow(v145 * v144, v143) )
                                  {
                                    v146 = v142 * v98;
                                    if ( !v111
                                      || !(unsigned int)bMulOverflow(v142, v247)
                                      && !(unsigned int)bMulOverflow(v148 * v147, v111) )
                                    {
                                      v149 = p_left;
                                      if ( !(unsigned int)bSubOverflow(v146, v142 * (_QWORD)p_left)
                                        && !(unsigned int)bMulOverflow(16LL, v262 + v263)
                                        && !(unsigned int)bMulOverflow(16 * v150, v257)
                                        && !(unsigned int)bSubOverflow(16 * v153 * v151, v152) )
                                      {
                                        v156 = *(_QWORD *)(v9 + 472);
                                        v245[0] = v154 - v155;
                                        QDIV((unsigned __int64 *)(v9 + 456), (unsigned __int64 *)v245, v156);
                                        v157 = v256;
                                        if ( !v246
                                          || !(unsigned int)bMulOverflow(v256, v251)
                                          && !(unsigned int)bMulOverflow(v160 * v159, v158) )
                                        {
                                          v161 = v157 * v98;
                                          if ( (!v111
                                             || !(unsigned int)bMulOverflow(v157, v247)
                                             && !(unsigned int)bMulOverflow(v163 * v162, v111))
                                            && !(unsigned int)bSubOverflow(v161, v157 * (_QWORD)v149)
                                            && !(unsigned int)bMulOverflow(16LL, v267 + v265)
                                            && !(unsigned int)bMulOverflow(16 * v164, v257)
                                            && !(unsigned int)bSubOverflow(16 * v167 * v165, v166) )
                                          {
                                            v170 = *(_QWORD *)(v9 + 568);
                                            v245[0] = v168 - v169;
                                            QDIV((unsigned __int64 *)(v9 + 552), (unsigned __int64 *)v245, v170);
                                            ROT_DIV((__int64 *)(v9 + 744), v253, v110);
LABEL_129:
                                            *(_QWORD *)(v9 + 760) = v110;
                                            if ( !(unsigned int)bMulOverflow(16LL, *(_QWORD *)(v9 + 8))
                                              && !(unsigned int)bSubOverflow(16 * v171, v259)
                                              && !(unsigned int)bMulOverflow(v258, v173 - v172)
                                              && !bAddOverflow(v260, v174)
                                              && !(unsigned int)bMulOverflow(v56, v175 + 16)
                                              && !bAddOverflow(v176, v56 * v177) )
                                            {
                                              v180 = v179 + v178;
                                              v181 = v254;
                                              if ( (!v254 || !(unsigned int)bMulOverflow(v254, v98))
                                                && !bAddOverflow(v180, v181 * v98) )
                                              {
                                                v186 = v247;
                                                v187 = v182 + v183;
                                                if ( (!v185
                                                   || !(unsigned int)bMulOverflow(v247, v111)
                                                   && !(unsigned int)bMulOverflow(v189, v188))
                                                  && !(unsigned int)bSubOverflow(v187, v185 * v184)
                                                  && !(unsigned int)bSubOverflow(v191 - v190, 1LL) )
                                                {
                                                  v193 = v192 - 1;
                                                  v245[0] = v192 - 1;
                                                  if ( !(unsigned int)bMulOverflow(16LL, v56) )
                                                  {
                                                    v194 = 16 * v56;
                                                    *(_QWORD *)(v9 + 688) = v194;
                                                    *(_QWORD *)(v9 + 496) = v194;
                                                    *(_QWORD *)(v9 + 592) = v194;
                                                    if ( v194 )
                                                    {
                                                      QDIV(
                                                        (unsigned __int64 *)(v9 + 88),
                                                        (unsigned __int64 *)v245,
                                                        v194);
                                                      if ( !(unsigned int)bMulOverflow(16LL, v258)
                                                        && !(unsigned int)bSubOverflow(
                                                                            *(_QWORD *)(v9 + 24),
                                                                            *(_QWORD *)(v9 + 8)) )
                                                      {
                                                        v254 = 16 * v197;
                                                        if ( !(unsigned int)bMulOverflow(16 * v197, v196 - v195)
                                                          && !bAddOverflow(16 * v199 * v198, v261)
                                                          && !bAddOverflow(v193, v201 + v200) )
                                                        {
                                                          v203 = *(_QWORD *)(v9 + 688);
                                                          v245[0] = v202 + v193;
                                                          QDIV(
                                                            (unsigned __int64 *)(v9 + 104),
                                                            (unsigned __int64 *)v245,
                                                            v203);
                                                          ROT_DIV((__int64 *)(v9 + 672), v254, *(_QWORD *)(v9 + 688));
                                                          v204 = v250;
                                                          if ( !v246
                                                            || !(unsigned int)bMulOverflow(v250, v251)
                                                            && !(unsigned int)bMulOverflow(v207 * v206, v205) )
                                                          {
                                                            v208 = v204 * v98;
                                                            if ( !v111
                                                              || !(unsigned int)bMulOverflow(v204, v186)
                                                              && !(unsigned int)bMulOverflow(v209 * v186, v111) )
                                                            {
                                                              v210 = p_left;
                                                              if ( !(unsigned int)bSubOverflow(
                                                                                    v208,
                                                                                    v204 * (_QWORD)p_left)
                                                                && !(unsigned int)bMulOverflow(16LL, v262 + v263)
                                                                && !(unsigned int)bMulOverflow(16 * v211, v258)
                                                                && !bAddOverflow(16 * v214 * v213, v212) )
                                                              {
                                                                v217 = *(_QWORD *)(v9 + 496);
                                                                v245[0] = v215 + v216;
                                                                QDIV(
                                                                  (unsigned __int64 *)(v9 + 480),
                                                                  (unsigned __int64 *)v245,
                                                                  v217);
                                                                v218 = v252;
                                                                if ( !v246
                                                                  || !(unsigned int)bMulOverflow(v252, v251)
                                                                  && !(unsigned int)bMulOverflow(v221 * v220, v219) )
                                                                {
                                                                  v222 = v218 * v98;
                                                                  if ( !v111
                                                                    || !(unsigned int)bMulOverflow(v218, v186)
                                                                    && !(unsigned int)bMulOverflow(v223 * v186, v111) )
                                                                  {
                                                                    v224 = v218 * (_QWORD)v210;
                                                                    if ( !(unsigned int)bSubOverflow(v222, v224) )
                                                                    {
                                                                      v225 = v222 - v224;
                                                                      if ( !(unsigned int)bMulOverflow(
                                                                                            16LL,
                                                                                            v267 + v265)
                                                                        && !(unsigned int)bMulOverflow(16 * v226, v258)
                                                                        && !bAddOverflow(16 * v228 * v227, v225) )
                                                                      {
                                                                        v230 = *(_QWORD *)(v9 + 592);
                                                                        v245[0] = v225 + v229;
                                                                        QDIV(
                                                                          (unsigned __int64 *)(v9 + 576),
                                                                          (unsigned __int64 *)v245,
                                                                          v230);
                                                                        v231 = v254;
                                                                        v232 = *(_QWORD *)(v9 + 688);
                                                                        *(_OWORD *)(v9 + 696) = *(_OWORD *)(v9 + 672);
                                                                        v233 = *(_OWORD *)(v9 + 480);
                                                                        *(_QWORD *)(v9 + 712) = v232;
                                                                        v234 = *(_QWORD *)(v9 + 496);
                                                                        *(_OWORD *)(v9 + 504) = v233;
                                                                        v236 = *v235;
                                                                        *(_QWORD *)(v9 + 520) = v234;
                                                                        v237 = *((_QWORD *)v235 + 2);
                                                                        *(_OWORD *)(v9 + 600) = v236;
                                                                        v238 = *(_OWORD *)(v9 + 648);
                                                                        *(_QWORD *)(v9 + 616) = v237;
                                                                        v239 = *(_QWORD *)(v9 + 664);
                                                                        *(_OWORD *)(v9 + 720) = v238;
                                                                        v240 = *(_OWORD *)(v9 + 456);
                                                                        *(_QWORD *)(v9 + 736) = v239;
                                                                        v241 = *(_QWORD *)(v9 + 472);
                                                                        *(_OWORD *)(v9 + 528) = v240;
                                                                        v242 = *(_OWORD *)(v9 + 552);
                                                                        *(_QWORD *)(v9 + 544) = v241;
                                                                        v243 = *(_QWORD *)(v9 + 568);
                                                                        *(_OWORD *)(v9 + 624) = v242;
                                                                        *(_QWORD *)(v9 + 640) = v243;
                                                                        ROT_DIV((__int64 *)(v9 + 768), v231, v194);
                                                                        v244 = v264;
                                                                        *(_QWORD *)(v9 + 784) = v194;
                                                                        v6 = bScalePlgDDALToPlgDDA(v9, v244);
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_171:
              Win32FreePool(v9);
              return (void *)v6;
            }
            v25 = 7;
          }
        }
        else
        {
          if ( (int)v24 < v16 || (int)v24 <= v16 && (int)v269 < v15 )
          {
            v25 = 4;
            goto LABEL_40;
          }
          v25 = 5;
        }
      }
      else
      {
        if ( (int)v24 >= v16 && ((int)v24 > v16 || (int)v269 >= v15) )
        {
          v25 = 3;
          goto LABEL_40;
        }
        v25 = 2;
      }
    }
    else
    {
      v30 = HIDWORD(*(unsigned __int64 *)&v11);
      if ( (int)v23 >= (int)v30 && ((int)v23 > (int)v30 || v270.x >= v271.x) )
      {
        v25 = 1;
        goto LABEL_40;
      }
    }
    v31 = a3->right - a3->left;
    v32 = a3->bottom - a3->top;
    goto LABEL_41;
  }
  return result;
}
