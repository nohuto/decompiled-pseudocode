/*
 * XREFs of CreateHalftoneBrushPat @ 0x1C025EA00
 * Callers:
 *     HT_CreateHalftoneBrush @ 0x1C025D340 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     CachedHalftonePattern @ 0x1C00C201C (CachedHalftonePattern.c)
 *     ComputeRGBLUTAA @ 0x1C00C2210 (ComputeRGBLUTAA.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ComputeBGRMappingTable @ 0x1C025D930 (ComputeBGRMappingTable.c)
 */

__int64 __fastcall CreateHalftoneBrushPat(__int64 a1, __int128 *a2, __int64 a3, _BYTE *a4, int a5)
{
  __int64 v8; // r12
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
  _BYTE *v24; // rax
  _BYTE *v25; // r8
  _BYTE *v26; // r11
  int v27; // r10d
  __int64 v28; // r14
  unsigned int v29; // r9d
  unsigned __int16 *v30; // r8
  char v31; // dl
  unsigned int v32; // ecx
  _BYTE *v33; // r9
  _BYTE *v34; // r11
  unsigned int v35; // r10d
  unsigned __int16 *v36; // r9
  unsigned int v37; // eax
  char v38; // dl
  __int64 v39; // rcx
  __int64 v40; // rdx
  _BYTE *v41; // rax
  _BYTE *v42; // r8
  _BYTE *v43; // r11
  int v44; // r10d
  __int64 v45; // r14
  unsigned int v46; // r9d
  unsigned __int16 *v47; // r8
  char v48; // dl
  unsigned int v49; // ecx
  unsigned int v50; // r15d
  unsigned int v51; // r13d
  char *v52; // r12
  unsigned int v53; // r14d
  unsigned int v54; // eax
  __int64 v55; // rbx
  const void *v56; // r14
  unsigned int j; // edi
  char v58; // r10
  __int64 v59; // rcx
  unsigned int v60; // eax
  __int64 v61; // rdx
  int v62; // r14d
  unsigned __int16 *v63; // r11
  unsigned int v64; // eax
  unsigned __int16 *v65; // r8
  unsigned int v66; // ecx
  unsigned __int16 *v67; // rdi
  char v68; // r14
  int v69; // esi
  int v70; // eax
  unsigned int v71; // r11d
  char v72; // r10
  unsigned int v73; // r9d
  char v74; // dl
  unsigned int v75; // ecx
  int v76; // eax
  _BYTE *v77; // rdx
  unsigned int v78; // r9d
  char v79; // r10
  __int64 v80; // rax
  unsigned int v81; // r13d
  __int64 v82; // rcx
  int v83; // r14d
  unsigned __int16 *v84; // r12
  unsigned int v85; // r13d
  unsigned __int16 *v86; // r8
  _BYTE *v87; // r15
  unsigned int v88; // r11d
  char v89; // dl
  int v90; // eax
  unsigned int v91; // ecx
  int v92; // r11d
  int v93; // eax
  unsigned __int16 *v94; // r12
  int v95; // ecx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r11
  __int64 v99; // r8
  _BYTE *v100; // r9
  int v101; // r10d
  __int64 v102; // r14
  unsigned __int16 *v103; // r8
  int v104; // eax
  unsigned __int64 v105; // rdx
  __int64 v106; // rax
  unsigned int v107; // r10d
  __int64 v108; // rcx
  int v109; // r14d
  unsigned __int16 *v110; // r11
  unsigned int v111; // r10d
  unsigned __int16 *v112; // r9
  unsigned __int64 v113; // r11
  _BYTE *v114; // r14
  unsigned __int64 v115; // rdi
  unsigned __int64 v116; // rsi
  int v117; // eax
  unsigned __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // r11
  __int64 v122; // r8
  _BYTE *v123; // r9
  int v124; // r10d
  unsigned __int16 *v125; // r8
  int v126; // eax
  unsigned __int64 v127; // rdx
  __int64 v128; // rcx
  unsigned int v129; // r10d
  __int64 v130; // rdx
  int v131; // r14d
  unsigned __int16 *v132; // rax
  unsigned int v133; // r10d
  unsigned __int16 *v134; // r9
  _DWORD *v135; // r11
  unsigned int i; // r8d
  unsigned int v137; // edx
  int v138; // eax
  int v139; // ecx
  int v141; // r10d
  __int64 v142; // r15
  __int64 v143; // r11
  __int64 v144; // rdx
  _BYTE *v145; // r8
  int v146; // r9d
  unsigned __int16 *v147; // rdx
  int v148; // eax
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // r11
  __int64 v152; // r8
  _BYTE *v153; // r9
  int v154; // r10d
  __int64 v155; // r14
  unsigned __int16 *v156; // r8
  int v157; // eax
  unsigned __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // rdx
  unsigned __int64 v161; // rax
  unsigned __int64 v162; // r9
  _BYTE *v163; // r10
  int v164; // r11d
  unsigned __int16 *v165; // r9
  int v166; // eax
  char v167; // dl
  unsigned int v168; // ecx
  unsigned int v169; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v170; // [rsp+38h] [rbp-C8h]
  int v171; // [rsp+3Ch] [rbp-C4h]
  char v172; // [rsp+40h] [rbp-C0h]
  _BYTE *v173; // [rsp+48h] [rbp-B8h]
  __int128 v174; // [rsp+50h] [rbp-B0h]
  __int64 v175; // [rsp+60h] [rbp-A0h]
  _BYTE *v176; // [rsp+68h] [rbp-98h]
  __int64 v177; // [rsp+70h] [rbp-90h]
  unsigned int v178; // [rsp+78h] [rbp-88h]
  _QWORD v179[10]; // [rsp+80h] [rbp-80h] BYREF
  int v180; // [rsp+D0h] [rbp-30h]
  unsigned int v181; // [rsp+D4h] [rbp-2Ch]
  unsigned int v182; // [rsp+D8h] [rbp-28h]
  int v183; // [rsp+DCh] [rbp-24h]
  unsigned int v184; // [rsp+E0h] [rbp-20h]
  unsigned __int16 *v185; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v186; // [rsp+F0h] [rbp-10h]
  unsigned int v187; // [rsp+F8h] [rbp-8h]
  unsigned int v188; // [rsp+FCh] [rbp-4h]

  v176 = (_BYTE *)a3;
  v173 = (_BYTE *)a1;
  v8 = 0LL;
  memset(v179, 0, 0x48uLL);
  LOWORD(v169) = 0;
  BYTE2(v169) = 0;
  ComputeRGBLUTAA(a1, (__int128 *)a3, (_DWORD *)(a1 + 3956));
  v10 = -10005;
  if ( (unsigned int)ComputeBGRMappingTable(v11, a3, a2, &v169) == 1 )
  {
    v184 = CachedHalftonePattern(a1, a3, (__int64)v179, 0, 0, 0);
    v10 = v184;
    if ( (int)v184 > 0 )
    {
      v12 = *(_OWORD *)(a1 + 3960);
      v13 = *(unsigned __int16 *)(a1 + 166);
      v14 = *(_QWORD *)(a1 + 3976);
      v15 = *(_DWORD *)(a3 + 56);
      v16 = *(unsigned __int16 *)(a1 + 170);
      v171 = v13;
      v175 = v14;
      v174 = v12;
      if ( (v15 & 0x400000) != 0 )
        v8 = (__int64)*(&p8BPPXlate + BYTE12(v174));
      v17 = a1 + 548;
      v170 = v15 & 0x2000000;
      if ( (v15 & 0x2000000) == 0 )
        v17 = v8;
      v177 = v17;
      v18 = *(_DWORD *)(a1 + 4LL * (unsigned __int8)v169 + 3984);
      v19 = *(_DWORD *)(a1 + 4LL * ((unsigned int)BYTE1(v169) + 256) + 3984);
      v20 = *(_DWORD *)(a1 + 4LL * ((unsigned int)BYTE2(v169) + 512) + 3984);
      EngReleaseSemaphore(*((HSEMAPHORE *)v173 + 1));
      v21 = v176[31];
      if ( v21 > 0xF9u )
      {
        if ( v21 == 0xFA )
        {
          if ( v16 )
          {
            if ( v170 )
            {
              v149 = SLODWORD(v179[3]);
              v150 = a5;
              v151 = v179[0];
              do
              {
                v152 = v151;
                v153 = a4;
                v151 += v149;
                a4 += v150;
                --v16;
                v154 = v13;
                if ( v13 )
                {
                  v155 = v177;
                  v156 = (unsigned __int16 *)(v152 + 2);
                  do
                  {
                    v157 = *v156;
                    v158 = (v18 - *(v156 - 1)) & 0x30000 | (unsigned __int64)((v20 - v156[1]) & 0xE00000);
                    v156 += 3;
                    *v153++ = *(_BYTE *)((((v19 - v157) & 0x1C0000 | v158) >> 16) + v155);
                    --v154;
                  }
                  while ( v154 );
                  v13 = v171;
                  v149 = SLODWORD(v179[3]);
                  v150 = a5;
                }
              }
              while ( v16 );
            }
            else
            {
              v159 = SLODWORD(v179[3]);
              v160 = a5;
              v161 = v179[0];
              do
              {
                v162 = v161;
                v163 = a4;
                v161 += v159;
                a4 += v160;
                --v16;
                v186 = v161;
                v164 = v13;
                if ( v13 )
                {
                  v165 = (unsigned __int16 *)(v162 + 2);
                  do
                  {
                    v166 = *v165;
                    v167 = ((v20 - v165[1]) >> 16) & 0xE0;
                    v168 = (v18 - *(v165 - 1)) >> 16;
                    v165 += 3;
                    *v163++ = ((v19 - v166) >> 16) & 0x1C | v168 & 3 | v167;
                    --v164;
                  }
                  while ( v164 );
                  v161 = v186;
                  v159 = SLODWORD(v179[3]);
                  v160 = a5;
                }
              }
              while ( v16 );
            }
          }
        }
        else if ( v21 == 0xFB )
        {
          v171 = v18 + v19 + v20;
          v141 = dwGrayIdxHB[BYTE1(v171)] + (unsigned __int16)wGrayIdxLB[(unsigned __int8)v171];
          if ( v16 )
          {
            v142 = SLODWORD(v179[3]);
            v143 = v179[0];
            do
            {
              v144 = v143;
              v145 = a4;
              v143 += v142;
              a4 += a5;
              --v16;
              v146 = v13;
              if ( v13 )
              {
                v147 = (unsigned __int16 *)(v144 + 2);
                do
                {
                  v148 = *v147;
                  v147 += 3;
                  *v145++ = BYTE13(v174) ^ ((unsigned int)(v141 - v148) >> 12);
                  --v146;
                }
                while ( v146 );
              }
            }
            while ( v16 );
          }
        }
        else if ( v21 <= 0xFDu )
        {
          if ( v16 )
          {
            v128 = SLODWORD(v179[3]);
            v129 = v13;
            v130 = a5;
            v131 = v13 & 1;
            v132 = (unsigned __int16 *)v179[0];
            v133 = v129 >> 1;
            do
            {
              v134 = v132;
              v135 = a4;
              a4 += v130;
              --v16;
              v186 = (unsigned __int64)v132 + v128;
              for ( i = v133; i; --i )
              {
                v137 = DWORD2(v174) & (v20 - v134[5]) | (((unsigned int)v174 & (v18 - *v134) | DWORD1(v174) & (v19 - v134[1]) | DWORD2(v174) & (v20 - v134[2])) >> 16);
                v138 = v134[3];
                v139 = DWORD1(v174) & (v19 - v134[4]);
                v134 += 6;
                *v135++ = HIDWORD(v174) ^ (v174 & (v18 - v138) | v139 | v137);
              }
              if ( v131 )
                *(_WORD *)v135 = HIWORD(v174) ^ (WORD1(v174) & ((v18 - *v134) >> 16) | WORD3(v174) & ((v19 - v134[1]) >> 16) | WORD5(v174) & ((v20 - v134[2]) >> 16));
              v132 = (unsigned __int16 *)v186;
              v128 = SLODWORD(v179[3]);
              v130 = a5;
            }
            while ( v16 );
          }
        }
        else if ( v21 == 0xFE )
        {
          if ( v16 )
          {
            v119 = SLODWORD(v179[3]);
            v120 = a5;
            v121 = v179[0];
            do
            {
              v122 = v121;
              v123 = a4;
              v121 += v119;
              a4 += v120;
              --v16;
              v124 = v13;
              if ( v13 )
              {
                v125 = (unsigned __int16 *)(v122 + 2);
                do
                {
                  v126 = *v125;
                  v127 = (v20 - v125[1]) & 0x70000 | (unsigned __int64)((v18 - *(v125 - 1)) & 0x1C00000);
                  v125 += 3;
                  *v123++ = VGA256Xlate[((v19 - v126) & 0x380000 | v127) >> 16];
                  --v124;
                }
                while ( v124 );
                v13 = v171;
                v119 = SLODWORD(v179[3]);
                v120 = a5;
              }
            }
            while ( v16 );
          }
        }
        else if ( v16 )
        {
          v106 = SLODWORD(v179[3]);
          v107 = v13;
          v108 = a5;
          v109 = v13 & 1;
          v110 = (unsigned __int16 *)v179[0];
          v111 = v107 >> 1;
          v178 = v111;
          v171 = v109;
          do
          {
            --v16;
            v176 = a4;
            a4 += v108;
            v169 = v16;
            v112 = v110;
            v173 = a4;
            v110 = (unsigned __int16 *)((char *)v110 + v106);
            v186 = (unsigned __int64)v110;
            if ( v111 )
            {
              v113 = HIDWORD(v175);
              v114 = v176;
              v115 = (unsigned int)v175;
              v116 = HIDWORD(v174);
              do
              {
                v117 = *v112;
                v118 = (v115 >> 16) & ((unsigned __int64)(v19 - v112[4]) >> 16) | (v116 >> 16) & ((unsigned __int64)(v18 - v112[3]) >> 16) | ((unsigned __int64)DWORD2(v174) >> 16) & ((unsigned __int64)(v20 - v112[2]) >> 16) | ((unsigned __int64)DWORD1(v174) >> 16) & ((unsigned __int64)(v19 - v112[1]) >> 16) | (v113 >> 16) & ((unsigned __int64)(v20 - v112[5]) >> 16);
                v112 += 6;
                *v114++ = VGA16Xlate[(((unsigned __int64)(unsigned int)v174 >> 16) & ((unsigned __int64)(v18 - v117) >> 16) | v118) ^ 0x77];
                --v111;
              }
              while ( v111 );
              v16 = v169;
              a4 = v173;
              v111 = v178;
              v110 = (unsigned __int16 *)v186;
              v176 = v114;
              v109 = v171;
            }
            if ( v109 )
              *v176 = VGA16Xlate[(((unsigned int)v174 & (v18 - *v112) | DWORD1(v174) & (v19 - v112[1]) | (unsigned __int64)(DWORD2(v174) & (v20 - v112[2]))) ^ 0x700000) >> 16];
            v106 = SLODWORD(v179[3]);
            v108 = a5;
          }
          while ( v16 );
        }
        return v184;
      }
      if ( v21 >= 0xF8u )
      {
        if ( v16 )
        {
          v96 = SLODWORD(v179[3]);
          v97 = a5;
          v98 = v179[0];
          do
          {
            v99 = v98;
            v100 = a4;
            v98 += v96;
            a4 += v97;
            --v16;
            v101 = v13;
            if ( v13 )
            {
              v102 = v177;
              v103 = (unsigned __int16 *)(v99 + 2);
              do
              {
                v104 = *v103;
                v105 = (v18 - *(v103 - 1)) & 0x70000 | (unsigned __int64)((v20 - v103[1]) & 0x1C00000);
                v103 += 3;
                *v100++ = *(_BYTE *)((((v19 - v104) & 0x380000 | v105) >> 16) + v102);
                --v101;
              }
              while ( v101 );
              v13 = v171;
              v96 = SLODWORD(v179[3]);
              v97 = a5;
            }
          }
          while ( v16 );
        }
        return v184;
      }
      if ( v21 == 1 )
      {
        v78 = ((v18 + v19 + v20) ^ 0xFFF0) >> 4;
        v79 = -((v15 & 0x4000) == 0);
        if ( v16 )
        {
          v80 = SLODWORD(v179[3]);
          v81 = v13;
          v82 = a5;
          v83 = v13 & 7;
          v84 = (unsigned __int16 *)v179[0];
          v85 = v81 >> 3;
          do
          {
            v86 = v84;
            v173 = a4;
            v84 = (unsigned __int16 *)((char *)v84 + v80);
            v87 = a4;
            a4 += v82;
            v186 = (unsigned __int64)v84;
            --v16;
            v88 = v85;
            if ( v85 )
            {
              do
              {
                v89 = ((v78 - v86[7]) >> 16) & 0x20 | ((v78 - v86[16]) >> 16) & 4 | ((v78 - v86[19]) >> 16) & 2 | ((v78 - v86[4]) >> 16) & 0x40 | ((v78 - v86[22]) >> 16) & 1 | ((v78 - v86[1]) >> 16) & 0x80;
                v90 = v86[10];
                v91 = (v78 - v86[13]) >> 16;
                v86 += 24;
                *v87++ = v79 ^ (((v78 - v90) >> 16) & 0x10 | v91 & 8 | v89);
                --v88;
              }
              while ( v88 );
              v173 = v87;
            }
            v92 = v83;
            if ( v83 )
            {
              v93 = 0;
              v94 = v86 + 1;
              do
              {
                v95 = *v94;
                v94 += 3;
                v93 = (2 * v93) | (v78 - v95) & 0x10000;
                --v92;
              }
              while ( v92 );
              v84 = (unsigned __int16 *)v186;
              v171 = v93;
              BYTE2(v171) = v79 ^ BYTE2(v93);
              *v173 = (unsigned int)(v171 << (8 - v83)) >> 16;
            }
            v80 = SLODWORD(v179[3]);
            v82 = a5;
          }
          while ( v16 );
        }
        return v184;
      }
      if ( v21 == 2 )
      {
        v58 = (v15 & 0x4000) == 0 ? 0x77 : 0;
        v172 = v58;
        if ( v16 )
        {
          v59 = SLODWORD(v179[3]);
          v60 = v13;
          v61 = a5;
          v62 = v13 & 1;
          v63 = (unsigned __int16 *)v179[0];
          v64 = v60 >> 1;
          LODWORD(v177) = v64;
          v171 = v62;
          do
          {
            --v16;
            v176 = a4;
            a4 += v61;
            v169 = v16;
            v65 = v63;
            v173 = a4;
            v63 = (unsigned __int16 *)((char *)v63 + v59);
            v66 = v64;
            v186 = (unsigned __int64)v63;
            if ( v64 )
            {
              v67 = v65;
              v68 = v172;
              v170 = HIWORD(HIDWORD(v174));
              v69 = HIWORD(HIDWORD(v174));
              v181 = WORD1(v175);
              v182 = WORD1(v174);
              v183 = HIWORD(HIDWORD(v175));
              v180 = HIWORD(DWORD1(v174));
              v178 = HIWORD(DWORD2(v174));
              do
              {
                v70 = v67[5];
                v170 = v66 - 1;
                v71 = v20 - v67[2];
                v72 = v183 & ((v20 - v70) >> 16);
                v73 = v19 - v67[1];
                v74 = v181 & ((v19 - v67[4]) >> 16);
                v75 = v18 - v67[3];
                v76 = *v67;
                v67 += 6;
                LOBYTE(v73) = v74 | v180 & BYTE2(v73);
                v77 = v176;
                LOBYTE(v73) = v69 & BYTE2(v75) | v73;
                v66 = v170;
                *v176 = v68 ^ (v178 & BYTE2(v71) | v72 | v182 & ((v18 - v76) >> 16) | v73);
                v176 = v77 + 1;
              }
              while ( v66 );
              a4 = v173;
              v62 = v171;
              v58 = v172;
              v63 = (unsigned __int16 *)v186;
              v185 = v67;
              v65 = v67;
              v16 = v169;
            }
            if ( v62 )
              *v176 = v58 ^ (((v18 - *v65) >> 16) & BYTE2(v174) | ((v19 - v65[1]) >> 16) & BYTE6(v174) | ((v20 - v65[2]) >> 16) & BYTE10(v174));
            v64 = v177;
            v59 = SLODWORD(v179[3]);
            v61 = a5;
          }
          while ( v16 );
        }
        return v184;
      }
      if ( v21 > 4u )
      {
        if ( v21 <= 6u )
        {
          a4[BYTE5(v179[4])] = ~(_BYTE)v20;
          a4[BYTE6(v179[4])] = ~(_BYTE)v19;
          a4[HIBYTE(v179[4])] = ~(_BYTE)v18;
          if ( v21 == 5 )
          {
            v50 = 3;
            v51 = 3 * v13;
          }
          else
          {
            a4[3] = 0;
            v51 = 4 * v13;
            v50 = 4;
          }
          v52 = &a4[v50];
          v53 = v51 - v50;
          if ( v51 != v50 )
          {
            do
            {
              v54 = v53;
              if ( v50 <= v53 )
                v54 = v50;
              v55 = v54;
              memmove(v52, a4, v54);
              v52 += v55;
              v50 += v55;
              v53 -= v55;
            }
            while ( v53 );
          }
          v56 = a4;
          for ( j = v16 - 1; j; --j )
          {
            a4 += a5;
            memmove(a4, v56, v51);
          }
          return v184;
        }
        if ( v21 > 0xF4u )
        {
          if ( v21 <= 0xF6u )
          {
            if ( v16 )
            {
              v39 = SLODWORD(v179[3]);
              v40 = a5;
              v41 = (_BYTE *)v179[0];
              do
              {
                v42 = v41;
                v43 = a4;
                v41 += v39;
                a4 += v40;
                --v16;
                v173 = v41;
                v44 = v13;
                if ( v13 )
                {
                  v45 = v177;
                  v186 = __PAIR64__(v19, v20);
                  v188 = v18;
                  v187 = v18;
                  v46 = *((_DWORD *)&v186
                        + ((v20 >= v19) | (unsigned __int64)(*(_DWORD *)((char *)&v186 + (v20 >= v19 ? 4 : 0)) >= v18
                                                           ? 2
                                                           : 0))) >> 21;
                  v47 = (unsigned __int16 *)(v42 + 2);
                  do
                  {
                    --v44;
                    v48 = BYTE14(v174);
                    v170 = v47[1];
                    if ( v46 < v170 )
                    {
                      v169 = *v47;
                      if ( v46 < v169 )
                      {
                        v49 = *(v47 - 1);
                        if ( v46 < v49 )
                          v48 = *(_BYTE *)((((v19 - v169) & (v169 - DWORD1(v174)) & 0x38000 | (v20 - v170) & (v170 - DWORD2(v174)) & 0x1C0000 | (unsigned __int64)((unsigned __int16)(v18 - v49) & (unsigned __int16)(v49 - v174) & 0x7000)) >> 12)
                                         + v45);
                      }
                    }
                    *v43 = v48;
                    v47 += 3;
                    ++v43;
                  }
                  while ( v44 );
                  v13 = v171;
                  v41 = v173;
                  v39 = SLODWORD(v179[3]);
                  v40 = a5;
                }
              }
              while ( v16 );
            }
          }
          else if ( v16 )
          {
            v22 = SLODWORD(v179[3]);
            v23 = a5;
            v24 = (_BYTE *)v179[0];
            if ( v170 )
            {
              do
              {
                v25 = v24;
                v26 = a4;
                v24 += v22;
                a4 += v23;
                --v16;
                v173 = v24;
                v27 = v13;
                if ( v13 )
                {
                  v28 = v177;
                  v186 = __PAIR64__(v19, v20);
                  v188 = v18;
                  v187 = v18;
                  v29 = *((_DWORD *)&v186
                        + ((v20 >= v19) | (unsigned __int64)(*(_DWORD *)((char *)&v186 + (v20 >= v19 ? 4 : 0)) >= v18
                                                           ? 2
                                                           : 0))) >> 21;
                  v30 = (unsigned __int16 *)(v25 + 2);
                  do
                  {
                    --v27;
                    v31 = BYTE14(v174);
                    v169 = v30[1];
                    if ( v29 < v169 )
                    {
                      v170 = *v30;
                      if ( v29 < v170 )
                      {
                        v32 = *(v30 - 1);
                        if ( v29 < v32 )
                          v31 = *(_BYTE *)((((v19 - v170) & (v170 - DWORD1(v174)) & 0x1C000 | (v20 - v169) & (v169 - DWORD2(v174)) & 0xE0000 | (unsigned __int64)((unsigned __int16)(v18 - v32) & (unsigned __int16)(v32 - v174) & 0x3000)) >> 12)
                                         + v28);
                      }
                    }
                    *v26 = v31;
                    v30 += 3;
                    ++v26;
                  }
                  while ( v27 );
                  v13 = v171;
                  v24 = v173;
                  v22 = SLODWORD(v179[3]);
                  v23 = a5;
                }
              }
              while ( v16 );
            }
            else
            {
              do
              {
                v33 = v24;
                v34 = a4;
                v24 += v22;
                a4 += v23;
                --v16;
                v173 = v24;
                if ( v13 )
                {
                  v186 = __PAIR64__(v19, v20);
                  v188 = v18;
                  v187 = v18;
                  v35 = *((_DWORD *)&v186
                        + ((v20 >= v19) | (unsigned __int64)(*(_DWORD *)((char *)&v186 + (v20 >= v19 ? 4 : 0)) >= v18
                                                           ? 2
                                                           : 0))) >> 21;
                  v36 = (unsigned __int16 *)(v33 + 2);
                  do
                  {
                    --v13;
                    v37 = *(v36 - 1);
                    v38 = BYTE14(v174);
                    v170 = v36[1];
                    if ( v35 < v170 )
                    {
                      v169 = *v36;
                      if ( v35 < v169 && v35 < v37 )
                        v38 = ((v19 - v169) >> 12) & ((v169 - DWORD1(v174)) >> 12) & 0x1C | ((v20 - v170) >> 12) & ((v170 - DWORD2(v174)) >> 12) & 0xE0 | ((v37 - (unsigned int)v174) >> 12) & ((v18 - v37) >> 12) & 3;
                    }
                    *v34 = v38;
                    v36 += 3;
                    ++v34;
                  }
                  while ( v13 );
                  v13 = v171;
                  v24 = v173;
                  v22 = SLODWORD(v179[3]);
                  v23 = a5;
                }
              }
              while ( v16 );
            }
          }
          return v184;
        }
      }
      return 4294967285LL;
    }
  }
  EngReleaseSemaphore(*(HSEMAPHORE *)(a1 + 8));
  return v10;
}
