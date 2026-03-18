/*
 * XREFs of ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C005B6A0
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C005C640 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextExtentW @ 0x1C0111340 (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C01626E4 (GreGetTextExtentExW.c)
 * Callees:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C0003C98 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C005B1C0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C007D5D8 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C007FC6C (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0080FC8 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C00811F0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0082A64 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C0083968 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0083C88 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00C467C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C00C51A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C0149BB8 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C028B4D4 (-bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1C029FD78 (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x1C029FFDC (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02A04F8 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 */

void __fastcall ESTROBJ::vInit(
        ESTROBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5,
        int **a6,
        __m128i *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        int a14,
        unsigned int a15,
        int *a16,
        void *a17,
        unsigned int a18)
{
  RFONTOBJ *v18; // r15
  int v20; // r11d
  struct XDCOBJ *v22; // r13
  __int64 v23; // rbp
  __m128i v24; // xmm6
  int v25; // xmm7_4
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rax
  _DWORD *v31; // rcx
  int v32; // edx
  int v33; // r9d
  unsigned int v34; // r12d
  __int64 v35; // rcx
  int v36; // ebx
  int *v37; // rdx
  struct _GLYPHPOS *v38; // rbp
  unsigned __int16 *v39; // r8
  struct _GLYPHPOS *v40; // rsi
  unsigned __int16 *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r12
  int v44; // ecx
  int v45; // ebx
  __int64 v46; // rdx
  _DWORD *v47; // rcx
  unsigned __int16 *v48; // r12
  struct GPRUN *v49; // rbp
  _DWORD *v50; // r13
  int v51; // ebx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r15
  struct _GLYPHDATA **v55; // rdx
  struct _GLYPHDATA *LinkMetricsPlus; // rbx
  __int64 v57; // rsi
  int v58; // eax
  GLYPHDEF *pgdf; // rcx
  int v60; // ecx
  __int64 v61; // rdx
  int v62; // ecx
  char v63; // r13
  char v64; // cl
  int v65; // r8d
  int v66; // eax
  int v67; // ecx
  int *v68; // r8
  int v69; // ecx
  float v70; // xmm1_4
  __int64 v71; // rdx
  float v72; // r9d
  int v73; // ecx
  __int64 v74; // rdx
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rdx
  float v79; // r9d
  int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // r9d
  int v85; // edx
  unsigned int v86; // edx
  unsigned int v87; // ebx
  _DWORD *v88; // r9
  unsigned int v89; // edi
  unsigned int v90; // edx
  __int64 v91; // rdx
  float v92; // r11d
  unsigned int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // rdx
  float v96; // r11d
  unsigned int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rdx
  float v100; // r11d
  unsigned int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rdx
  float v104; // r11d
  unsigned int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rdx
  float v108; // r11d
  unsigned int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rdx
  float v112; // r11d
  unsigned int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rdx
  float v116; // r11d
  unsigned int v117; // eax
  __int64 v118; // rdx
  __int64 v119; // rdx
  float v120; // r11d
  unsigned int v121; // eax
  __int64 v122; // rdx
  __int64 v123; // rdx
  float v124; // r11d
  unsigned int v125; // eax
  __int64 v126; // rdx
  __int64 v127; // rdx
  float v128; // r11d
  unsigned int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rdx
  _DWORD *v132; // r9
  __int64 v133; // rbx
  __int64 v134; // rdx
  float v135; // r11d
  unsigned int v136; // eax
  __int64 v137; // rdx
  __int64 v138; // rdx
  int v139; // r9d
  int v140; // eax
  int v141; // r8d
  __int64 v142; // rax
  int v143; // r8d
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rax
  struct GPRUN *Run; // rax
  __int64 v148; // rbx
  unsigned __int64 v149; // rcx
  unsigned __int64 v150; // r8
  char v151; // al
  int v152; // eax
  __int64 v153; // rcx
  __int64 v154; // rcx
  __int64 v155; // rdx
  int v156; // eax
  __m128i *v157; // rdx
  unsigned __int64 v158; // r8
  __int64 v159; // rcx
  int *v160; // rax
  unsigned __int64 v161; // rcx
  __int64 v162; // rcx
  int *v163; // rax
  unsigned __int64 v164; // rcx
  int v165; // edx
  int v166; // eax
  _DWORD *v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rdx
  int v170; // r11d
  int v171; // r9d
  ERECTL *v172; // r8
  int v173; // r10d
  int v174; // r11d
  int v175; // ecx
  int v176; // edx
  __int64 v177; // r8
  int v178; // ecx
  int v179; // edx
  __int64 v180; // r8
  unsigned int v181; // [rsp+50h] [rbp-88h]
  int v182; // [rsp+54h] [rbp-84h] BYREF
  int v183; // [rsp+58h] [rbp-80h]
  unsigned int v184; // [rsp+5Ch] [rbp-7Ch]
  unsigned int v185; // [rsp+60h] [rbp-78h]
  int v186; // [rsp+64h] [rbp-74h]
  unsigned __int16 *v187; // [rsp+68h] [rbp-70h]
  struct _GLYPHPOS *v188; // [rsp+70h] [rbp-68h]
  int v189; // [rsp+E0h] [rbp+8h]

  v18 = a5;
  v20 = a8;
  v22 = a4;
  v23 = a3;
  v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a10), 0);
  v25 = **a6;
  *(_DWORD *)this = a3;
  *((_QWORD *)this + 7) = a5;
  *((_DWORD *)this + 58) = 0;
  v26 = a8 != 0 ? 0x400 : 0;
  *((_DWORD *)this + 1) = v26;
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 120LL) + 16LL);
  if ( !v27 )
    return;
  if ( (*(_DWORD *)(v27 + 4) & 0x10) != 0 )
  {
    v26 |= 0x80u;
    *((_DWORD *)this + 1) = v26;
  }
  *((_DWORD *)this + 31) = a18;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)((char *)this + 116) = 0LL;
  v28 = *(_QWORD *)a5;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 84LL) & 4) != 0 )
  {
    *((_DWORD *)this + 1) = v26 | 0x100;
    RFONTOBJ::vFixUpGlyphIndices(a5, a2, a3);
    v28 = *(_QWORD *)a5;
  }
  v29 = *(_QWORD *)(v28 + 104);
  if ( (*(_DWORD *)(v29 + 1824) & 0x40000) != 0 )
    *((_DWORD *)this + 58) |= 0x100u;
  v30 = (__int64)a17;
  if ( !a17 )
  {
    v30 = AllocFreeTmpBuffer((30 * (_DWORD)v23 + 7) & 0xFFFFFFF8);
    if ( !v30 )
      return;
    *((_DWORD *)this + 58) |= 1u;
    v20 = a8;
  }
  *((_QWORD *)this + 8) = v30;
  v31 = *(_DWORD **)a5;
  v32 = *(_DWORD *)(*(_QWORD *)a5 + 208LL);
  if ( v32 != 1 || (v31[179] & 4) != 0 )
    v183 = a9;
  else
    v183 = v31[98];
  v33 = a14;
  v34 = a13;
  v184 = a15;
  if ( (a15 & 0x18) != 0 )
  {
    if ( (a15 & 0x18) == 8 )
    {
      v34 = a13 - v31[84];
      v33 = a14 - v31[85];
    }
  }
  else
  {
    v34 = a13 - v31[82];
    v33 = a14 - v31[83];
  }
  v181 = v34;
  v189 = v33;
  if ( a10 && a7 && v32 == 1 && (v31[179] & 4) == 0 && (*(_DWORD *)(v29 + 40) & 1) != 0 )
  {
    v157 = a7;
    v158 = 0LL;
    if ( v20 )
    {
      v162 = 2LL * (_DWORD)v23;
      v163 = &a7->m128i_i32[v162];
      v164 = (unsigned __int64)(v162 * 4) >> 3;
      if ( a7 > (__m128i *)v163 )
        v164 = 0LL;
      if ( v164 )
      {
        do
        {
          v157->m128i_i32[0] += a10;
          v157 = (__m128i *)((char *)v157 + 8);
          ++v158;
        }
        while ( v158 < v164 );
      }
    }
    else
    {
      v159 = (int)v23;
      v160 = &a7->m128i_i32[v159];
      v161 = (unsigned __int64)(v159 * 4) >> 2;
      if ( a7 > (__m128i *)v160 )
        v161 = 0LL;
      if ( v161 )
      {
        if ( v161 >= 0x10 )
        {
          do
          {
            v158 += 16LL;
            *v157 = _mm_add_epi32(_mm_loadu_si128(v157), v24);
            v157[1] = _mm_add_epi32(_mm_loadu_si128(v157 + 1), v24);
            v157[2] = _mm_add_epi32(_mm_loadu_si128(v157 + 2), v24);
            v157[3] = _mm_add_epi32(_mm_loadu_si128(v157 + 3), v24);
            v157 += 4;
          }
          while ( v158 < (v161 & 0xFFFFFFFFFFFFFFF0uLL) );
        }
        for ( ; v158 < v161; ++v158 )
        {
          v157->m128i_i32[0] += a10;
          v157 = (__m128i *)((char *)v157 + 4);
        }
      }
    }
  }
  v35 = *(_QWORD *)a5;
  v36 = v183;
  if ( v183 | *(_DWORD *)(*(_QWORD *)a5 + 392LL)
    || (v37 = *a6, ((*a6)[8] & 1) == 0)
    || *((float *)v37 + 3) < 0.0
    || *(float *)&v25 < 0.0 )
  {
    if ( v20 )
    {
      if ( v183 != *(_DWORD *)(v35 + 432) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v183) )
          return;
        v33 = v189;
      }
      *((_DWORD *)this + 58) |= 8u;
      ESTROBJ::vCharPos_G4(this, v22, a5, v34, v33, a7->m128i_i32);
    }
    else if ( v183 == *(_DWORD *)(*(_QWORD *)a5 + 392LL) )
    {
      if ( a7 )
        ESTROBJ::vCharPos_G1(this, v22, a5, v34, v33, a7->m128i_i32, a16);
      else
        ESTROBJ::vCharPos_G2(this, v22, a5, v34, v33, a10, a11, a12, a16);
    }
    else
    {
      if ( v183 != *(_DWORD *)(v35 + 432) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v183) )
          return;
        v33 = v189;
      }
      *((_DWORD *)this + 58) |= 8u;
      *((_DWORD *)this + 1) |= 0x200u;
      ESTROBJ::vCharPos_G3(this, v22, a5, v34, v33, a10, a11, a12, a7->m128i_i32, a16);
    }
    v149 = *((_QWORD *)this + 10);
    v63 = v184;
    v150 = HIDWORD(v149);
    v151 = v184;
    *((_QWORD *)this + 11) = v149;
    v152 = v151 & 6;
    if ( v152 )
    {
      if ( v152 == 6 )
      {
        LODWORD(v149) = (int)v149 / 2;
        v165 = 0;
        LODWORD(v150) = (int)v150 / 2;
        v166 = 0;
      }
      else
      {
        v166 = -HIDWORD(v149);
        v165 = -(int)v149;
      }
      *((_DWORD *)this + 20) = v165;
      *((_DWORD *)this + 21) = v166;
      if ( (_DWORD)v23 )
      {
        v167 = (_DWORD *)(*((_QWORD *)this + 8) + 20LL);
        v168 = v23;
        do
        {
          *(v167 - 1) -= v149;
          *v167 -= v150;
          v167 += 6;
          --v168;
        }
        while ( v168 );
      }
      v34 -= v149;
      v84 = v189 - v150;
    }
    else
    {
      v84 = v189;
    }
    v153 = *((_QWORD *)this + 8);
    *((_DWORD *)this + 18) = v34;
    *((_DWORD *)this + 19) = v84;
    if ( (_DWORD)v23 )
    {
      v154 = v153 + 20;
      v155 = v23;
      do
      {
        v156 = *(_DWORD *)(v154 - 4);
        v154 += 24LL;
        *(_DWORD *)(v154 - 28) = (v156 + 8) >> 4;
        *(_DWORD *)(v154 - 24) = (*(_DWORD *)(v154 - 24) + 8) >> 4;
        --v155;
      }
      while ( v155 );
    }
    goto LABEL_69;
  }
  if ( a7 )
  {
    if ( !v20 )
    {
      ESTROBJ::vCharPos_H1((unsigned int *)this, v22, a5, v34, v33, a7, v25);
      goto LABEL_48;
    }
    if ( (a15 & 0xA0) != 0 )
    {
      if ( v183 != *(_DWORD *)(v35 + 432) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v183) )
          return;
        v33 = v189;
      }
      *((_DWORD *)this + 58) |= 8u;
      v37 = *a6;
    }
    ESTROBJ::vCharPos_H4(this, v22, a5, v34, v33, a7, v25, v37[3]);
    goto LABEL_48;
  }
  if ( !*(_DWORD *)(v35 + 312) || a11 | a10 )
  {
    ESTROBJ::vCharPos_H3(this, v22, a5, v34, v33, a10, a11, a12, v25, 0LL);
    goto LABEL_48;
  }
  v38 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
  v39 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v40 = v38;
  v41 = v39;
  v188 = v38;
  v38->ptl.x = (int)(v34 + 8) >> 4;
  v38->ptl.y = (v33 + 8) >> 4;
  v42 = *(_QWORD *)a5;
  v43 = *(unsigned int *)this;
  v187 = v39;
  v185 = v43;
  *((_DWORD *)this + 1) |= *(_DWORD *)(v42 + 276) & 0x71 | 2;
  v44 = *(_DWORD *)(*(_QWORD *)a5 + 312LL);
  *((_DWORD *)this + 2) = v44;
  v45 = 16 * v44 * v43;
  *((_DWORD *)this + 28) = v45;
  v46 = *(_QWORD *)a5;
  v186 = v45;
  if ( !*(_QWORD *)(v46 + 480) )
  {
    if ( !(unsigned int)RFONTOBJ::bAllocateCache(a5, (struct RFONTOBJ *)v46) )
      goto LABEL_208;
    v46 = *(_QWORD *)a5;
    v39 = v41;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v46 + 104) + 1824LL) & 0x40000000) != 0 && *(_DWORD *)(v46 + 88) == 1 )
  {
    LODWORD(v57) = 0;
    v182 = 0;
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(a5, v43, v38, v39, v22, this) )
      goto LABEL_45;
    goto LABEL_37;
  }
  v47 = *(_DWORD **)(v46 + 480);
  v182 = 1;
  if ( !*v47 )
  {
    for ( ; (_DWORD)v43; LODWORD(v43) = v43 - 1 )
    {
      v40->hg = *(_DWORD *)(*(_QWORD *)a5 + 460LL);
      v40->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a5);
      ++v40;
    }
    goto LABEL_36;
  }
  v48 = &v39[v43];
  v49 = (struct GPRUN *)(v47 + 4);
  if ( v39 >= v48 )
  {
    v38 = v40;
LABEL_36:
    LODWORD(v57) = 0;
LABEL_37:
    v58 = *((_DWORD *)this + 58);
    if ( (v58 & 0x1400) != 0 )
    {
      v34 = v181;
      ESTROBJ::vCharPos_H3(
        this,
        v22,
        v18,
        v181,
        v189,
        0,
        0,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 976LL) + 288LL),
        v25,
        &v182);
      LODWORD(v23) = a3;
      goto LABEL_49;
    }
    if ( v182 )
    {
      *((_DWORD *)this + 58) = v58 | 2;
      *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
    }
    pgdf = v38->pgdf;
    if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
    {
      *((_DWORD *)this + 24) = 0;
      v60 = v45;
    }
    else
    {
      *((_DWORD *)this + 24) = pgdf[2].pgb;
      v60 = v45 + HIDWORD(pgdf[2].ppo) - 16 * *((_DWORD *)this + 2);
    }
    *((_DWORD *)this + 26) = v60;
    v61 = *(_QWORD *)v18;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 976LL) + 340LL) & 0x40) != 0 )
    {
      *((_DWORD *)this + 25) = -*(_DWORD *)(v61 + 320);
      v62 = -*(_DWORD *)(*(_QWORD *)v18 + 316LL);
    }
    else
    {
      *((_DWORD *)this + 25) = *(_DWORD *)(v61 + 316);
      v62 = *(_DWORD *)(*(_QWORD *)v18 + 320LL);
    }
    *((_DWORD *)this + 27) = v62;
    *((_DWORD *)this + 58) |= 4u;
    *((_DWORD *)this + 20) = v45;
    *((_DWORD *)this + 21) = 0;
