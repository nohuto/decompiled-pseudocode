/*
 * XREFs of RenderNineGridInternal @ 0x1C00E1130
 * Callers:
 *     RenderNineGrid @ 0x1C00E0E0C (RenderNineGrid.c)
 * Callees:
 *     DNG_StretchCol @ 0x1C00E0718 (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1C00E1EB0 (DNG_DrawRow.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C00E2228 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     DNG_InitStretch @ 0x1C00E2298 (DNG_InitStretch.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

int __fastcall RenderNineGridInternal(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __m128i *a4,
        int *a5,
        _DWORD *a6,
        __int64 a7,
        int a8)
{
  __m128i v9; // xmm2
  __int64 v10; // r11
  unsigned __int64 v11; // xmm0_8
  unsigned __int64 v12; // r15
  int v13; // r8d
  unsigned __int64 v14; // r9
  int v15; // edi
  unsigned __int64 v16; // xmm0_8
  unsigned __int64 v17; // r14
  int v18; // r8d
  unsigned __int64 v19; // rax
  int v20; // r15d
  __int64 v21; // rax
  int v22; // esi
  int v23; // r11d
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // r10
  int v26; // r13d
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // r9d
  __int64 v30; // rdi
  int v31; // ebx
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // r14d
  int v36; // r11d
  int v37; // edi
  int v38; // edi
  __int64 v39; // r9
  unsigned int v40; // r14d
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // r15d
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // r9
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // rdx
  int v52; // edi
  int v53; // r8d
  _DWORD *v54; // rsi
  int v55; // r15d
  int v56; // edx
  int v57; // r14d
  int v58; // edx
  int v59; // ecx
  int v60; // edi
  int v61; // r9d
  int v62; // r8d
  int v63; // r11d
  int v64; // edx
  int v65; // eax
  int v66; // r9d
  int v67; // esi
  int v68; // edi
  int v69; // eax
  unsigned __int64 v70; // rcx
  int v71; // r11d
  int v72; // r14d
  unsigned __int64 v73; // r9
  unsigned __int64 v74; // rtt
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // r8
  unsigned __int64 v77; // rdx
  __int64 v78; // r9
  __int64 v79; // rax
  __int64 v80; // r11
  __int64 v81; // rdi
  __int64 v82; // rax
  unsigned int v83; // r14d
  __int64 v84; // r15
  int v85; // r8d
  char *v86; // rcx
  char *v87; // rdx
  char *v88; // rax
  char *v89; // r9
  int v90; // r13d
  int v91; // r8d
  int v92; // r8d
  __int64 v93; // rdx
  unsigned __int64 v94; // kr08_8
  int v95; // edx
  __int64 v96; // rsi
  unsigned __int64 v97; // rbx
  int v98; // eax
  __int64 v99; // r11
  __int64 v100; // rbx
  int v101; // r13d
  __int64 v102; // rbx
  __int64 v103; // rdi
  int v104; // esi
  char *v105; // rdx
  void *v106; // rcx
  char *v107; // r9
  unsigned __int64 v108; // rax
  int v109; // r11d
  __int64 v110; // rbx
  int v111; // r12d
  int v112; // eax
  int v113; // ecx
  int v114; // r15d
  int v115; // r14d
  __int64 v116; // r13
  __int64 v117; // r15
  __int64 v118; // rdx
  __int64 v119; // rdi
  int v120; // r12d
  __int64 v121; // rsi
  __int64 v122; // rax
  BOOL v123; // eax
  __int64 v124; // r9
  __int64 v125; // r11
  __int64 v126; // r14
  __int64 v127; // rcx
  int *v128; // rdx
  _DWORD *v129; // r8
  __int64 v130; // r10
  int v131; // ecx
  int v133; // [rsp+30h] [rbp-D0h]
  int v134; // [rsp+30h] [rbp-D0h]
  int v135; // [rsp+38h] [rbp-C8h]
  int v136; // [rsp+38h] [rbp-C8h]
  int v137; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v138; // [rsp+48h] [rbp-B8h]
  int v139; // [rsp+50h] [rbp-B0h]
  int v140; // [rsp+50h] [rbp-B0h]
  int v141; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v142; // [rsp+60h] [rbp-A0h]
  int v143; // [rsp+60h] [rbp-A0h]
  int v144; // [rsp+68h] [rbp-98h]
  int v145; // [rsp+70h] [rbp-90h]
  int v146; // [rsp+70h] [rbp-90h]
  __int64 v147; // [rsp+78h] [rbp-88h]
  __int64 v148; // [rsp+78h] [rbp-88h]
  int v149; // [rsp+80h] [rbp-80h]
  __int64 v150; // [rsp+88h] [rbp-78h]
  __int64 v151; // [rsp+90h] [rbp-70h]
  int v152; // [rsp+98h] [rbp-68h]
  int v153; // [rsp+A0h] [rbp-60h] BYREF
  int v154; // [rsp+A4h] [rbp-5Ch]
  __int64 v155; // [rsp+A8h] [rbp-58h]
  int v156; // [rsp+B0h] [rbp-50h]
  int v157; // [rsp+B4h] [rbp-4Ch]
  int v158; // [rsp+B8h] [rbp-48h]
  __int64 v159; // [rsp+C0h] [rbp-40h]
  int v160; // [rsp+C8h] [rbp-38h]
  int v161; // [rsp+CCh] [rbp-34h]
  unsigned int v162; // [rsp+D0h] [rbp-30h]
  int v163; // [rsp+D4h] [rbp-2Ch]
  int v164; // [rsp+DCh] [rbp-24h]
  int v165; // [rsp+E0h] [rbp-20h]
  int v166; // [rsp+E4h] [rbp-1Ch]
  int v167; // [rsp+E8h] [rbp-18h]
  int v168; // [rsp+ECh] [rbp-14h]
  int v169; // [rsp+F0h] [rbp-10h]
  int v170; // [rsp+F4h] [rbp-Ch]
  unsigned int v171; // [rsp+F8h] [rbp-8h]
  int v172; // [rsp+FCh] [rbp-4h]
  int v173; // [rsp+100h] [rbp+0h]
  int v174; // [rsp+104h] [rbp+4h]
  char v175; // [rsp+108h] [rbp+8h] BYREF
  char v176; // [rsp+128h] [rbp+28h] BYREF
  int v177; // [rsp+148h] [rbp+48h]
  int v178; // [rsp+14Ch] [rbp+4Ch]
  int v179; // [rsp+150h] [rbp+50h]
  int v180; // [rsp+154h] [rbp+54h]
  int v181; // [rsp+158h] [rbp+58h]
  unsigned __int64 v182; // [rsp+15Ch] [rbp+5Ch]
  int v183; // [rsp+16Ch] [rbp+6Ch]
  int v184; // [rsp+170h] [rbp+70h]
  int v185; // [rsp+174h] [rbp+74h]
  unsigned __int64 v186; // [rsp+178h] [rbp+78h]
  unsigned __int64 v187; // [rsp+180h] [rbp+80h]
  unsigned __int64 v188; // [rsp+188h] [rbp+88h]
  unsigned __int64 v189; // [rsp+190h] [rbp+90h]
  unsigned __int64 v190; // [rsp+1A0h] [rbp+A0h]
  __int64 v191; // [rsp+1A8h] [rbp+A8h]
  _DWORD v192[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v194; // [rsp+220h] [rbp+120h]
  char v195; // [rsp+220h] [rbp+120h]
  __int64 v196; // [rsp+220h] [rbp+120h]
  int v197; // [rsp+228h] [rbp+128h]
  int v198; // [rsp+240h] [rbp+140h]

  v9 = *a3;
  v10 = a4->m128i_i64[0];
  v11 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v12 = a3->m128i_i64[0];
  v13 = v11;
  v14 = HIDWORD(a4->m128i_i64[0]);
  v15 = HIDWORD(v11) - v14;
  v16 = _mm_srli_si128(v9, 8).m128i_u64[0];
  v144 = v15;
  v17 = HIDWORD(v12);
  v149 = v16 - v12;
  v18 = v13 - v10;
  LODWORD(v19) = HIDWORD(v16) - HIDWORD(v12);
  v152 = HIDWORD(v16) - HIDWORD(v12);
  if ( v18 >= 128000000 || v15 >= 128000000 || v18 <= -128000000 || v15 <= -128000000 )
    return v19;
  v139 = HIDWORD(v16) - v14;
  v20 = v12 - v10;
  v21 = *(unsigned int *)(a2 + 40);
  v22 = v16 - v10;
  v23 = *(_DWORD *)(a2 + 32);
  v24 = *(_QWORD *)(a1 + 48);
  v25 = v24 + *(unsigned int *)(a1 + 40);
  v188 = *(_QWORD *)(a2 + 48);
  v189 = v188 + v21;
  v185 = *(_DWORD *)(a1 + 32);
  v141 = v17 - v14;
  v197 = *(_DWORD *)(a1 + 64) / 4;
  v26 = v197;
  v156 = v197;
  LODWORD(v21) = *(_DWORD *)(a2 + 64);
  v186 = v24;
  v138 = v25;
  v198 = (int)v21 / 4;
  v160 = (int)v21 / 4;
  v187 = v25;
  v135 = v20;
  v153 = v20;
  v154 = v22;
  v151 = *(_QWORD *)(a1 + 56) + 4 * (v197 * (v15 - ((int)v17 - (int)v14) - 1) - (__int64)v20);
  v27 = *a5;
  v28 = a5[1];
  v29 = a5[2] - v27;
  v137 = a5[3] - v28;
  v30 = (int)v21 / 4 * (v137 - 1);
  v150 = *(_QWORD *)(a2 + 56) + 4 * (v27 + v30 + (int)v21 / 4 * v28);
  if ( (*a6 & 0x20) != 0 )
  {
    v92 = v197;
    v101 = v141;
    v102 = v151 + 4 * (v92 * v141 - (__int64)(v92 * (v144 - 1)));
    LODWORD(v19) = v139;
    if ( v137 < v139 )
      LODWORD(v19) = a5[3] - v28;
    v103 = v150 + 4 * (v198 * v141 - v30);
    v140 = v19;
    if ( v29 < v22 )
      v22 = a5[2] - v27;
    if ( v22 > v20 && v141 < (int)v19 )
    {
      v104 = 4 * (v22 - v20);
      while ( 1 )
      {
        v105 = (char *)(v103 + 4LL * v20);
        v106 = (void *)(v102 + 4LL * v20);
        if ( v104 <= 0 )
          break;
        v19 = (unsigned __int64)v106 + v104;
        if ( v19 <= (unsigned __int64)v106 )
          goto LABEL_69;
        v107 = &v105[v104];
        if ( v107 <= v105 || v24 > (unsigned __int64)v106 || v19 > v25 )
          goto LABEL_69;
        if ( (v24 > (unsigned __int64)v105 || (unsigned __int64)v107 > v25)
          && (v188 > (unsigned __int64)v105 || (unsigned __int64)v107 > v189) )
        {
          goto LABEL_69;
        }
        memmove(v106, v105, v104);
        ++v101;
        v92 = v197;
        v103 += 4LL * v198;
        LODWORD(v19) = v140;
        v102 += 4LL * v197;
        if ( v101 >= v140 )
          goto LABEL_70;
        v25 = v138;
      }
    }
    goto LABEL_70;
  }
  v179 = *a6 & 2;
  v31 = 1;
  v158 = v149;
  v162 = v137;
  v32 = a6[1];
  v33 = a6[2];
  v157 = v18;
  v161 = v29;
  v163 = v23;
  v164 = v32;
  v194 = v33;
  v167 = v33;
  if ( v18 - v33 - v32 <= 0 || v29 - v33 - v32 <= 0 )
  {
    v34 = 0;
    v174 = 0;
    if ( v33 + v32 )
    {
      v36 = v18 * v32 / (v33 + v32);
      v177 = v36;
      v34 = 0;
    }
    else
    {
      v36 = 0;
      v177 = 0;
    }
    v35 = v18 - v36;
    v133 = v18 - v36;
    v178 = v18 - v36;
  }
  else
  {
    v34 = 1;
    v174 = 1;
    v35 = v33;
    v133 = v33;
    v178 = v33;
    v36 = v32;
    v177 = v32;
  }
  v165 = v20;
  if ( v36 >= v22 )
  {
    v37 = v22;
    v166 = v22;
  }
  else
  {
    v37 = v36;
    v166 = v36;
  }
  if ( !v34 && v36 )
  {
    DNG_InitStretch((unsigned int)&v175, v36, v32, v20, v37);
    v25 = v187;
    v35 = v178;
    v33 = v167;
    v20 = v153;
    v24 = v186;
    v36 = v177;
    v32 = v164;
    v29 = v161;
    v18 = v157;
    v26 = v156;
    v22 = v154;
    v138 = v187;
    v133 = v178;
    v194 = v167;
    v135 = v153;
  }
  v38 = v18 - v35;
  v39 = (unsigned int)(v29 - v33 - v32);
  v40 = v18 - v35 - v36;
  v171 = v40;
  if ( v36 <= v20 )
  {
    v172 = v20;
  }
  else
  {
    v20 = v36;
    v172 = v36;
  }
  v41 = v40 + v36;
  if ( (int)(v40 + v36) >= v22 )
    v41 = v22;
  v42 = v174;
  v173 = v41;
  v170 = v39;
  if ( v174 )
  {
    v43 = v40;
    v184 = v41 - v36;
    v44 = v20 - v36;
    v183 = v44;
    v45 = (v39 << 32) - 1;
    if ( v40 == 4LL )
    {
      v46 = v45 >> 2;
    }
    else
    {
      v46 = v45 / v40;
      v43 = v40;
    }
    v47 = v46 + 1;
    v48 = v39 << 32;
    v145 = v47;
    if ( v43 == 4 )
      v49 = v48 >> 2;
    else
      v49 = v48 / v40;
    v50 = v49 >> 1;
    v142 = HIDWORD(v47);
    v51 = HIDWORD(v50);
    v182 = v47;
    if ( v44 > 5 )
    {
      v108 = ((unsigned int)v50 + v44 * (unsigned __int64)(unsigned int)v47) >> 32;
      LODWORD(v50) = v50 + v44 * v145;
      v42 = v174;
      LODWORD(v51) = v108 + v44 * v142 + v51;
    }
    else if ( v44 > 0 )
    {
      v148 = (unsigned int)v44;
      do
      {
        v123 = (int)v50 + v145 < (unsigned int)v50;
        LODWORD(v50) = v50 + v145;
        LODWORD(v51) = v142 + v123 + v51;
        --v148;
      }
      while ( v148 );
      v26 = v156;
      v25 = v138;
      v42 = v174;
    }
    v180 = v51;
    v33 = v194;
    v181 = v50;
  }
  if ( v38 <= v135 )
    v38 = v135;
  v52 = v38 - v40 - v36;
  v168 = v52;
  if ( v18 >= v22 )
    v18 = v22;
  v53 = v18 - v40 - v36;
  v169 = v53;
  if ( !v42 && v133 )
  {
    DNG_InitStretch((unsigned int)&v176, v133, v33, v52, v53);
    v25 = v187;
    v24 = v186;
    v26 = v156;
    v138 = v187;
    v135 = v153;
  }
  v54 = a6;
  v55 = v144;
  v56 = a6[3];
  v57 = a6[4];
  v146 = v56;
  if ( v144 - v56 - v57 <= 0 || v137 - v56 - v57 <= 0 )
  {
    v195 = 0;
    if ( v57 + v56 )
      v109 = v144 * v56 / (v57 + v56);
    else
      v109 = 0;
    v134 = v109;
    v58 = v144 - v109;
  }
  else
  {
    v134 = a6[3];
    v58 = a6[4];
    v195 = 1;
  }
  v59 = v141;
  v60 = v144 - v58;
  v61 = v144 - v58;
  v62 = v139;
  if ( v144 - v58 <= v141 )
    v61 = v141;
  if ( v144 < v139 )
    v62 = v144;
  if ( v139 <= v60 )
    goto LABEL_37;
  v155 = v151;
  v159 = v150;
  if ( v57 != v58 )
  {
    if ( v58 > 0 )
    {
      DNG_InitStretch((unsigned int)v192, v58, v57, v144 - v62, v144 - v61);
      DNG_StretchCol((struct _DNGINTERNALDATA *)&v153, v192);
      v25 = v187;
      v63 = v153;
      v24 = v186;
      v26 = v156;
      v59 = v141;
      v138 = v187;
      v135 = v153;
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v95 = v57 - v61 - v58 + v144 - 1;
  v155 = v151 - 4LL * v197 * v95;
  v159 = v150 - 4LL * v198 * v95;
  if ( v61 >= v62 )
  {
    v59 = v141;
LABEL_37:
    v63 = v135;
    goto LABEL_38;
  }
  v96 = (unsigned int)(v62 - v61);
  do
  {
    DNG_DrawRow(&v153);
    v155 += 4LL * v197;
    v159 += 4LL * v198;
    --v96;
  }
  while ( v96 );
  v25 = v187;
  v63 = v153;
  v24 = v186;
  v26 = v156;
  v55 = v144;
  v59 = v141;
  v54 = a6;
  v138 = v187;
  v135 = v153;
LABEL_38:
  v64 = v54[4];
  v65 = v54[3];
  v66 = v55 - v65 - v64;
  v67 = v137 - v65 - v64;
  if ( !v195 || v67 <= 0 || v66 <= 0 || v59 >= v60 || v139 <= v134 )
  {
LABEL_65:
    v90 = v197;
    goto LABEL_66;
  }
  v196 = v151 - 4LL * v197 * v64;
  v147 = v150 - 4LL * v198 * v64;
  v68 = v146;
  if ( v146 <= v141 )
    v68 = v141;
  if ( !v179 )
  {
    v69 = v55 - v57;
    v70 = (unsigned int)v66;
    if ( v55 - v57 >= v139 )
      v69 = v139;
    v71 = v66 + v146 - v69;
    v72 = v66 + v146 - v68;
    v73 = (((unsigned __int64)(unsigned int)v67 << 32) - 1) / (unsigned int)v66 + 1;
    v74 = (unsigned __int64)(unsigned int)v67 << 32;
    v143 = v73;
    v75 = (v74 / v70) >> 1;
    v190 = HIDWORD(v73);
    v76 = (v74 / v70) >> 33;
    if ( v71 <= 5 )
    {
      if ( v71 > 0 )
      {
        v93 = (unsigned int)v71;
        do
        {
          v94 = __PAIR64__(v76, v75) + v73;
          LODWORD(v76) = (__PAIR64__(v76, v75) + v73) >> 32;
          LODWORD(v75) = v94;
          --v93;
        }
        while ( v93 );
        v25 = v138;
      }
    }
    else
    {
      v77 = (unsigned int)v75 + v71 * (unsigned __int64)(unsigned int)v73;
      LODWORD(v75) = v75 + v71 * v73;
      LODWORD(v76) = HIDWORD(v77) + v71 * HIDWORD(v73) + v76;
    }
    v78 = v196;
    v79 = v26 * v71;
    v80 = v147;
    v81 = v196 - 4 * v79;
    v82 = 4LL * v26 * v72;
    v83 = 0;
    v84 = v147 - 4LL * v160 * (int)v76;
    v191 = v196 - v82;
    if ( v81 != v196 - v82 )
    {
      do
      {
        if ( v31 )
        {
          v155 = v81;
          v159 = v84;
          DNG_DrawRow(&v153);
          v24 = v186;
          v26 = v156;
          v138 = v187;
          v135 = v153;
        }
        else
        {
          v85 = 4 * v158;
          v86 = (char *)(v81 + 4LL * v135);
          v87 = (char *)(v81 + 4 * (v135 + (__int64)v26));
          if ( 4 * v158 <= 0 )
            break;
          v88 = &v86[v85];
          if ( v88 <= v86 )
            break;
          v89 = &v87[v85];
          if ( v89 <= v87 || v24 > (unsigned __int64)v86 || (unsigned __int64)v88 > v25 )
            break;
          if ( (v24 > (unsigned __int64)v87 || (unsigned __int64)v89 > v25)
            && (v188 > (unsigned __int64)v87 || (unsigned __int64)v89 > v189) )
          {
            break;
          }
          memmove(v86, v87, v85);
        }
        v31 = ((int)v75 + v143 < (unsigned int)v75) + (_DWORD)v190;
        v83 += v31;
        if ( v83 < v162 )
          v84 -= 4LL * v160 * v31;
        v25 = v138;
        LODWORD(v75) = v75 + v143;
        v81 -= 4LL * v26;
      }
      while ( v81 != v191 );
      v78 = v196;
      v80 = v147;
    }
    v55 = v144;
    v155 = v78;
    v159 = v80;
    goto LABEL_65;
  }
  v90 = v197;
  v110 = v196 + 4 * (v197 * (v68 - v146) - (__int64)(v197 * (v66 - 1)));
  v155 = v110;
  v111 = v67 - (v68 - v146) % v67;
  v159 = v147 + 4 * (v160 * ((v68 - v146) % v67) - (__int64)(v198 * (v67 - 1)));
  if ( v67 >= v66 )
    v112 = v55 - v65 - v64;
  else
    v112 = v137 - v65 - v64;
  v114 = v55 - v57;
  v113 = v114;
  if ( v114 >= v139 )
    v114 = v139;
  v136 = v114;
  if ( v68 + v112 >= v114 )
  {
    v115 = v139;
    if ( v113 < v139 )
      v115 = v113;
  }
  else
  {
    if ( v67 < v66 )
      v66 = v67;
    v115 = v68 + v66;
  }
  if ( v68 < v115 )
  {
    v116 = 4LL * v197;
    v117 = (unsigned int)(v115 - v68);
    do
    {
      DNG_DrawRow(&v153);
      if ( --v111 )
      {
        v118 = v159;
      }
      else
      {
        v111 = v67;
        v118 = v159 - 4LL * v198 * v67;
      }
      v110 = v116 + v155;
      v159 = 4LL * v198 + v118;
      v155 += v116;
      --v117;
    }
    while ( v117 );
    v63 = v153;
    v114 = v136;
    v90 = v197;
  }
  v119 = v110 - 4LL * v90 * v67;
  v159 = v119;
  if ( v115 < v114 )
  {
    v120 = 4 * v158;
    v121 = 4LL * v63;
    do
    {
      if ( !DNG_CopyMemory((struct _DNGINTERNALDATA *)&v153, (void *)(v121 + v110), (void *)(v121 + v119), v120) )
        break;
      ++v115;
      v122 = 4LL * v90;
      v110 += v122;
      v119 += v122;
      v155 = v110;
      v159 = v119;
    }
    while ( v115 < v114 );
  }
  v55 = v144;
LABEL_66:
  v91 = v134;
  LODWORD(v19) = v139;
  if ( v134 >= v139 )
    v91 = v139;
  if ( v141 < v134 )
  {
    v155 = v151 - 4LL * v90 * (v55 - v134);
    v19 = 4LL * v198 * (v137 - a6[3]);
    v97 = v150 - v19;
    v159 = v150 - v19;
    if ( v146 == v134 )
    {
      v98 = v146 - v141 - 1;
      v99 = v151 - 4LL * v90 * (v55 - v134) - 4LL * v90 * v98;
      v19 = 4LL * v198 * v98;
      v155 = v99;
      v159 = v97 - v19;
      if ( v141 < v91 )
      {
        v100 = (unsigned int)(v91 - v141);
        do
        {
          LODWORD(v19) = DNG_DrawRow(&v153);
          v155 += 4LL * v90;
          v159 += 4LL * v198;
          --v100;
        }
        while ( v100 );
      }
    }
    else if ( v134 > 0 )
    {
      DNG_InitStretch((unsigned int)v192, v134, v146, v134 - v91, v134 - v141);
      LODWORD(v19) = DNG_StretchCol((struct _DNGINTERNALDATA *)&v153, v192);
    }
  }
LABEL_69:
  v92 = v197;
LABEL_70:
  if ( a8 && v152 <= *(_DWORD *)(a1 + 36) && v149 <= *(_DWORD *)(a1 + 32) && v152 > 0 )
  {
    v124 = 4LL * v92;
    LODWORD(v19) = v149 / 2;
    v125 = (unsigned int)v152;
    v126 = 0LL;
    do
    {
      v127 = *(_QWORD *)(a1 + 56);
      v128 = (int *)(v127 + v126);
      v129 = (_DWORD *)(v126 + 4LL * v149 + v127 - 4);
      if ( v149 / 2 > 0 )
      {
        v130 = (unsigned int)(v149 / 2);
        do
        {
          v131 = *v128++;
          LODWORD(v19) = *v129--;
          *(v128 - 1) = v19;
          v129[1] = v131;
          --v130;
        }
        while ( v130 );
      }
      v126 += v124;
      --v125;
    }
    while ( v125 );
  }
  return v19;
}
