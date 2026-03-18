/*
 * XREFs of RenderNineGridInternal @ 0x1C00C9060
 * Callers:
 *     RenderNineGrid @ 0x1C00C8D7C (RenderNineGrid.c)
 * Callees:
 *     DNG_StretchCol @ 0x1C00C8698 (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1C00C9DF0 (DNG_DrawRow.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C00CA170 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     DNG_InitStretch @ 0x1C00CA1E0 (DNG_InitStretch.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  __int64 v10; // r14
  unsigned __int64 v11; // xmm0_8
  unsigned __int64 v12; // rbx
  int v13; // edi
  int v14; // ecx
  unsigned __int64 v15; // xmm0_8
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // esi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // r10
  unsigned int v21; // r9d
  int v22; // r13d
  char v23; // dl
  int v24; // r11d
  __int64 v25; // r14
  __int64 v26; // rdx
  int v27; // r8d
  __int64 v28; // rcx
  __int64 v29; // r11
  int v30; // ebx
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // r14d
  int v35; // r11d
  int v36; // r15d
  int v37; // r9d
  int v38; // r9d
  __int64 v39; // r8
  unsigned int v40; // r14d
  int v41; // eax
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // r15d
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rdx
  int v52; // r9d
  int v53; // edi
  int v54; // r8d
  int v55; // edx
  int v56; // r14d
  int v57; // ecx
  int v58; // edi
  int v59; // r15d
  int v60; // esi
  int v61; // r11d
  _DWORD *v62; // rcx
  int v63; // r15d
  int v64; // edx
  int v65; // esi
  int v66; // r9d
  __int64 v67; // r15
  __int64 v68; // rax
  int v69; // edi
  int v70; // eax
  __int64 v71; // r8
  unsigned __int64 v72; // rcx
  int v73; // r11d
  int v74; // r14d
  unsigned __int64 v75; // r9
  unsigned __int64 v76; // rsi
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // rdx
  __int64 v79; // r9
  __int64 v80; // rdi
  __int64 v81; // rax
  unsigned int v82; // r14d
  __int64 v83; // rcx
  __int64 v84; // r15
  int v85; // r8d
  char *v86; // rcx
  char *v87; // rdx
  char *v88; // rax
  char *v89; // r9
  int v90; // r13d
  int v91; // ebx
  int v92; // r9d
  __int64 v93; // rdx
  unsigned __int64 v94; // kr10_8
  __int64 v95; // rsi
  int v96; // eax
  unsigned __int64 v97; // r10
  int v98; // edx
  __int64 v99; // rbx
  int v100; // r15d
  int v101; // r13d
  __int64 v102; // rbx
  __int64 v103; // rdi
  int v104; // esi
  const void *v105; // rdx
  char *v106; // rcx
  char *v107; // r9
  unsigned __int64 v108; // rax
  __int64 v109; // rbx
  int v110; // edx
  int v111; // r12d
  int v112; // eax
  int v113; // ecx
  int v114; // r15d
  int v115; // r14d
  __int64 v116; // r13
  __int64 v117; // r15
  __int64 v118; // rdx
  unsigned __int64 v119; // rdi
  int v120; // r12d
  __int64 v121; // rsi
  BOOL v122; // eax
  __int64 v123; // r10
  __int64 v124; // r9
  __int64 v125; // r11
  __int64 v126; // rsi
  __int64 v127; // rcx
  int *v128; // rdx
  _DWORD *v129; // r8
  __int64 v130; // r10
  int v131; // ecx
  int v133; // [rsp+30h] [rbp-D0h]
  int v134; // [rsp+30h] [rbp-D0h]
  __int64 v135; // [rsp+38h] [rbp-C8h]
  int v136; // [rsp+38h] [rbp-C8h]
  int v137; // [rsp+40h] [rbp-C0h]
  int v138; // [rsp+40h] [rbp-C0h]
  int v139; // [rsp+48h] [rbp-B8h]
  int v140; // [rsp+50h] [rbp-B0h]
  int v141; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v142; // [rsp+58h] [rbp-A8h]
  int v143; // [rsp+58h] [rbp-A8h]
  __int64 v144; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v145; // [rsp+60h] [rbp-A0h]
  int v146; // [rsp+68h] [rbp-98h]
  unsigned __int64 v147; // [rsp+70h] [rbp-90h]
  int v148; // [rsp+70h] [rbp-90h]
  int v149; // [rsp+78h] [rbp-88h]
  int v150; // [rsp+78h] [rbp-88h]
  int v151; // [rsp+80h] [rbp-80h]
  __int64 v152; // [rsp+88h] [rbp-78h]
  __int64 v153; // [rsp+90h] [rbp-70h]
  _QWORD v154[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v155; // [rsp+1A0h] [rbp+A0h]
  __int64 v156; // [rsp+1A8h] [rbp+A8h]
  __int64 v157; // [rsp+1B0h] [rbp+B0h]
  _DWORD v158[22]; // [rsp+1B8h] [rbp+B8h] BYREF
  int v160; // [rsp+230h] [rbp+130h]
  char v161; // [rsp+230h] [rbp+130h]
  __int64 v162; // [rsp+230h] [rbp+130h]
  int v163; // [rsp+238h] [rbp+138h]
  int v164; // [rsp+250h] [rbp+150h]

  v10 = a4->m128i_i64[0];
  v11 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v135 = a3->m128i_i64[0];
  v12 = HIDWORD(a4->m128i_i64[0]);
  v13 = v11 - a4->m128i_i64[0];
  v14 = HIDWORD(v11) - HIDWORD(a4->m128i_i64[0]);
  v15 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v140 = v14;
  v16 = HIDWORD(a3->m128i_i64[0]);
  v151 = v15 - a3->m128i_i64[0];
  v137 = v16;
  v155 = HIDWORD(v15) - HIDWORD(a3->m128i_i64[0]);
  if ( v13 >= 128000000 || v14 >= 128000000 || v13 <= -128000000 || v14 <= -128000000 )
    return v16;
  memset(v154, 0, 0xF8uLL);
  v17 = *(_QWORD *)(a2 + 48);
  v18 = v15 - v10;
  v19 = *(_QWORD *)(a1 + 48);
  v146 = HIDWORD(v15) - v12;
  v20 = v19 + *(unsigned int *)(a1 + 40);
  v21 = *(_DWORD *)(a2 + 32);
  v154[30] = v17 + *(unsigned int *)(a2 + 40);
  HIDWORD(v154[26]) = *(_DWORD *)(a1 + 32);
  LODWORD(v16) = *(_DWORD *)(a1 + 64);
  v154[29] = v17;
  v154[27] = v19;
  v163 = (int)v16 / 4;
  v22 = (int)v16 / 4;
  LODWORD(v154[2]) = (int)v16 / 4;
  v23 = *(int *)(a2 + 64) >> 31;
  LODWORD(v16) = *(_DWORD *)(a2 + 64);
  v138 = v137 - v12;
  v145 = v20;
  v154[28] = v20;
  HIDWORD(v154[0]) = v15 - v10;
  v24 = (v23 & 3) + v16;
  LODWORD(v16) = v135 - v10;
  v25 = (int)v135 - (int)v10;
  v136 = v16;
  LODWORD(v154[0]) = v16;
  v164 = v24 >> 2;
  LODWORD(v154[5]) = v24 >> 2;
  v153 = *(_QWORD *)(a1 + 56) + 4 * (v163 * (v140 - v138 - 1) - (__int64)(int)v16);
  v26 = *a5;
  LODWORD(v17) = a5[1];
  v27 = a5[2] - v26;
  v139 = a5[3] - v17;
  v28 = (v24 >> 2) * (int)v17;
  v29 = (v24 >> 2) * (v139 - 1);
  v152 = *(_QWORD *)(a2 + 56) + 4 * (v26 + v29 + v28);
  if ( (*a6 & 0x20) != 0 )
  {
    v100 = v138;
    v92 = v22;
    v101 = HIDWORD(v15) - v12;
    v102 = v153 + 4 * (v92 * v138 - (__int64)(v92 * (v140 - 1)));
    if ( v139 < v146 )
      v101 = v139;
    v103 = v152 + 4 * (v164 * v138 - v29);
    if ( v27 < v18 )
      v18 = a5[2] - v26;
    if ( v18 > (int)v16 && v138 < v101 )
    {
      v104 = 4 * (v18 - v16);
      while ( 1 )
      {
        v105 = (const void *)(v103 + 4 * v25);
        v106 = (char *)(v102 + 4 * v25);
        if ( v104 <= 0 )
          break;
        v107 = &v106[v104];
        if ( v107 <= v106 )
          goto LABEL_69;
        v16 = (unsigned __int64)v105 + v104;
        if ( v16 <= (unsigned __int64)v105 || v19 > (unsigned __int64)v106 || (unsigned __int64)v107 > v20 )
          goto LABEL_69;
        if ( (v19 > (unsigned __int64)v105 || v16 > v20) && (v154[29] > (unsigned __int64)v105 || v16 > v154[30]) )
          goto LABEL_69;
        memmove(v106, v105, v104);
        v92 = v163;
        ++v100;
        LODWORD(v16) = v164;
        v102 += 4LL * v163;
        v103 += 4LL * v164;
        if ( v100 >= v101 )
          goto LABEL_70;
        v20 = v145;
      }
    }
    goto LABEL_70;
  }
  LODWORD(v154[22]) = *a6 & 2;
  v30 = 1;
  LODWORD(v154[3]) = v151;
  v154[6] = __PAIR64__(v21, v139);
  v31 = a6[1];
  v32 = a6[2];
  HIDWORD(v154[2]) = v13;
  HIDWORD(v154[5]) = v27;
  HIDWORD(v154[7]) = v31;
  v160 = v32;
  LODWORD(v154[9]) = v32;
  if ( v13 - v32 - v31 <= 0 || v27 - v32 - v31 <= 0 )
  {
    v33 = 0;
    HIDWORD(v154[12]) = 0;
    if ( v32 + v31 )
    {
      v35 = v13 * v31 / (v32 + v31);
      LODWORD(v154[21]) = v35;
      v33 = HIDWORD(v154[12]);
    }
    else
    {
      v35 = 0;
      LODWORD(v154[21]) = 0;
    }
    v34 = v13 - v35;
    v133 = v13 - v35;
    HIDWORD(v154[21]) = v13 - v35;
  }
  else
  {
    v33 = 1;
    HIDWORD(v154[12]) = 1;
    v34 = v32;
    v133 = v32;
    v35 = v31;
    v154[21] = __PAIR64__(v32, v31);
  }
  v36 = v136;
  LODWORD(v154[8]) = v136;
  if ( v35 >= v18 )
  {
    v37 = v18;
    HIDWORD(v154[8]) = v18;
  }
  else
  {
    v37 = v35;
    HIDWORD(v154[8]) = v35;
  }
  if ( !v33 && v35 )
  {
    DNG_InitStretch((unsigned int)&v154[13], v35, v31, v136, v37);
    v20 = v154[28];
    v34 = HIDWORD(v154[21]);
    v32 = v154[9];
    v36 = v154[0];
    v19 = v154[27];
    v35 = v154[21];
    v31 = HIDWORD(v154[7]);
    v27 = HIDWORD(v154[5]);
    v13 = HIDWORD(v154[2]);
    v22 = v154[2];
    v18 = HIDWORD(v154[0]);
    v145 = v154[28];
    v133 = HIDWORD(v154[21]);
    v160 = v154[9];
    v136 = v154[0];
  }
  v38 = v13 - v34;
  v39 = (unsigned int)(v27 - v32 - v31);
  v40 = v13 - v34 - v35;
  LODWORD(v154[11]) = v40;
  if ( v35 <= v36 )
  {
    HIDWORD(v154[11]) = v36;
  }
  else
  {
    v36 = v35;
    HIDWORD(v154[11]) = v35;
  }
  v41 = v40 + v35;
  if ( (int)(v40 + v35) >= v18 )
    v41 = v18;
  v42 = HIDWORD(v154[12]);
  LODWORD(v154[12]) = v41;
  HIDWORD(v154[10]) = v39;
  if ( HIDWORD(v154[12]) )
  {
    v43 = v40;
    LODWORD(v154[26]) = v41 - v35;
    v44 = v36 - v35;
    HIDWORD(v154[25]) = v44;
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
    v149 = v47;
    if ( v43 == 4 )
      v49 = v48 >> 2;
    else
      v49 = v48 / v40;
    v50 = v49 >> 1;
    v147 = HIDWORD(v47);
    v51 = HIDWORD(v50);
    *(_QWORD *)((char *)&v154[23] + 4) = v47;
    if ( v44 > 5 )
    {
      v108 = ((unsigned int)v50 + v44 * (unsigned __int64)(unsigned int)v47) >> 32;
      LODWORD(v50) = v50 + v44 * v149;
      v42 = HIDWORD(v154[12]);
      LODWORD(v51) = v108 + v44 * v147 + v51;
    }
    else if ( v44 > 0 )
    {
      v144 = (unsigned int)v44;
      do
      {
        v122 = (int)v50 + v149 < (unsigned int)v50;
        LODWORD(v50) = v50 + v149;
        LODWORD(v51) = v147 + v122 + v51;
        --v144;
      }
      while ( v144 );
      v22 = v154[2];
      v20 = v145;
      v42 = HIDWORD(v154[12]);
    }
    HIDWORD(v154[22]) = v51;
    v32 = v160;
    LODWORD(v154[23]) = v50;
  }
  if ( v38 <= v136 )
    v38 = v136;
  v52 = v38 - v40 - v35;
  HIDWORD(v154[9]) = v52;
  if ( v13 >= v18 )
    v13 = v18;
  v53 = v13 - v40 - v35;
  LODWORD(v154[10]) = v53;
  if ( !v42 && v133 )
  {
    DNG_InitStretch((unsigned int)&v154[17], v133, v32, v52, v53);
    v20 = v154[28];
    v19 = v154[27];
    v22 = v154[2];
    v145 = v154[28];
    v136 = v154[0];
  }
  v54 = v140;
  v56 = a6[4];
  v150 = a6[3];
  v55 = v150;
  if ( v140 - v150 - v56 <= 0 || v139 - v150 - v56 <= 0 )
  {
    v161 = 0;
    if ( v56 + v150 )
      v55 = v140 * v150 / (v56 + v150);
    else
      v55 = 0;
    v57 = v140 - v55;
  }
  else
  {
    v161 = 1;
    v57 = a6[4];
  }
  v58 = v140 - v57;
  v134 = v55;
  v141 = v57;
  v59 = v140 - v57;
  if ( v140 - v57 <= v138 )
    v59 = v138;
  v60 = v146;
  if ( v140 < v146 )
    v60 = v140;
  if ( v146 <= v58 )
    goto LABEL_37;
  v154[1] = v153;
  v154[4] = v152;
  if ( v56 == v57 )
  {
    v154[1] = v153 - 4LL * v163 * (v56 - v59 - v57 + v140 - 1);
    v154[4] = v152 - 4LL * v164 * (v56 - v59 - v57 + v140 - 1);
    if ( v59 < v60 )
    {
      v95 = (unsigned int)(v60 - v59);
      do
      {
        DNG_DrawRow(v154);
        v154[1] += 4LL * v163;
        v154[4] += 4LL * v164;
        --v95;
      }
      while ( v95 );
      goto LABEL_83;
    }
  }
  else if ( v57 > 0 )
  {
    memset(v158, 0, 0x20uLL);
    DNG_InitStretch((unsigned int)v158, v141, v56, v140 - v60, v140 - v59);
    DNG_StretchCol((struct _DNGINTERNALDATA *)v154, v158);
LABEL_83:
    v20 = v154[28];
    v61 = v154[0];
    v19 = v154[27];
    v22 = v154[2];
    v54 = v140;
    v145 = v154[28];
    v136 = v154[0];
    goto LABEL_38;
  }
LABEL_37:
  v61 = v136;
LABEL_38:
  v62 = a6;
  v63 = v138;
  LODWORD(v16) = a6[3];
  v64 = a6[4];
  v65 = v139 - v16 - v64;
  v66 = v54 - v16 - v64;
  if ( !v161 || v65 <= 0 || v66 <= 0 || v138 >= v58 || (LODWORD(v16) = v134, v146 <= v134) )
  {
LABEL_65:
    v90 = v163;
    goto LABEL_66;
  }
  v67 = v153 - 4LL * v163 * v64;
  v68 = v164 * v64;
  v69 = v150;
  v157 = v67;
  v162 = v152 - 4 * v68;
  if ( v150 <= v138 )
    v69 = v138;
  if ( !LODWORD(v154[22]) )
  {
    v70 = v54 - v56;
    v71 = (unsigned int)v65;
    if ( v70 >= v146 )
      v70 = v146;
    v72 = (unsigned int)v66;
    v73 = v66 + v150 - v70;
    v74 = v66 + v150 - v69;
    v75 = (((unsigned __int64)(unsigned int)v65 << 32) - 1) / (unsigned int)v66 + 1;
    v148 = v75;
    v76 = (((unsigned __int64)(unsigned int)v65 << 32) / v72) >> 1;
    v142 = HIDWORD(v75);
    v77 = ((v71 << 32) / v72) >> 33;
    if ( v73 <= 5 )
    {
      if ( v73 > 0 )
      {
        v93 = (unsigned int)v73;
        do
        {
          v94 = __PAIR64__(v77, v76) + v75;
          LODWORD(v77) = (__PAIR64__(v77, v76) + v75) >> 32;
          LODWORD(v76) = v94;
          --v93;
        }
        while ( v93 );
        v20 = v145;
      }
    }
    else
    {
      v78 = (unsigned int)v76 + v73 * (unsigned __int64)(unsigned int)v75;
      LODWORD(v76) = v76 + v73 * v75;
      LODWORD(v77) = HIDWORD(v78) + v73 * HIDWORD(v75) + v77;
    }
    v79 = v162;
    v80 = v67 - 4LL * v22 * v73;
    v81 = 4LL * v22 * v74;
    v82 = 0;
    v83 = v67 - v81;
    v84 = v162 - 4LL * LODWORD(v154[5]) * (int)v77;
    v156 = v83;
    if ( v80 != v83 )
    {
      do
      {
        if ( v30 )
        {
          v154[1] = v80;
          v154[4] = v84;
          DNG_DrawRow(v154);
          v19 = v154[27];
          v22 = v154[2];
          v145 = v154[28];
          v136 = v154[0];
        }
        else
        {
          v85 = 4 * LODWORD(v154[3]);
          v86 = (char *)(v80 + 4LL * v136);
          v87 = (char *)(v80 + 4 * (v136 + (__int64)v22));
          if ( 4 * LODWORD(v154[3]) <= 0 )
            break;
          v88 = &v86[v85];
          if ( v88 <= v86 )
            break;
          v89 = &v87[v85];
          if ( v89 <= v87 || v19 > (unsigned __int64)v86 || (unsigned __int64)v88 > v20 )
            break;
          if ( (v19 > (unsigned __int64)v87 || (unsigned __int64)v89 > v20)
            && (v154[29] > (unsigned __int64)v87 || (unsigned __int64)v89 > v154[30]) )
          {
            break;
          }
          memmove(v86, v87, v85);
        }
        v30 = ((int)v76 + v148 < (unsigned int)v76) + (_DWORD)v142;
        v82 += v30;
        if ( v82 < LODWORD(v154[6]) )
          v84 -= 4LL * LODWORD(v154[5]) * v30;
        v20 = v145;
        LODWORD(v76) = v76 + v148;
        v80 -= 4LL * v22;
      }
      while ( v80 != v156 );
      v79 = v162;
    }
    LODWORD(v16) = v157;
    v54 = v140;
    v63 = v138;
    v62 = a6;
    v154[1] = v157;
    v154[4] = v79;
    goto LABEL_65;
  }
  v90 = v163;
  v109 = v67 + 4 * (v163 * (v69 - v150) - (__int64)(v163 * (v66 - 1)));
  v110 = (v69 - v150) % v65;
  v154[1] = v109;
  v111 = v65 - v110;
  v154[4] = v152 - 4 * v68 + 4 * (LODWORD(v154[5]) * v110 - (__int64)(v164 * (v65 - 1)));
  if ( v65 >= v66 )
    v112 = v66;
  else
    v112 = v65;
  v54 = v140;
  v113 = v140 - v56;
  v114 = v140 - v56;
  if ( v140 - v56 >= v146 )
    v114 = v146;
  v143 = v114;
  if ( v69 + v112 >= v114 )
  {
    v115 = v146;
    if ( v113 < v146 )
      v115 = v113;
  }
  else
  {
    if ( v65 < v66 )
      v66 = v65;
    v115 = v69 + v66;
  }
  if ( v69 < v115 )
  {
    v116 = 4LL * v163;
    v117 = (unsigned int)(v115 - v69);
    do
    {
      DNG_DrawRow(v154);
      if ( --v111 )
      {
        v118 = v154[4];
      }
      else
      {
        v111 = v65;
        v118 = v154[4] - 4LL * v164 * v65;
      }
      v109 = v116 + v154[1];
      v154[4] = 4LL * v164 + v118;
      v154[1] += v116;
      --v117;
    }
    while ( v117 );
    v61 = v154[0];
    v114 = v143;
    v54 = v140;
    v90 = v163;
  }
  v16 = 4LL * v90 * v65;
  v119 = v109 - v16;
  v154[4] = v109 - v16;
  if ( v115 < v114 )
  {
    v120 = 4 * LODWORD(v154[3]);
    v121 = 4LL * v61;
    do
    {
      LODWORD(v16) = DNG_CopyMemory((struct _DNGINTERNALDATA *)v154, (void *)(v121 + v109), (void *)(v121 + v119), v120);
      if ( !(_DWORD)v16 )
        break;
      ++v115;
      v16 = 4LL * v90;
      v109 += v16;
      v119 += v16;
      v154[1] = v109;
      v154[4] = v119;
    }
    while ( v115 < v114 );
    v54 = v140;
  }
  v63 = v138;
  v62 = a6;
LABEL_66:
  v91 = v134;
  if ( v134 >= v146 )
    v91 = v146;
  if ( v63 < v134 )
  {
    v96 = v164 * (v139 - v62[3]);
    v154[1] = v153 - 4LL * v90 * (v54 - v134);
    v16 = 4LL * v96;
    v97 = v152 - v16;
    v154[4] = v152 - v16;
    if ( v150 == v134 )
    {
      v98 = v150 - v63 - 1;
      LODWORD(v16) = v98 * v164;
      v154[1] = v153 - 4LL * v90 * (v54 - v134) - 4LL * v98 * v90;
      v154[4] = v97 - 4LL * v98 * v164;
      if ( v63 < v91 )
      {
        v99 = (unsigned int)(v91 - v63);
        do
        {
          LODWORD(v16) = DNG_DrawRow(v154);
          v154[1] += 4LL * v90;
          v154[4] += 4LL * v164;
          --v99;
        }
        while ( v99 );
      }
    }
    else if ( v134 > 0 )
    {
      memset(v158, 0, 0x20uLL);
      DNG_InitStretch((unsigned int)v158, v134, v150, v134 - v91, v134 - v63);
      LODWORD(v16) = DNG_StretchCol((struct _DNGINTERNALDATA *)v154, v158);
    }
  }
LABEL_69:
  v92 = v163;
LABEL_70:
  if ( a8 )
  {
    v123 = a1;
    if ( v155 <= *(_DWORD *)(a1 + 36) && v151 <= *(_DWORD *)(a1 + 32) && v155 > 0 )
    {
      v124 = 4LL * v92;
      LODWORD(v16) = v151 / 2;
      v125 = (unsigned int)v155;
      v126 = 0LL;
      do
      {
        v127 = *(_QWORD *)(v123 + 56);
        v128 = (int *)(v127 + v126);
        v129 = (_DWORD *)(4LL * v151 + v127 + v126 - 4);
        if ( v151 / 2 > 0 )
        {
          v130 = (unsigned int)(v151 / 2);
          do
          {
            v131 = *v128++;
            LODWORD(v16) = *v129--;
            *(v128 - 1) = v16;
            v129[1] = v131;
            --v130;
          }
          while ( v130 );
          v123 = a1;
        }
        v126 += v124;
        --v125;
      }
      while ( v125 );
    }
  }
  return v16;
}
