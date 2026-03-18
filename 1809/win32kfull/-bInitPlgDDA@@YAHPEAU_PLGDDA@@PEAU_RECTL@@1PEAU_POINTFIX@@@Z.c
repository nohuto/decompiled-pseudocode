/*
 * XREFs of ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02B86A4
 * Callers:
 *     EngPlgBlt @ 0x1C0270A50 (EngPlgBlt.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C013EBB0 (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     QDIV @ 0x1C02B85C4 (QDIV.c)
 *     ROT_DIV @ 0x1C02B8614 (ROT_DIV.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1C02B8664 (-bAddOverflow@@YAH_J0@Z.c)
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1C02B9970 (-bMulOverflow@@YAH_J0@Z.c)
 *     bScalePlgDDALToPlgDDA @ 0x1C02B99F4 (bScalePlgDDALToPlgDDA.c)
 *     ?bSubOverflow@@YAH_J0@Z @ 0x1C02BA600 (-bSubOverflow@@YAH_J0@Z.c)
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
  LONG left; // r9d
  int v15; // r15d
  int v16; // r8d
  LONG top; // r12d
  int v18; // r9d
  int v19; // r9d
  LONG right; // r13d
  int v21; // ecx
  int v22; // r9d
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // r14
  int v25; // edx
  __int64 v26; // r9
  int v27; // edx
  int v28; // edx
  unsigned __int64 v29; // r10
  int v30; // ecx
  int v31; // edx
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r10
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r11
  __int64 v40; // r15
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 v52; // r10
  __int64 v53; // r11
  __int64 v54; // r15
  __int64 v55; // r14
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // r10
  __int64 v61; // rdx
  __int64 v62; // r10
  __int64 v63; // rcx
  unsigned int v64; // r11d
  unsigned __int64 v65; // rsi
  __int64 v66; // r8
  unsigned __int64 v67; // r8
  _OWORD *v68; // rcx
  __int64 v69; // r9
  __int64 v70; // r10
  __int64 v71; // rdx
  unsigned __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // r8
  unsigned __int64 v76; // rdx
  __int64 v77; // rdx
  unsigned __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r11
  __int64 v83; // r9
  __int64 v84; // r10
  __int128 *v85; // rcx
  __int128 v86; // xmm0
  __int64 v87; // xmm1_8
  __int64 v88; // r8
  __int64 v89; // r9
  __int128 *v90; // rcx
  __int128 v91; // xmm0
  __int64 v92; // xmm1_8
  __int64 v93; // rcx
  __int64 v94; // rcx
  __int64 v95; // r9
  __int64 v96; // rsi
  __int64 v97; // r9
  __int64 v98; // r11
  __int64 v99; // rcx
  __int64 v100; // r10
  __int64 v101; // r9
  __int64 v102; // r9
  __int64 v103; // r12
  __int64 v104; // r13
  __int64 v105; // r9
  __int64 v106; // rdx
  __int64 v107; // r9
  __int64 v108; // r14
  __int64 v109; // r12
  unsigned int v110; // eax
  unsigned __int64 v111; // r10
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
    v15 = v11.x + v13.x - *(_QWORD *)a4;
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
        goto LABEL_173;
      top = a3->top;
      LODWORD(v248) = a2->top;
      if ( bSubOverflow(v248, top) )
        goto LABEL_173;
      LODWORD(v246) = a2->right;
      if ( bSubOverflow(v246, v18) )
        goto LABEL_173;
      LODWORD(v245[0]) = a2->bottom;
      if ( bSubOverflow(v245[0], top) )
        goto LABEL_173;
      right = a3->right;
      if ( bSubOverflow(right, v19) || bSubOverflow(a3->bottom, top) )
        goto LABEL_173;
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
    v25 = ((int)v23 > (int)v24) ^ ((int)v23 <= v16);
    if ( *((_DWORD *)&v269 + 2 * v25 + 1) > *((_DWORD *)&v269 + 2 * (v25 ^ 3LL) + 1) )
      v25 ^= 3u;
    v26 = 0LL;
    if ( v25 )
    {
      v27 = v25 - 1;
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
              v26 = 6LL;
LABEL_19:
              v30 = a3->bottom - a3->top;
              v31 = a3->right - a3->left;
              goto LABEL_20;
            }
            v26 = 7LL;
          }
          goto LABEL_88;
        }
        if ( (int)v24 >= v16 && ((int)v24 > v16 || (int)v269 >= v15) )
        {
          v110 = 5;
          v26 = 5LL;
        }
        else
        {
          v110 = 4;
          v26 = 4LL;
        }
      }
      else if ( (int)v24 >= v16 && ((int)v24 > v16 || (int)v269 >= v15) )
      {
        v110 = 3;
        v26 = 3LL;
      }
      else
      {
        v110 = 2;
        v26 = 2LL;
      }
    }
    else
    {
      v111 = HIDWORD(*(unsigned __int64 *)&v11);
      if ( (int)v23 < (int)v111 )
        goto LABEL_88;
      if ( (int)v23 > (int)v111 )
      {
        v26 = 1LL;
        goto LABEL_19;
      }
      if ( v270.x < v271.x )
      {
LABEL_88:
        v30 = a3->right - a3->left;
        v31 = a3->bottom - a3->top;
LABEL_20:
        v32 = v31;
        v33 = v30;
        if ( !v30 )
          goto LABEL_173;
        if ( !v31 )
          goto LABEL_173;
        v34 = 3 * v26;
        v35 = 2 * v26;
        v36 = dword_1C02D21AC[2 * v34];
        v37 = *((int *)p_left + 1);
        v38 = *(int *)p_left;
        v39 = dword_1C02D21B0[2 * v34];
        v40 = dword_1C02D21A4[2 * v34];
        v41 = (v33 - 1) * dword_1C02D21A8[2 * v34];
        v250 = SLODWORD((&aiPlgConst)[v34]);
        v248 = v36;
        v256 = v39;
        v252 = v40;
        v254 = v40 * v37 + v250 * v38 + v41;
        v42 = v38 * v36;
        v43 = dword_1C02D2124[2 * v35];
        v44 = *((int *)&v269 + 2 * v43);
        v45 = v37 * v39 + v42 + (v32 - 1) * dword_1C02D21B4[2 * v34];
        v46 = SLODWORD((&aiPlgSort)[v35]);
        v253 = v45;
        v47 = *((int *)&v269 + 2 * v46);
        v48 = *((int *)&v269 + 2 * v46 + 1);
        v49 = v44 - v47;
        v50 = dword_1C02D2128[2 * v35];
        v51 = *((int *)&v269 + 2 * v43 + 1) - v48;
        v260 = v47;
        v259 = v48;
        v52 = *((int *)&v269 + 2 * v50) - v47;
        v53 = *((int *)&v269 + 2 * v50 + 1) - v48;
        v251 = v49;
        v247 = v52;
        v255 = v51;
        v246 = v53;
        if ( v49 )
        {
          if ( (unsigned int)bMulOverflow(v32, v49) )
            goto LABEL_173;
        }
        if ( v51 && (unsigned int)bMulOverflow(v32, v51) )
          goto LABEL_173;
        if ( v52 && (unsigned int)bMulOverflow(v33, v52) )
          goto LABEL_173;
        if ( v53 && (unsigned int)bMulOverflow(v33, v53) )
          goto LABEL_173;
        v54 = v53 * v33;
        v257 = v49 * v32;
        v55 = v51 * v32;
        v258 = v52 * v33;
        if ( !(v53 * v33) )
          goto LABEL_173;
        if ( (unsigned int)bMulOverflow(v33, v32) )
          goto LABEL_173;
        if ( bAddOverflow(v259, 16LL) )
          goto LABEL_173;
        if ( (unsigned int)bMulOverflow(v32 * v33, v56 + 16) )
          goto LABEL_173;
        if ( (unsigned int)bMulOverflow(v254, v55) )
          goto LABEL_173;
        if ( bAddOverflow(v58, v57 * v55) )
          goto LABEL_173;
        if ( (unsigned int)bMulOverflow(v253, v54) )
          goto LABEL_173;
        if ( bAddOverflow(v60, v59 * v54) )
          goto LABEL_173;
        if ( (unsigned int)bSubOverflow(v62 + v61, 1LL) )
          goto LABEL_173;
        v245[0] = v63 - 1;
        if ( (unsigned int)bMulOverflow(v32 * v33, v64) )
          goto LABEL_173;
        v65 = 16 * v32 * v33;
        if ( !v65 )
          goto LABEL_173;
        ROT_DIV(&v265, v55, v65);
        ROT_DIV(&v267, v54, v66);
        QDIV((unsigned __int64 *)(v9 + 8), (unsigned __int64 *)v245, v67);
        v69 = v265;
        v70 = v266;
        *(_OWORD *)(v9 + 24) = *v68;
        v71 = v69 + *(_QWORD *)(v9 + 24);
        v72 = v70 + *(_QWORD *)(v9 + 32);
        *(_QWORD *)(v9 + 24) = v71;
        *(_QWORD *)(v9 + 32) = v72;
        if ( v72 >= v65 )
        {
          *(_QWORD *)(v9 + 24) = v71 + 1;
          *(_QWORD *)(v9 + 32) = v72 - v65;
        }
        v73 = v267;
        v74 = v268;
        *(_OWORD *)(v9 + 40) = *(_OWORD *)(v9 + 8);
        v75 = *(_QWORD *)(v9 + 40) + v73;
        v76 = *(_QWORD *)(v9 + 48) + v74;
        *(_QWORD *)(v9 + 40) = v75;
        *(_QWORD *)(v9 + 48) = v76;
        if ( v76 >= v65 )
        {
          *(_QWORD *)(v9 + 40) = v75 + 1;
          *(_QWORD *)(v9 + 48) = v76 - v65;
        }
        *(_OWORD *)(v9 + 56) = *(_OWORD *)(v9 + 40);
        v77 = v69 + *(_QWORD *)(v9 + 56);
        v78 = v70 + *(_QWORD *)(v9 + 64);
        *(_QWORD *)(v9 + 56) = v77;
        *(_QWORD *)(v9 + 64) = v78;
        if ( v78 >= v65 )
        {
          *(_QWORD *)(v9 + 56) = v77 + 1;
          *(_QWORD *)(v9 + 64) = v78 - v65;
        }
        if ( (unsigned int)bMulOverflow(v250, v55) )
          goto LABEL_173;
        if ( (unsigned int)bMulOverflow(v248, v54) )
          goto LABEL_173;
        v265 = v80 * v55;
        if ( bAddOverflow(v80 * v55, v79 * v54) )
          goto LABEL_173;
        if ( (unsigned int)bMulOverflow(v252, v55) )
          goto LABEL_173;
        if ( (unsigned int)bMulOverflow(v256, v54) )
          goto LABEL_173;
        if ( bAddOverflow(v252 * v55, v81 * v54) )
          goto LABEL_173;
        ROT_DIV((__int64 *)(v9 + 264), v82 + v265, v65);
        *(_QWORD *)(v9 + 280) = v65;
        v86 = *v85;
        v87 = *((_QWORD *)v85 + 2);
        *(_OWORD *)(v9 + 288) = *v85;
        *(_OWORD *)(v9 + 312) = v86;
        *(_OWORD *)(v9 + 336) = v86;
        *(_QWORD *)(v9 + 304) = v87;
        *(_QWORD *)(v9 + 328) = v87;
        *(_QWORD *)(v9 + 352) = v87;
        ROT_DIV((__int64 *)(v9 + 360), v84 + v83, v88);
        v89 = v246;
        *(_QWORD *)(v9 + 376) = v65;
        v91 = *v90;
        v92 = *((_QWORD *)v90 + 2);
        v93 = v251;
        *(_OWORD *)(v9 + 384) = v91;
        *(_OWORD *)(v9 + 408) = v91;
        *(_OWORD *)(v9 + 432) = v91;
        *(_QWORD *)(v9 + 400) = v92;
        *(_QWORD *)(v9 + 424) = v92;
        *(_QWORD *)(v9 + 448) = v92;
        if ( (unsigned int)bMulOverflow(v93, v89) )
          goto LABEL_173;
        v96 = v94 * v95;
        if ( (unsigned int)bMulOverflow(v255, v247) )
          goto LABEL_173;
        p_left = (__int64 *)(v97 * v98);
        if ( (unsigned int)bSubOverflow(v96, v97 * v98) )
          goto LABEL_173;
        v261 = v99 - v100;
        if ( (unsigned int)bMulOverflow(v33, 16LL) )
          goto LABEL_173;
        if ( (unsigned int)bMulOverflow(v32, 16LL) )
          goto LABEL_173;
        if ( (unsigned int)bMulOverflow(v250, v101) )
          goto LABEL_173;
        if ( (unsigned int)bMulOverflow(v248, v246) )
          goto LABEL_173;
        v103 = 16 * v33;
        if ( !v103 )
          goto LABEL_173;
        v104 = 16 * v32;
        if ( !v104 )
          goto LABEL_173;
        ROT_DIV(v245, v250 * v102, v103);
        ROT_DIV(&v265, v248 * v246, v104);
        v262 = v265;
        v263 = v245[0];
        if ( bAddOverflow(v245[0], v265) )
          goto LABEL_173;
        ROT_DIV(v245, v252 * v105, v103);
        ROT_DIV(&v265, v256 * v246, v104);
        v106 = v265;
        v267 = v265;
        v265 = v245[0];
        if ( bAddOverflow(v245[0], v106) )
          goto LABEL_173;
        if ( !v55 )
        {
          *(_QWORD *)(v9 + 648) = 0LL;
          v108 = 0LL;
          *(_QWORD *)(v9 + 656) = 0LL;
          v109 = v107;
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
          goto LABEL_131;
        }
        if ( !(unsigned int)bMulOverflow(*(_QWORD *)(v9 + 8), 16LL)
          && !(unsigned int)bSubOverflow(16 * v112, v259)
          && !(unsigned int)bMulOverflow(v257, v114 - v113) )
        {
          v115 = v260;
          if ( !bAddOverflow(v260, 16LL) )
          {
            v117 = v116 + v115;
            if ( !(unsigned int)bMulOverflow(v55, v117) )
            {
              v119 = v55 * v117;
              if ( !bAddOverflow(v118, v119) )
              {
                v121 = v253;
                v122 = v119 + v120;
                if ( (!v253 || !(unsigned int)bMulOverflow(v253, v96)) && !(unsigned int)bSubOverflow(v122, v121 * v96) )
                {
                  v109 = v255;
                  v127 = v124 - v123;
                  if ( (!v121 || !(unsigned int)bMulOverflow(v126, v255) && !(unsigned int)bMulOverflow(v121, v128))
                    && !bAddOverflow(v127, v121 * v125)
                    && !(unsigned int)bSubOverflow(v130 + v129, 1LL) )
                  {
                    v132 = v131 - 1;
                    v245[0] = v131 - 1;
                    if ( !(unsigned int)bMulOverflow(16LL, v55) )
                    {
                      v108 = 16 * v55;
                      *(_QWORD *)(v9 + 664) = v108;
                      *(_QWORD *)(v9 + 472) = v108;
                      *(_QWORD *)(v9 + 568) = v108;
                      if ( v108 )
                      {
                        QDIV((unsigned __int64 *)(v9 + 72), (unsigned __int64 *)v245, v108);
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
                              v146 = v142 * v96;
                              if ( !v109
                                || !(unsigned int)bMulOverflow(v142, v247)
                                && !(unsigned int)bMulOverflow(v148 * v147, v109) )
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
                                    v161 = v157 * v96;
                                    if ( (!v109
                                       || !(unsigned int)bMulOverflow(v157, v247)
                                       && !(unsigned int)bMulOverflow(v163 * v162, v109))
                                      && !(unsigned int)bSubOverflow(v161, v157 * (_QWORD)v149)
                                      && !(unsigned int)bMulOverflow(16LL, v267 + v265)
                                      && !(unsigned int)bMulOverflow(16 * v164, v257)
                                      && !(unsigned int)bSubOverflow(16 * v167 * v165, v166) )
                                    {
                                      v170 = *(_QWORD *)(v9 + 568);
                                      v245[0] = v168 - v169;
                                      QDIV((unsigned __int64 *)(v9 + 552), (unsigned __int64 *)v245, v170);
                                      ROT_DIV((__int64 *)(v9 + 744), v253, v108);
LABEL_131:
                                      *(_QWORD *)(v9 + 760) = v108;
                                      if ( !(unsigned int)bMulOverflow(16LL, *(_QWORD *)(v9 + 8))
                                        && !(unsigned int)bSubOverflow(16 * v171, v259)
                                        && !(unsigned int)bMulOverflow(v258, v173 - v172)
                                        && !bAddOverflow(v260, v174)
                                        && !(unsigned int)bMulOverflow(v54, v175 + 16)
                                        && !bAddOverflow(v176, v54 * v177) )
                                      {
                                        v180 = v179 + v178;
                                        v181 = v254;
                                        if ( (!v254 || !(unsigned int)bMulOverflow(v254, v96))
                                          && !bAddOverflow(v180, v181 * v96) )
                                        {
                                          v186 = v247;
                                          v187 = v182 + v183;
                                          if ( (!v185
                                             || !(unsigned int)bMulOverflow(v247, v109)
                                             && !(unsigned int)bMulOverflow(v189, v188))
                                            && !(unsigned int)bSubOverflow(v187, v185 * v184)
                                            && !(unsigned int)bSubOverflow(v191 - v190, 1LL) )
                                          {
                                            v193 = v192 - 1;
                                            v245[0] = v192 - 1;
                                            if ( !(unsigned int)bMulOverflow(16LL, v54) )
                                            {
                                              v194 = 16 * v54;
                                              *(_QWORD *)(v9 + 688) = v194;
                                              *(_QWORD *)(v9 + 496) = v194;
                                              *(_QWORD *)(v9 + 592) = v194;
                                              if ( v194 )
                                              {
                                                QDIV((unsigned __int64 *)(v9 + 88), (unsigned __int64 *)v245, v194);
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
                                                    QDIV((unsigned __int64 *)(v9 + 104), (unsigned __int64 *)v245, v203);
                                                    ROT_DIV((__int64 *)(v9 + 672), v254, *(_QWORD *)(v9 + 688));
                                                    v204 = v250;
                                                    if ( !v246
                                                      || !(unsigned int)bMulOverflow(v250, v251)
                                                      && !(unsigned int)bMulOverflow(v207 * v206, v205) )
                                                    {
                                                      v208 = v204 * v96;
                                                      if ( !v109
                                                        || !(unsigned int)bMulOverflow(v204, v186)
                                                        && !(unsigned int)bMulOverflow(v209 * v186, v109) )
                                                      {
                                                        v210 = p_left;
                                                        if ( !(unsigned int)bSubOverflow(v208, v204 * (_QWORD)p_left)
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
                                                            v222 = v218 * v96;
                                                            if ( !v109
                                                              || !(unsigned int)bMulOverflow(v218, v186)
                                                              && !(unsigned int)bMulOverflow(v223 * v186, v109) )
                                                            {
                                                              v224 = v218 * (_QWORD)v210;
                                                              if ( !(unsigned int)bSubOverflow(v222, v224) )
                                                              {
                                                                v225 = v222 - v224;
                                                                if ( !(unsigned int)bMulOverflow(16LL, v267 + v265)
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
LABEL_173:
        Win32FreePool(v9);
        return (void *)v6;
      }
      v26 = 1LL;
      v110 = 1;
    }
    if ( v110 == 1 || v110 != 2 && v110 <= 4 )
      goto LABEL_19;
    goto LABEL_88;
  }
  return result;
}
