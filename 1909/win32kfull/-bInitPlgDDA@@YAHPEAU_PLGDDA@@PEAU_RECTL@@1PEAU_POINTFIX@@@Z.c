/*
 * XREFs of ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C00038AC
 * Callers:
 *     EngPlgBlt @ 0x1C0002DF0 (EngPlgBlt.c)
 * Callees:
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1C0004924 (-bMulOverflow@@YAH_J0@Z.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1C000496C (-bAddOverflow@@YAH_J0@Z.c)
 *     ROT_DIV @ 0x1C00049A0 (ROT_DIV.c)
 *     QDIV @ 0x1C00049C0 (QDIV.c)
 *     bScalePlgDDALToPlgDDA @ 0x1C0004A10 (bScalePlgDDALToPlgDDA.c)
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C00CE178 (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall bInitPlgDDA(struct _PLGDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _POINTFIX *a4)
{
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdi
  struct _POINTFIX v10; // r8
  unsigned __int64 v11; // r11
  struct _POINTFIX v12; // r14
  LONG left; // r9d
  int v14; // r15d
  int x; // r12d
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r8
  int v19; // r10d
  int v20; // edx
  __int64 v21; // r9
  int v22; // ecx
  int v23; // edx
  __int64 v24; // r15
  __int64 v25; // r13
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  __int64 v29; // r10
  __int64 v30; // r11
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r11
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // r12
  __int64 v43; // r9
  __int64 v44; // r10
  __int64 v45; // r14
  __int64 v46; // r11
  __int64 v47; // rcx
  __int64 v48; // r10
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // r9
  __int64 v52; // r11
  __int64 v53; // rdx
  __int64 v54; // r11
  __int64 v55; // rcx
  unsigned __int64 v56; // rsi
  __int64 v57; // r8
  __int64 v58; // r9
  _OWORD *v59; // rcx
  __int64 v60; // r9
  __int64 v61; // r10
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // r8
  unsigned __int64 v67; // rdx
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // r9
  __int64 v72; // r10
  __int64 v73; // r10
  __int64 v74; // rcx
  __int64 v75; // r10
  __int64 v76; // r9
  __int64 v77; // r11
  __int128 *v78; // rcx
  __int128 v79; // xmm0
  __int64 v80; // xmm1_8
  __int64 v81; // r8
  __int64 v82; // r9
  __int128 *v83; // rcx
  __int128 v84; // xmm0
  __int64 v85; // xmm1_8
  __int64 v86; // rcx
  __int64 v87; // rcx
  __int64 v88; // r9
  __int64 v89; // rsi
  __int64 v90; // rcx
  __int64 v91; // r11
  __int64 v92; // r12
  __int64 v93; // r9
  __int64 v94; // r9
  __int64 v95; // r13
  __int64 v96; // r15
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r9
  __int64 v103; // r9
  __int64 v104; // r9
  __int64 v105; // r9
  __int64 v106; // r10
  __int64 v107; // r9
  __int64 v108; // r10
  __int64 v109; // r11
  __int64 v110; // r9
  __int64 v111; // r10
  __int64 v112; // rcx
  __int64 v113; // r15
  __int64 v114; // r9
  __int64 v115; // rdx
  __int64 v116; // r9
  __int64 v117; // rcx
  __int64 v118; // r13
  __int64 v119; // r14
  __int64 v120; // r10
  __int64 v121; // r9
  __int64 v122; // rcx
  __int64 v123; // r9
  __int64 v124; // r10
  __int64 v125; // r11
  __int64 v126; // r9
  __int64 v127; // r9
  __int64 v128; // r10
  __int64 v129; // r9
  __int64 v130; // r10
  __int64 v131; // r11
  __int64 v132; // r13
  __int64 v133; // r9
  __int64 v134; // r10
  __int64 v135; // rcx
  __int64 v136; // r11
  __int64 v137; // r9
  __int64 v138; // r10
  __int64 v139; // r11
  __int64 v140; // rcx
  __int64 v141; // r11
  __int64 v142; // r9
  __int64 v143; // r10
  __int64 v144; // r11
  __int64 v145; // r9
  __int64 v146; // r11
  __int64 v147; // rcx
  __int64 v148; // r11
  __int64 v149; // r9
  __int64 v150; // r10
  __int64 v151; // r11
  __int64 v152; // rcx
  __int64 v153; // r9
  __int64 v154; // r9
  __int64 v155; // r13
  __int64 v156; // r10
  __int64 v157; // r9
  __int64 v158; // r10
  __int64 v159; // r11
  __int64 v160; // r9
  __int64 v161; // r11
  __int64 v162; // r9
  __int64 v163; // r11
  __int64 v164; // rdx
  __int64 v165; // r9
  __int64 v166; // r10
  __int64 v167; // r11
  __int64 v168; // r9
  __int64 v169; // rcx
  __int64 v170; // r9
  __int64 v171; // r14
  __int64 v172; // r10
  __int64 v173; // r10
  __int64 v174; // r9
  __int64 v175; // rcx
  __int64 v176; // r13
  __int64 v177; // r9
  __int64 v178; // rdx
  __int64 v179; // r9
  __int64 v180; // rdx
  __int64 v181; // r11
  __int64 v182; // r9
  __int64 v183; // r10
  __int64 v184; // r11
  __int64 v185; // r14
  __int64 v186; // r9
  __int64 v187; // r11
  __int64 v188; // rcx
  __int64 v189; // r10
  __int64 v190; // r9
  __int64 v191; // r10
  __int64 v192; // r11
  __int64 v193; // r9
  __int64 v194; // r10
  __int64 v195; // r11
  __int64 v196; // r9
  __int64 v197; // r10
  __int64 v198; // r11
  __int64 v199; // rsi
  __int64 v200; // r11
  __int64 v201; // r12
  __int64 v202; // rsi
  __int64 v203; // r9
  __int64 v204; // r9
  __int64 v205; // r10
  __int64 v206; // r9
  __int64 v207; // r8
  __int64 v208; // xmm1_8
  __int128 v209; // xmm0
  __int64 v210; // xmm1_8
  __int128 *v211; // rcx
  __int128 v212; // xmm0
  __int64 v213; // xmm1_8
  __int128 v214; // xmm0
  __int64 v215; // xmm1_8
  __int128 v216; // xmm0
  __int64 v217; // xmm1_8
  __int128 v218; // xmm0
  __int64 v219; // xmm1_8
  struct _PLGDDA *v220; // rdx
  __int64 v221; // r9
  LONG top; // r12d
  int v223; // r9d
  int v224; // r9d
  LONG right; // r13d
  int v226; // ecx
  int v227; // r9d
  int v228; // ecx
  int v229; // edx
  int v230; // edx
  __int64 v231; // rax
  __int64 v232; // r10
  __int64 v233; // r11
  __int64 v234[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v235; // [rsp+30h] [rbp-D0h]
  __int64 v236; // [rsp+38h] [rbp-C8h]
  __int64 v237; // [rsp+40h] [rbp-C0h]
  __int64 v238; // [rsp+48h] [rbp-B8h]
  __int64 v239; // [rsp+50h] [rbp-B0h]
  __int64 v240; // [rsp+58h] [rbp-A8h]
  __int64 v241; // [rsp+60h] [rbp-A0h]
  __int64 v242; // [rsp+68h] [rbp-98h]
  __int64 v243; // [rsp+70h] [rbp-90h]
  __int64 v244; // [rsp+78h] [rbp-88h]
  __int64 v245; // [rsp+80h] [rbp-80h]
  __int64 v246; // [rsp+88h] [rbp-78h]
  __int64 v247; // [rsp+90h] [rbp-70h]
  __int64 v248; // [rsp+98h] [rbp-68h]
  __int64 v249; // [rsp+A0h] [rbp-60h]
  __int64 v250; // [rsp+A8h] [rbp-58h]
  struct _PLGDDA *v251; // [rsp+B0h] [rbp-50h]
  __int64 v252; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v253; // [rsp+C0h] [rbp-40h]
  __int64 v254; // [rsp+C8h] [rbp-38h]
  __int64 v255; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v256; // [rsp+D8h] [rbp-28h]
  __int64 v257; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v258; // [rsp+E8h] [rbp-18h]
  struct _POINTFIX v259; // [rsp+F0h] [rbp-10h]
  struct _POINTFIX v260; // [rsp+F8h] [rbp-8h]
  int v261; // [rsp+100h] [rbp+0h]
  int v262; // [rsp+104h] [rbp+4h]

  v238 = (__int64)a2;
  v251 = a1;
  v252 = 0LL;
  v253 = 0LL;
  v255 = 0LL;
  v256 = 0LL;
  v7 = 0;
  result = PALLOCMEM2(0x318uLL);
  v9 = result;
  if ( result )
  {
    v10 = a4[1];
    v11 = (unsigned __int64)*a4;
    v12 = a4[2];
    left = a3->left;
    v14 = v12.x + v10.x - v11;
    v260 = v12;
    x = v12.x;
    v16 = HIDWORD(*(unsigned __int64 *)&v12);
    v258 = v11;
    v17 = HIDWORD(v11);
    v259 = v10;
    v18 = HIDWORD(*(unsigned __int64 *)&v10);
    v19 = v18 + v16 - v17;
    v261 = v14;
    v262 = v19;
    if ( left || a3->top )
    {
      LODWORD(v237) = a2->left;
      if ( (unsigned int)bSubOverflow(v237, left) )
        goto LABEL_134;
      top = a3->top;
      LODWORD(v236) = a2->top;
      if ( (unsigned int)bSubOverflow(v236, top) )
        goto LABEL_134;
      LODWORD(v235) = a2->right;
      if ( (unsigned int)bSubOverflow(v235, v223) )
        goto LABEL_134;
      LODWORD(v234[0]) = a2->bottom;
      if ( (unsigned int)bSubOverflow(v234[0], top) )
        goto LABEL_134;
      right = a3->right;
      if ( (unsigned int)bSubOverflow(right, v224) || (unsigned int)bSubOverflow(a3->bottom, top) )
        goto LABEL_134;
      a3 = (struct _RECTL *)&v255;
      LODWORD(v252) = v237 - v227;
      LODWORD(v256) = right - v227;
      HIDWORD(v252) = v236 - top;
      LODWORD(v253) = v235 - v227;
      v228 = v226 - top;
      HIDWORD(v253) = LODWORD(v234[0]) - top;
      x = v260.x;
      v238 = (__int64)&v252;
      HIDWORD(v256) = v228;
    }
    v20 = ((int)v18 <= v19) ^ ((int)v18 > (int)v17);
    if ( *((_DWORD *)&v258 + 2 * v20 + 1) > *((_DWORD *)&v258 + 2 * (v20 ^ 3LL) + 1) )
      v20 ^= 3u;
    v21 = 0LL;
    if ( v20 )
    {
      v229 = v20 - 1;
      if ( v229 )
      {
        v230 = v229 - 1;
        if ( v230 )
        {
          if ( v230 != 1 )
            goto LABEL_8;
          if ( (int)v18 >= (int)v16 && ((int)v18 > (int)v16 || v259.x >= x) )
          {
            v21 = 7LL;
            goto LABEL_8;
          }
          v21 = 6LL;
LABEL_150:
          v22 = a3->bottom - a3->top;
          v23 = a3->right - a3->left;
          goto LABEL_9;
        }
        if ( (int)v17 >= v19 )
        {
          if ( (int)v17 > v19 || (v231 = 4LL, (int)v258 >= v14) )
            v231 = 5LL;
        }
        else
        {
          v231 = 4LL;
        }
        v21 = v231;
      }
      else if ( (int)v17 >= v19 && ((int)v17 > v19 || (int)v258 >= v14) )
      {
        LODWORD(v231) = 3;
        v21 = 3LL;
      }
      else
      {
        LODWORD(v231) = 2;
        v21 = 2LL;
      }
    }
    else
    {
      if ( (int)v18 < (int)v16 )
      {
LABEL_8:
        v22 = a3->right - a3->left;
        v23 = a3->bottom - a3->top;
LABEL_9:
        v24 = v23;
        v25 = v22;
        if ( !v22 )
          goto LABEL_134;
        if ( !v23 )
          goto LABEL_134;
        v26 = 3 * v21;
        v27 = 2 * v21;
        v28 = SLODWORD((&aiPlgConst)[v26]);
        v29 = dword_1C02E39EC[2 * v26];
        v30 = dword_1C02E39F0[2 * v26];
        v31 = *(int *)(v238 + 4);
        v32 = *(int *)v238;
        v33 = (v25 - 1) * dword_1C02E39E8[2 * v26];
        v241 = dword_1C02E39E4[2 * v26];
        v237 = v29;
        v239 = v28;
        v244 = v30;
        v34 = dword_1C02E39F4[2 * v26];
        v249 = v241 * v31 + v28 * v32 + v33;
        v35 = SLODWORD((&aiPlgSort)[v27]);
        v36 = v29 * v32 + (v24 - 1) * v34;
        v37 = dword_1C02E3964[2 * v27];
        v242 = v30 * v31 + v36;
        v38 = *((int *)&v258 + 2 * v35);
        v39 = *((int *)&v258 + 2 * v35 + 1);
        v40 = dword_1C02E3968[2 * v27];
        v41 = *((int *)&v258 + 2 * v37) - v38;
        v42 = *((int *)&v258 + 2 * v37 + 1) - v39;
        v248 = v38;
        v43 = *((int *)&v258 + 2 * v40) - v38;
        v44 = *((int *)&v258 + 2 * v40 + 1) - v39;
        v247 = v39;
        v240 = v41;
        v236 = v43;
        v243 = v42;
        v235 = v44;
        if ( v41 )
        {
          if ( (unsigned int)bMulOverflow(v24, v41) )
            goto LABEL_134;
        }
        if ( v42 && (unsigned int)bMulOverflow(v24, v42) )
          goto LABEL_134;
        if ( v43 && (unsigned int)bMulOverflow(v25, v43) )
          goto LABEL_134;
        if ( v44 && (unsigned int)bMulOverflow(v25, v44) )
          goto LABEL_134;
        v45 = v24 * v42;
        v245 = v24 * v41;
        v246 = v43 * v25;
        v238 = v44 * v25;
        if ( !(v44 * v25) || (unsigned int)bMulOverflow(v25, v24) || v46 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v46 < 16 )
          goto LABEL_134;
        if ( (unsigned int)bMulOverflow(v24 * v25, v46 + 16) )
          goto LABEL_134;
        if ( (unsigned int)bMulOverflow(v249, v24 * v42) )
          goto LABEL_134;
        if ( (unsigned int)bAddOverflow(v48, v47 * v45) )
          goto LABEL_134;
        if ( (unsigned int)bMulOverflow(v242, v49) )
          goto LABEL_134;
        if ( (unsigned int)bAddOverflow(v52, v50 * v51) )
          goto LABEL_134;
        v55 = v53 + v54;
        if ( v53 + v54 < 0 && (unsigned __int64)(v55 + 0x7FFFFFFFFFFFFFFFLL) > 0x7FFFFFFFFFFFFFFELL )
          goto LABEL_134;
        v234[0] = v55 - 1;
        if ( (unsigned int)bMulOverflow(v24 * v25, 16LL) )
          goto LABEL_134;
        v56 = 16 * v24 * v25;
        if ( !v56 )
          goto LABEL_134;
        v252 = 0LL;
        v253 = 0LL;
        v254 = 0LL;
        v255 = 0LL;
        v256 = 0LL;
        v257 = 0LL;
        ROT_DIV(&v252, v24 * v42, v56);
        ROT_DIV(&v255, v58, v57);
        QDIV(v9 + 8, v234);
        v60 = v252;
        v61 = v253;
        *(_OWORD *)(v9 + 24) = *v59;
        v62 = v60 + *(_QWORD *)(v9 + 24);
        v63 = v61 + *(_QWORD *)(v9 + 32);
        *(_QWORD *)(v9 + 24) = v62;
        *(_QWORD *)(v9 + 32) = v63;
        if ( v63 >= v56 )
        {
          *(_QWORD *)(v9 + 24) = v62 + 1;
          *(_QWORD *)(v9 + 32) = v63 - v56;
        }
        v64 = v255;
        v65 = v256;
        *(_OWORD *)(v9 + 40) = *(_OWORD *)(v9 + 8);
        v66 = *(_QWORD *)(v9 + 40) + v64;
        v67 = *(_QWORD *)(v9 + 48) + v65;
        *(_QWORD *)(v9 + 40) = v66;
        *(_QWORD *)(v9 + 48) = v67;
        if ( v67 >= v56 )
        {
          *(_QWORD *)(v9 + 40) = v66 + 1;
          *(_QWORD *)(v9 + 48) = v67 - v56;
        }
        *(_OWORD *)(v9 + 56) = *(_OWORD *)(v9 + 40);
        v68 = v60 + *(_QWORD *)(v9 + 56);
        v69 = v61 + *(_QWORD *)(v9 + 64);
        *(_QWORD *)(v9 + 56) = v68;
        *(_QWORD *)(v9 + 64) = v69;
        if ( v69 >= v56 )
        {
          *(_QWORD *)(v9 + 56) = v68 + 1;
          *(_QWORD *)(v9 + 64) = v69 - v56;
        }
        if ( (unsigned int)bMulOverflow(v239, v24 * v42) )
          goto LABEL_134;
        if ( (unsigned int)bMulOverflow(v237, v238) )
          goto LABEL_134;
        v252 = v70 * v72;
        v255 = v71 * v45;
        if ( (unsigned int)bAddOverflow(v71 * v45, v70 * v72) )
          goto LABEL_134;
        if ( (unsigned int)bMulOverflow(v241, v24 * v42) )
          goto LABEL_134;
        if ( (unsigned int)bMulOverflow(v244, v73) )
          goto LABEL_134;
        if ( (unsigned int)bAddOverflow(v241 * v45, v74 * v75) )
          goto LABEL_134;
        ROT_DIV(v9 + 264, v252 + v255, v56);
        *(_QWORD *)(v9 + 280) = v56;
        v79 = *v78;
        v80 = *((_QWORD *)v78 + 2);
        *(_OWORD *)(v9 + 288) = *v78;
        *(_OWORD *)(v9 + 312) = v79;
        *(_OWORD *)(v9 + 336) = v79;
        *(_QWORD *)(v9 + 304) = v80;
        *(_QWORD *)(v9 + 328) = v80;
        *(_QWORD *)(v9 + 352) = v80;
        ROT_DIV(v9 + 360, v77 + v76, v81);
        v82 = v235;
        *(_QWORD *)(v9 + 376) = v56;
        v84 = *v83;
        v85 = *((_QWORD *)v83 + 2);
        v86 = v240;
        *(_OWORD *)(v9 + 384) = v84;
        *(_OWORD *)(v9 + 408) = v84;
        *(_OWORD *)(v9 + 432) = v84;
        *(_QWORD *)(v9 + 400) = v85;
        *(_QWORD *)(v9 + 424) = v85;
        *(_QWORD *)(v9 + 448) = v85;
        if ( (unsigned int)bMulOverflow(v86, v82) )
          goto LABEL_134;
        v89 = v87 * v88;
        if ( (unsigned int)bMulOverflow(v42, v236) )
          goto LABEL_134;
        v92 = v90 * v91;
        if ( (v89 ^ (v90 * v91)) < 0 )
        {
          if ( v89 < 0 )
          {
            if ( v89 < (__int64)(v92 + 0x8000000000000000uLL) )
              goto LABEL_134;
          }
          else if ( v89 > v92 + 0x7FFFFFFFFFFFFFFFLL )
          {
            goto LABEL_134;
          }
        }
        v250 = v89 - v92;
        v234[0] = 0LL;
        v234[1] = 0LL;
        v252 = 0LL;
        v253 = 0LL;
        if ( (unsigned int)bMulOverflow(v25, 16LL) )
          goto LABEL_134;
        if ( (unsigned int)bMulOverflow(v24, 16LL) )
          goto LABEL_134;
        if ( (unsigned int)bMulOverflow(v239, v93) )
          goto LABEL_134;
        if ( (unsigned int)bMulOverflow(v237, v235) )
          goto LABEL_134;
        v95 = 16 * v25;
        if ( !v95 )
          goto LABEL_134;
        v96 = 16 * v24;
        if ( !v96 )
          goto LABEL_134;
        ROT_DIV(v234, v239 * v94, v95);
        ROT_DIV(&v252, v237 * v235, v96);
        if ( (unsigned int)bAddOverflow(v234[0], v252) )
          goto LABEL_134;
        v255 = v98 + v97;
        ROT_DIV(v234, v241 * v99, v95);
        ROT_DIV(&v252, v244 * v235, v96);
        if ( (unsigned int)bAddOverflow(v234[0], v252) )
          goto LABEL_134;
        v252 = v101 + v100;
        if ( v45 )
        {
          if ( (unsigned int)bMulOverflow(*(_QWORD *)(v9 + 8), 16LL) )
            goto LABEL_134;
          v104 = 16 * v103;
          if ( (v247 ^ v104) < 0 )
          {
            if ( v104 < 0 )
            {
              if ( v104 < (__int64)(v247 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v104 > v247 + 0x7FFFFFFFFFFFFFFFLL )
            {
              goto LABEL_134;
            }
          }
          if ( (unsigned int)bMulOverflow(v245, v104 - v247) || v248 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v248 < 16 )
            goto LABEL_134;
          if ( (unsigned int)bMulOverflow(v45, v248 + 16) )
            goto LABEL_134;
          if ( (unsigned int)bAddOverflow(v106, v45 * v105) )
            goto LABEL_134;
          v110 = v108 + v107;
          v111 = v242;
          if ( v242 )
          {
            if ( (unsigned int)bMulOverflow(v242, v89) )
              goto LABEL_134;
          }
          v112 = v111 * v89;
          if ( (v110 ^ (v111 * v89)) < 0 )
          {
            if ( v110 < 0 )
            {
              if ( v110 < (__int64)(v112 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v110 > v112 + 0x7FFFFFFFFFFFFFFFLL )
            {
              goto LABEL_134;
            }
          }
          v113 = v243;
          v114 = v110 - v112;
          if ( v111 && ((unsigned int)bMulOverflow(v109, v243) || (unsigned int)bMulOverflow(v232, v92)) )
            goto LABEL_134;
          if ( (unsigned int)bAddOverflow(v114, v111 * v92) )
            goto LABEL_134;
          v117 = v115 + v116;
          if ( v115 + v116 < 0 && (unsigned __int64)(v117 + 0x7FFFFFFFFFFFFFFFLL) > 0x7FFFFFFFFFFFFFFELL )
            goto LABEL_134;
          v118 = v117 - 1;
          v234[0] = v117 - 1;
          if ( (unsigned int)bMulOverflow(16LL, v45) )
            goto LABEL_134;
          v119 = 16 * v45;
          *(_QWORD *)(v9 + 664) = v119;
          *(_QWORD *)(v9 + 472) = v119;
          *(_QWORD *)(v9 + 568) = v119;
          if ( !v119 )
            goto LABEL_134;
          QDIV(v9 + 72, v234);
          if ( (unsigned int)bMulOverflow(16LL, v245) )
            goto LABEL_134;
          v121 = *(_QWORD *)(v9 + 40);
          v122 = *(_QWORD *)(v9 + 8);
          if ( (v122 ^ v121) < 0 )
          {
            if ( v121 < 0 )
            {
              if ( v121 < (__int64)(v122 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v121 > v122 + 0x7FFFFFFFFFFFFFFFLL )
            {
              goto LABEL_134;
            }
          }
          v242 = 16 * v120;
          if ( (unsigned int)bMulOverflow(16 * v120, v121 - v122) )
          {
LABEL_134:
            Win32FreePool(v9);
            return v7;
          }
          v126 = 16 * v124 * v123;
          if ( (v126 ^ v250) < 0 )
          {
            if ( v126 < 0 )
            {
              if ( v126 < (__int64)(v250 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v126 > v250 + v125 )
            {
              goto LABEL_134;
            }
          }
          if ( (unsigned int)bAddOverflow(v118, v126 - v250) )
            goto LABEL_134;
          v234[0] = v127 + v118;
          QDIV(v9 + 120, v234);
          ROT_DIV(v9 + 648, v242, *(_QWORD *)(v9 + 664));
          v128 = v237;
          if ( v235 )
          {
            if ( (unsigned int)bMulOverflow(v237, v240) || (unsigned int)bMulOverflow(v130 * v131, v129) )
              goto LABEL_134;
          }
          v132 = v236;
          v133 = v128 * v89;
          if ( v113 )
          {
            if ( (unsigned int)bMulOverflow(v128, v236) || (unsigned int)bMulOverflow(v134 * v132, v113) )
              goto LABEL_134;
          }
          v135 = v128 * v92;
          if ( (v133 ^ (v128 * v92)) < 0 )
          {
            if ( v133 < 0 )
            {
              if ( v133 < (__int64)(v135 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v133 > v135 + 0x7FFFFFFFFFFFFFFFLL )
            {
              goto LABEL_134;
            }
          }
          if ( (unsigned int)bMulOverflow(16LL, v255) || (unsigned int)bMulOverflow(16 * v136, v245) )
            goto LABEL_134;
          v140 = 16 * v138 * v139;
          if ( (v137 ^ v140) < 0 )
          {
            if ( ((v138 * v139) & 0x800000000000000LL) != 0 )
            {
              if ( v140 < (__int64)(v137 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v140 > v137 + 0x7FFFFFFFFFFFFFFFLL )
            {
              goto LABEL_134;
            }
          }
          v234[0] = v140 - v137;
          QDIV(v9 + 456, v234);
          v141 = v244;
          if ( v235 && ((unsigned int)bMulOverflow(v244, v240) || (unsigned int)bMulOverflow(v144 * v143, v142)) )
            goto LABEL_134;
          v145 = v141 * v89;
          if ( v113 )
          {
            if ( (unsigned int)bMulOverflow(v141, v132) || (unsigned int)bMulOverflow(v146 * v132, v113) )
              goto LABEL_134;
          }
          v147 = v141 * v92;
          if ( (v145 ^ (v141 * v92)) < 0 )
          {
            if ( v145 < 0 )
            {
              if ( v145 < (__int64)(v147 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v145 > v147 + 0x7FFFFFFFFFFFFFFFLL )
            {
              goto LABEL_134;
            }
          }
          if ( (unsigned int)bMulOverflow(16LL, v252) || (unsigned int)bMulOverflow(16 * v148, v245) )
            goto LABEL_134;
          v152 = 16 * v150 * v151;
          if ( (v149 ^ v152) < 0 )
          {
            if ( ((v150 * v151) & 0x800000000000000LL) != 0 )
            {
              if ( v152 < (__int64)(v149 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v152 > v149 + 0x7FFFFFFFFFFFFFFFLL )
            {
              goto LABEL_134;
            }
          }
          v234[0] = v152 - v149;
          QDIV(v9 + 552, v234);
          ROT_DIV(v9 + 744, v242, v119);
        }
        else
        {
          *(_QWORD *)(v9 + 648) = 0LL;
          v119 = 0LL;
          *(_QWORD *)(v9 + 656) = 0LL;
          v113 = v102;
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
        }
        *(_QWORD *)(v9 + 760) = v119;
        if ( !(unsigned int)bMulOverflow(16LL, *(_QWORD *)(v9 + 8)) )
        {
          v154 = 16 * v153;
          if ( (v247 ^ v154) < 0 )
          {
            if ( v154 < 0 )
            {
              if ( v154 < (__int64)(v247 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v154 > v247 + 0x7FFFFFFFFFFFFFFFLL )
            {
              goto LABEL_134;
            }
          }
          v155 = v246;
          if ( (unsigned int)bMulOverflow(v246, v154 - v247) || v248 >= 0 && 0x7FFFFFFFFFFFFFFFLL - v248 < 16 )
            goto LABEL_134;
          if ( (unsigned int)bMulOverflow(v156, v248 + 16) )
            goto LABEL_134;
          if ( (unsigned int)bAddOverflow(v159, v158 * v157) )
            goto LABEL_134;
          v162 = v161 + v160;
          v163 = v249;
          if ( v249 )
          {
            if ( (unsigned int)bMulOverflow(v249, v89) )
              goto LABEL_134;
          }
          if ( (unsigned int)bAddOverflow(v162, v163 * v89) )
            goto LABEL_134;
          v168 = v164 + v165;
          if ( v167 )
          {
            if ( (unsigned int)bMulOverflow(v236, v113) || (unsigned int)bMulOverflow(v233, v92) )
              goto LABEL_134;
          }
          v169 = v167 * v92;
          if ( (v168 ^ (v167 * v92)) < 0 )
          {
            if ( v168 < 0 )
            {
              if ( v168 < (__int64)(v169 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v168 > v169 + 0x7FFFFFFFFFFFFFFFLL )
            {
              goto LABEL_134;
            }
          }
          v170 = v168 - v169;
          if ( v170 < 0 && (unsigned __int64)(v170 + 0x7FFFFFFFFFFFFFFFLL) > 0x7FFFFFFFFFFFFFFELL )
            goto LABEL_134;
          v171 = v170 - 1;
          v234[0] = v170 - 1;
          if ( (unsigned int)bMulOverflow(16LL, v166) )
            goto LABEL_134;
          v173 = 16 * v172;
          v238 = v173;
          *(_QWORD *)(v9 + 688) = v173;
          *(_QWORD *)(v9 + 496) = v173;
          *(_QWORD *)(v9 + 592) = v173;
          if ( !v173 )
            goto LABEL_134;
          QDIV(v9 + 88, v234);
          if ( (unsigned int)bMulOverflow(16LL, v155) )
            goto LABEL_134;
          v174 = *(_QWORD *)(v9 + 24);
          v175 = *(_QWORD *)(v9 + 8);
          if ( (v175 ^ v174) < 0 )
          {
            if ( v174 < 0 )
            {
              if ( v174 < (__int64)(v175 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v174 > v175 + 0x7FFFFFFFFFFFFFFFLL )
            {
              goto LABEL_134;
            }
          }
          v176 = 16 * v155;
          if ( (unsigned int)bMulOverflow(v176, v174 - v175) )
            goto LABEL_134;
          if ( (unsigned int)bAddOverflow(16 * v246 * v177, v250) )
            goto LABEL_134;
          if ( (unsigned int)bAddOverflow(v171, v179 + v178) )
            goto LABEL_134;
          v234[0] = v180 + v171;
          QDIV(v9 + 104, v234);
          ROT_DIV(v9 + 672, v176, *(_QWORD *)(v9 + 688));
          v181 = v239;
          if ( v235 )
          {
            if ( (unsigned int)bMulOverflow(v239, v240) || (unsigned int)bMulOverflow(v184 * v183, v182) )
              goto LABEL_134;
          }
          v185 = v236;
          v186 = v181 * v89;
          if ( v113 )
          {
            if ( (unsigned int)bMulOverflow(v181, v236) || (unsigned int)bMulOverflow(v187 * v185, v113) )
              goto LABEL_134;
          }
          v188 = v181 * v92;
          if ( (v186 ^ (v181 * v92)) < 0 )
          {
            if ( v186 < 0 )
            {
              if ( v186 < (__int64)(v188 + 0x8000000000000000uLL) )
                goto LABEL_134;
            }
            else if ( v186 > v188 + 0x7FFFFFFFFFFFFFFFLL )
            {
              goto LABEL_134;
            }
          }
          if ( (unsigned int)bMulOverflow(16LL, v255) )
            goto LABEL_134;
          if ( (unsigned int)bMulOverflow(16 * v189, v246) )
            goto LABEL_134;
          if ( (unsigned int)bAddOverflow(16 * v192 * v191, v190) )
            goto LABEL_134;
          v234[0] = v193 + v194;
          QDIV(v9 + 480, v234);
          v195 = v241;
          if ( v235 )
          {
            if ( (unsigned int)bMulOverflow(v241, v240) || (unsigned int)bMulOverflow(v198 * v197, v196) )
              goto LABEL_134;
          }
          v199 = v195 * v89;
          if ( v113 )
          {
            if ( (unsigned int)bMulOverflow(v195, v185) || (unsigned int)bMulOverflow(v200 * v185, v113) )
              goto LABEL_134;
          }
          v201 = v195 * v92;
          if ( (v199 ^ v201) >= 0 )
            goto LABEL_130;
          if ( v199 >= 0 )
          {
            if ( v199 > v201 + 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_134;
LABEL_130:
            v202 = v199 - v201;
            if ( !(unsigned int)bMulOverflow(16LL, v252)
              && !(unsigned int)bMulOverflow(16 * v203, v246)
              && !(unsigned int)bAddOverflow(16 * v205 * v204, v202) )
            {
              v234[0] = v202 + v206;
              QDIV(v9 + 576, v234);
              v207 = v238;
              v208 = *(_QWORD *)(v9 + 688);
              *(_OWORD *)(v9 + 696) = *(_OWORD *)(v9 + 672);
              v209 = *(_OWORD *)(v9 + 480);
              *(_QWORD *)(v9 + 712) = v208;
              v210 = *(_QWORD *)(v9 + 496);
              *(_OWORD *)(v9 + 504) = v209;
              v212 = *v211;
              *(_QWORD *)(v9 + 520) = v210;
              v213 = *((_QWORD *)v211 + 2);
              *(_OWORD *)(v9 + 600) = v212;
              v214 = *(_OWORD *)(v9 + 648);
              *(_QWORD *)(v9 + 616) = v213;
              v215 = *(_QWORD *)(v9 + 664);
              *(_OWORD *)(v9 + 720) = v214;
              v216 = *(_OWORD *)(v9 + 456);
              *(_QWORD *)(v9 + 736) = v215;
              v217 = *(_QWORD *)(v9 + 472);
              *(_OWORD *)(v9 + 528) = v216;
              v218 = *(_OWORD *)(v9 + 552);
              *(_QWORD *)(v9 + 544) = v217;
              v219 = *(_QWORD *)(v9 + 568);
              *(_OWORD *)(v9 + 624) = v218;
              *(_QWORD *)(v9 + 640) = v219;
              ROT_DIV(v9 + 768, v176, v207);
              v220 = v251;
              *(_QWORD *)(v9 + 784) = v221;
              v7 = bScalePlgDDALToPlgDDA(v9, v220);
            }
            goto LABEL_134;
          }
          if ( v199 >= (__int64)(v201 + 0x8000000000000000uLL) )
            goto LABEL_130;
        }
        goto LABEL_134;
      }
      if ( (int)v18 > (int)v16 )
      {
        v21 = 1LL;
        goto LABEL_150;
      }
      if ( v259.x < x )
        goto LABEL_8;
      v21 = 1LL;
      LODWORD(v231) = 1;
    }
    if ( (_DWORD)v231 != 1 && ((_DWORD)v231 == 2 || (unsigned int)v231 > 4) )
      goto LABEL_8;
    goto LABEL_150;
  }
  return result;
}
