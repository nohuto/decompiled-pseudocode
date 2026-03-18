/*
 * XREFs of RenderNineGridInternal @ 0x1C00A9030
 * Callers:
 *     RenderNineGrid @ 0x1C00A8D24 (RenderNineGrid.c)
 * Callees:
 *     DNG_StretchCol @ 0x1C00A6DBC (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1C00A9DB0 (DNG_DrawRow.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C00ABD9C (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     DNG_InitStretch @ 0x1C00AC750 (DNG_InitStretch.c)
 *     memmove @ 0x1C013D380 (memmove.c)
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
  unsigned __int64 v9; // xmm0_8
  __int64 v10; // r15
  __int64 v11; // r11
  __m128i v12; // xmm1
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  int v16; // r8d
  int v17; // edi
  int v18; // r15d
  __int64 v19; // rax
  int v20; // esi
  int v21; // r11d
  unsigned __int64 v22; // r12
  unsigned __int64 v23; // r10
  int v24; // r13d
  __int64 v25; // rdx
  int v26; // ecx
  int v27; // r9d
  __int64 v28; // rdi
  int v29; // ebx
  int v30; // ecx
  int v31; // edx
  int v32; // eax
  int v33; // r14d
  int v34; // r11d
  int v35; // edi
  int v36; // edi
  __int64 v37; // r9
  unsigned int v38; // r14d
  int v39; // eax
  int v40; // ecx
  __int64 v41; // rdx
  int v42; // r15d
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rdx
  int v50; // edi
  int v51; // r8d
  _DWORD *v52; // rsi
  int v53; // r15d
  int v54; // edx
  int v55; // r14d
  int v56; // edx
  int v57; // ecx
  int v58; // edi
  int v59; // r9d
  int v60; // r8d
  int v61; // r11d
  int v62; // edx
  int v63; // eax
  int v64; // r9d
  int v65; // esi
  int v66; // edi
  int v67; // eax
  unsigned __int64 v68; // rcx
  int v69; // r11d
  int v70; // r14d
  unsigned __int64 v71; // r9
  unsigned __int64 v72; // rtt
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // rdx
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // r11
  __int64 v79; // rdi
  __int64 v80; // rax
  unsigned int v81; // r14d
  __int64 v82; // r15
  int v83; // r8d
  char *v84; // rcx
  char *v85; // rdx
  char *v86; // rax
  char *v87; // r9
  int v88; // r13d
  int v89; // r8d
  int v90; // r8d
  __int64 v91; // rdx
  unsigned __int64 v92; // kr08_8
  int v93; // edx
  __int64 v94; // rsi
  unsigned __int64 v95; // rbx
  int v96; // eax
  __int64 v97; // r11
  __int64 v98; // rbx
  int v99; // r13d
  __int64 v100; // rbx
  __int64 v101; // rdi
  int v102; // esi
  char *v103; // rdx
  void *v104; // rcx
  char *v105; // r9
  unsigned __int64 v106; // rax
  int v107; // r11d
  __int64 v108; // rbx
  int v109; // r12d
  int v110; // eax
  int v111; // ecx
  int v112; // r15d
  int v113; // r14d
  __int64 v114; // r13
  __int64 v115; // r15
  __int64 v116; // rdx
  __int64 v117; // rdi
  int v118; // r12d
  __int64 v119; // rsi
  __int64 v120; // rax
  BOOL v121; // eax
  __int64 v122; // r9
  __int64 v123; // r11
  __int64 v124; // r14
  __int64 v125; // rcx
  int *v126; // rdx
  _DWORD *v127; // r8
  __int64 v128; // r10
  int v129; // ecx
  int v131; // [rsp+30h] [rbp-D0h]
  int v132; // [rsp+30h] [rbp-D0h]
  int v133; // [rsp+38h] [rbp-C8h]
  int v134; // [rsp+38h] [rbp-C8h]
  int v135; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v136; // [rsp+48h] [rbp-B8h]
  int v137; // [rsp+50h] [rbp-B0h]
  int v138; // [rsp+50h] [rbp-B0h]
  int v139; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v140; // [rsp+60h] [rbp-A0h]
  int v141; // [rsp+60h] [rbp-A0h]
  int v142; // [rsp+68h] [rbp-98h]
  int v143; // [rsp+70h] [rbp-90h]
  int v144; // [rsp+70h] [rbp-90h]
  __int64 v145; // [rsp+78h] [rbp-88h]
  __int64 v146; // [rsp+78h] [rbp-88h]
  int v147; // [rsp+80h] [rbp-80h]
  __int64 v148; // [rsp+88h] [rbp-78h]
  __int64 v149; // [rsp+90h] [rbp-70h]
  int v150; // [rsp+98h] [rbp-68h]
  int v151; // [rsp+A0h] [rbp-60h] BYREF
  int v152; // [rsp+A4h] [rbp-5Ch]
  __int64 v153; // [rsp+A8h] [rbp-58h]
  int v154; // [rsp+B0h] [rbp-50h]
  int v155; // [rsp+B4h] [rbp-4Ch]
  int v156; // [rsp+B8h] [rbp-48h]
  __int64 v157; // [rsp+C0h] [rbp-40h]
  int v158; // [rsp+C8h] [rbp-38h]
  int v159; // [rsp+CCh] [rbp-34h]
  unsigned int v160; // [rsp+D0h] [rbp-30h]
  int v161; // [rsp+D4h] [rbp-2Ch]
  int v162; // [rsp+DCh] [rbp-24h]
  int v163; // [rsp+E0h] [rbp-20h]
  int v164; // [rsp+E4h] [rbp-1Ch]
  int v165; // [rsp+E8h] [rbp-18h]
  int v166; // [rsp+ECh] [rbp-14h]
  int v167; // [rsp+F0h] [rbp-10h]
  int v168; // [rsp+F4h] [rbp-Ch]
  unsigned int v169; // [rsp+F8h] [rbp-8h]
  int v170; // [rsp+FCh] [rbp-4h]
  int v171; // [rsp+100h] [rbp+0h]
  int v172; // [rsp+104h] [rbp+4h]
  char v173; // [rsp+108h] [rbp+8h] BYREF
  char v174; // [rsp+128h] [rbp+28h] BYREF
  int v175; // [rsp+148h] [rbp+48h]
  int v176; // [rsp+14Ch] [rbp+4Ch]
  int v177; // [rsp+150h] [rbp+50h]
  int v178; // [rsp+154h] [rbp+54h]
  int v179; // [rsp+158h] [rbp+58h]
  unsigned __int64 v180; // [rsp+15Ch] [rbp+5Ch]
  int v181; // [rsp+16Ch] [rbp+6Ch]
  int v182; // [rsp+170h] [rbp+70h]
  int v183; // [rsp+174h] [rbp+74h]
  unsigned __int64 v184; // [rsp+178h] [rbp+78h]
  unsigned __int64 v185; // [rsp+180h] [rbp+80h]
  unsigned __int64 v186; // [rsp+188h] [rbp+88h]
  unsigned __int64 v187; // [rsp+190h] [rbp+90h]
  unsigned __int64 v188; // [rsp+1A0h] [rbp+A0h]
  __int64 v189; // [rsp+1A8h] [rbp+A8h]
  _DWORD v190[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v192; // [rsp+220h] [rbp+120h]
  char v193; // [rsp+220h] [rbp+120h]
  __int64 v194; // [rsp+220h] [rbp+120h]
  int v195; // [rsp+228h] [rbp+128h]
  int v196; // [rsp+240h] [rbp+140h]

  v9 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v10 = a3->m128i_i64[0];
  v11 = a4->m128i_i64[0];
  v12 = *a4;
  v147 = v9 - a3->m128i_i64[0];
  v13 = HIDWORD(a4->m128i_i64[0]);
  v14 = HIDWORD(a3->m128i_i64[0]);
  v12.m128i_i64[0] = _mm_srli_si128(v12, 8).m128i_u64[0];
  LODWORD(v15) = HIDWORD(v9) - HIDWORD(a3->m128i_i64[0]);
  v16 = v12.m128i_i32[0] - v11;
  v17 = v12.m128i_i32[1] - HIDWORD(v11);
  v150 = HIDWORD(v9) - HIDWORD(v10);
  v142 = v12.m128i_i32[1] - HIDWORD(v11);
  if ( v12.m128i_i32[0] - (int)v11 >= 128000000 || v17 >= 128000000 || v16 <= -128000000 || v17 <= -128000000 )
    return v15;
  v137 = HIDWORD(v9) - v13;
  v18 = v10 - v11;
  v19 = *(unsigned int *)(a2 + 40);
  v20 = v9 - v11;
  v21 = *(_DWORD *)(a2 + 32);
  v22 = *(_QWORD *)(a1 + 48);
  v23 = v22 + *(unsigned int *)(a1 + 40);
  v186 = *(_QWORD *)(a2 + 48);
  v187 = v186 + v19;
  v183 = *(_DWORD *)(a1 + 32);
  v139 = v14 - v13;
  v195 = *(_DWORD *)(a1 + 64) / 4;
  v24 = v195;
  v154 = v195;
  LODWORD(v19) = *(_DWORD *)(a2 + 64);
  v184 = v22;
  v136 = v23;
  v196 = (int)v19 / 4;
  v158 = (int)v19 / 4;
  v185 = v23;
  v133 = v18;
  v151 = v18;
  v152 = v20;
  v149 = *(_QWORD *)(a1 + 56) + 4 * (v195 * (v17 - ((int)v14 - (int)v13) - 1) - (__int64)v18);
  v25 = *a5;
  v26 = a5[1];
  v27 = a5[2] - v25;
  v135 = a5[3] - v26;
  v28 = (int)v19 / 4 * (v135 - 1);
  v148 = *(_QWORD *)(a2 + 56) + 4 * (v25 + v28 + (int)v19 / 4 * v26);
  if ( (*a6 & 0x20) != 0 )
  {
    v90 = v195;
    v99 = v139;
    v100 = v149 + 4 * (v90 * v139 - (__int64)(v90 * (v142 - 1)));
    LODWORD(v15) = v137;
    if ( v135 < v137 )
      LODWORD(v15) = a5[3] - v26;
    v101 = v148 + 4 * (v196 * v139 - v28);
    v138 = v15;
    if ( v27 < v20 )
      v20 = a5[2] - v25;
    if ( v20 > v18 && v139 < (int)v15 )
    {
      v102 = 4 * (v20 - v18);
      while ( 1 )
      {
        v103 = (char *)(v101 + 4LL * v18);
        v104 = (void *)(v100 + 4LL * v18);
        if ( v102 <= 0 )
          break;
        v15 = (unsigned __int64)v104 + v102;
        if ( v15 <= (unsigned __int64)v104 )
          goto LABEL_69;
        v105 = &v103[v102];
        if ( v105 <= v103 || v22 > (unsigned __int64)v104 || v15 > v23 )
          goto LABEL_69;
        if ( (v22 > (unsigned __int64)v103 || (unsigned __int64)v105 > v23)
          && (v186 > (unsigned __int64)v103 || (unsigned __int64)v105 > v187) )
        {
          goto LABEL_69;
        }
        memmove(v104, v103, v102);
        ++v99;
        v90 = v195;
        v101 += 4LL * v196;
        LODWORD(v15) = v138;
        v100 += 4LL * v195;
        if ( v99 >= v138 )
          goto LABEL_70;
        v23 = v136;
      }
    }
    goto LABEL_70;
  }
  v177 = *a6 & 2;
  v29 = 1;
  v156 = v147;
  v160 = v135;
  v30 = a6[1];
  v31 = a6[2];
  v155 = v16;
  v159 = v27;
  v161 = v21;
  v162 = v30;
  v192 = v31;
  v165 = v31;
  if ( v16 - v31 - v30 <= 0 || v27 - v31 - v30 <= 0 )
  {
    v32 = 0;
    v172 = 0;
    if ( v31 + v30 )
    {
      v34 = v16 * v30 / (v31 + v30);
      v175 = v34;
      v32 = 0;
    }
    else
    {
      v34 = 0;
      v175 = 0;
    }
    v33 = v16 - v34;
    v131 = v16 - v34;
    v176 = v16 - v34;
  }
  else
  {
    v32 = 1;
    v172 = 1;
    v33 = v31;
    v131 = v31;
    v176 = v31;
    v34 = v30;
    v175 = v30;
  }
  v163 = v18;
  if ( v34 >= v20 )
  {
    v35 = v20;
    v164 = v20;
  }
  else
  {
    v35 = v34;
    v164 = v34;
  }
  if ( !v32 && v34 )
  {
    DNG_InitStretch((unsigned int)&v173, v34, v30, v18, v35);
    v23 = v185;
    v33 = v176;
    v31 = v165;
    v18 = v151;
    v22 = v184;
    v34 = v175;
    v30 = v162;
    v27 = v159;
    v16 = v155;
    v24 = v154;
    v20 = v152;
    v136 = v185;
    v131 = v176;
    v192 = v165;
    v133 = v151;
  }
  v36 = v16 - v33;
  v37 = (unsigned int)(v27 - v31 - v30);
  v38 = v16 - v33 - v34;
  v169 = v38;
  if ( v34 <= v18 )
  {
    v170 = v18;
  }
  else
  {
    v18 = v34;
    v170 = v34;
  }
  v39 = v38 + v34;
  if ( (int)(v38 + v34) >= v20 )
    v39 = v20;
  v40 = v172;
  v171 = v39;
  v168 = v37;
  if ( v172 )
  {
    v41 = v38;
    v182 = v39 - v34;
    v42 = v18 - v34;
    v181 = v42;
    v43 = (v37 << 32) - 1;
    if ( v38 == 4LL )
    {
      v44 = v43 >> 2;
    }
    else
    {
      v44 = v43 / v38;
      v41 = v38;
    }
    v45 = v44 + 1;
    v46 = v37 << 32;
    v143 = v45;
    if ( v41 == 4 )
      v47 = v46 >> 2;
    else
      v47 = v46 / v38;
    v48 = v47 >> 1;
    v140 = HIDWORD(v45);
    v49 = HIDWORD(v48);
    v180 = v45;
    if ( v42 > 5 )
    {
      v106 = ((unsigned int)v48 + v42 * (unsigned __int64)(unsigned int)v45) >> 32;
      LODWORD(v48) = v48 + v42 * v143;
      v40 = v172;
      LODWORD(v49) = v106 + v42 * v140 + v49;
    }
    else if ( v42 > 0 )
    {
      v146 = (unsigned int)v42;
      do
      {
        v121 = (int)v48 + v143 < (unsigned int)v48;
        LODWORD(v48) = v48 + v143;
        LODWORD(v49) = v140 + v121 + v49;
        --v146;
      }
      while ( v146 );
      v24 = v154;
      v23 = v136;
      v40 = v172;
    }
    v178 = v49;
    v31 = v192;
    v179 = v48;
  }
  if ( v36 <= v133 )
    v36 = v133;
  v50 = v36 - v38 - v34;
  v166 = v50;
  if ( v16 >= v20 )
    v16 = v20;
  v51 = v16 - v38 - v34;
  v167 = v51;
  if ( !v40 && v131 )
  {
    DNG_InitStretch((unsigned int)&v174, v131, v31, v50, v51);
    v23 = v185;
    v22 = v184;
    v24 = v154;
    v136 = v185;
    v133 = v151;
  }
  v52 = a6;
  v53 = v142;
  v54 = a6[3];
  v55 = a6[4];
  v144 = v54;
  if ( v142 - v54 - v55 <= 0 || v135 - v54 - v55 <= 0 )
  {
    v193 = 0;
    if ( v55 + v54 )
      v107 = v142 * v54 / (v55 + v54);
    else
      v107 = 0;
    v132 = v107;
    v56 = v142 - v107;
  }
  else
  {
    v132 = a6[3];
    v56 = a6[4];
    v193 = 1;
  }
  v57 = v139;
  v58 = v142 - v56;
  v59 = v142 - v56;
  v60 = v137;
  if ( v142 - v56 <= v139 )
    v59 = v139;
  if ( v142 < v137 )
    v60 = v142;
  if ( v137 <= v58 )
    goto LABEL_37;
  v153 = v149;
  v157 = v148;
  if ( v55 != v56 )
  {
    if ( v56 > 0 )
    {
      DNG_InitStretch((unsigned int)v190, v56, v55, v142 - v60, v142 - v59);
      DNG_StretchCol((struct _DNGINTERNALDATA *)&v151, v190);
      v23 = v185;
      v61 = v151;
      v22 = v184;
      v24 = v154;
      v57 = v139;
      v136 = v185;
      v133 = v151;
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v93 = v55 - v59 - v56 + v142 - 1;
  v153 = v149 - 4LL * v195 * v93;
  v157 = v148 - 4LL * v196 * v93;
  if ( v59 >= v60 )
  {
    v57 = v139;
LABEL_37:
    v61 = v133;
    goto LABEL_38;
  }
  v94 = (unsigned int)(v60 - v59);
  do
  {
    DNG_DrawRow(&v151);
    v153 += 4LL * v195;
    v157 += 4LL * v196;
    --v94;
  }
  while ( v94 );
  v23 = v185;
  v61 = v151;
  v22 = v184;
  v24 = v154;
  v53 = v142;
  v57 = v139;
  v52 = a6;
  v136 = v185;
  v133 = v151;
LABEL_38:
  v62 = v52[4];
  v63 = v52[3];
  v64 = v53 - v63 - v62;
  v65 = v135 - v63 - v62;
  if ( !v193 || v65 <= 0 || v64 <= 0 || v57 >= v58 || v137 <= v132 )
  {
LABEL_65:
    v88 = v195;
    goto LABEL_66;
  }
  v194 = v149 - 4LL * v195 * v62;
  v145 = v148 - 4LL * v196 * v62;
  v66 = v144;
  if ( v144 <= v139 )
    v66 = v139;
  if ( !v177 )
  {
    v67 = v53 - v55;
    v68 = (unsigned int)v64;
    if ( v53 - v55 >= v137 )
      v67 = v137;
    v69 = v64 + v144 - v67;
    v70 = v64 + v144 - v66;
    v71 = (((unsigned __int64)(unsigned int)v65 << 32) - 1) / (unsigned int)v64 + 1;
    v72 = (unsigned __int64)(unsigned int)v65 << 32;
    v141 = v71;
    v73 = (v72 / v68) >> 1;
    v188 = HIDWORD(v71);
    v74 = (v72 / v68) >> 33;
    if ( v69 <= 5 )
    {
      if ( v69 > 0 )
      {
        v91 = (unsigned int)v69;
        do
        {
          v92 = __PAIR64__(v74, v73) + v71;
          LODWORD(v74) = (__PAIR64__(v74, v73) + v71) >> 32;
          LODWORD(v73) = v92;
          --v91;
        }
        while ( v91 );
        v23 = v136;
      }
    }
    else
    {
      v75 = (unsigned int)v73 + v69 * (unsigned __int64)(unsigned int)v71;
      LODWORD(v73) = v73 + v69 * v71;
      LODWORD(v74) = HIDWORD(v75) + v69 * HIDWORD(v71) + v74;
    }
    v76 = v194;
    v77 = v24 * v69;
    v78 = v145;
    v79 = v194 - 4 * v77;
    v80 = 4LL * v24 * v70;
    v81 = 0;
    v82 = v145 - 4LL * v158 * (int)v74;
    v189 = v194 - v80;
    if ( v79 != v194 - v80 )
    {
      do
      {
        if ( v29 )
        {
          v153 = v79;
          v157 = v82;
          DNG_DrawRow(&v151);
          v22 = v184;
          v24 = v154;
          v136 = v185;
          v133 = v151;
        }
        else
        {
          v83 = 4 * v156;
          v84 = (char *)(v79 + 4LL * v133);
          v85 = (char *)(v79 + 4 * (v133 + (__int64)v24));
          if ( 4 * v156 <= 0 )
            break;
          v86 = &v84[v83];
          if ( v86 <= v84 )
            break;
          v87 = &v85[v83];
          if ( v87 <= v85 || v22 > (unsigned __int64)v84 || (unsigned __int64)v86 > v23 )
            break;
          if ( (v22 > (unsigned __int64)v85 || (unsigned __int64)v87 > v23)
            && (v186 > (unsigned __int64)v85 || (unsigned __int64)v87 > v187) )
          {
            break;
          }
          memmove(v84, v85, v83);
        }
        v29 = ((int)v73 + v141 < (unsigned int)v73) + (_DWORD)v188;
        v81 += v29;
        if ( v81 < v160 )
          v82 -= 4LL * v158 * v29;
        v23 = v136;
        LODWORD(v73) = v73 + v141;
        v79 -= 4LL * v24;
      }
      while ( v79 != v189 );
      v76 = v194;
      v78 = v145;
    }
    v53 = v142;
    v153 = v76;
    v157 = v78;
    goto LABEL_65;
  }
  v88 = v195;
  v108 = v194 + 4 * (v195 * (v66 - v144) - (__int64)(v195 * (v64 - 1)));
  v153 = v108;
  v109 = v65 - (v66 - v144) % v65;
  v157 = v145 + 4 * (v158 * ((v66 - v144) % v65) - (__int64)(v196 * (v65 - 1)));
  if ( v65 >= v64 )
    v110 = v53 - v63 - v62;
  else
    v110 = v135 - v63 - v62;
  v112 = v53 - v55;
  v111 = v112;
  if ( v112 >= v137 )
    v112 = v137;
  v134 = v112;
  if ( v66 + v110 >= v112 )
  {
    v113 = v137;
    if ( v111 < v137 )
      v113 = v111;
  }
  else
  {
    if ( v65 < v64 )
      v64 = v65;
    v113 = v66 + v64;
  }
  if ( v66 < v113 )
  {
    v114 = 4LL * v195;
    v115 = (unsigned int)(v113 - v66);
    do
    {
      DNG_DrawRow(&v151);
      if ( --v109 )
      {
        v116 = v157;
      }
      else
      {
        v109 = v65;
        v116 = v157 - 4LL * v196 * v65;
      }
      v108 = v114 + v153;
      v157 = 4LL * v196 + v116;
      v153 += v114;
      --v115;
    }
    while ( v115 );
    v61 = v151;
    v112 = v134;
    v88 = v195;
  }
  v117 = v108 - 4LL * v88 * v65;
  v157 = v117;
  if ( v113 < v112 )
  {
    v118 = 4 * v156;
    v119 = 4LL * v61;
    do
    {
      if ( !DNG_CopyMemory((struct _DNGINTERNALDATA *)&v151, (void *)(v119 + v108), (void *)(v119 + v117), v118) )
        break;
      ++v113;
      v120 = 4LL * v88;
      v108 += v120;
      v117 += v120;
      v153 = v108;
      v157 = v117;
    }
    while ( v113 < v112 );
  }
  v53 = v142;
LABEL_66:
  v89 = v132;
  LODWORD(v15) = v137;
  if ( v132 >= v137 )
    v89 = v137;
  if ( v139 < v132 )
  {
    v153 = v149 - 4LL * v88 * (v53 - v132);
    v15 = 4LL * v196 * (v135 - a6[3]);
    v95 = v148 - v15;
    v157 = v148 - v15;
    if ( v144 == v132 )
    {
      v96 = v144 - v139 - 1;
      v97 = v149 - 4LL * v88 * (v53 - v132) - 4LL * v88 * v96;
      v15 = 4LL * v196 * v96;
      v153 = v97;
      v157 = v95 - v15;
      if ( v139 < v89 )
      {
        v98 = (unsigned int)(v89 - v139);
        do
        {
          LODWORD(v15) = DNG_DrawRow(&v151);
          v153 += 4LL * v88;
          v157 += 4LL * v196;
          --v98;
        }
        while ( v98 );
      }
    }
    else if ( v132 > 0 )
    {
      DNG_InitStretch((unsigned int)v190, v132, v144, v132 - v89, v132 - v139);
      LODWORD(v15) = DNG_StretchCol((struct _DNGINTERNALDATA *)&v151, v190);
    }
  }
LABEL_69:
  v90 = v195;
LABEL_70:
  if ( a8 && v150 <= *(_DWORD *)(a1 + 36) && v147 <= *(_DWORD *)(a1 + 32) && v150 > 0 )
  {
    v122 = 4LL * v90;
    LODWORD(v15) = v147 / 2;
    v123 = (unsigned int)v150;
    v124 = 0LL;
    do
    {
      v125 = *(_QWORD *)(a1 + 56);
      v126 = (int *)(v125 + v124);
      v127 = (_DWORD *)(v124 + 4LL * v147 + v125 - 4);
      if ( v147 / 2 > 0 )
      {
        v128 = (unsigned int)(v147 / 2);
        do
        {
          v129 = *v126++;
          LODWORD(v15) = *v127--;
          *(v126 - 1) = v15;
          v127[1] = v129;
          --v128;
        }
        while ( v128 );
      }
      v124 += v122;
      --v123;
    }
    while ( v123 );
  }
  return v15;
}