LABEL_45:
    LODWORD(v23) = a3;
    v34 = v181;
    goto LABEL_49;
  }
  v50 = v47 + 5;
  while ( 1 )
  {
    v51 = *v41;
    v52 = (unsigned int)(v51 - *(_DWORD *)v49);
    if ( (unsigned int)v52 >= *v50 )
    {
      Run = RFONTOBJ::gprunFindRun(v18, v51);
      v49 = Run;
      v148 = (unsigned int)(v51 - *(_DWORD *)Run);
      v50 = (_DWORD *)((char *)Run + 4);
      if ( (unsigned int)v148 >= *((_DWORD *)Run + 1) )
      {
        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(v18, a4, this, v41, v187, v185, &v182, 1);
        if ( !LinkMetricsPlus )
          goto LABEL_208;
        goto LABEL_33;
      }
      _mm_lfence();
      v53 = *((_QWORD *)Run + 1);
      v54 = 8 * v148;
    }
    else
    {
      _mm_lfence();
      v53 = *((_QWORD *)v49 + 1);
      v54 = 8 * v52;
    }
    v55 = (struct _GLYPHDATA **)(v54 + v53);
    LinkMetricsPlus = *v55;
    if ( !*v55 )
      break;
LABEL_32:
    v18 = a5;
LABEL_33:
    if ( !LinkMetricsPlus->gdf.pgb
      && v182
      && *(_DWORD *)(*(_QWORD *)v18 + 88LL)
      && !(unsigned int)RFONTOBJ::bInsertGlyphbits(v18, LinkMetricsPlus, v41 == v187) )
    {
      v182 = 0;
    }
    ++v41;
    v40->hg = LinkMetricsPlus->hg;
    v40->pgdf = &LinkMetricsPlus->gdf;
    ++v40;
    if ( v41 >= v48 )
    {
      v45 = v186;
      v38 = v188;
      v22 = a4;
      goto LABEL_36;
    }
  }
  if ( (unsigned int)RFONTOBJ::bInsertMetricsPlus(a5, v55, *v41) )
  {
    LinkMetricsPlus = *(struct _GLYPHDATA **)(v54 + *((_QWORD *)v49 + 1));
    goto LABEL_32;
  }
  v18 = a5;
