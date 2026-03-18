/*
 * XREFs of vSrcTranCopyS4D24 @ 0x1C02460C0
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
  int v42; // r11d
  _DWORD *v43; // rax
  int v44; // r11d
  unsigned int v45; // ebx
  unsigned int v46; // ecx
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
  int v96; // r9d
  _DWORD *v97; // rax
  unsigned int v98; // edi
  unsigned int v99; // ecx
  __int64 v100; // r10
  unsigned int v101; // edi
  int v102; // ebx
  _DWORD *v103; // rax
  unsigned int v104; // r11d
  unsigned int v105; // ecx
  unsigned int v106; // r11d
  int v107; // r8d
  _DWORD *v108; // rax
  int v109; // r8d
  unsigned int v110; // edx
  int v111; // r9d
  unsigned int v112; // eax
  unsigned int v113; // r9d
  unsigned int v114; // eax
  unsigned __int8 v115; // dl
  int v116; // r9d
  unsigned int v117; // edi
  unsigned int v118; // ecx
  __int64 v119; // r10
  _DWORD *v120; // rax
  unsigned int v121; // edi
  int v122; // ebx
  _DWORD *v123; // rax
  unsigned int v124; // r11d
  unsigned int v125; // ecx
  unsigned int v126; // r11d
  int v127; // r8d
  _DWORD *v128; // rax
  int v129; // r8d
  unsigned int v130; // edx
  int v131; // r9d
  unsigned int v132; // eax
  unsigned int v133; // r9d
  unsigned int v134; // eax
  unsigned __int8 v135; // dl
  unsigned __int8 v136; // r8
  unsigned int v137; // r9d
  _DWORD *v138; // rax
  unsigned int v139; // edi
  unsigned int v140; // ecx
  __int64 v141; // r10
  unsigned int v142; // edi
  int v143; // r11d
  _DWORD *v144; // rax
  int v145; // r11d
  unsigned int v146; // ebx
  unsigned int v147; // ecx
  unsigned int v148; // ebx
  int v149; // r8d
  _DWORD *v150; // rax
  int v151; // r8d
  unsigned int v152; // edx
  int v153; // r9d
  unsigned int v154; // eax
  unsigned __int8 v155; // dl
  unsigned int v156; // r9d
  unsigned int v157; // edi
  unsigned int v158; // ecx
  __int64 v159; // r10
  _DWORD *v160; // rax
  unsigned int v161; // edi
  int v162; // ebx
  _DWORD *v163; // rax
  int v164; // ebx
  unsigned int v165; // r11d
  unsigned int v166; // ecx
  unsigned int v167; // r11d
  int v168; // r8d
  _DWORD *v169; // rax
  int v170; // r8d
  unsigned int v171; // edx
  int v172; // r9d
  unsigned int v173; // eax
  int v174; // ecx
  unsigned __int8 v175; // dl
  unsigned int v176; // r9d
  unsigned int v177; // edi
  unsigned int v178; // ecx
  __int64 v179; // r10
  _DWORD *v180; // rax
  unsigned int v181; // edi
  int v182; // r11d
  _DWORD *v183; // rax
  int v184; // r11d
  unsigned int v185; // ebx
  unsigned int v186; // ecx
  unsigned int v187; // ebx
  int v188; // r8d
  _DWORD *v189; // rax
  int v190; // r8d
  unsigned int v191; // edx
  int v192; // r9d
  unsigned int v193; // eax
  int v194; // ecx
  unsigned __int8 v195; // dl
  unsigned int v196; // r9d
  unsigned int v197; // edi
  unsigned int v198; // ecx
  __int64 v199; // r10
  _DWORD *v200; // rax
  unsigned int v201; // edi
  int v202; // r11d
  _DWORD *v203; // rax
  int v204; // r11d
  unsigned int v205; // ebx
  unsigned int v206; // ecx
  unsigned int v207; // ebx
  int v208; // r8d
  _DWORD *v209; // rax
  int v210; // r8d
  unsigned int v211; // edx
  int v212; // r9d
  unsigned int v213; // eax
  unsigned __int8 v214; // dl
  unsigned int v215; // r9d
  unsigned int v216; // edi
  unsigned int v217; // ecx
  __int64 v218; // r10
  _DWORD *v219; // rax
  unsigned int v220; // edi
  int v221; // ebx
  _DWORD *v222; // rax
  int v223; // ebx
  unsigned int v224; // r11d
  unsigned int v225; // ecx
  unsigned int v226; // r11d
  int v227; // r8d
  _DWORD *v228; // rax
  int v229; // r8d
  unsigned int v230; // edx
  int v231; // r9d
  unsigned int v232; // eax
  unsigned __int8 v233; // dl
  int v234; // r9d
  unsigned int v235; // edi
  unsigned int v236; // ecx
  __int64 v237; // r10
  _DWORD *v238; // rax
  int v239; // ebx
  _DWORD *v240; // rax
  int v241; // ebx
  unsigned int v242; // r11d
  unsigned int v243; // ecx
  unsigned int v244; // r11d
  int v245; // r8d
  _DWORD *v246; // rax
  int v247; // r8d
  unsigned int v248; // edx
  int v249; // r9d
  unsigned int v250; // eax
  unsigned int v251; // r9d
  unsigned int v252; // eax
  unsigned __int8 v253; // dl
  _DWORD *v254; // r15
  _DWORD *v255; // rax
  unsigned int v256; // ebx
  unsigned int v257; // ecx
  __int64 v258; // r9
  unsigned int v259; // ebx
  int v260; // r10d
  _DWORD *v261; // rax
  int v262; // r10d
  unsigned int v263; // r11d
  unsigned int v264; // ecx
  unsigned int v265; // r11d
  int v266; // edx
  unsigned int v267; // eax
  char v268; // [rsp+0h] [rbp-68h]
  char v269; // [rsp+4h] [rbp-64h]
  int v270; // [rsp+8h] [rbp-60h]
  int v271; // [rsp+Ch] [rbp-5Ch]
  unsigned int v272; // [rsp+10h] [rbp-58h]
  unsigned int v273; // [rsp+14h] [rbp-54h]
  int v274; // [rsp+18h] [rbp-50h]
  __int64 v275; // [rsp+20h] [rbp-48h]
  _BYTE *v276; // [rsp+70h] [rbp+8h]
  int v277; // [rsp+78h] [rbp+10h]
  __int64 v278; // [rsp+88h] [rbp+20h]
  int v279; // [rsp+90h] [rbp+28h]
  int v280; // [rsp+98h] [rbp+30h]
  unsigned int v281; // [rsp+B0h] [rbp+48h]
  char v282; // [rsp+C0h] [rbp+58h]

  v11 = a3;
  v14 = *(_QWORD *)(a11 + 128);
  if ( !v14 )
    v14 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1800LL);
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
    v270 = *v16;
  }
  else
  {
    v19 = 65280;
    LOBYTE(v20) = 8;
    if ( (v15 & 4) != 0 )
    {
      LOBYTE(v22) = 16;
      v17 = 255;
      v270 = 255;
      v21 = 16711680;
      LOBYTE(v18) = 0;
    }
    else
    {
      LOBYTE(v18) = 16;
      v17 = 16711680;
      v270 = 16711680;
      v21 = 255;
      LOBYTE(v22) = 0;
    }
  }
  v23 = a9;
  v24 = a6 & 0xFFFFFFFC;
  v281 = (a9 & v17) >> v18;
  v282 = v22;
  v269 = v18;
  v271 = v19;
  v25 = (a5 + 3) & 0xFFFFFFFC;
  v272 = (v23 & v19) >> v20;
  v268 = v20;
  v273 = (v23 & v21) >> v22;
  result = (unsigned int)(3 * a5);
  v27 = (_BYTE *)(a2 / 2 + a1);
  v28 = (int)result + a4;
  v276 = v27;
  v278 = v28;
  if ( v25 > (int)(a6 & 0xFFFFFFFC) )
  {
    if ( (a5 & 3) == 1 )
    {
      v233 = *v27 & 0xF;
      if ( v233 )
      {
        if ( v233 == 15 )
        {
          v234 = v23;
        }
        else
        {
          LOWORD(a10) = *(_WORD *)v28;
          BYTE2(a10) = *(_BYTE *)(v28 + 2);
          v235 = (a10 & (unsigned int)v17) >> v18;
          v236 = v281 - v235;
          v237 = v233;
          v238 = &unk_1C02D6F00;
          if ( (int)(v281 - v235) >= 0 )
            v238 = &unk_1C02D6EC0;
          v20 = v235 << 16;
          v239 = v238[v233];
          v240 = &unk_1C02D6F00;
          v241 = v236 * v239;
          v242 = (a10 & (unsigned int)v19) >> v268;
          v243 = v272 - v242;
          if ( (int)(v272 - v242) >= 0 )
            v240 = &unk_1C02D6EC0;
          v244 = v242 << 16;
          v245 = v240[v233];
          v246 = &unk_1C02D6F00;
          v247 = v243 * v245;
          v248 = (a10 & (unsigned int)v21) >> v282;
          if ( (int)(v273 - v248) >= 0 )
            v246 = &unk_1C02D6EC0;
          v249 = v246[v237];
          v250 = v244 + v247;
          v17 = v270;
          v27 = v276;
          v251 = v19 & (HIWORD(v250) << v268) | v21 & (((v248 << 16) + (v273 - v248) * v249) >> 16 << v282);
          v252 = v20 + v241;
          LOBYTE(v20) = v268;
          v234 = v270 & (HIWORD(v252) << v269) | v251;
        }
        *(_BYTE *)v28 = v234;
        *(_BYTE *)(v28 + 2) = BYTE2(v234);
        *(_BYTE *)(v28 + 1) = BYTE1(v234);
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
    v253 = *v27 >> 4;
    if ( v253 )
    {
      if ( v253 != 15 )
      {
        v254 = &unk_1C02D6F00;
        LOBYTE(a10) = *(_BYTE *)v28;
        *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v28 + 1);
        v255 = &unk_1C02D6F00;
        v256 = (a10 & (unsigned int)v17) >> v269;
        v257 = v281 - v256;
        v258 = v253;
        if ( (int)(v281 - v256) >= 0 )
          v255 = &unk_1C02D6EC0;
        v259 = v256 << 16;
        v260 = v255[v253];
        v261 = &unk_1C02D6F00;
        v262 = v257 * v260;
        v263 = (a10 & (unsigned int)v19) >> v20;
        v264 = v272 - v263;
        if ( (int)(v272 - v263) >= 0 )
          v261 = &unk_1C02D6EC0;
        v265 = v263 << 16;
        v266 = v264 * v261[v253];
        v267 = (a10 & (unsigned int)v21) >> v282;
        if ( (int)(v273 - v267) >= 0 )
          v254 = &unk_1C02D6EC0;
        v23 = v19 & ((v266 + v265) >> 16 << v20) | v270 & ((v262 + v259) >> 16 << v269) | v21 & (((v267 << 16)
                                                                                                + (v273 - v267)
                                                                                                * v254[v258]) >> 16 << v282);
      }
      *(_BYTE *)v28 = v23;
      result = v23 >> 8;
      *(_BYTE *)(v28 + 2) = BYTE2(v23);
      *(_BYTE *)(v28 + 1) = BYTE1(v23);
    }
    return result;
  }
  v280 = a6 - v24;
  v29 = v25 - a5;
  v274 = v25 - a5;
  result = (unsigned int)((int)(v24 - v25) / 4);
  v30 = (int)(v24 - v25) / 4;
  v277 = v30;
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
        v275 = (unsigned int)v30;
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
              v97 = &unk_1C02D6F00;
              v98 = (a10 & (unsigned int)v17) >> v18;
              v99 = v281 - v98;
              v100 = v95;
              if ( (int)(v281 - v98) >= 0 )
                v97 = &unk_1C02D6EC0;
              v101 = v98 << 16;
              v102 = v97[v95];
              v103 = &unk_1C02D6F00;
              v18 = v99 * v102;
              v104 = (a10 & (unsigned int)v271) >> v268;
              v105 = v272 - v104;
              if ( (int)(v272 - v104) >= 0 )
                v103 = &unk_1C02D6EC0;
              v106 = v104 << 16;
              v107 = v103[v95];
              v108 = &unk_1C02D6F00;
              v109 = v105 * v107;
              v110 = (a10 & (unsigned int)v21) >> v282;
              if ( (int)(v273 - v110) >= 0 )
                v108 = &unk_1C02D6EC0;
              v111 = v108[v100];
              v112 = v106 + v109;
              v17 = v270;
              v113 = v271 & (HIWORD(v112) << v268) | v21 & (((v110 << 16) + (v273 - v110) * v111) >> 16 << v282);
              v114 = v101 + v18;
              LOBYTE(v18) = v269;
              v96 = v270 & (HIWORD(v114) << v269) | v113;
            }
            *(_BYTE *)v32 = v96;
            *(_BYTE *)(v32 + 2) = BYTE2(v96);
            *(_BYTE *)(v32 + 1) = BYTE1(v96);
            v94 = *v31;
          }
          v115 = v94 & 0xF;
          if ( v115 )
          {
            if ( v115 == 15 )
            {
              v116 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v32 + 3);
              BYTE2(a10) = *(_BYTE *)(v32 + 5);
              v117 = (a10 & (unsigned int)v17) >> v18;
              v118 = v281 - v117;
              v119 = v115;
              v120 = &unk_1C02D6F00;
              if ( (int)(v281 - v117) >= 0 )
                v120 = &unk_1C02D6EC0;
              v121 = v117 << 16;
              v122 = v120[v115];
              v123 = &unk_1C02D6F00;
              v18 = v118 * v122;
              v124 = (a10 & (unsigned int)v271) >> v268;
              v125 = v272 - v124;
              if ( (int)(v272 - v124) >= 0 )
                v123 = &unk_1C02D6EC0;
              v126 = v124 << 16;
              v127 = v123[v115];
              v128 = &unk_1C02D6F00;
              v129 = v125 * v127;
              v130 = (a10 & (unsigned int)v21) >> v282;
              if ( (int)(v273 - v130) >= 0 )
                v128 = &unk_1C02D6EC0;
              v131 = v128[v119];
              v132 = v126 + v129;
              v17 = v270;
              v133 = v271 & (HIWORD(v132) << v268) | v21 & (((v130 << 16) + (v273 - v130) * v131) >> 16 << v282);
              v134 = v121 + v18;
              LOBYTE(v18) = v269;
              v116 = v270 & (HIWORD(v134) << v269) | v133;
            }
            *(_BYTE *)(v32 + 3) = v116;
            *(_BYTE *)(v32 + 5) = BYTE2(v116);
            *(_BYTE *)(v32 + 4) = BYTE1(v116);
          }
          v135 = v31[1];
          v136 = v135 >> 4;
          if ( v135 >> 4 )
          {
            if ( v136 == 15 )
            {
              v137 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v32 + 6);
              BYTE2(a10) = *(_BYTE *)(v32 + 8);
              v138 = &unk_1C02D6F00;
              v139 = (a10 & (unsigned int)v17) >> v18;
              v140 = v281 - v139;
              v141 = v136;
              if ( (int)(v281 - v139) >= 0 )
                v138 = &unk_1C02D6EC0;
              v142 = v139 << 16;
              v143 = v138[v136];
              v144 = &unk_1C02D6F00;
              v145 = v140 * v143;
              v146 = (a10 & (unsigned int)v271) >> v268;
              v147 = v272 - v146;
              if ( (int)(v272 - v146) >= 0 )
                v144 = &unk_1C02D6EC0;
              v148 = v146 << 16;
              v149 = v144[v136];
              v150 = &unk_1C02D6F00;
              v151 = v147 * v149;
              v152 = (a10 & (unsigned int)v21) >> v282;
              if ( (int)(v273 - v152) >= 0 )
                v150 = &unk_1C02D6EC0;
              v153 = v150[v141];
              v154 = v142 + v145;
              v17 = v270;
              v137 = v271 & ((v148 + v151) >> 16 << v268) | v270 & (HIWORD(v154) << v269) | v21 & (((v152 << 16)
                                                                                                  + (v273 - v152) * v153) >> 16 << v282);
            }
            *(_BYTE *)(v32 + 6) = v137;
            *(_BYTE *)(v32 + 8) = BYTE2(v137);
            *(_BYTE *)(v32 + 7) = BYTE1(v137);
            v135 = v31[1];
          }
          v155 = v135 & 0xF;
          if ( v155 )
          {
            if ( v155 == 15 )
            {
              v156 = v23;
            }
            else
            {
              LOBYTE(a10) = *(_BYTE *)(v32 + 9);
              *(_WORD *)((char *)&a10 + 1) = *(_WORD *)(v32 + 10);
              v157 = (a10 & (unsigned int)v17) >> v269;
              v158 = v281 - v157;
              v159 = v155;
              v160 = &unk_1C02D6F00;
              if ( (int)(v281 - v157) >= 0 )
                v160 = &unk_1C02D6EC0;
              v161 = v157 << 16;
              v162 = v160[v155];
              v163 = &unk_1C02D6F00;
              v164 = v158 * v162;
              v165 = (a10 & (unsigned int)v271) >> v268;
              v166 = v272 - v165;
              if ( (int)(v272 - v165) >= 0 )
                v163 = &unk_1C02D6EC0;
              v167 = v165 << 16;
              v168 = v163[v155];
              v169 = &unk_1C02D6F00;
              v170 = v166 * v168;
              v171 = (a10 & (unsigned int)v21) >> v282;
              if ( (int)(v273 - v171) >= 0 )
                v169 = &unk_1C02D6EC0;
              v172 = v169[v159];
              v173 = v167 + v170;
              v17 = v270;
              v156 = v270 & ((v161 + v164) >> 16 << v269) | v271 & (HIWORD(v173) << v268) | v21 & (((v171 << 16)
                                                                                                  + (v273 - v171) * v172) >> 16 << v282);
            }
            *(_BYTE *)(v32 + 9) = v156;
            *(_BYTE *)(v32 + 11) = BYTE2(v156);
            *(_BYTE *)(v32 + 10) = BYTE1(v156);
          }
          v32 += 12LL;
          v31 += 2;
          if ( !--v275 )
            break;
          LOBYTE(v18) = v269;
        }
        v28 = v278;
      }
      v174 = v280;
      if ( v280 )
      {
        v175 = (unsigned __int8)*v31 >> 4;
        if ( v175 )
        {
          if ( v175 == 15 )
          {
            v176 = v23;
          }
          else
          {
            LOWORD(a10) = *(_WORD *)v32;
            BYTE2(a10) = *(_BYTE *)(v32 + 2);
            v177 = (a10 & (unsigned int)v17) >> v269;
            v178 = v281 - v177;
            v179 = v175;
            v180 = &unk_1C02D6F00;
            if ( (int)(v281 - v177) >= 0 )
              v180 = &unk_1C02D6EC0;
            v181 = v177 << 16;
            v182 = v180[v175];
            v183 = &unk_1C02D6F00;
            v184 = v178 * v182;
            v185 = (a10 & (unsigned int)v271) >> v268;
            v186 = v272 - v185;
            if ( (int)(v272 - v185) >= 0 )
              v183 = &unk_1C02D6EC0;
            v187 = v185 << 16;
            v188 = v183[v175];
            v189 = &unk_1C02D6F00;
            v190 = v186 * v188;
            v191 = (a10 & (unsigned int)v21) >> v282;
            if ( (int)(v273 - v191) >= 0 )
              v189 = &unk_1C02D6EC0;
            v192 = v189[v179];
            v193 = v184 + v181;
            v17 = v270;
            v174 = v280;
            v176 = v271 & ((v187 + v190) >> 16 << v268) | v270 & (HIWORD(v193) << v269) | v21 & (((v191 << 16)
                                                                                                + (v273 - v191) * v192) >> 16 << v282);
          }
          *(_BYTE *)v32 = v176;
          *(_BYTE *)(v32 + 2) = BYTE2(v176);
          *(_BYTE *)(v32 + 1) = BYTE1(v176);
        }
        v194 = v174 - 1;
        v279 = v194;
        if ( v194 )
        {
          v195 = *v31 & 0xF;
          if ( v195 )
          {
            if ( v195 == 15 )
            {
              v196 = v23;
            }
            else
            {
              LOWORD(a10) = *(_WORD *)(v32 + 3);
              BYTE2(a10) = *(_BYTE *)(v32 + 5);
              v197 = (a10 & (unsigned int)v17) >> v269;
              v198 = v281 - v197;
              v199 = v195;
              v200 = &unk_1C02D6F00;
              if ( (int)(v281 - v197) >= 0 )
                v200 = &unk_1C02D6EC0;
              v201 = v197 << 16;
              v202 = v200[v195];
              v203 = &unk_1C02D6F00;
              v204 = v198 * v202;
              v205 = (a10 & (unsigned int)v271) >> v268;
              v206 = v272 - v205;
              if ( (int)(v272 - v205) >= 0 )
                v203 = &unk_1C02D6EC0;
              v207 = v205 << 16;
              v208 = v203[v195];
              v209 = &unk_1C02D6F00;
              v210 = v206 * v208;
              v211 = (a10 & (unsigned int)v21) >> v282;
              if ( (int)(v273 - v211) >= 0 )
                v209 = &unk_1C02D6EC0;
              v212 = v209[v199];
              v213 = v201 + v204;
              v17 = v270;
              v194 = v279;
              v196 = v271 & ((v210 + v207) >> 16 << v268) | v270 & (HIWORD(v213) << v269) | v21 & (((v211 << 16)
                                                                                                  + (v273 - v211) * v212) >> 16 << v282);
            }
            *(_BYTE *)(v32 + 3) = v196;
            *(_BYTE *)(v32 + 5) = BYTE2(v196);
            *(_BYTE *)(v32 + 4) = BYTE1(v196);
          }
          if ( v194 != 1 )
          {
            v214 = (unsigned __int8)v31[1] >> 4;
            if ( v214 )
            {
              if ( v214 == 15 )
              {
                v215 = v23;
              }
              else
              {
                LOWORD(a10) = *(_WORD *)(v32 + 6);
                BYTE2(a10) = *(_BYTE *)(v32 + 8);
                v216 = (a10 & (unsigned int)v17) >> v269;
                v217 = v281 - v216;
                v218 = v214;
                v219 = &unk_1C02D6F00;
                if ( (int)(v281 - v216) >= 0 )
                  v219 = &unk_1C02D6EC0;
                v220 = v216 << 16;
                v221 = v219[v214];
                v222 = &unk_1C02D6F00;
                v223 = v217 * v221;
                v224 = (a10 & (unsigned int)v271) >> v268;
                v225 = v272 - v224;
                if ( (int)(v272 - v224) >= 0 )
                  v222 = &unk_1C02D6EC0;
                v226 = v224 << 16;
                v227 = v222[v214];
                v228 = &unk_1C02D6F00;
                v229 = v225 * v227;
                v230 = (a10 & (unsigned int)v21) >> v282;
                if ( (int)(v273 - v230) >= 0 )
                  v228 = &unk_1C02D6EC0;
                v231 = v228[v218];
                v232 = v229 + v226;
                v17 = v270;
                v215 = v270 & ((v220 + v223) >> 16 << v269) | v271 & (HIWORD(v232) << v268) | v21 & (((v230 << 16) + (v273 - v230) * v231) >> 16 << v282);
              }
              *(_BYTE *)(v32 + 6) = v215;
              *(_BYTE *)(v32 + 8) = BYTE2(v215);
              *(_BYTE *)(v32 + 7) = BYTE1(v215);
            }
          }
        }
      }
      result = (unsigned int)(a8 - 1);
      v27 = &v276[v11];
      v28 += a7;
      LOBYTE(v18) = v269;
      v29 = v274;
      v30 = v277;
      a8 = result;
      v276 += v11;
      v278 = v28;
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
        v38 = v281 - v37;
        v39 = v35;
        v40 = &unk_1C02D6F00;
        if ( (int)(v281 - v37) >= 0 )
          v40 = &unk_1C02D6EC0;
        v41 = v37 << 16;
        v42 = v40[v35];
        v43 = &unk_1C02D6F00;
        v44 = v38 * v42;
        v45 = (a10 & (unsigned int)v271) >> v268;
        v46 = v272 - v45;
        if ( (int)(v272 - v45) >= 0 )
          v43 = &unk_1C02D6EC0;
        v18 = v45 << 16;
        v47 = v43[v35];
        v48 = &unk_1C02D6F00;
        v49 = v46 * v47;
        v50 = (a10 & (unsigned int)v21) >> v282;
        if ( (int)(v273 - v50) >= 0 )
          v48 = &unk_1C02D6EC0;
        v51 = v48[v39];
        v52 = v44 + v41;
        v17 = v270;
        v53 = v270 & (HIWORD(v52) << v269) | v21 & (((v50 << 16) + (v273 - v50) * v51) >> 16 << v282);
        v54 = v49 + v18;
        v27 = v276;
        LOBYTE(v18) = v269;
        v36 = v271 & (HIWORD(v54) << v268) | v53;
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
        v58 = v281 - v57;
        v59 = v55;
        v60 = &unk_1C02D6F00;
        if ( (int)(v281 - v57) >= 0 )
          v60 = &unk_1C02D6EC0;
        v61 = v57 << 16;
        v62 = v60[v55];
        v63 = &unk_1C02D6F00;
        v64 = v58 * v62;
        v65 = (a10 & (unsigned int)v271) >> v268;
        v66 = v272 - v65;
        if ( (int)(v272 - v65) >= 0 )
          v63 = &unk_1C02D6EC0;
        v67 = v65 << 16;
        v68 = v63[v55];
        v69 = &unk_1C02D6F00;
        v70 = v66 * v68;
        v71 = (a10 & (unsigned int)v21) >> v282;
        if ( (int)(v273 - v71) >= 0 )
          v69 = &unk_1C02D6EC0;
        v72 = v69[v59];
        v73 = v61 + v64;
        v17 = v270;
        v56 = v271 & ((v67 + v70) >> 16 << v268) | v270 & (HIWORD(v73) << v269) | v21 & (((v71 << 16)
                                                                                        + (v273 - v71) * v72) >> 16 << v282);
      }
      *(_BYTE *)v32 = v56;
      *(_BYTE *)(v32 + 2) = BYTE2(v56);
      *(_BYTE *)(v32 + 1) = BYTE1(v56);
    }
    LOBYTE(v18) = v269;
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
        v77 = v281 - v76;
        v78 = v74;
        v79 = &unk_1C02D6F00;
        if ( (int)(v281 - v76) >= 0 )
          v79 = &unk_1C02D6EC0;
        v80 = v76 << 16;
        v81 = v79[v74];
        v82 = &unk_1C02D6F00;
        v18 = v77 * v81;
        v83 = (a10 & (unsigned int)v271) >> v268;
        v84 = v272 - v83;
        if ( (int)(v272 - v83) >= 0 )
          v82 = &unk_1C02D6EC0;
        v85 = v83 << 16;
        v86 = v82[v74];
        v87 = &unk_1C02D6F00;
        v88 = v84 * v86;
        v89 = (a10 & (unsigned int)v21) >> v282;
        if ( (int)(v273 - v89) >= 0 )
          v87 = &unk_1C02D6EC0;
        v90 = v87[v78];
        v91 = v85 + v88;
        v17 = v270;
        v92 = v271 & (HIWORD(v91) << v268) | v21 & (((v89 << 16) + (v273 - v89) * v90) >> 16 << v282);
        v93 = v80 + v18;
        LOBYTE(v18) = v269;
        v75 = v270 & (HIWORD(v93) << v269) | v92;
      }
      *(_BYTE *)v32 = v75;
      *(_BYTE *)(v32 + 2) = BYTE2(v75);
      *(_BYTE *)(v32 + 1) = BYTE1(v75);
    }
    v30 = v277;
    v32 += 3LL;
    ++v31;
    goto LABEL_49;
  }
  return result;
}
