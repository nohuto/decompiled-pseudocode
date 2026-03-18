/*
 * XREFs of ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0094D40
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00922E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C013CF34 (GreGetTextExtentExW.c)
 * Callees:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C0002C48 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0084368 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00855A0 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C0085928 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0085994 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00859E4 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0086740 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00870A4 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00870C4 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0094400 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0094860 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C0277B90 (-bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z @ 0x1C028C4CC (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C028C730 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C028CC4C (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C028D0D8 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 */

void __fastcall ESTROBJ::vInit(
        ESTROBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5,
        unsigned int **a6,
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
  struct XDCOBJ *v18; // r13
  RFONTOBJ *v19; // r15
  int v21; // r11d
  __int64 v23; // rbp
  __m128i v24; // xmm6
  unsigned int v25; // xmm7_4
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
  int v36; // edx
  unsigned int *v37; // rdx
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
  unsigned int v57; // esi
  int v58; // eax
  GLYPHDEF *pgdf; // rcx
  int v60; // ecx
  __int64 v61; // rdx
  int v62; // ecx
  char v63; // r13
  int v64; // eax
  int *v65; // rdx
  int v66; // ecx
  float v67; // xmm1_4
  __int64 v68; // r8
  float v69; // r9d
  int v70; // ecx
  __int64 v71; // r8
  __int64 v72; // r8
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // r8
  float v76; // r9d
  int v77; // ecx
  __int64 v78; // r8
  __int64 v79; // r8
  __int64 v80; // rcx
  int v81; // r9d
  int v82; // edx
  unsigned int v83; // edx
  unsigned int v84; // edi
  _DWORD *v85; // r9
  unsigned int v86; // eax
  __int64 v87; // rbx
  __int64 v88; // r8
  float v89; // r11d
  int v90; // ecx
  __int64 v91; // r8
  __int64 v92; // r8
  float v93; // r11d
  int v94; // ecx
  __int64 v95; // r8
  __int64 v96; // r8
  float v97; // r11d
  int v98; // ecx
  __int64 v99; // r8
  __int64 v100; // r8
  float v101; // r11d
  int v102; // ecx
  __int64 v103; // r8
  __int64 v104; // r8
  _DWORD *v105; // r11
  __int64 v106; // rbx
  __int64 v107; // r8
  float v108; // r9d
  int v109; // ecx
  __int64 v110; // r8
  __int64 v111; // r8
  int v112; // ecx
  int v113; // r8d
  __int64 v114; // rax
  int v115; // r8d
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rax
  struct GPRUN *Run; // rax
  __int64 v120; // rbx
  unsigned __int64 v121; // rcx
  unsigned __int64 v122; // r8
  char v123; // al
  int v124; // eax
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rdx
  int v128; // eax
  __m128i *v129; // rdx
  unsigned __int64 v130; // r8
  __int64 v131; // rcx
  int *v132; // rax
  unsigned __int64 v133; // rcx
  __int64 v134; // rcx
  int *v135; // rax
  unsigned __int64 v136; // rcx
  int v137; // eax
  int v138; // edx
  _DWORD *v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rdx
  int v142; // r11d
  int v143; // r9d
  ERECTL *v144; // r8
  int v145; // r10d
  int v146; // r11d
  int v147; // ecx
  int v148; // edx
  __int64 v149; // r8
  int v150; // ecx
  int v151; // edx
  __int64 v152; // r8
  int v153; // [rsp+50h] [rbp-88h]
  int v154; // [rsp+54h] [rbp-84h]
  int v155; // [rsp+58h] [rbp-80h] BYREF
  unsigned int v156; // [rsp+5Ch] [rbp-7Ch]
  unsigned int v157; // [rsp+60h] [rbp-78h]
  int v158; // [rsp+64h] [rbp-74h]
  unsigned __int16 *v159; // [rsp+68h] [rbp-70h]
  struct _GLYPHPOS *v160; // [rsp+70h] [rbp-68h]
  int v161; // [rsp+E0h] [rbp+8h]

  v18 = a4;
  v19 = a5;
  v21 = a8;
  v23 = a3;
  v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a10), 0);
  v25 = **a6;
  *(_DWORD *)this = a3;
  *((_QWORD *)this + 7) = a5;
  *((_DWORD *)this + 58) = 0;
  if ( a8 )
    v26 = 1024;
  else
    v26 = 0;
  *((_DWORD *)this + 1) = v26;
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 104LL) + 16LL);
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
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 68LL) & 4) != 0 )
  {
    *((_DWORD *)this + 1) = v26 | 0x100;
    RFONTOBJ::vFixUpGlyphIndices(a5, a2, a3);
    v28 = *(_QWORD *)a5;
  }
  v29 = *(_QWORD *)(v28 + 88);
  if ( (*(_DWORD *)(v29 + 1816) & 0x40000) != 0 )
    *((_DWORD *)this + 58) |= 0x100u;
  v30 = (__int64)a17;
  if ( !a17 )
  {
    v30 = AllocFreeTmpBuffer((30 * (_DWORD)v23 + 7) & 0xFFFFFFF8);
    if ( !v30 )
      return;
    *((_DWORD *)this + 58) |= 1u;
    v21 = a8;
  }
  *((_QWORD *)this + 8) = v30;
  v31 = *(_DWORD **)a5;
  v32 = *(_DWORD *)(*(_QWORD *)a5 + 192LL);
  if ( v32 != 1 || (v31[115] & 4) != 0 )
    v154 = a9;
  else
    v154 = v31[95];
  v33 = a14;
  v34 = a13;
  v156 = a15;
  if ( (a15 & 0x18) != 0 )
  {
    if ( (a15 & 0x18) == 8 )
    {
      v34 = a13 - v31[80];
      v33 = a14 - v31[81];
    }
  }
  else
  {
    v34 = a13 - v31[78];
    v33 = a14 - v31[79];
  }
  v153 = v34;
  v161 = v33;
  if ( a10 && a7 && v32 == 1 && (v31[115] & 4) == 0 && (*(_DWORD *)(v29 + 40) & 1) != 0 )
  {
    v129 = a7;
    v130 = 0LL;
    if ( v21 )
    {
      v134 = 2LL * (_DWORD)v23;
      v135 = &a7->m128i_i32[v134];
      v136 = (unsigned __int64)(v134 * 4) >> 3;
      if ( a7 > (__m128i *)v135 )
        v136 = 0LL;
      if ( v136 )
      {
        do
        {
          v129->m128i_i32[0] += a10;
          v129 = (__m128i *)((char *)v129 + 8);
          ++v130;
        }
        while ( v130 < v136 );
      }
    }
    else
    {
      v131 = (int)v23;
      v132 = &a7->m128i_i32[v131];
      v133 = (unsigned __int64)(v131 * 4) >> 2;
      if ( a7 > (__m128i *)v132 )
        v133 = 0LL;
      if ( v133 )
      {
        if ( v133 >= 0x10 )
        {
          do
          {
            v130 += 16LL;
            *v129 = _mm_add_epi32(_mm_loadu_si128(v129), v24);
            v129[1] = _mm_add_epi32(_mm_loadu_si128(v129 + 1), v24);
            v129[2] = _mm_add_epi32(_mm_loadu_si128(v129 + 2), v24);
            v129[3] = _mm_add_epi32(_mm_loadu_si128(v129 + 3), v24);
            v129 += 4;
          }
          while ( v130 < (v133 & 0xFFFFFFFFFFFFFFF0uLL) );
        }
        for ( ; v130 < v133; ++v130 )
        {
          v129->m128i_i32[0] += a10;
          v129 = (__m128i *)((char *)v129 + 4);
        }
      }
    }
  }
  v35 = *(_QWORD *)a5;
  v36 = v154;
  if ( v154 | *(_DWORD *)(*(_QWORD *)a5 + 380LL) )
  {
LABEL_126:
    if ( v21 )
    {
      if ( v36 != *(_DWORD *)(v35 + 420) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v36) )
          return;
        v33 = v161;
      }
      *((_DWORD *)this + 58) |= 8u;
      ESTROBJ::vCharPos_G4(this, v18, a5, v34, v33, a7->m128i_i32);
    }
    else if ( v36 == *(_DWORD *)(*(_QWORD *)a5 + 380LL) )
    {
      if ( a7 )
        ESTROBJ::vCharPos_G1(this, v18, a5, v34, v33, a7->m128i_i32, a16);
      else
        ESTROBJ::vCharPos_G2(this, v18, a5, v34, v33, a10, a11, a12, a16);
    }
    else
    {
      if ( v36 != *(_DWORD *)(v35 + 420) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v36) )
          return;
        v33 = v161;
      }
      *((_DWORD *)this + 58) |= 8u;
      *((_DWORD *)this + 1) |= 0x200u;
      ESTROBJ::vCharPos_G3(this, v18, a5, v34, v33, a10, a11, a12, a7->m128i_i32, a16);
    }
    v121 = *((_QWORD *)this + 10);
    v63 = v156;
    v122 = HIDWORD(v121);
    v123 = v156;
    *((_QWORD *)this + 11) = v121;
    v124 = v123 & 6;
    if ( v124 )
    {
      if ( v124 == 6 )
      {
        LODWORD(v121) = (int)v121 / 2;
        LODWORD(v122) = (int)v122 / 2;
        v137 = 0;
        v138 = 0;
      }
      else
      {
        v137 = -HIDWORD(v121);
        v138 = -(int)v121;
      }
      *((_DWORD *)this + 20) = v138;
      *((_DWORD *)this + 21) = v137;
      if ( (_DWORD)v23 )
      {
        v139 = (_DWORD *)(*((_QWORD *)this + 8) + 20LL);
        v140 = v23;
        do
        {
          *(v139 - 1) -= v121;
          *v139 -= v122;
          v139 += 6;
          --v140;
        }
        while ( v140 );
      }
      v34 -= v121;
      v81 = v161 - v122;
    }
    else
    {
      v81 = v161;
    }
    v125 = *((_QWORD *)this + 8);
    *((_DWORD *)this + 18) = v34;
    *((_DWORD *)this + 19) = v81;
    if ( (_DWORD)v23 )
    {
      v126 = v125 + 20;
      v127 = v23;
      do
      {
        v128 = *(_DWORD *)(v126 - 4);
        v126 += 24LL;
        *(_DWORD *)(v126 - 28) = (v128 + 8) >> 4;
        *(_DWORD *)(v126 - 24) = (*(_DWORD *)(v126 - 24) + 8) >> 4;
        --v127;
      }
      while ( v127 );
    }
    goto LABEL_71;
  }
  v37 = *a6;
  if ( ((*a6)[8] & 1) == 0 || *((float *)v37 + 3) < 0.0 || *(float *)&v25 < 0.0 )
  {
    v36 = v154;
    goto LABEL_126;
  }
  if ( a7 )
  {
    if ( !v21 )
    {
      ESTROBJ::vCharPos_H1((unsigned int *)this, v18, a5, v34, v33, a7, v25);
      goto LABEL_50;
    }
    if ( (a15 & 0xA0) != 0 )
    {
      if ( v154 != *(_DWORD *)(v35 + 420) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v154) )
          return;
        v33 = v161;
      }
      *((_DWORD *)this + 58) |= 8u;
      v37 = *a6;
    }
    ESTROBJ::vCharPos_H4(this, v18, a5, v34, v33, a7, v25, v37[3]);
    goto LABEL_50;
  }
  if ( !*(_DWORD *)(v35 + 296) || a11 | a10 )
  {
    v57 = 0;
    ESTROBJ::vCharPos_H3((unsigned int *)this, v18, a5, v34, v33, a10, a11, a12, v25, 0LL);
    goto LABEL_51;
  }
  v38 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
  v39 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v40 = v38;
  v41 = v39;
  v160 = v38;
  v38->ptl.x = (int)(v34 + 8) >> 4;
  v38->ptl.y = (v33 + 8) >> 4;
  v42 = *(_QWORD *)a5;
  v43 = *(unsigned int *)this;
  v159 = v39;
  v157 = v43;
  *((_DWORD *)this + 1) |= *(_DWORD *)(v42 + 260) & 0x71 | 2;
  v44 = *(_DWORD *)(*(_QWORD *)a5 + 296LL);
  *((_DWORD *)this + 2) = v44;
  v45 = 16 * v44 * v43;
  *((_DWORD *)this + 28) = v45;
  v46 = *(_QWORD *)a5;
  v158 = v45;
  if ( !*(_QWORD *)(v46 + 472) )
  {
    if ( !(unsigned int)RFONTOBJ::bAllocateCache(a5, (struct RFONTOBJ *)v46) )
      goto LABEL_180;
    v46 = *(_QWORD *)a5;
    v39 = v41;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v46 + 88) + 1816LL) & 0x40000000) != 0 && *(_DWORD *)(v46 + 72) == 1 )
  {
    v57 = 0;
    v155 = 0;
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(a5, (struct _FONTFILEVIEW *)(unsigned int)v43, v38, v39, v18, this) )
    {
LABEL_47:
      LODWORD(v23) = a3;
      v34 = v153;
      goto LABEL_51;
    }
