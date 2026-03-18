/*
 * XREFs of vSrcTranCopyS4D24 @ 0x1C0276E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D24(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v11; // r15
  __int64 v14; // rax
  int v15; // ecx
  int *v16; // rcx
  int v17; // r11d
  int v18; // ebx
  int v19; // r12d
  unsigned int v20; // edi
  int v21; // r13d
  int v22; // eax
  unsigned int v23; // ebp
  unsigned int v24; // r10d
  signed int v25; // r9d
  __int64 result; // rax
  _BYTE *v27; // r8
  __int64 v28; // r14
  int v29; // ecx
  int v30; // edx
  char *v31; // r12
  __int64 v32; // rsi
  int v33; // ecx
  int v34; // ecx
  unsigned __int8 v35; // dl
  int v36; // r9d
  unsigned int v37; // edi
  unsigned int v38; // ecx
  __int64 v39; // r10
  _DWORD *v40; // rax
  unsigned int v41; // edi
  int v42; // ebx
  _DWORD *v43; // rax
  unsigned int v44; // r11d
  unsigned int v45; // ecx
  unsigned int v46; // r11d
  int v47; // r8d
  _DWORD *v48; // rax
  int v49; // r8d
  unsigned int v50; // edx
  int v51; // r9d
  unsigned int v52; // eax
  unsigned int v53; // r9d
  unsigned int v54; // eax
  unsigned __int8 v55; // dl
  unsigned int v56; // r9d
  unsigned int v57; // edi
  unsigned int v58; // ecx
  __int64 v59; // r10
  _DWORD *v60; // rax
  unsigned int v61; // edi
  int v62; // r11d
  _DWORD *v63; // rax
  int v64; // r11d
  unsigned int v65; // ebx
  unsigned int v66; // ecx
  unsigned int v67; // ebx
  int v68; // r8d
  _DWORD *v69; // rax
  int v70; // r8d
  unsigned int v71; // edx
  int v72; // r9d
  unsigned int v73; // eax
  unsigned __int8 v74; // dl
  int v75; // r9d
  unsigned int v76; // edi
  unsigned int v77; // ecx
  __int64 v78; // r10
  _DWORD *v79; // rax
  unsigned int v80; // edi
  int v81; // ebx
  _DWORD *v82; // rax
  unsigned int v83; // r11d
  unsigned int v84; // ecx
  unsigned int v85; // r11d
  int v86; // r8d
  _DWORD *v87; // rax
  int v88; // r8d
  unsigned int v89; // edx
  int v90; // r9d
  unsigned int v91; // eax
  unsigned int v92; // r9d
  unsigned int v93; // eax
  char v94; // dl
  unsigned __int8 v95; // r8
  unsigned int v96; // r9d
  _DWORD *v97; // rax
  unsigned int v98; // edi
  unsigned int v99; // ecx
  __int64 v100; // r10
  unsigned int v101; // edi
  int v102; // r11d
  _DWORD *v103; // rax
  int v104; // r11d
  unsigned int v105; // ebx
  unsigned int v106; // ecx
  unsigned int v107; // ebx
  int v108; // r8d
  _DWORD *v109; // rax
  int v110; // r8d
  unsigned int v111; // edx
  int v112; // r9d
  unsigned int v113; // eax
  unsigned __int8 v114; // dl
  unsigned int v115; // r9d
  unsigned int v116; // edi
  unsigned int v117; // ecx
  __int64 v118; // r10
  _DWORD *v119; // rax
  unsigned int v120; // edi
  int v121; // r11d
  _DWORD *v122; // rax
  int v123; // r11d
  unsigned int v124; // ebx
  unsigned int v125; // ecx
  unsigned int v126; // ebx
  int v127; // r8d
  _DWORD *v128; // rax
  int v129; // r8d
  unsigned int v130; // edx
  int v131; // r9d
  unsigned int v132; // eax
  unsigned __int8 v133; // dl
  unsigned __int8 v134; // r8
  unsigned int v135; // r9d
  _DWORD *v136; // rax
  unsigned int v137; // edi
  unsigned int v138; // ecx
  __int64 v139; // r10
  unsigned int v140; // edi
  int v141; // r11d
  _DWORD *v142; // rax
  int v143; // r11d
  unsigned int v144; // ebx
  unsigned int v145; // ecx
  unsigned int v146; // ebx
  int v147; // r8d
  _DWORD *v148; // rax
  int v149; // r8d
  unsigned int v150; // edx
  int v151; // r9d
  unsigned int v152; // eax
  unsigned __int8 v153; // dl
  unsigned int v154; // r9d
  unsigned int v155; // edi
  unsigned int v156; // ecx
  __int64 v157; // r10
  _DWORD *v158; // rax
  unsigned int v159; // edi
  int v160; // ebx
  _DWORD *v161; // rax
  int v162; // ebx
  unsigned int v163; // r11d
  unsigned int v164; // ecx
  unsigned int v165; // r11d
  int v166; // r8d
  _DWORD *v167; // rax
  int v168; // r8d
  unsigned int v169; // edx
  int v170; // r9d
  unsigned int v171; // eax
  int v172; // ecx
  unsigned __int8 v173; // dl
  unsigned int v174; // r9d
  unsigned int v175; // edi
  unsigned int v176; // ecx
  __int64 v177; // r10
  _DWORD *v178; // rax
  unsigned int v179; // edi
  int v180; // r11d
  _DWORD *v181; // rax
  int v182; // r11d
  unsigned int v183; // ebx
  unsigned int v184; // ecx
  unsigned int v185; // ebx
  int v186; // r8d
  _DWORD *v187; // rax
  int v188; // r8d
  unsigned int v189; // edx
  int v190; // r9d
  unsigned int v191; // eax
  int v192; // ecx
  unsigned __int8 v193; // dl
  unsigned int v194; // r9d
  unsigned int v195; // edi
  unsigned int v196; // ecx
  __int64 v197; // r10
  _DWORD *v198; // rax
  unsigned int v199; // edi
  int v200; // ebx
  _DWORD *v201; // rax
  int v202; // ebx
  unsigned int v203; // r11d
  unsigned int v204; // ecx
  unsigned int v205; // r11d
  int v206; // r8d
  _DWORD *v207; // rax
  int v208; // r8d
  unsigned int v209; // edx
  int v210; // r9d
  unsigned int v211; // eax
  unsigned __int8 v212; // dl
  unsigned int v213; // r9d
  unsigned int v214; // edi
  unsigned int v215; // ecx
  __int64 v216; // r10
  _DWORD *v217; // rax
  unsigned int v218; // edi
  int v219; // r11d
  _DWORD *v220; // rax
  int v221; // r11d
  unsigned int v222; // ebx
  unsigned int v223; // ecx
  unsigned int v224; // ebx
  int v225; // r8d
  _DWORD *v226; // rax
  int v227; // r8d
  unsigned int v228; // edx
  int v229; // r9d
  unsigned int v230; // eax
  unsigned __int8 v231; // dl
  int v232; // r9d
  unsigned int v233; // edi
  unsigned int v234; // ecx
  __int64 v235; // r10
  _DWORD *v236; // rax
  int v237; // r11d
  _DWORD *v238; // rax
  int v239; // r11d
  unsigned int v240; // ebx
  unsigned int v241; // ecx
  unsigned int v242; // ebx
  int v243; // r8d
  _DWORD *v244; // rax
  int v245; // r8d
  unsigned int v246; // edx
  int v247; // r9d
  unsigned int v248; // eax
  unsigned int v249; // r9d
  unsigned int v250; // eax
  unsigned __int8 v251; // dl
  _DWORD *v252; // r15
  _DWORD *v253; // rax
  unsigned int v254; // ebx
  unsigned int v255; // ecx
  __int64 v256; // r9
  unsigned int v257; // ebx
  int v258; // r11d
  _DWORD *v259; // rax
  int v260; // r11d
  unsigned int v261; // r10d
  unsigned int v262; // ecx
  unsigned int v263; // r10d
  int v264; // edx
  unsigned int v265; // eax
  char v266; // [rsp+0h] [rbp-68h]
  char v267; // [rsp+4h] [rbp-64h]
  int v268; // [rsp+8h] [rbp-60h]
  int v269; // [rsp+Ch] [rbp-5Ch]
  unsigned int v270; // [rsp+10h] [rbp-58h]
  unsigned int v271; // [rsp+14h] [rbp-54h]
  int v272; // [rsp+18h] [rbp-50h]
  __int64 v273; // [rsp+20h] [rbp-48h]
  _BYTE *v274; // [rsp+70h] [rbp+8h]
  int v275; // [rsp+78h] [rbp+10h]
  __int64 v276; // [rsp+88h] [rbp+20h]
  int v277; // [rsp+90h] [rbp+28h]
  int v278; // [rsp+98h] [rbp+30h]
  unsigned int v279; // [rsp+B0h] [rbp+48h]
  char v280; // [rsp+C0h] [rbp+58h]

  v11 = a3;
  v14 = *(_QWORD *)(a11 + 128);
  if ( !v14 )
    v14 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1808LL);
  v15 = *(_DWORD *)(v14 + 24);
  if ( (v15 & 2) != 0 )
  {
    v16 = *(int **)(v14 + 112);
    v17 = *v16;
    v18 = v16[6];
    v19 = v16[1];
    v20 = v16[7];
    v21 = v16[2];
    v22 = v16[8];
    v268 = *v16;
  }
  else
  {
    v19 = 65280;
    LOBYTE(v20) = 8;
    if ( (v15 & 4) != 0 )
    {
      LOBYTE(v22) = 16;
      v17 = 255;
      v268 = 255;
      v21 = 16711680;
      LOBYTE(v18) = 0;
    }
    else
    {
      LOBYTE(v18) = 16;
      v17 = 16711680;
      v268 = 16711680;
      v21 = 255;
      LOBYTE(v22) = 0;
    }
  }
  v23 = a9;
  v24 = a6 & 0xFFFFFFFC;
  v279 = (a9 & v17) >> v18;
  v280 = v22;
  v267 = v18;
  v269 = v19;
  v25 = (a5 + 3) & 0xFFFFFFFC;
  v270 = (v23 & v19) >> v20;
  v266 = v20;
  v271 = (v23 & v21) >> v22;
  result = (unsigned int)(3 * a5);
  v27 = (_BYTE *)(a2 / 2 + a1);
  v28 = (int)result + a4;
  v274 = v27;
  v276 = v28;
  if ( v25 > (int)(a6 & 0xFFFFFFFC) )
  {
    if ( (a5 & 3) == 1 )
    {
      v231 = *v27 & 0xF;
      if ( v231 )
      {
        if ( v231 == 15 )
        {
          v232 = v23;
        }
        else
        {
          LOWORD(a10) = *(_WORD *)v28;
          BYTE2(a10) = *(_BYTE *)(v28 + 2);
          v233 = (a10 & (unsigned int)v17) >> v18;
          v234 = v279 - v233;
          v235 = v231;
          v236 = &unk_1C02DA530;
          if ( (int)(v279 - v233) >= 0 )
            v236 = &unk_1C02DA570;
          v20 = v233 << 16;
          v237 = v236[v231];
          v238 = &unk_1C02DA530;
          v239 = v234 * v237;
          v240 = (a10 & (unsigned int)v19) >> v266;
          v241 = v270 - v240;
          if ( (int)(v270 - v240) >= 0 )
            v238 = &unk_1C02DA570;
          v242 = v240 << 16;
          v243 = v238[v231];
          v244 = &unk_1C02DA530;
          v245 = v241 * v243;
          v246 = (a10 & (unsigned int)v21) >> v280;
          if ( (int)(v271 - v246) >= 0 )
            v244 = &unk_1C02DA570;
          v247 = v244[v235];
          v248 = v239 + v20;
          v17 = v268;
          LOBYTE(v20) = v266;
          v249 = v268 & (HIWORD(v248) << v267) | v21 & (((v246 << 16) + (v271 - v246) * v247) >> 16 << v280);
          v250 = v242 + v245;
          v27 = v274;
          v232 = v19 & (HIWORD(v250) << v266) | v249;
        }
        *(_BYTE *)v28 = v232;
        *(_BYTE *)(v28 + 2) = BYTE2(v232);
        *(_BYTE *)(v28 + 1) = BYTE1(v232);
      }
      v28 += 3LL;
      result = (unsigned int)(a5 + 1);
      if ( (_DWORD)result == a6 )
        return result;
      ++v27;
    }
    else if ( (a5 & 3) != 2 )
    {
      return result;
    }
    v251 = *v27 >> 4;
    if ( v251 )
    {
      if ( v251 != 15 )
      {
        v252 = &unk_1C02DA530;
        LOWORD(a10) = *(_WORD *)v28;
        BYTE2(a10) = *(_BYTE *)(v28 + 2);
        v253 = &unk_1C02DA530;
        v254 = (a10 & (unsigned int)v17) >> v267;
        v255 = v279 - v254;
        v256 = v251;
        if ( (int)(v279 - v254) >= 0 )
          v253 = &unk_1C02DA570;
        v257 = v254 << 16;
        v258 = v253[v251];
        v259 = &unk_1C02DA530;
        v260 = v255 * v258;
        v261 = (a10 & (unsigned int)v19) >> v20;
        v262 = v270 - v261;
        if ( (int)(v270 - v261) >= 0 )
          v259 = &unk_1C02DA570;
        v263 = v261 << 16;
        v264 = v262 * v259[v251];
        v265 = (a10 & (unsigned int)v21) >> v280;
        if ( (int)(v271 - v265) >= 0 )
          v252 = &unk_1C02DA570;
        v23 = v268 & ((v257 + v260) >> 16 << v267) | v19 & ((v263 + v264) >> 16 << v20) | v21 & (((v265 << 16)
                                                                                                + (v271 - v265)
                                                                                                * v252[v256]) >> 16 << v280);
      }
      *(_BYTE *)v28 = v23;
      result = v23 >> 8;
      *(_BYTE *)(v28 + 2) = BYTE2(v23);
      *(_BYTE *)(v28 + 1) = BYTE1(v23);
    }
    return result;
  }
  v278 = a6 - v24;
  v29 = v25 - a5;
  v272 = v25 - a5;
  result = (unsigned int)((int)(v24 - v25) / 4);
  v30 = (int)(v24 - v25) / 4;
  v275 = v30;
  if ( a8 )
  {
    while ( 1 )
    {
      v31 = v27;
      v32 = v28;
      v33 = v29 - 1;
      if ( !v33 )
        goto LABEL_37;
      v34 = v33 - 1;
      if ( !v34 )
        goto LABEL_25;
      if ( v34 == 1 )
        break;
LABEL_49:
      if ( v30 > 0 )
      {
        v273 = (unsigned int)v30;
        while ( 1 )
        {
          v94 = *v31;
          v95 = (unsigned __int8)*v31 >> 4;
          if ( v95 )
          {
            if ( v95 == 15 )
            {
              v96 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)v32;
              BYTE2(a10) = *(_BYTE *)(v32 + 2);
              v97 = &unk_1C02DA530;
              v98 = (a10 & (unsigned int)v17) >> v18;
              v99 = v279 - v98;
              v100 = v95;
              if ( (int)(v279 - v98) >= 0 )
                v97 = &unk_1C02DA570;
              v101 = v98 << 16;
              v102 = v97[v95];
              v103 = &unk_1C02DA530;
              v104 = v99 * v102;
              v105 = (a10 & (unsigned int)v269) >> v266;
              v106 = v270 - v105;
              if ( (int)(v270 - v105) >= 0 )
                v103 = &unk_1C02DA570;
              v107 = v105 << 16;
              v108 = v103[v95];
              v109 = &unk_1C02DA530;
              v110 = v106 * v108;
              v111 = (a10 & (unsigned int)v21) >> v280;
              if ( (int)(v271 - v111) >= 0 )
                v109 = &unk_1C02DA570;
              v112 = v109[v100];
              v113 = v101 + v104;
              v17 = v268;
              v96 = v269 & ((v110 + v107) >> 16 << v266) | v268 & (HIWORD(v113) << v267) | v21 & (((v111 << 16)
                                                                                                 + (v271 - v111) * v112) >> 16 << v280);
            }
            *(_BYTE *)v32 = v96;
            *(_BYTE *)(v32 + 2) = BYTE2(v96);
            *(_BYTE *)(v32 + 1) = BYTE1(v96);
            v94 = *v31;
          }
          v114 = v94 & 0xF;
          if ( v114 )
          {
            if ( v114 == 15 )
            {
              v115 = v23;
            }
            else
            {
              LOBYTE(a10) = *(_BYTE *)(v32 + 3);
              *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v32 + 4);
              v116 = (a10 & (unsigned int)v17) >> v267;
              v117 = v279 - v116;
              v118 = v114;
              v119 = &unk_1C02DA530;
              if ( (int)(v279 - v116) >= 0 )
                v119 = &unk_1C02DA570;
              v120 = v116 << 16;
              v121 = v119[v114];
              v122 = &unk_1C02DA530;
              v123 = v117 * v121;
              v124 = (a10 & (unsigned int)v269) >> v266;
              v125 = v270 - v124;
              if ( (int)(v270 - v124) >= 0 )
                v122 = &unk_1C02DA570;
              v126 = v124 << 16;
              v127 = v122[v114];
              v128 = &unk_1C02DA530;
              v129 = v125 * v127;
              v130 = (a10 & (unsigned int)v21) >> v280;
              if ( (int)(v271 - v130) >= 0 )
                v128 = &unk_1C02DA570;
              v131 = v128[v118];
              v132 = v120 + v123;
              v17 = v268;
              v115 = v269 & ((v126 + v129) >> 16 << v266) | v268 & (HIWORD(v132) << v267) | v21 & (((v130 << 16)
                                                                                                  + (v271 - v130) * v131) >> 16 << v280);
            }
            *(_BYTE *)(v32 + 3) = v115;
            *(_BYTE *)(v32 + 5) = BYTE2(v115);
            *(_BYTE *)(v32 + 4) = BYTE1(v115);
          }
          v133 = v31[1];
          v134 = v133 >> 4;
          if ( v133 >> 4 )
          {
            if ( v134 == 15 )
            {
              v135 = v23;
            }
            else
            {
              LOBYTE(a10) = *(_BYTE *)(v32 + 6);
              *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v32 + 7);
              v136 = &unk_1C02DA530;
              v137 = (a10 & (unsigned int)v17) >> v267;
              v138 = v279 - v137;
              v139 = v134;
              if ( (int)(v279 - v137) >= 0 )
                v136 = &unk_1C02DA570;
              v140 = v137 << 16;
              v141 = v136[v134];
              v142 = &unk_1C02DA530;
              v143 = v138 * v141;
              v144 = (a10 & (unsigned int)v269) >> v266;
              v145 = v270 - v144;
              if ( (int)(v270 - v144) >= 0 )
                v142 = &unk_1C02DA570;
              v146 = v144 << 16;
              v147 = v142[v134];
              v148 = &unk_1C02DA530;
              v149 = v145 * v147;
              v150 = (a10 & (unsigned int)v21) >> v280;
              if ( (int)(v271 - v150) >= 0 )
                v148 = &unk_1C02DA570;
              v151 = v148[v139];
              v152 = v140 + v143;
              v17 = v268;
              v135 = v269 & ((v149 + v146) >> 16 << v266) | v268 & (HIWORD(v152) << v267) | v21 & (((v150 << 16)
                                                                                                  + (v271 - v150) * v151) >> 16 << v280);
            }
            *(_BYTE *)(v32 + 6) = v135;
            *(_BYTE *)(v32 + 8) = BYTE2(v135);
            *(_BYTE *)(v32 + 7) = BYTE1(v135);
            v133 = v31[1];
          }
          v153 = v133 & 0xF;
          if ( v153 )
          {
            if ( v153 == 15 )
            {
              v154 = v23;
            }
            else
            {
              LOBYTE(a10) = *(_BYTE *)(v32 + 9);
              *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v32 + 10);
              v155 = (a10 & (unsigned int)v17) >> v267;
              v156 = v279 - v155;
              v157 = v153;
              v158 = &unk_1C02DA530;
              if ( (int)(v279 - v155) >= 0 )
                v158 = &unk_1C02DA570;
              v159 = v155 << 16;
              v160 = v158[v153];
              v161 = &unk_1C02DA530;
              v162 = v156 * v160;
              v163 = (a10 & (unsigned int)v269) >> v266;
              v164 = v270 - v163;
              if ( (int)(v270 - v163) >= 0 )
                v161 = &unk_1C02DA570;
              v165 = v163 << 16;
              v166 = v161[v153];
              v167 = &unk_1C02DA530;
              v168 = v164 * v166;
              v169 = (a10 & (unsigned int)v21) >> v280;
              if ( (int)(v271 - v169) >= 0 )
                v167 = &unk_1C02DA570;
              v170 = v167[v157];
              v171 = v168 + v165;
              v17 = v268;
              v154 = v268 & ((v159 + v162) >> 16 << v267) | v269 & (HIWORD(v171) << v266) | v21 & (((v169 << 16)
                                                                                                  + (v271 - v169) * v170) >> 16 << v280);
            }
            *(_BYTE *)(v32 + 9) = v154;
            *(_BYTE *)(v32 + 11) = BYTE2(v154);
            *(_BYTE *)(v32 + 10) = BYTE1(v154);
          }
          v32 += 12LL;
          v31 += 2;
          if ( !--v273 )
            break;
          LOBYTE(v18) = v267;
        }
        v28 = v276;
      }
      v172 = v278;
      if ( v278 )
      {
        v173 = (unsigned __int8)*v31 >> 4;
        if ( v173 )
        {
          if ( v173 == 15 )
          {
            v174 = v23;
          }
          else
          {
            LOWORD(a10) = *(_WORD *)v32;
            BYTE2(a10) = *(_BYTE *)(v32 + 2);
            v175 = (a10 & (unsigned int)v17) >> v267;
            v176 = v279 - v175;
            v177 = v173;
            v178 = &unk_1C02DA530;
            if ( (int)(v279 - v175) >= 0 )
              v178 = &unk_1C02DA570;
            v179 = v175 << 16;
            v180 = v178[v173];
            v181 = &unk_1C02DA530;
            v182 = v176 * v180;
            v183 = (a10 & (unsigned int)v269) >> v266;
            v184 = v270 - v183;
            if ( (int)(v270 - v183) >= 0 )
              v181 = &unk_1C02DA570;
            v185 = v183 << 16;
            v186 = v181[v173];
            v187 = &unk_1C02DA530;
            v188 = v184 * v186;
            v189 = (a10 & (unsigned int)v21) >> v280;
            if ( (int)(v271 - v189) >= 0 )
              v187 = &unk_1C02DA570;
            v190 = v187[v177];
            v191 = v179 + v182;
            v17 = v268;
            v172 = v278;
            v174 = v269 & ((v185 + v188) >> 16 << v266) | v268 & (HIWORD(v191) << v267) | v21 & (((v189 << 16)
                                                                                                + (v271 - v189) * v190) >> 16 << v280);
          }
          *(_BYTE *)v32 = v174;
          *(_BYTE *)(v32 + 2) = BYTE2(v174);
          *(_BYTE *)(v32 + 1) = BYTE1(v174);
        }
        v192 = v172 - 1;
        v277 = v192;
        if ( v192 )
        {
          v193 = *v31 & 0xF;
          if ( v193 )
          {
            if ( v193 == 15 )
            {
              v194 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v32 + 3);
              BYTE2(a10) = *(_BYTE *)(v32 + 5);
              v195 = (a10 & (unsigned int)v17) >> v267;
              v196 = v279 - v195;
              v197 = v193;
              v198 = &unk_1C02DA530;
              if ( (int)(v279 - v195) >= 0 )
                v198 = &unk_1C02DA570;
              v199 = v195 << 16;
              v200 = v198[v193];
              v201 = &unk_1C02DA530;
              v202 = v196 * v200;
              v203 = (a10 & (unsigned int)v269) >> v266;
              v204 = v270 - v203;
              if ( (int)(v270 - v203) >= 0 )
                v201 = &unk_1C02DA570;
              v205 = v203 << 16;
              v206 = v201[v193];
              v207 = &unk_1C02DA530;
              v208 = v204 * v206;
              v209 = (a10 & (unsigned int)v21) >> v280;
              if ( (int)(v271 - v209) >= 0 )
                v207 = &unk_1C02DA570;
              v210 = v207[v197];
              v211 = v205 + v208;
              v17 = v268;
              v192 = v277;
              v194 = v268 & ((v199 + v202) >> 16 << v267) | v269 & (HIWORD(v211) << v266) | v21 & (((v209 << 16)
                                                                                                  + (v271 - v209) * v210) >> 16 << v280);
            }
            *(_BYTE *)(v32 + 3) = v194;
            *(_BYTE *)(v32 + 5) = BYTE2(v194);
            *(_BYTE *)(v32 + 4) = BYTE1(v194);
          }
          if ( v192 != 1 )
          {
            v212 = (unsigned __int8)v31[1] >> 4;
            if ( v212 )
            {
              if ( v212 == 15 )
              {
                v213 = v23;
              }
              else
              {
                LOWORD(a10) = *(_WORD *)(v32 + 6);
                BYTE2(a10) = *(_BYTE *)(v32 + 8);
                v214 = (a10 & (unsigned int)v17) >> v267;
                v215 = v279 - v214;
                v216 = v212;
                v217 = &unk_1C02DA530;
                if ( (int)(v279 - v214) >= 0 )
                  v217 = &unk_1C02DA570;
                v218 = v214 << 16;
                v219 = v217[v212];
                v220 = &unk_1C02DA530;
                v221 = v215 * v219;
                v222 = (a10 & (unsigned int)v269) >> v266;
                v223 = v270 - v222;
                if ( (int)(v270 - v222) >= 0 )
                  v220 = &unk_1C02DA570;
                v224 = v222 << 16;
                v225 = v220[v212];
                v226 = &unk_1C02DA530;
                v227 = v223 * v225;
                v228 = (a10 & (unsigned int)v21) >> v280;
                if ( (int)(v271 - v228) >= 0 )
                  v226 = &unk_1C02DA570;
                v229 = v226[v216];
                v230 = v218 + v221;
                v17 = v268;
                v213 = v269 & ((v224 + v227) >> 16 << v266) | v268 & (HIWORD(v230) << v267) | v21 & (((v228 << 16) + (v271 - v228) * v229) >> 16 << v280);
              }
              *(_BYTE *)(v32 + 6) = v213;
              *(_BYTE *)(v32 + 8) = BYTE2(v213);
              *(_BYTE *)(v32 + 7) = BYTE1(v213);
            }
          }
        }
      }
      result = (unsigned int)(a8 - 1);
      v27 = &v274[v11];
      v28 += a7;
      LOBYTE(v18) = v267;
      v29 = v272;
      v30 = v275;
      a8 = result;
      v274 += v11;
      v276 = v28;
      if ( !(_DWORD)result )
        return result;
    }
    v35 = *v27 & 0xF;
    if ( v35 )
    {
      if ( v35 == 15 )
      {
        v36 = v23;
      }
      else
      {
        LOBYTE(a10) = *(_BYTE *)v28;
        *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v28 + 1);
        v37 = (a10 & (unsigned int)v17) >> v18;
        v38 = v279 - v37;
        v39 = v35;
        v40 = &unk_1C02DA530;
        if ( (int)(v279 - v37) >= 0 )
          v40 = &unk_1C02DA570;
        v41 = v37 << 16;
        v42 = v40[v35];
        v43 = &unk_1C02DA530;
        v18 = v38 * v42;
        v44 = (a10 & (unsigned int)v269) >> v266;
        v45 = v270 - v44;
        if ( (int)(v270 - v44) >= 0 )
          v43 = &unk_1C02DA570;
        v46 = v44 << 16;
        v47 = v43[v35];
        v48 = &unk_1C02DA530;
        v49 = v45 * v47;
        v50 = (a10 & (unsigned int)v21) >> v280;
        if ( (int)(v271 - v50) >= 0 )
          v48 = &unk_1C02DA570;
        v51 = v48[v39];
        v52 = v46 + v49;
        v17 = v268;
        v27 = v274;
        v53 = v269 & (HIWORD(v52) << v266) | v21 & (((v50 << 16) + (v271 - v50) * v51) >> 16 << v280);
        v54 = v41 + v18;
        LOBYTE(v18) = v267;
        v36 = v268 & (HIWORD(v54) << v267) | v53;
      }
      *(_BYTE *)v28 = v36;
      *(_BYTE *)(v28 + 2) = BYTE2(v36);
      *(_BYTE *)(v28 + 1) = BYTE1(v36);
    }
    v32 = v28 + 3;
    v31 = v27 + 1;
LABEL_25:
    v55 = (unsigned __int8)*v31 >> 4;
    if ( v55 )
    {
      if ( v55 == 15 )
      {
        v56 = v23;
      }
      else
      {
        LOBYTE(a10) = *(_BYTE *)v32;
        *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v32 + 1);
        v57 = (a10 & (unsigned int)v17) >> v18;
        v58 = v279 - v57;
        v59 = v55;
        v60 = &unk_1C02DA530;
        if ( (int)(v279 - v57) >= 0 )
          v60 = &unk_1C02DA570;
        v61 = v57 << 16;
        v62 = v60[v55];
        v63 = &unk_1C02DA530;
        v64 = v58 * v62;
        v65 = (a10 & (unsigned int)v269) >> v266;
        v66 = v270 - v65;
        if ( (int)(v270 - v65) >= 0 )
          v63 = &unk_1C02DA570;
        v67 = v65 << 16;
        v68 = v63[v55];
        v69 = &unk_1C02DA530;
        v70 = v66 * v68;
        v71 = (a10 & (unsigned int)v21) >> v280;
        if ( (int)(v271 - v71) >= 0 )
          v69 = &unk_1C02DA570;
        v72 = v69[v59];
        v73 = v61 + v64;
        v17 = v268;
        v56 = v269 & ((v70 + v67) >> 16 << v266) | v268 & (HIWORD(v73) << v267) | v21 & (((v71 << 16)
                                                                                        + (v271 - v71) * v72) >> 16 << v280);
      }
      *(_BYTE *)v32 = v56;
      *(_BYTE *)(v32 + 2) = BYTE2(v56);
      *(_BYTE *)(v32 + 1) = BYTE1(v56);
    }
    LOBYTE(v18) = v267;
    v32 += 3LL;
LABEL_37:
    v74 = *v31 & 0xF;
    if ( v74 )
    {
      if ( v74 == 15 )
      {
        v75 = v23;
      }
      else
      {
        LOBYTE(a10) = *(_BYTE *)v32;
        *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v32 + 1);
        v76 = (a10 & (unsigned int)v17) >> v18;
        v77 = v279 - v76;
        v78 = v74;
        v79 = &unk_1C02DA530;
        if ( (int)(v279 - v76) >= 0 )
          v79 = &unk_1C02DA570;
        v80 = v76 << 16;
        v81 = v79[v74];
        v82 = &unk_1C02DA530;
        v18 = v77 * v81;
        v83 = (a10 & (unsigned int)v269) >> v266;
        v84 = v270 - v83;
        if ( (int)(v270 - v83) >= 0 )
          v82 = &unk_1C02DA570;
        v85 = v83 << 16;
        v86 = v82[v74];
        v87 = &unk_1C02DA530;
        v88 = v84 * v86;
        v89 = (a10 & (unsigned int)v21) >> v280;
        if ( (int)(v271 - v89) >= 0 )
          v87 = &unk_1C02DA570;
        v90 = v87[v78];
        v91 = v88 + v85;
        v17 = v268;
        v92 = v269 & (HIWORD(v91) << v266) | v21 & (((v89 << 16) + (v271 - v89) * v90) >> 16 << v280);
        v93 = v80 + v18;
        LOBYTE(v18) = v267;
        v75 = v268 & (HIWORD(v93) << v267) | v92;
      }
      *(_BYTE *)v32 = v75;
      *(_BYTE *)(v32 + 2) = BYTE2(v75);
      *(_BYTE *)(v32 + 1) = BYTE1(v75);
    }
    v30 = v275;
    v32 += 3LL;
    ++v31;
    goto LABEL_49;
  }
  return result;
}
