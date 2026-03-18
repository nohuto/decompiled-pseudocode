/*
 * XREFs of CreateHalftoneBrushPat @ 0x1C0230298
 * Callers:
 *     HT_CreateHalftoneBrush @ 0x1C022EBD8 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     CachedHalftonePattern @ 0x1C00D10CC (CachedHalftonePattern.c)
 *     ComputeRGBLUTAA @ 0x1C00D12C0 (ComputeRGBLUTAA.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ComputeBGRMappingTable @ 0x1C022F1B4 (ComputeBGRMappingTable.c)
 */

__int64 __fastcall CreateHalftoneBrushPat(__int64 a1, __int128 *a2, __int64 a3, _BYTE *a4, int a5)
{
  __int64 v9; // r13
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int128 v12; // xmm0
  unsigned int v13; // r14d
  __int64 v14; // xmm1_8
  int v15; // ebx
  unsigned int v16; // edi
  __int64 v17; // rcx
  unsigned int v18; // r15d
  HSEMAPHORE v19; // rcx
  unsigned int v20; // r13d
  unsigned int v21; // r12d
  unsigned int v22; // ecx
  unsigned int v23; // r12d
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int16 *v26; // rax
  unsigned int v27; // r9d
  unsigned __int16 *v28; // r8
  _BYTE *v29; // r10
  unsigned int v30; // r11d
  __int64 v31; // r14
  unsigned __int16 *v32; // r8
  unsigned int v33; // edx
  char v34; // r12
  unsigned int v35; // ecx
  unsigned int v36; // r12d
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int16 *v39; // rax
  unsigned int v40; // r9d
  unsigned __int16 *v41; // r8
  _BYTE *v42; // r10
  unsigned int v43; // r11d
  unsigned __int16 *v44; // r8
  char v45; // dl
  unsigned int v46; // ecx
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned __int16 *v49; // rax
  unsigned int v50; // r9d
  unsigned __int16 *v51; // r8
  _BYTE *v52; // r10
  unsigned int v53; // r11d
  __int64 v54; // r14
  unsigned __int16 *v55; // r8
  unsigned int v56; // edx
  char v57; // r12
  unsigned int v58; // ecx
  unsigned int v59; // r12d
  unsigned int v60; // r13d
  char *v61; // r15
  unsigned int v62; // r14d
  unsigned int v63; // eax
  __int64 v64; // rbx
  const void *v65; // r14
  unsigned int i; // edi
  char v67; // r10
  __int64 v68; // rcx
  unsigned int v69; // eax
  __int64 v70; // rdx
  int v71; // r14d
  unsigned __int16 *v72; // r11
  unsigned int v73; // eax
  unsigned __int16 *v74; // r8
  unsigned int v75; // ecx
  unsigned __int16 *v76; // rdi
  unsigned int v77; // esi
  int v78; // eax
  unsigned int v79; // r11d
  char v80; // r9
  unsigned int v81; // r10d
  char v82; // r8
  unsigned int v83; // ecx
  int v84; // eax
  _BYTE *v85; // rdx
  unsigned int v86; // r8d
  char v87; // r9
  __int64 v88; // rcx
  unsigned int v89; // r13d
  __int64 v90; // rdx
  int v91; // r14d
  unsigned __int16 *v92; // rax
  unsigned int v93; // r13d
  unsigned __int16 *v94; // r10
  _BYTE *v95; // r15
  unsigned int v96; // r11d
  char v97; // dl
  int v98; // eax
  unsigned int v99; // ecx
  int v100; // r11d
  int v101; // eax
  unsigned __int16 *v102; // r10
  unsigned int v103; // edx
  __int64 v104; // rax
  __int64 v105; // rcx
  unsigned __int16 *v106; // r11
  unsigned __int16 *v107; // r8
  _BYTE *v108; // r9
  unsigned int v109; // r10d
  __int64 v110; // r14
  unsigned __int16 *v111; // r8
  int v112; // eax
  unsigned __int64 v113; // rdx
  __int64 v114; // rax
  unsigned int v115; // r10d
  __int64 v116; // rcx
  int v117; // r14d
  unsigned __int16 *v118; // r11
  unsigned int v119; // r10d
  unsigned __int16 *v120; // r9
  unsigned __int64 v121; // rdx
  _BYTE *v122; // r14
  unsigned __int64 v123; // r11
  unsigned __int64 v124; // rdi
  unsigned __int64 v125; // rsi
  int v126; // eax
  unsigned __int64 v127; // r8
  __int64 v128; // rax
  __int64 v129; // rcx
  unsigned __int16 *v130; // r11
  unsigned __int16 *v131; // r8
  _BYTE *v132; // r9
  unsigned int v133; // r10d
  unsigned __int16 *v134; // r8
  int v135; // eax
  unsigned __int64 v136; // rdx
  __int64 v137; // rcx
  unsigned int v138; // r11d
  __int64 v139; // rdx
  int v140; // r14d
  unsigned __int16 *v141; // rax
  unsigned int v142; // r9d
  unsigned int v143; // r11d
  unsigned __int16 *v144; // r10
  unsigned int v145; // r8d
  _DWORD *v146; // r11
  unsigned int v147; // edx
  int v148; // eax
  int v149; // ecx
  int v151; // r10d
  __int64 v152; // r15
  unsigned __int16 *v153; // r11
  unsigned __int16 *v154; // rdx
  _BYTE *v155; // r8
  unsigned int v156; // r9d
  unsigned __int16 *v157; // rdx
  int v158; // eax
  __int64 v159; // rax
  __int64 v160; // rcx
  unsigned __int16 *v161; // r11
  unsigned __int16 *v162; // r8
  _BYTE *v163; // r9
  unsigned int v164; // r10d
  __int64 v165; // r14
  unsigned __int16 *v166; // r8
  int v167; // eax
  unsigned __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rdx
  unsigned __int64 v171; // rax
  unsigned int v172; // r9d
  unsigned __int64 v173; // r8
  _BYTE *v174; // r10
  unsigned int v175; // r11d
  unsigned __int16 *v176; // r8
  int v177; // eax
  char v178; // dl
  unsigned int v179; // ecx
  unsigned int v180; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v181; // [rsp+3Ch] [rbp-C4h]
  unsigned int v182; // [rsp+40h] [rbp-C0h]
  _BYTE *v183; // [rsp+48h] [rbp-B8h]
  __int128 v184; // [rsp+50h] [rbp-B0h]
  __int64 v185; // [rsp+60h] [rbp-A0h]
  __int64 v186; // [rsp+68h] [rbp-98h]
  _BYTE *v187; // [rsp+70h] [rbp-90h]
  unsigned int v188; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v189; // [rsp+80h] [rbp-80h] BYREF
  int v190; // [rsp+98h] [rbp-68h]
  unsigned __int8 v191; // [rsp+A5h] [rbp-5Bh]
  unsigned __int8 v192; // [rsp+A6h] [rbp-5Ah]
  unsigned __int8 v193; // [rsp+A7h] [rbp-59h]
  int v194; // [rsp+D0h] [rbp-30h]
  int v195; // [rsp+D4h] [rbp-2Ch]
  int v196; // [rsp+D8h] [rbp-28h]
  unsigned int v197; // [rsp+DCh] [rbp-24h]
  unsigned int v198; // [rsp+E0h] [rbp-20h]
  unsigned __int16 *v199; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v200; // [rsp+F0h] [rbp-10h]
  unsigned int v201; // [rsp+F8h] [rbp-8h]
  unsigned int v202; // [rsp+FCh] [rbp-4h]

  v187 = (_BYTE *)a3;
  v183 = (_BYTE *)a1;
  v9 = 0LL;
  ComputeRGBLUTAA(a1, (__int128 *)a3, (_DWORD *)(a1 + 3956));
  v10 = -10005;
  if ( (unsigned int)ComputeBGRMappingTable(v11, a3, a2, (__int64)&v180) == 1 )
  {
    v198 = CachedHalftonePattern(a1, a3, (__int64)&v189, 0, 0, 0);
    v10 = v198;
    if ( (int)v198 > 0 )
    {
      v12 = *(_OWORD *)(a1 + 3960);
      v13 = *(unsigned __int16 *)(a1 + 166);
      v14 = *(_QWORD *)(a1 + 3976);
      v15 = *(_DWORD *)(a3 + 56);
      v16 = *(unsigned __int16 *)(a1 + 170);
      v181 = v13;
      v185 = v14;
      v184 = v12;
      if ( (v15 & 0x400000) != 0 )
        v9 = (__int64)*(&p8BPPXlate + BYTE12(v184));
      v17 = a1 + 548;
      v182 = v15 & 0x2000000;
      if ( (v15 & 0x2000000) == 0 )
        v17 = v9;
      v186 = v17;
      v18 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)v180 + 3984);
      v19 = (HSEMAPHORE)*((_QWORD *)v183 + 1);
      v20 = *(_DWORD *)(a1 + 4LL * ((unsigned int)BYTE1(v180) + 256) + 3984);
      v21 = *(_DWORD *)(a1 + 4LL * ((unsigned int)BYTE2(v180) + 512) + 3984);
      v180 = v21;
      EngReleaseSemaphore(v19);
      v22 = (unsigned __int8)v187[31];
      if ( v22 > 0xF9 )
      {
        if ( v22 == 250 )
        {
          if ( v182 )
          {
            if ( v16 )
            {
              v159 = v190;
              v160 = a5;
              v161 = v189;
              do
              {
                v162 = v161;
                v163 = a4;
                v161 = (unsigned __int16 *)((char *)v161 + v159);
                a4 += v160;
                --v16;
                v164 = v13;
                if ( v13 )
                {
                  v165 = v186;
                  v166 = v162 + 1;
                  do
                  {
                    v167 = *v166;
                    v168 = (v18 - *(v166 - 1)) & 0x30000 | (unsigned __int64)((v21 - v166[1]) & 0xE00000);
                    v166 += 3;
                    *v163++ = *(_BYTE *)((((v20 - v167) & 0x1C0000 | v168) >> 16) + v165);
                    --v164;
                  }
                  while ( v164 );
                  v13 = v181;
                  v159 = v190;
                  v160 = a5;
                }
              }
              while ( v16 );
            }
          }
          else if ( v16 )
          {
            v169 = v190;
            v170 = a5;
            v171 = (unsigned __int64)v189;
            v172 = v180;
            do
            {
              v173 = v171;
              v174 = a4;
              v171 += v169;
              a4 += v170;
              --v16;
              v200 = v171;
              v175 = v13;
              if ( v13 )
              {
                v176 = (unsigned __int16 *)(v173 + 2);
                do
                {
                  v177 = *v176;
                  v178 = ((v172 - v176[1]) >> 16) & 0xE0;
                  v179 = (v18 - *(v176 - 1)) >> 16;
                  v176 += 3;
                  *v174++ = ((v20 - v177) >> 16) & 0x1C | v179 & 3 | v178;
                  --v175;
                }
                while ( v175 );
                v171 = v200;
                v169 = v190;
                v170 = a5;
              }
            }
            while ( v16 );
          }
        }
        else if ( v22 == 251 )
        {
          v151 = dwGrayIdxHB[(unsigned __int8)((unsigned __int16)(v18 + v21 + v20) >> 8)]
               + (unsigned __int16)wGrayIdxLB[(unsigned __int8)(v18 + v21 + v20)];
          if ( v16 )
          {
            v152 = v190;
            v153 = v189;
            do
            {
              v154 = v153;
              v155 = a4;
              v153 = (unsigned __int16 *)((char *)v153 + v152);
              a4 += a5;
              --v16;
              v156 = v13;
              if ( v13 )
              {
                v157 = v154 + 1;
                do
                {
                  v158 = *v157;
                  v157 += 3;
                  *v155++ = BYTE13(v184) ^ ((unsigned int)(v151 - v158) >> 12);
                  --v156;
                }
                while ( v156 );
              }
            }
            while ( v16 );
          }
        }
        else if ( v22 <= 0xFD )
        {
          if ( v16 )
          {
            v137 = v190;
            v138 = v13;
            v139 = a5;
            v140 = v13 & 1;
            v141 = v189;
            v142 = v180;
            v143 = v138 >> 1;
            LODWORD(v186) = v143;
            do
            {
              v144 = v141;
              v183 = a4;
              a4 += v139;
              --v16;
              v200 = (unsigned __int64)v141 + v137;
              v145 = v143;
              if ( v143 )
              {
                v146 = v183;
                do
                {
                  v147 = DWORD2(v184) & (v142 - v144[5]) | (((unsigned int)v184 & (v18 - *v144) | DWORD1(v184) & (v20 - v144[1]) | DWORD2(v184) & (v142 - v144[2])) >> 16);
                  v148 = v144[3];
                  v149 = DWORD1(v184) & (v20 - v144[4]);
                  v144 += 6;
                  *v146++ = HIDWORD(v184) ^ (v184 & (v18 - v148) | v149 | v147);
                  --v145;
                }
                while ( v145 );
                v183 = v146;
                v143 = v186;
              }
              if ( v140 )
                *(_WORD *)v183 = HIWORD(v184) ^ (WORD1(v184) & ((v18 - *v144) >> 16) | WORD3(v184) & ((v20 - v144[1]) >> 16) | WORD5(v184) & ((v142 - v144[2]) >> 16));
              v141 = (unsigned __int16 *)v200;
              v137 = v190;
              v139 = a5;
            }
            while ( v16 );
          }
        }
        else if ( v22 == 254 )
        {
          if ( v16 )
          {
            v128 = v190;
            v129 = a5;
            v130 = v189;
            do
            {
              v131 = v130;
              v132 = a4;
              v130 = (unsigned __int16 *)((char *)v130 + v128);
              a4 += v129;
              --v16;
              v133 = v13;
              if ( v13 )
              {
                v134 = v131 + 1;
                do
                {
                  v135 = *v134;
                  v136 = (v21 - v134[1]) & 0x70000 | (unsigned __int64)((v18 - *(v134 - 1)) & 0x1C00000);
                  v134 += 3;
                  *v132++ = VGA256Xlate[((v20 - v135) & 0x380000 | v136) >> 16];
                  --v133;
                }
                while ( v133 );
                v13 = v181;
                v128 = v190;
                v129 = a5;
              }
            }
            while ( v16 );
          }
        }
        else if ( v16 )
        {
          v114 = v190;
          v115 = v13;
          v116 = a5;
          v117 = v13 & 1;
          v118 = v189;
          v119 = v115 >> 1;
          v188 = v119;
          v181 = v117;
          do
          {
            --v16;
            v187 = a4;
            a4 += v116;
            v180 = v16;
            v120 = v118;
            v183 = a4;
            v118 = (unsigned __int16 *)((char *)v118 + v114);
            v200 = (unsigned __int64)v118;
            if ( v119 )
            {
              v121 = DWORD1(v184);
              v122 = v187;
              v123 = HIDWORD(v185);
              v124 = (unsigned int)v185;
              v125 = HIDWORD(v184);
              do
              {
                v126 = *v120;
                v127 = (v123 >> 16) & ((unsigned __int64)(v21 - v120[5]) >> 16) | (v124 >> 16) & ((unsigned __int64)(v20 - v120[4]) >> 16) | (v125 >> 16) & ((unsigned __int64)(v18 - v120[3]) >> 16) | ((unsigned __int64)DWORD2(v184) >> 16) & ((unsigned __int64)(v21 - v120[2]) >> 16) | (v121 >> 16) & ((unsigned __int64)(v20 - v120[1]) >> 16);
                v120 += 6;
                v121 = DWORD1(v184);
                *v122++ = VGA16Xlate[(((unsigned __int64)(unsigned int)v184 >> 16) & ((unsigned __int64)(v18 - v126) >> 16) | v127) ^ 0x77];
                --v119;
              }
              while ( v119 );
              v16 = v180;
              a4 = v183;
              v119 = v188;
              v118 = (unsigned __int16 *)v200;
              v187 = v122;
              v117 = v181;
            }
            if ( v117 )
              *v187 = VGA16Xlate[(((unsigned int)v184 & (v18 - *v120) | DWORD1(v184) & (v20 - v120[1]) | (unsigned __int64)(DWORD2(v184) & (v21 - v120[2]))) ^ 0x700000) >> 16];
            v114 = v190;
            v116 = a5;
          }
          while ( v16 );
        }
        return v198;
      }
      if ( v22 >= 0xF8 )
      {
        if ( v16 )
        {
          v104 = v190;
          v105 = a5;
          v106 = v189;
          do
          {
            v107 = v106;
            v108 = a4;
            v106 = (unsigned __int16 *)((char *)v106 + v104);
            a4 += v105;
            --v16;
            v109 = v13;
            if ( v13 )
            {
              v110 = v186;
              v111 = v107 + 1;
              do
              {
                v112 = *v111;
                v113 = (v18 - *(v111 - 1)) & 0x70000 | (unsigned __int64)((v21 - v111[1]) & 0x1C00000);
                v111 += 3;
                *v108++ = *(_BYTE *)((((v20 - v112) & 0x380000 | v113) >> 16) + v110);
                --v109;
              }
              while ( v109 );
              v13 = v181;
              v104 = v190;
              v105 = a5;
            }
          }
          while ( v16 );
        }
        return v198;
      }
      if ( v22 == 1 )
      {
        v86 = ((v18 + v21 + v20) ^ 0xFFF0) >> 4;
        v87 = -((v15 & 0x4000) == 0);
        if ( v16 )
        {
          v88 = v190;
          v89 = v13;
          v90 = a5;
          v91 = v13 & 7;
          v92 = v189;
          v93 = v89 >> 3;
          do
          {
            v94 = v92;
            v183 = a4;
            v95 = a4;
            a4 += v90;
            v200 = (unsigned __int64)v92 + v88;
            --v16;
            v96 = v93;
            if ( v93 )
            {
              do
              {
                v97 = ((v86 - v94[7]) >> 16) & 0x20 | ((v86 - v94[16]) >> 16) & 4 | ((v86 - v94[19]) >> 16) & 2 | ((v86 - v94[4]) >> 16) & 0x40 | ((v86 - v94[22]) >> 16) & 1 | ((v86 - v94[1]) >> 16) & 0x80;
                v98 = v94[10];
                v99 = (v86 - v94[13]) >> 16;
                v94 += 24;
                *v95++ = v87 ^ (((v86 - v98) >> 16) & 0x10 | v99 & 8 | v97);
                --v96;
              }
              while ( v96 );
              v183 = v95;
            }
            v100 = v91;
            if ( v91 )
            {
              v101 = 0;
              v102 = v94 + 1;
              do
              {
                v103 = v86 - *v102;
                v102 += 3;
                v101 = (2 * v101) | v103 & 0x10000;
                --v100;
              }
              while ( v100 );
              v181 = v101;
              BYTE2(v181) = v87 ^ BYTE2(v101);
              *v183 = v181 << (8 - v91) >> 16;
            }
            v92 = (unsigned __int16 *)v200;
            v88 = v190;
            v90 = a5;
          }
          while ( v16 );
        }
        return v198;
      }
      if ( v22 == 2 )
      {
        v67 = (v15 & 0x4000) == 0 ? 0x77 : 0;
        if ( v16 )
        {
          v68 = v190;
          v69 = v13;
          v70 = a5;
          v71 = v13 & 1;
          v72 = v189;
          v73 = v69 >> 1;
          LODWORD(v186) = v73;
          v181 = v71;
          do
          {
            --v16;
            v187 = a4;
            a4 += v70;
            v180 = v16;
            v74 = v72;
            v183 = a4;
            v72 = (unsigned __int16 *)((char *)v72 + v68);
            v75 = v73;
            v200 = (unsigned __int64)v72;
            if ( v73 )
            {
              v76 = v74;
              v182 = WORD1(v184);
              v77 = WORD1(v184);
              v195 = HIWORD(HIDWORD(v184));
              v194 = HIWORD(DWORD1(v184));
              v197 = WORD1(v185);
              v196 = HIWORD(HIDWORD(v185));
              v188 = HIWORD(DWORD2(v184));
              do
              {
                v78 = v76[5];
                v182 = v75 - 1;
                v79 = v21 - v76[2];
                v80 = v196 & ((v21 - v78) >> 16);
                v81 = v20 - v76[1];
                v82 = v197 & ((v20 - v76[4]) >> 16);
                v83 = v18 - v76[3];
                v84 = *v76;
                v76 += 6;
                LOBYTE(v81) = v80 | v195 & BYTE2(v83) | v194 & BYTE2(v81);
                v75 = v182;
                v85 = v187;
                *v187 = ((v15 & 0x4000) == 0 ? 0x77 : 0) ^ (v188 & BYTE2(v79) | v77 & ((v18 - v84) >> 16) | v82 | v81);
                v187 = v85 + 1;
              }
              while ( v75 );
              a4 = v183;
              v71 = v181;
              v67 = (v15 & 0x4000) == 0 ? 0x77 : 0;
              v72 = (unsigned __int16 *)v200;
              v199 = v76;
              v74 = v76;
              v16 = v180;
            }
            if ( v71 )
              *v187 = v67 ^ (((v18 - *v74) >> 16) & BYTE2(v184) | ((v20 - v74[1]) >> 16) & BYTE6(v184) | ((v21 - v74[2]) >> 16) & BYTE10(v184));
            v73 = v186;
            v68 = v190;
            v70 = a5;
          }
          while ( v16 );
        }
        return v198;
      }
      v23 = 4;
      if ( v22 > 4 )
      {
        if ( v22 <= 6 )
        {
          a4[v191] = ~(_BYTE)v180;
          a4[v192] = ~(_BYTE)v20;
          a4[v193] = ~(_BYTE)v18;
          if ( (_BYTE)v22 == 5 )
          {
            v23 = 3;
            v60 = 3 * v13;
          }
          else
          {
            a4[3] = 0;
            v60 = 4 * v13;
          }
          v61 = &a4[v23];
          v62 = v60 - v23;
          if ( v60 != v23 )
          {
            do
            {
              v63 = v62;
              if ( v23 <= v62 )
                v63 = v23;
              v64 = v63;
              memmove(v61, a4, v63);
              v61 += v64;
              v23 += v64;
              v62 -= v64;
            }
            while ( v62 );
          }
          v65 = a4;
          for ( i = v16 - 1; i; --i )
          {
            a4 += a5;
            memmove(a4, v65, v60);
          }
          return v198;
        }
        if ( v22 > 0xF4 )
        {
          if ( v22 <= 0xF6 )
          {
            if ( v16 )
            {
              v47 = v190;
              v48 = a5;
              v49 = v189;
              v50 = v180;
              do
              {
                v51 = v49;
                v52 = a4;
                v49 = (unsigned __int16 *)((char *)v49 + v47);
                a4 += v48;
                --v16;
                v183 = v49;
                v53 = v13;
                if ( v13 )
                {
                  v54 = v186;
                  v55 = v51 + 1;
                  v200 = __PAIR64__(v20, v50);
                  v202 = v18;
                  v201 = v18;
                  do
                  {
                    v56 = v55[1];
                    v57 = BYTE14(v184);
                    --v53;
                    v182 = v56;
                    v58 = *((_DWORD *)&v200
                          + ((v50 >= v20) | (unsigned __int64)(*((_DWORD *)&v200 + (v50 >= v20)) >= v18 ? 2 : 0))) >> 21;
                    if ( v58 < v56 )
                    {
                      v180 = *v55;
                      if ( v58 < v180 )
                      {
                        v59 = *(v55 - 1);
                        if ( v58 >= v59 )
                          v57 = BYTE14(v184);
                        else
                          v57 = *(_BYTE *)((((unsigned __int16)(v18 - v59) & (unsigned __int16)(v59 - v184) & 0x7000 | (v20 - v180) & (v180 - DWORD1(v184)) & 0x38000 | (unsigned __int64)((v50 - v182) & (v56 - DWORD2(v184)) & 0x1C0000)) >> 12)
                                         + v54);
                      }
                    }
                    *v52 = v57;
                    v55 += 3;
                    ++v52;
                  }
                  while ( v53 );
                  v13 = v181;
                  v49 = (unsigned __int16 *)v183;
                  v47 = v190;
                  v48 = a5;
                }
              }
              while ( v16 );
            }
          }
          else if ( v182 )
          {
            if ( v16 )
            {
              v24 = v190;
              v25 = a5;
              v26 = v189;
              v27 = v180;
              do
              {
                v28 = v26;
                v29 = a4;
                v26 = (unsigned __int16 *)((char *)v26 + v24);
                a4 += v25;
                --v16;
                v183 = v26;
                v30 = v13;
                if ( v13 )
                {
                  v31 = v186;
                  v32 = v28 + 1;
                  v200 = __PAIR64__(v20, v27);
                  v202 = v18;
                  v201 = v18;
                  do
                  {
                    v33 = v32[1];
                    v34 = BYTE14(v184);
                    --v30;
                    v182 = v33;
                    v35 = *((_DWORD *)&v200
                          + ((v27 >= v20) | (unsigned __int64)(*((_DWORD *)&v200 + (v27 >= v20)) >= v18 ? 2 : 0))) >> 21;
                    if ( v35 < v33 )
                    {
                      v180 = *v32;
                      if ( v35 < v180 )
                      {
                        v36 = *(v32 - 1);
                        if ( v35 >= v36 )
                          v34 = BYTE14(v184);
                        else
                          v34 = *(_BYTE *)((((unsigned __int16)(v18 - v36) & (unsigned __int16)(v36 - v184) & 0x3000 | (v20 - v180) & (v180 - DWORD1(v184)) & 0x1C000 | (unsigned __int64)((v27 - v182) & (v33 - DWORD2(v184)) & 0xE0000)) >> 12)
                                         + v31);
                      }
                    }
                    *v29 = v34;
                    v32 += 3;
                    ++v29;
                  }
                  while ( v30 );
                  v13 = v181;
                  v26 = (unsigned __int16 *)v183;
                  v24 = v190;
                  v25 = a5;
                }
              }
              while ( v16 );
            }
          }
          else if ( v16 )
          {
            v37 = v190;
            v38 = a5;
            v39 = v189;
            v40 = v180;
            do
            {
              v41 = v39;
              v42 = a4;
              v39 = (unsigned __int16 *)((char *)v39 + v37);
              a4 += v38;
              --v16;
              v183 = v39;
              v43 = v13;
              if ( v13 )
              {
                v200 = __PAIR64__(v20, v40);
                v44 = v41 + 1;
                v202 = v18;
                v201 = v18;
                do
                {
                  v45 = BYTE14(v184);
                  --v43;
                  v46 = *((_DWORD *)&v200
                        + ((v40 >= v20) | (unsigned __int64)(*((_DWORD *)&v200 + (v40 >= v20)) >= v18 ? 2 : 0))) >> 21;
                  v182 = v44[1];
                  if ( v46 < v182 )
                  {
                    v181 = *v44;
                    if ( v46 < v181 )
                    {
                      v180 = *(v44 - 1);
                      if ( v46 < v180 )
                        v45 = ((v18 - v180) >> 12) & ((v180 - (unsigned int)v184) >> 12) & 3 | ((v20 - v181) >> 12) & ((v181 - DWORD1(v184)) >> 12) & 0x1C | ((v40 - v182) >> 12) & ((v182 - DWORD2(v184)) >> 12) & 0xE0;
                    }
                  }
                  *v42 = v45;
                  v44 += 3;
                  ++v42;
                }
                while ( v43 );
                v39 = (unsigned __int16 *)v183;
                v37 = v190;
                v38 = a5;
              }
            }
            while ( v16 );
          }
          return v198;
        }
      }
      return 4294967285LL;
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
  return v10;
}