LABEL_39:
    v58 = *((_DWORD *)this + 58);
    if ( (v58 & 0x1400) != 0 )
    {
      v34 = v153;
      ESTROBJ::vCharPos_H3(
        (unsigned int *)this,
        v18,
        v19,
        v153,
        v161,
        0,
        0,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 80LL) + 172LL),
        v25,
        &v155);
      LODWORD(v23) = a3;
      goto LABEL_51;
    }
    if ( v155 )
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
    v61 = *(_QWORD *)v19;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 80LL) + 352LL) & 0x40) != 0 )
    {
      *((_DWORD *)this + 25) = -*(_DWORD *)(v61 + 304);
      v62 = -*(_DWORD *)(*(_QWORD *)v19 + 300LL);
    }
    else
    {
      *((_DWORD *)this + 25) = *(_DWORD *)(v61 + 300);
      v62 = *(_DWORD *)(*(_QWORD *)v19 + 304LL);
    }
    *((_DWORD *)this + 27) = v62;
    *((_DWORD *)this + 58) |= 4u;
    *((_DWORD *)this + 20) = v45;
    *((_DWORD *)this + 21) = 0;
    goto LABEL_47;
  }
  v47 = *(_DWORD **)(v46 + 472);
  v155 = 1;
  if ( !*v47 )
  {
    for ( ; (_DWORD)v43; LODWORD(v43) = v43 - 1 )
    {
      v40->hg = *(_DWORD *)(*(_QWORD *)a5 + 448LL);
      v40->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a5, (struct RFONTOBJ *)v46);
      ++v40;
    }
    goto LABEL_38;
  }
  v48 = &v39[v43];
  v49 = (struct GPRUN *)(v47 + 4);
  if ( v39 >= v48 )
  {
    v38 = v40;
LABEL_38:
    v57 = 0;
    goto LABEL_39;
  }
  v50 = v47 + 5;
  while ( 1 )
  {
    v51 = *v41;
    v52 = (unsigned int)(v51 - *(_DWORD *)v49);
    if ( (unsigned int)v52 >= *v50 )
    {
      Run = RFONTOBJ::gprunFindRun(v19, v51);
      v49 = Run;
      v120 = (unsigned int)(v51 - *(_DWORD *)Run);
      v50 = (_DWORD *)((char *)Run + 4);
      if ( (unsigned int)v120 >= *((_DWORD *)Run + 1) )
      {
        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(v19, a4, this, v41, v159, v157, &v155, 1);
        if ( !LinkMetricsPlus )
          goto LABEL_180;
        goto LABEL_35;
      }
      _mm_lfence();
      v53 = *((_QWORD *)Run + 1);
      v54 = 8 * v120;
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
LABEL_34:
    v19 = a5;
LABEL_35:
    if ( !LinkMetricsPlus->gdf.pgb
      && v155
      && *(_DWORD *)(*(_QWORD *)v19 + 72LL)
      && !(unsigned int)RFONTOBJ::bInsertGlyphbits(v19, LinkMetricsPlus, v41 == v159) )
    {
      v155 = 0;
    }
    ++v41;
    v40->hg = LinkMetricsPlus->hg;
    v40->pgdf = &LinkMetricsPlus->gdf;
    ++v40;
    if ( v41 >= v48 )
    {
      v45 = v158;
      v38 = v160;
      v18 = a4;
      goto LABEL_38;
    }
  }
  if ( (unsigned int)RFONTOBJ::bInsertMetricsPlus(a5, v55, *v41) )
  {
    LinkMetricsPlus = *(struct _GLYPHDATA **)(v54 + *((_QWORD *)v49 + 1));
    goto LABEL_34;
  }
  v19 = a5;
LABEL_180:
  LODWORD(v23) = a3;
  v34 = v153;
LABEL_50:
  v57 = 0;
LABEL_51:
  v63 = v156;
  v64 = *((_DWORD *)this + 20);
  *((_QWORD *)this + 11) = *((_QWORD *)this + 10);
  if ( (v63 & 6) != 0 )
  {
    if ( (v63 & 6) == 6 )
    {
      v112 = 0;
      v64 /= 2;
    }
    else
    {
      v112 = -v64;
    }
    *((_DWORD *)this + 20) = v112;
    v113 = v64 + 8;
    v114 = *((_QWORD *)this + 8);
    v115 = v113 >> 4;
    v116 = v114 + 24;
    *(_DWORD *)(v114 + 16) -= v115;
    v34 = 16 * *(_DWORD *)(v114 + 16);
    if ( !*((_DWORD *)this + 2) && (_DWORD)v23 != 1 )
    {
      v117 = (unsigned int)(v23 - 1);
      do
      {
        v118 = v116;
        v116 += 24LL;
        *(_DWORD *)(v118 + 16) -= v115;
        --v117;
      }
      while ( v117 );
    }
  }
  v65 = a16;
  if ( a16 )
  {
    v66 = *((_DWORD *)this + 2);
    v67 = *(float *)(*(_QWORD *)v19 + 396LL);
    if ( !v66 || (*((_DWORD *)this + 58) & 0x1400) != 0 )
    {
      v84 = v23 - 1;
      v85 = (_DWORD *)(*((_QWORD *)this + 8) + 24LL);
      if ( (unsigned int)(v23 - 1) >= 4 )
      {
        v86 = ((unsigned int)(v23 - 5) >> 2) + 1;
        v87 = v86;
        v57 = 4 * v86;
        do
        {
          LODWORD(v88) = 0;
          v89 = (float)(int)(16 * v85[4] - v34) * v67;
          v90 = (unsigned __int8)(SLODWORD(v89) >> 23) - 118;
          if ( v90 <= 40 )
          {
            v91 = LODWORD(v89) & 0x7FFFFF | 0x800000LL;
            v92 = v90 < 0 ? v91 >> (118 - (unsigned __int8)(SLODWORD(v89) >> 23)) : v91 << v90;
            v88 = (v92 + 0x80000000LL) >> 32;
            if ( v89 < 0.0 )
              LODWORD(v88) = -(int)v88;
          }
          *v65 = v88;
          LODWORD(v88) = 0;
          v93 = (float)(int)(16 * v85[10] - v34) * v67;
          v94 = (unsigned __int8)(SLODWORD(v93) >> 23) - 118;
          if ( v94 <= 40 )
          {
            v95 = LODWORD(v93) & 0x7FFFFF | 0x800000LL;
            v96 = v94 < 0 ? v95 >> (118 - (unsigned __int8)(SLODWORD(v93) >> 23)) : v95 << v94;
            v88 = (v96 + 0x80000000LL) >> 32;
            if ( v93 < 0.0 )
              LODWORD(v88) = -(int)v88;
          }
          v65[1] = v88;
          LODWORD(v88) = 0;
          v97 = (float)(int)(16 * v85[16] - v34) * v67;
          v98 = (unsigned __int8)(SLODWORD(v97) >> 23) - 118;
          if ( v98 <= 40 )
          {
            v99 = LODWORD(v97) & 0x7FFFFF | 0x800000LL;
            v100 = v98 < 0 ? v99 >> (118 - (unsigned __int8)(SLODWORD(v97) >> 23)) : v99 << v98;
            v88 = (v100 + 0x80000000LL) >> 32;
            if ( v97 < 0.0 )
              LODWORD(v88) = -(int)v88;
          }
          v65[2] = v88;
          LODWORD(v88) = 0;
          v101 = (float)(int)(16 * v85[22] - v34) * v67;
          v102 = (unsigned __int8)(SLODWORD(v101) >> 23) - 118;
          if ( v102 <= 40 )
          {
            v103 = LODWORD(v101) & 0x7FFFFF | 0x800000LL;
            v104 = v102 < 0 ? v103 >> (118 - (unsigned __int8)(SLODWORD(v101) >> 23)) : v103 << v102;
            v88 = (v104 + 0x80000000LL) >> 32;
            if ( v101 < 0.0 )
              LODWORD(v88) = -(int)v88;
          }
          v65[3] = v88;
          v85 += 24;
          v65 += 4;
          --v87;
        }
        while ( v87 );
      }
      if ( v57 < v84 )
      {
        v105 = v85 + 4;
        v106 = v84 - v57;
        do
        {
          LODWORD(v107) = 0;
          v108 = (float)(int)(16 * *v105 - v34) * v67;
          v109 = (unsigned __int8)(SLODWORD(v108) >> 23) - 118;
          if ( v109 <= 40 )
          {
            v110 = LODWORD(v108) & 0x7FFFFF | 0x800000LL;
            v111 = v109 < 0 ? v110 >> (118 - (unsigned __int8)(SLODWORD(v108) >> 23)) : v110 << v109;
            v107 = (v111 + 0x80000000LL) >> 32;
            if ( v108 < 0.0 )
              LODWORD(v107) = -(int)v107;
          }
          *v65 = v107;
          v105 += 6;
          ++v65;
          --v106;
        }
        while ( v106 );
      }
      LODWORD(v75) = 0;
      v76 = (float)(int)(((v34 + *((_DWORD *)this + 20)) & 0xFFFFFFF0) - v34) * v67;
      v77 = (unsigned __int8)(SLODWORD(v76) >> 23) - 118;
      if ( v77 <= 40 )
      {
        v78 = LODWORD(v76) & 0x7FFFFF | 0x800000LL;
        v79 = v77 < 0 ? v78 >> (118 - (unsigned __int8)(SLODWORD(v76) >> 23)) : v78 << v77;
        v75 = (v79 + 0x80000000LL) >> 32;
        if ( v76 < 0.0 )
          LODWORD(v75) = -(int)v75;
      }
      *v65 = v75;
    }
    else
    {
      LODWORD(v68) = 0;
      v69 = (float)(16 * v66) * v67;
      v70 = (unsigned __int8)(SLODWORD(v69) >> 23) - 118;
      if ( v70 <= 40 )
      {
        v71 = LODWORD(v69) & 0x7FFFFF | 0x800000LL;
        v72 = v70 < 0 ? v71 >> (118 - (unsigned __int8)(SLODWORD(v69) >> 23)) : v71 << v70;
        v68 = (v72 + 0x80000000LL) >> 32;
        if ( v69 < 0.0 )
          LODWORD(v68) = -(int)v68;
      }
      v73 = 0;
      if ( (_DWORD)v23 )
      {
        v74 = (unsigned int)v23;
        do
        {
          v73 += v68;
          *v65++ = v73;
          --v74;
        }
        while ( v74 );
      }
    }
  }
  v80 = *((_QWORD *)this + 8);
  v81 = v161;
  *((_DWORD *)this + 18) = 16 * *(_DWORD *)(v80 + 16);
  *((_DWORD *)this + 19) = 16 * *(_DWORD *)(v80 + 20);
LABEL_71:
  if ( (v63 & 0xA0) != 0 )
  {
    *((_DWORD *)this + 58) |= v63 & 0xA0;
    v141 = *(_QWORD *)v19;
    if ( !(v154 | a8 | *(_DWORD *)(*(_QWORD *)v19 + 380LL)) && ((*a6)[8] & 1) != 0 )
    {
      v142 = v81 + 8;
      v143 = (*((_DWORD *)this + 22) + 8) >> 4;
      v144 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 32) + 132);
      v145 = (int)(v34 + 8) >> 4;
      v146 = v142 >> 4;
      if ( (v63 & 0x20) != 0 )
      {
        v147 = v145 + *(_DWORD *)(v141 + 264);
        *(_DWORD *)v144 = v147;
        *((_DWORD *)v144 + 2) = v147 + v143;
        v148 = v146 + *(_DWORD *)(*(_QWORD *)v19 + 268LL);
        *((_DWORD *)v144 + 1) = v148;
        *((_DWORD *)v144 + 3) = v148 + *(_DWORD *)(*(_QWORD *)v19 + 284LL);
        ERECTL::vOrder(v144);
        ++*((_DWORD *)this + 32);
        v141 = *(_QWORD *)v19;
        v144 = (ERECTL *)(v149 + 16);
      }
      if ( v63 < 0 )
      {
        v150 = v145 + *(_DWORD *)(v141 + 272);
        *(_DWORD *)v144 = v150;
        *((_DWORD *)v144 + 2) = v150 + v143;
        v151 = v146 + *(_DWORD *)(*(_QWORD *)v19 + 276LL);
        *((_DWORD *)v144 + 1) = v151;
        *((_DWORD *)v144 + 3) = v151 + *(_DWORD *)(*(_QWORD *)v19 + 292LL);
        ERECTL::vOrder(v144);
        ++*((_DWORD *)this + 32);
        v144 = (ERECTL *)(v152 + 16);
      }
      *(_QWORD *)v144 = 0LL;
      *((_QWORD *)v144 + 1) = 0LL;
    }
  }
  v82 = *((_DWORD *)this + 58);
  if ( (*(_DWORD *)(*(_QWORD *)v19 + 12LL) & 1) != 0 )
    v83 = v82 | 0x200;
  else
    v83 = v82 & 0xFFFFFDFF;
  *((_DWORD *)this + 58) = v83;
}