LABEL_208:
  LODWORD(v23) = a3;
  v34 = v181;
LABEL_48:
  LODWORD(v57) = 0;
LABEL_49:
  v63 = v184;
  v64 = v184;
  v65 = *((_DWORD *)this + 20);
  v66 = *((_DWORD *)this + 21);
  *((_DWORD *)this + 22) = v65;
  *((_DWORD *)this + 23) = v66;
  v67 = v64 & 6;
  if ( v67 )
  {
    if ( v67 == 6 )
      v139 = 0;
    else
      v139 = -v65;
    *((_DWORD *)this + 20) = v139;
    v140 = v65 / 2;
    if ( v67 != 6 )
      v140 = v65;
    v141 = v140 + 8;
    v142 = *((_QWORD *)this + 8);
    v143 = v141 >> 4;
    v144 = v142 + 24;
    *(_DWORD *)(v142 + 16) -= v143;
    v34 = 16 * *(_DWORD *)(v142 + 16);
    if ( !*((_DWORD *)this + 2) && (_DWORD)v23 != 1 )
    {
      v145 = (unsigned int)(v23 - 1);
      do
      {
        v146 = v144;
        v144 += 24LL;
        *(_DWORD *)(v146 + 16) -= v143;
        --v145;
      }
      while ( v145 );
    }
  }
  v68 = a16;
  if ( a16 )
  {
    v69 = *((_DWORD *)this + 2);
    v70 = *(float *)(*(_QWORD *)v18 + 408LL);
    if ( !v69 || (*((_DWORD *)this + 58) & 0x1400) != 0 )
    {
      v87 = v23 - 1;
      v88 = (_DWORD *)(*((_QWORD *)this + 8) + 24LL);
      v89 = 0;
      if ( (unsigned int)(v23 - 1) >= 0xA )
      {
        v90 = ((int)v23 - 11) / 0xAu + 1;
        v57 = v90;
        v89 = 10 * v90;
        do
        {
          LODWORD(v91) = 0;
          v92 = (float)(int)(16 * v88[4] - v34) * v70;
          v93 = (unsigned __int8)(SLODWORD(v92) >> 23);
          if ( v93 <= 0x9E )
          {
            v94 = LODWORD(v92) & 0x7FFFFF | 0x800000LL;
            v95 = v93 < 0x76 ? v94 >> (118 - (unsigned __int8)v93) : v94 << ((unsigned __int8)v93 - 118);
            v91 = (v95 + 0x80000000LL) >> 32;
            if ( v92 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          *v68 = v91;
          LODWORD(v91) = 0;
          v96 = (float)(int)(16 * v88[10] - v34) * v70;
          v97 = (unsigned __int8)(SLODWORD(v96) >> 23);
          if ( v97 <= 0x9E )
          {
            v98 = LODWORD(v96) & 0x7FFFFF | 0x800000LL;
            v99 = v97 < 0x76 ? v98 >> (118 - (unsigned __int8)v97) : v98 << ((unsigned __int8)v97 - 118);
            v91 = (v99 + 0x80000000LL) >> 32;
            if ( v96 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[1] = v91;
          LODWORD(v91) = 0;
          v100 = (float)(int)(16 * v88[16] - v34) * v70;
          v101 = (unsigned __int8)(SLODWORD(v100) >> 23);
          if ( v101 <= 0x9E )
          {
            v102 = LODWORD(v100) & 0x7FFFFF | 0x800000LL;
            v103 = v101 < 0x76 ? v102 >> (118 - (unsigned __int8)v101) : v102 << ((unsigned __int8)v101 - 118);
            v91 = (v103 + 0x80000000LL) >> 32;
            if ( v100 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[2] = v91;
          LODWORD(v91) = 0;
          v104 = (float)(int)(16 * v88[22] - v34) * v70;
          v105 = (unsigned __int8)(SLODWORD(v104) >> 23);
          if ( v105 <= 0x9E )
          {
            v106 = LODWORD(v104) & 0x7FFFFF | 0x800000LL;
            v107 = v105 < 0x76 ? v106 >> (118 - (unsigned __int8)v105) : v106 << ((unsigned __int8)v105 - 118);
            v91 = (v107 + 0x80000000LL) >> 32;
            if ( v104 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[3] = v91;
          LODWORD(v91) = 0;
          v108 = (float)(int)(16 * v88[28] - v34) * v70;
          v109 = (unsigned __int8)(SLODWORD(v108) >> 23);
          if ( v109 <= 0x9E )
          {
            v110 = LODWORD(v108) & 0x7FFFFF | 0x800000LL;
            v111 = v109 < 0x76 ? v110 >> (118 - (unsigned __int8)v109) : v110 << ((unsigned __int8)v109 - 118);
            v91 = (v111 + 0x80000000LL) >> 32;
            if ( v108 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[4] = v91;
          LODWORD(v91) = 0;
          v112 = (float)(int)(16 * v88[34] - v34) * v70;
          v113 = (unsigned __int8)(SLODWORD(v112) >> 23);
          if ( v113 <= 0x9E )
          {
            v114 = LODWORD(v112) & 0x7FFFFF | 0x800000LL;
            v115 = v113 < 0x76 ? v114 >> (118 - (unsigned __int8)v113) : v114 << ((unsigned __int8)v113 - 118);
            v91 = (v115 + 0x80000000LL) >> 32;
            if ( v112 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[5] = v91;
          LODWORD(v91) = 0;
          v116 = (float)(int)(16 * v88[40] - v34) * v70;
          v117 = (unsigned __int8)(SLODWORD(v116) >> 23);
          if ( v117 <= 0x9E )
          {
            v118 = LODWORD(v116) & 0x7FFFFF | 0x800000LL;
            v119 = v117 < 0x76 ? v118 >> (118 - (unsigned __int8)v117) : v118 << ((unsigned __int8)v117 - 118);
            v91 = (v119 + 0x80000000LL) >> 32;
            if ( v116 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[6] = v91;
          LODWORD(v91) = 0;
          v120 = (float)(int)(16 * v88[46] - v34) * v70;
          v121 = (unsigned __int8)(SLODWORD(v120) >> 23);
          if ( v121 <= 0x9E )
          {
            v122 = LODWORD(v120) & 0x7FFFFF | 0x800000LL;
            v123 = v121 < 0x76 ? v122 >> (118 - (unsigned __int8)v121) : v122 << ((unsigned __int8)v121 - 118);
            v91 = (v123 + 0x80000000LL) >> 32;
            if ( v120 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[7] = v91;
          LODWORD(v91) = 0;
          v124 = (float)(int)(16 * v88[52] - v34) * v70;
          v125 = (unsigned __int8)(SLODWORD(v124) >> 23);
          if ( v125 <= 0x9E )
          {
            v126 = LODWORD(v124) & 0x7FFFFF | 0x800000LL;
            v127 = v125 < 0x76 ? v126 >> (118 - (unsigned __int8)v125) : v126 << ((unsigned __int8)v125 - 118);
            v91 = (v127 + 0x80000000LL) >> 32;
            if ( v124 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[8] = v91;
          LODWORD(v91) = 0;
          v128 = (float)(int)(16 * v88[58] - v34) * v70;
          v129 = (unsigned __int8)(SLODWORD(v128) >> 23);
          if ( v129 <= 0x9E )
          {
            v130 = LODWORD(v128) & 0x7FFFFF | 0x800000LL;
            v131 = v129 < 0x76 ? v130 >> (118 - (unsigned __int8)v129) : v130 << ((unsigned __int8)v129 - 118);
            v91 = (v131 + 0x80000000LL) >> 32;
            if ( v128 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[9] = v91;
          v88 += 60;
          v68 += 10;
          --v57;
        }
        while ( v57 );
      }
      if ( v89 < v87 )
      {
        v132 = v88 + 4;
        v133 = v87 - v89;
        do
        {
          LODWORD(v134) = v57;
          v135 = (float)(int)(16 * *v132 - v34) * v70;
          v136 = (unsigned __int8)(SLODWORD(v135) >> 23);
          if ( v136 <= 0x9E )
          {
            v137 = LODWORD(v135) & 0x7FFFFF | 0x800000LL;
            v138 = v136 < 0x76 ? v137 >> (118 - (unsigned __int8)v136) : v137 << ((unsigned __int8)v136 - 118);
            v134 = (v138 + 0x80000000LL) >> 32;
            if ( v135 < 0.0 )
              LODWORD(v134) = -(int)v134;
          }
          *v68 = v134;
          v132 += 6;
          ++v68;
          --v133;
        }
        while ( v133 );
      }
      LODWORD(v78) = v57;
      v79 = (float)(int)(((v34 + *((_DWORD *)this + 20)) & 0xFFFFFFF0) - v34) * v70;
      v80 = (unsigned __int8)(SLODWORD(v79) >> 23) - 118;
      if ( v80 <= 40 )
      {
        v81 = LODWORD(v79) & 0x7FFFFF | 0x800000LL;
        v82 = v80 < 0 ? v81 >> (118 - (unsigned __int8)(SLODWORD(v79) >> 23)) : v81 << v80;
        v78 = (v82 + 0x80000000LL) >> 32;
        if ( v79 < 0.0 )
          LODWORD(v78) = -(int)v78;
      }
      *v68 = v78;
    }
    else
    {
      LODWORD(v71) = 0;
      v72 = (float)(16 * v69) * v70;
      v73 = (unsigned __int8)(SLODWORD(v72) >> 23) - 118;
      if ( v73 <= 40 )
      {
        v74 = LODWORD(v72) & 0x7FFFFF | 0x800000LL;
        v75 = v73 < 0 ? v74 >> (118 - (unsigned __int8)(SLODWORD(v72) >> 23)) : v74 << v73;
        v71 = (v75 + 0x80000000LL) >> 32;
        if ( v72 < 0.0 )
          LODWORD(v71) = -(int)v71;
      }
      v76 = 0;
      if ( (_DWORD)v23 )
      {
        v77 = (unsigned int)v23;
        do
        {
          v76 += v71;
          *v68++ = v76;
          --v77;
        }
        while ( v77 );
      }
    }
  }
  v83 = *((_QWORD *)this + 8);
  v84 = v189;
  v36 = v183;
  *((_DWORD *)this + 18) = 16 * *(_DWORD *)(v83 + 16);
  *((_DWORD *)this + 19) = 16 * *(_DWORD *)(v83 + 20);
LABEL_69:
  if ( (v63 & 0xA0) != 0 )
  {
    *((_DWORD *)this + 58) |= v63 & 0xA0;
    v169 = *(_QWORD *)v18;
    if ( !(v36 | a8 | *(_DWORD *)(*(_QWORD *)v18 + 392LL)) && ((*a6)[8] & 1) != 0 )
    {
      v170 = v84 + 8;
      v171 = (*((_DWORD *)this + 22) + 8) >> 4;
      v172 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 32) + 132);
      v173 = (int)(v34 + 8) >> 4;
      v174 = v170 >> 4;
      if ( (v63 & 0x20) != 0 )
      {
        v175 = v173 + *(_DWORD *)(v169 + 280);
        *(_DWORD *)v172 = v175;
        *((_DWORD *)v172 + 2) = v175 + v171;
        v176 = v174 + *(_DWORD *)(*(_QWORD *)v18 + 284LL);
        *((_DWORD *)v172 + 1) = v176;
        *((_DWORD *)v172 + 3) = v176 + *(_DWORD *)(*(_QWORD *)v18 + 300LL);
        ERECTL::vOrder(v172);
        ++*((_DWORD *)this + 32);
        v169 = *(_QWORD *)v18;
        v172 = (ERECTL *)(v177 + 16);
      }
      if ( v63 < 0 )
      {
        v178 = v173 + *(_DWORD *)(v169 + 288);
        *(_DWORD *)v172 = v178;
        *((_DWORD *)v172 + 2) = v178 + v171;
        v179 = v174 + *(_DWORD *)(*(_QWORD *)v18 + 292LL);
        *((_DWORD *)v172 + 1) = v179;
        *((_DWORD *)v172 + 3) = v179 + *(_DWORD *)(*(_QWORD *)v18 + 308LL);
        ERECTL::vOrder(v172);
        ++*((_DWORD *)this + 32);
        v172 = (ERECTL *)(v180 + 16);
      }
      *(_QWORD *)v172 = 0LL;
      *((_QWORD *)v172 + 1) = 0LL;
    }
  }
  v85 = *((_DWORD *)this + 58);
  if ( (*(_DWORD *)(*(_QWORD *)v18 + 12LL) & 1) != 0 )
    v86 = v85 | 0x200;
  else
    v86 = v85 & 0xFFFFFDFF;
  *((_DWORD *)this + 58) = v86;
}
