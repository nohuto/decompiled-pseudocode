/*
 * XREFs of CreateHalftoneBrushPat @ 0x1C02462E8
 * Callers:
 *     HT_CreateHalftoneBrush @ 0x1C0244BD0 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     CachedHalftonePattern @ 0x1C0013FAC (CachedHalftonePattern.c)
 *     ComputeRGBLUTAA @ 0x1C0014B24 (ComputeRGBLUTAA.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ComputeBGRMappingTable @ 0x1C02451CC (ComputeBGRMappingTable.c)
 */

__int64 __fastcall CreateHalftoneBrushPat(__int64 a1, __int128 *a2, __int64 a3, HSEMAPHORE *a4, int a5)
{
  __int64 v9; // r12
  unsigned int v10; // edi
  __int64 v11; // rcx
  __int128 v12; // xmm0
  int v13; // r14d
  __int64 v14; // xmm1_8
  int v15; // ebx
  unsigned int v16; // edi
  __int64 v17; // rcx
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  unsigned int v20; // r13d
  unsigned __int8 v21; // cl
  __int64 v22; // rcx
  __int64 v23; // rdx
  HSEMAPHORE *v24; // rax
  HSEMAPHORE *v25; // r8
  _BYTE *v26; // r11
  int v27; // r10d
  __int64 v28; // r14
  unsigned int v29; // r9d
  unsigned __int16 *v30; // r8
  unsigned int v31; // edx
  char v32; // al
  unsigned int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // rdx
  HSEMAPHORE *v36; // rax
  HSEMAPHORE *v37; // r9
  _BYTE *v38; // r11
  unsigned int v39; // r10d
  unsigned __int16 *v40; // r9
  unsigned int v41; // eax
  char v42; // dl
  __int64 v43; // rcx
  __int64 v44; // rdx
  HSEMAPHORE *v45; // rax
  HSEMAPHORE *v46; // r8
  _BYTE *v47; // r11
  int v48; // r10d
  __int64 v49; // r14
  unsigned int v50; // r9d
  unsigned __int16 *v51; // r8
  unsigned int v52; // edx
  char v53; // al
  unsigned int v54; // ecx
  unsigned int v55; // r15d
  unsigned int v56; // r13d
  char *v57; // r12
  unsigned int v58; // r14d
  unsigned int v59; // eax
  __int64 v60; // rbx
  HSEMAPHORE *v61; // r14
  unsigned int k; // edi
  char v63; // r10
  __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rdx
  int v67; // r14d
  unsigned __int16 *v68; // r11
  unsigned int v69; // eax
  unsigned __int16 *v70; // r8
  unsigned int v71; // ecx
  unsigned __int16 *v72; // rdi
  int v73; // esi
  int v74; // eax
  unsigned int v75; // r11d
  char v76; // r10
  unsigned int v77; // r9d
  char v78; // dl
  unsigned int v79; // r8d
  int v80; // eax
  _BYTE *v81; // rdx
  unsigned int v82; // r8d
  char v83; // r9
  __int64 v84; // rax
  unsigned int v85; // r12d
  __int64 v86; // rcx
  int v87; // r14d
  unsigned __int16 *v88; // r15
  unsigned int v89; // r12d
  unsigned __int16 *v90; // r10
  _BYTE *v91; // r13
  unsigned int j; // r11d
  char v93; // dl
  int v94; // eax
  unsigned int v95; // ecx
  int v96; // r11d
  int v97; // eax
  unsigned __int16 *v98; // r10
  unsigned int v99; // edx
  __int64 v100; // rax
  __int64 v101; // rcx
  unsigned __int16 *v102; // r11
  unsigned __int16 *v103; // r8
  _BYTE *v104; // r9
  int v105; // r10d
  __int64 v106; // r14
  unsigned __int16 *v107; // r8
  int v108; // eax
  unsigned __int64 v109; // rdx
  __int64 v110; // rax
  unsigned int v111; // r10d
  __int64 v112; // rcx
  int v113; // r14d
  unsigned __int16 *v114; // r11
  unsigned int v115; // r10d
  unsigned __int16 *v116; // r9
  unsigned __int64 v117; // rdx
  _BYTE *v118; // r14
  unsigned __int64 v119; // r11
  unsigned __int64 v120; // rdi
  unsigned __int64 v121; // rsi
  int v122; // eax
  unsigned __int64 v123; // r8
  __int64 v124; // rax
  __int64 v125; // rcx
  unsigned __int16 *v126; // r11
  unsigned __int16 *v127; // r8
  _BYTE *v128; // r9
  int v129; // r10d
  unsigned __int16 *v130; // r8
  int v131; // eax
  unsigned __int64 v132; // rdx
  __int64 v133; // rcx
  unsigned int v134; // r10d
  __int64 v135; // rdx
  int v136; // r14d
  unsigned __int16 *v137; // rax
  unsigned int v138; // r10d
  unsigned __int16 *v139; // r9
  HSEMAPHORE *v140; // r11
  unsigned int i; // r8d
  unsigned int v142; // edx
  int v143; // eax
  int v144; // ecx
  int v146; // r10d
  __int64 v147; // r15
  unsigned __int16 *v148; // r11
  unsigned __int16 *v149; // rdx
  _BYTE *v150; // r8
  int v151; // r9d
  unsigned __int16 *v152; // rdx
  int v153; // eax
  __int64 v154; // rax
  __int64 v155; // rcx
  unsigned __int16 *v156; // r11
  unsigned __int16 *v157; // r8
  _BYTE *v158; // r9
  int v159; // r10d
  __int64 v160; // r14
  unsigned __int16 *v161; // r8
  int v162; // eax
  unsigned __int64 v163; // rdx
  __int64 v164; // rcx
  __int64 v165; // rdx
  unsigned __int64 v166; // rax
  unsigned __int64 v167; // r9
  _BYTE *v168; // r10
  int v169; // r11d
  unsigned __int16 *v170; // r9
  int v171; // eax
  char v172; // dl
  unsigned int v173; // ecx
  unsigned int v174; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v175; // [rsp+3Ch] [rbp-C4h]
  int v176; // [rsp+40h] [rbp-C0h]
  unsigned int v177; // [rsp+44h] [rbp-BCh]
  __int128 v178; // [rsp+48h] [rbp-B8h]
  __int64 v179; // [rsp+58h] [rbp-A8h]
  HSEMAPHORE *v180; // [rsp+60h] [rbp-A0h]
  _BYTE *v181; // [rsp+68h] [rbp-98h]
  __int64 v182; // [rsp+70h] [rbp-90h]
  unsigned int v183; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v184; // [rsp+80h] [rbp-80h] BYREF
  int v185; // [rsp+98h] [rbp-68h]
  unsigned __int8 v186; // [rsp+A5h] [rbp-5Bh]
  unsigned __int8 v187; // [rsp+A6h] [rbp-5Ah]
  unsigned __int8 v188; // [rsp+A7h] [rbp-59h]
  unsigned int v189; // [rsp+D0h] [rbp-30h]
  unsigned int v190; // [rsp+D4h] [rbp-2Ch]
  int v191; // [rsp+D8h] [rbp-28h]
  unsigned int v192; // [rsp+DCh] [rbp-24h]
  unsigned __int16 *v193; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v194; // [rsp+E8h] [rbp-18h]
  unsigned int v195; // [rsp+F0h] [rbp-10h]
  unsigned int v196; // [rsp+F4h] [rbp-Ch]

  v181 = (_BYTE *)a3;
  v180 = (HSEMAPHORE *)a1;
  v9 = 0LL;
  ComputeRGBLUTAA(a1, (__int128 *)a3, (_DWORD *)(a1 + 3956));
  v10 = -10005;
  if ( (unsigned int)ComputeBGRMappingTable(v11, a3, a2, &v174) == 1 )
  {
    v192 = CachedHalftonePattern(a1, a3, (__int64)&v184, 0, 0, 0);
    v10 = v192;
    if ( (int)v192 > 0 )
    {
      v12 = *(_OWORD *)(a1 + 3960);
      v13 = *(unsigned __int16 *)(a1 + 166);
      v14 = *(_QWORD *)(a1 + 3976);
      v15 = *(_DWORD *)(a3 + 56);
      v16 = *(unsigned __int16 *)(a1 + 170);
      v176 = v13;
      v179 = v14;
      v178 = v12;
      if ( (v15 & 0x400000) != 0 )
        v9 = (__int64)*(&p8BPPXlate + BYTE12(v178));
      v17 = a1 + 548;
      v175 = v15 & 0x2000000;
      if ( (v15 & 0x2000000) == 0 )
        v17 = v9;
      v182 = v17;
      v18 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)v174 + 3984);
      v19 = *(_DWORD *)(a1 + 4LL * ((unsigned int)BYTE1(v174) + 256) + 3984);
      v20 = *(_DWORD *)(a1 + 4LL * ((unsigned int)BYTE2(v174) + 512) + 3984);
      EngReleaseSemaphore(v180[1]);
      v21 = v181[31];
      if ( v21 > 0xF9u )
      {
        if ( v21 == 0xFA )
        {
          if ( v175 )
          {
            if ( v16 )
            {
              v154 = v185;
              v155 = a5;
              v156 = v184;
              do
              {
                v157 = v156;
                v158 = a4;
                v156 = (unsigned __int16 *)((char *)v156 + v154);
                a4 = (HSEMAPHORE *)((char *)a4 + v155);
                --v16;
                v159 = v13;
                if ( v13 )
                {
                  v160 = v182;
                  v161 = v157 + 1;
                  do
                  {
                    v162 = *v161;
                    v163 = (v18 - *(v161 - 1)) & 0x30000 | (unsigned __int64)((v20 - v161[1]) & 0xE00000);
                    v161 += 3;
                    *v158++ = *(_BYTE *)((((v19 - v162) & 0x1C0000 | v163) >> 16) + v160);
                    --v159;
                  }
                  while ( v159 );
                  v13 = v176;
                  v154 = v185;
                  v155 = a5;
                }
              }
              while ( v16 );
            }
          }
          else if ( v16 )
          {
            v164 = v185;
            v165 = a5;
            v166 = (unsigned __int64)v184;
            do
            {
              v167 = v166;
              v168 = a4;
              v166 += v164;
              a4 = (HSEMAPHORE *)((char *)a4 + v165);
              --v16;
              v194 = v166;
              v169 = v13;
              if ( v13 )
              {
                v170 = (unsigned __int16 *)(v167 + 2);
                do
                {
                  v171 = *v170;
                  v172 = ((v20 - v170[1]) >> 16) & 0xE0;
                  v173 = (v18 - *(v170 - 1)) >> 16;
                  v170 += 3;
                  *v168++ = ((v19 - v171) >> 16) & 0x1C | v173 & 3 | v172;
                  --v169;
                }
                while ( v169 );
                v166 = v194;
                v164 = v185;
                v165 = a5;
              }
            }
            while ( v16 );
          }
        }
        else if ( v21 == 0xFB )
        {
          v146 = dwGrayIdxHB[(unsigned __int8)((unsigned __int16)(v18 + v19 + v20) >> 8)]
               + (unsigned __int16)wGrayIdxLB[(unsigned __int8)(v18 + v19 + v20)];
          if ( v16 )
          {
            v147 = v185;
            v148 = v184;
            do
            {
              v149 = v148;
              v150 = a4;
              v148 = (unsigned __int16 *)((char *)v148 + v147);
              a4 = (HSEMAPHORE *)((char *)a4 + a5);
              --v16;
              v151 = v13;
              if ( v13 )
              {
                v152 = v149 + 1;
                do
                {
                  v153 = *v152;
                  v152 += 3;
                  *v150++ = BYTE13(v178) ^ ((unsigned int)(v146 - v153) >> 12);
                  --v151;
                }
                while ( v151 );
              }
            }
            while ( v16 );
          }
        }
        else if ( v21 <= 0xFDu )
        {
          if ( v16 )
          {
            v133 = v185;
            v134 = v13;
            v135 = a5;
            v136 = v13 & 1;
            v137 = v184;
            v138 = v134 >> 1;
            do
            {
              v139 = v137;
              v140 = a4;
              a4 = (HSEMAPHORE *)((char *)a4 + v135);
              --v16;
              v194 = (unsigned __int64)v137 + v133;
              for ( i = v138; i; --i )
              {
                v142 = DWORD2(v178) & (v20 - v139[5]) | (((unsigned int)v178 & (v18 - *v139) | DWORD1(v178) & (v19 - v139[1]) | DWORD2(v178) & (v20 - v139[2])) >> 16);
                v143 = v139[3];
                v144 = DWORD1(v178) & (v19 - v139[4]);
                v139 += 6;
                *(_DWORD *)v140 = HIDWORD(v178) ^ (v178 & (v18 - v143) | v144 | v142);
                v140 = (HSEMAPHORE *)((char *)v140 + 4);
              }
              if ( v136 )
                *(_WORD *)v140 = HIWORD(v178) ^ (WORD1(v178) & ((v18 - *v139) >> 16) | WORD3(v178) & ((v19 - v139[1]) >> 16) | WORD5(v178) & ((v20 - v139[2]) >> 16));
              v137 = (unsigned __int16 *)v194;
              v133 = v185;
              v135 = a5;
            }
            while ( v16 );
          }
        }
        else if ( v21 == 0xFE )
        {
          if ( v16 )
          {
            v124 = v185;
            v125 = a5;
            v126 = v184;
            do
            {
              v127 = v126;
              v128 = a4;
              v126 = (unsigned __int16 *)((char *)v126 + v124);
              a4 = (HSEMAPHORE *)((char *)a4 + v125);
              --v16;
              v129 = v13;
              if ( v13 )
              {
                v130 = v127 + 1;
                do
                {
                  v131 = *v130;
                  v132 = (v20 - v130[1]) & 0x70000 | (unsigned __int64)((v18 - *(v130 - 1)) & 0x1C00000);
                  v130 += 3;
                  *v128++ = VGA256Xlate[((v19 - v131) & 0x380000 | v132) >> 16];
                  --v129;
                }
                while ( v129 );
                v13 = v176;
                v124 = v185;
                v125 = a5;
              }
            }
            while ( v16 );
          }
        }
        else if ( v16 )
        {
          v110 = v185;
          v111 = v13;
          v112 = a5;
          v113 = v13 & 1;
          v114 = v184;
          v115 = v111 >> 1;
          v183 = v115;
          v176 = v113;
          do
          {
            --v16;
            v181 = a4;
            a4 = (HSEMAPHORE *)((char *)a4 + v112);
            v174 = v16;
            v116 = v114;
            v180 = a4;
            v114 = (unsigned __int16 *)((char *)v114 + v110);
            v194 = (unsigned __int64)v114;
            if ( v115 )
            {
              v117 = DWORD1(v178);
              v118 = v181;
              v119 = HIDWORD(v179);
              v120 = (unsigned int)v179;
              v121 = HIDWORD(v178);
              do
              {
                v122 = *v116;
                v123 = (v119 >> 16) & ((unsigned __int64)(v20 - v116[5]) >> 16) | (v120 >> 16) & ((unsigned __int64)(v19 - v116[4]) >> 16) | (v121 >> 16) & ((unsigned __int64)(v18 - v116[3]) >> 16) | ((unsigned __int64)DWORD2(v178) >> 16) & ((unsigned __int64)(v20 - v116[2]) >> 16) | (v117 >> 16) & ((unsigned __int64)(v19 - v116[1]) >> 16);
                v116 += 6;
                v117 = DWORD1(v178);
                *v118++ = VGA16Xlate[(((unsigned __int64)(unsigned int)v178 >> 16) & ((unsigned __int64)(v18 - v122) >> 16) | v123) ^ 0x77];
                --v115;
              }
              while ( v115 );
              v16 = v174;
              a4 = v180;
              v115 = v183;
              v114 = (unsigned __int16 *)v194;
              v181 = v118;
              v113 = v176;
            }
            if ( v113 )
              *v181 = VGA16Xlate[(((unsigned int)v178 & (v18 - *v116) | DWORD1(v178) & (v19 - v116[1]) | (unsigned __int64)(DWORD2(v178) & (v20 - v116[2]))) ^ 0x700000) >> 16];
            v110 = v185;
            v112 = a5;
          }
          while ( v16 );
        }
        return v192;
      }
      if ( v21 >= 0xF8u )
      {
        if ( v16 )
        {
          v100 = v185;
          v101 = a5;
          v102 = v184;
          do
          {
            v103 = v102;
            v104 = a4;
            v102 = (unsigned __int16 *)((char *)v102 + v100);
            a4 = (HSEMAPHORE *)((char *)a4 + v101);
            --v16;
            v105 = v13;
            if ( v13 )
            {
              v106 = v182;
              v107 = v103 + 1;
              do
              {
                v108 = *v107;
                v109 = (v18 - *(v107 - 1)) & 0x70000 | (unsigned __int64)((v20 - v107[1]) & 0x1C00000);
                v107 += 3;
                *v104++ = *(_BYTE *)((((v19 - v108) & 0x380000 | v109) >> 16) + v106);
                --v105;
              }
              while ( v105 );
              v13 = v176;
              v100 = v185;
              v101 = a5;
            }
          }
          while ( v16 );
        }
        return v192;
      }
      if ( v21 == 1 )
      {
        v82 = ((v18 + v19 + v20) ^ 0xFFF0) >> 4;
        v83 = -((v15 & 0x4000) == 0);
        if ( v16 )
        {
          v84 = v185;
          v85 = v13;
          v86 = a5;
          v87 = v13 & 7;
          v88 = v184;
          v89 = v85 >> 3;
          do
          {
            v90 = v88;
            v91 = a4;
            v88 = (unsigned __int16 *)((char *)v88 + v84);
            a4 = (HSEMAPHORE *)((char *)a4 + v86);
            --v16;
            v194 = (unsigned __int64)v88;
            for ( j = v89; j; --j )
            {
              v93 = ((v82 - v90[7]) >> 16) & 0x20 | ((v82 - v90[16]) >> 16) & 4 | ((v82 - v90[19]) >> 16) & 2 | ((v82 - v90[4]) >> 16) & 0x40 | ((v82 - v90[22]) >> 16) & 1 | ((v82 - v90[1]) >> 16) & 0x80;
              v94 = v90[10];
              v95 = (v82 - v90[13]) >> 16;
              v90 += 24;
              *v91++ = v83 ^ (((v82 - v94) >> 16) & 0x10 | v95 & 8 | v93);
            }
            v96 = v87;
            if ( v87 )
            {
              v97 = 0;
              v98 = v90 + 1;
              do
              {
                v99 = v82 - *v98;
                v98 += 3;
                v97 = (2 * v97) | v99 & 0x10000;
                --v96;
              }
              while ( v96 );
              v175 = v97;
              BYTE2(v175) = v83 ^ BYTE2(v97);
              v88 = (unsigned __int16 *)v194;
              *v91 = v175 << (8 - v87) >> 16;
            }
            v84 = v185;
            v86 = a5;
          }
          while ( v16 );
        }
        return v192;
      }
      if ( v21 == 2 )
      {
        v63 = (v15 & 0x4000) == 0 ? 0x77 : 0;
        if ( v16 )
        {
          v64 = v185;
          v65 = v13;
          v66 = a5;
          v67 = v13 & 1;
          v68 = v184;
          v69 = v65 >> 1;
          LODWORD(v182) = v69;
          v176 = v67;
          do
          {
            --v16;
            v181 = a4;
            a4 = (HSEMAPHORE *)((char *)a4 + v66);
            v174 = v16;
            v70 = v68;
            v180 = a4;
            v68 = (unsigned __int16 *)((char *)v68 + v64);
            v71 = v69;
            v194 = (unsigned __int64)v68;
            if ( v69 )
            {
              v72 = v70;
              v177 = HIWORD(DWORD2(v178));
              v73 = HIWORD(DWORD2(v178));
              v191 = HIWORD(HIDWORD(v178));
              v189 = WORD1(v179);
              v190 = WORD1(v178);
              v183 = HIWORD(HIDWORD(v179));
              v175 = HIWORD(DWORD1(v178));
              do
              {
                v74 = v72[5];
                v177 = v71 - 1;
                v75 = v20 - v72[2];
                v76 = v183 & ((v20 - v74) >> 16);
                v77 = v19 - v72[1];
                v78 = v189 & ((v19 - v72[4]) >> 16);
                v79 = v18 - v72[3];
                v80 = *v72;
                v72 += 6;
                LOBYTE(v77) = v78 | v175 & BYTE2(v77);
                v81 = v181;
                --v71;
                *v181 = ((v15 & 0x4000) == 0 ? 0x77 : 0) ^ (v73 & BYTE2(v75) | v76 | v191 & BYTE2(v79) | v190 & ((v18 - v80) >> 16) | v77);
                v181 = v81 + 1;
              }
              while ( v71 );
              a4 = v180;
              v67 = v176;
              v63 = (v15 & 0x4000) == 0 ? 0x77 : 0;
              v68 = (unsigned __int16 *)v194;
              v193 = v72;
              v70 = v72;
              v16 = v174;
            }
            if ( v67 )
              *v181 = v63 ^ (((v18 - *v70) >> 16) & BYTE2(v178) | ((v19 - v70[1]) >> 16) & BYTE6(v178) | ((v20 - v70[2]) >> 16) & BYTE10(v178));
            v69 = v182;
            v64 = v185;
            v66 = a5;
          }
          while ( v16 );
        }
        return v192;
      }
      if ( v21 > 4u )
      {
        if ( v21 <= 6u )
        {
          *((_BYTE *)a4 + v186) = ~(_BYTE)v20;
          *((_BYTE *)a4 + v187) = ~(_BYTE)v19;
          *((_BYTE *)a4 + v188) = ~(_BYTE)v18;
          if ( v21 == 5 )
          {
            v55 = 3;
            v56 = 3 * v13;
          }
          else
          {
            *((_BYTE *)a4 + 3) = 0;
            v56 = 4 * v13;
            v55 = 4;
          }
          v57 = (char *)a4 + v55;
          v58 = v56 - v55;
          if ( v56 != v55 )
          {
            do
            {
              v59 = v58;
              if ( v55 <= v58 )
                v59 = v55;
              v60 = v59;
              memmove(v57, a4, v59);
              v57 += v60;
              v55 += v60;
              v58 -= v60;
            }
            while ( v58 );
          }
          v61 = a4;
          for ( k = v16 - 1; k; --k )
          {
            a4 = (HSEMAPHORE *)((char *)a4 + a5);
            memmove(a4, v61, v56);
          }
          return v192;
        }
        if ( v21 > 0xF4u )
        {
          if ( v21 <= 0xF6u )
          {
            if ( v16 )
            {
              v43 = v185;
              v44 = a5;
              v45 = (HSEMAPHORE *)v184;
              do
              {
                v46 = v45;
                v47 = a4;
                v45 = (HSEMAPHORE *)((char *)v45 + v43);
                a4 = (HSEMAPHORE *)((char *)a4 + v44);
                --v16;
                v180 = v45;
                v48 = v13;
                if ( v13 )
                {
                  v49 = v182;
                  v194 = __PAIR64__(v19, v20);
                  v196 = v18;
                  v195 = v18;
                  v50 = *((_DWORD *)&v194
                        + ((v20 >= v19) | (unsigned __int64)(*(_DWORD *)((char *)&v194 + (v20 >= v19 ? 4 : 0)) >= v18
                                                           ? 2
                                                           : 0))) >> 21;
                  v51 = (unsigned __int16 *)v46 + 1;
                  do
                  {
                    v52 = v51[1];
                    --v48;
                    v53 = BYTE14(v178);
                    v177 = v52;
                    if ( v50 < v52 )
                    {
                      v54 = *v51;
                      v174 = v54;
                      if ( v50 < v54 )
                      {
                        v175 = *(v51 - 1);
                        if ( v50 >= v175 )
                          v53 = BYTE14(v178);
                        else
                          v53 = *(_BYTE *)((((unsigned __int16)(v18 - v175) & (unsigned __int16)(v175 - v178) & 0x7000 | (v19 - v174) & (v54 - DWORD1(v178)) & 0x38000 | (unsigned __int64)((v20 - v177) & (v52 - DWORD2(v178)) & 0x1C0000)) >> 12)
                                         + v49);
                      }
                    }
                    *v47 = v53;
                    v51 += 3;
                    ++v47;
                  }
                  while ( v48 );
                  v13 = v176;
                  v45 = v180;
                  v43 = v185;
                  v44 = a5;
                }
              }
              while ( v16 );
            }
          }
          else if ( v175 )
          {
            if ( v16 )
            {
              v22 = v185;
              v23 = a5;
              v24 = (HSEMAPHORE *)v184;
              do
              {
                v25 = v24;
                v26 = a4;
                v24 = (HSEMAPHORE *)((char *)v24 + v22);
                a4 = (HSEMAPHORE *)((char *)a4 + v23);
                --v16;
                v180 = v24;
                v27 = v13;
                if ( v13 )
                {
                  v28 = v182;
                  v194 = __PAIR64__(v19, v20);
                  v196 = v18;
                  v195 = v18;
                  v29 = *((_DWORD *)&v194
                        + ((v20 >= v19) | (unsigned __int64)(*(_DWORD *)((char *)&v194 + (v20 >= v19 ? 4 : 0)) >= v18
                                                           ? 2
                                                           : 0))) >> 21;
                  v30 = (unsigned __int16 *)v25 + 1;
                  do
                  {
                    v31 = v30[1];
                    --v27;
                    v32 = BYTE14(v178);
                    v175 = v31;
                    if ( v29 < v31 )
                    {
                      v33 = *v30;
                      v177 = v33;
                      if ( v29 < v33 )
                      {
                        v174 = *(v30 - 1);
                        if ( v29 >= v174 )
                          v32 = BYTE14(v178);
                        else
                          v32 = *(_BYTE *)((((unsigned __int16)(v18 - v174) & (unsigned __int16)(v174 - v178) & 0x3000 | (v19 - v177) & (v33 - DWORD1(v178)) & 0x1C000 | (unsigned __int64)((v20 - v175) & (v31 - DWORD2(v178)) & 0xE0000)) >> 12)
                                         + v28);
                      }
                    }
                    *v26 = v32;
                    v30 += 3;
                    ++v26;
                  }
                  while ( v27 );
                  v13 = v176;
                  v24 = v180;
                  v22 = v185;
                  v23 = a5;
                }
              }
              while ( v16 );
            }
          }
          else if ( v16 )
          {
            v34 = v185;
            v35 = a5;
            v36 = (HSEMAPHORE *)v184;
            do
            {
              v37 = v36;
              v38 = a4;
              v36 = (HSEMAPHORE *)((char *)v36 + v34);
              a4 = (HSEMAPHORE *)((char *)a4 + v35);
              --v16;
              v180 = v36;
              if ( v13 )
              {
                v194 = __PAIR64__(v19, v20);
                v196 = v18;
                v195 = v18;
                v39 = *((_DWORD *)&v194
                      + ((v20 >= v19) | (unsigned __int64)(*(_DWORD *)((char *)&v194 + (v20 >= v19 ? 4 : 0)) >= v18
                                                         ? 2
                                                         : 0))) >> 21;
                v40 = (unsigned __int16 *)v37 + 1;
                do
                {
                  --v13;
                  v41 = *(v40 - 1);
                  v42 = BYTE14(v178);
                  v174 = v40[1];
                  if ( v39 < v174 )
                  {
                    v175 = *v40;
                    if ( v39 < v175 && v39 < v41 )
                      v42 = ((v19 - v175) >> 12) & ((v175 - DWORD1(v178)) >> 12) & 0x1C | ((v20 - v174) >> 12) & ((v174 - DWORD2(v178)) >> 12) & 0xE0 | ((v41 - (unsigned int)v178) >> 12) & ((v18 - v41) >> 12) & 3;
                  }
                  *v38 = v42;
                  v40 += 3;
                  ++v38;
                }
                while ( v13 );
                v13 = v176;
                v36 = v180;
                v34 = v185;
                v35 = a5;
              }
            }
            while ( v16 );
          }
          return v192;
        }
      }
      return 4294967285LL;
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
  return v10;
}
