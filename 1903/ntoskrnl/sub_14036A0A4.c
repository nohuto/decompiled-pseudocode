/*
 * XREFs of sub_14036A0A4 @ 0x14036A0A4
 * Callers:
 *     sub_1401AC160 @ 0x1401AC160 (sub_1401AC160.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140354010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140368148 @ 0x140368148 (sub_140368148.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     sub_14036AB20 @ 0x14036AB20 (sub_14036AB20.c)
 *     sub_14036B3BC @ 0x14036B3BC (sub_14036B3BC.c)
 *     KeGuardDispatchICall @ 0x14036D310 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_14036A0A4(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        int *a7,
        unsigned int *a8)
{
  _BYTE *v8; // rbx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned int v11; // r14d
  __int64 v12; // r15
  __int64 v13; // r13
  unsigned int v14; // ebp
  unsigned int v15; // eax
  __int64 v16; // rdi
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // r8
  int v20; // edx
  unsigned __int64 v21; // rcx
  int v22; // ebx
  int v23; // ecx
  __int64 v25; // r8
  int v26; // ecx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  unsigned int *v29; // r9
  const char *v30; // rax
  int v31; // r10d
  unsigned __int64 v32; // r8
  unsigned int i; // r11d
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r8
  signed __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned __int64 v39; // r11
  __int64 v40; // rax
  bool v41; // zf
  unsigned __int64 j; // rax
  int v43; // r15d
  _OWORD *v44; // rsi
  __int64 v45; // rcx
  unsigned __int8 CurrentIrql; // r12
  int v47; // ebx
  unsigned int *v48; // rcx
  unsigned __int64 v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  unsigned __int64 v52; // rcx
  int v53; // ebp
  unsigned int *v54; // r12
  unsigned int v55; // r15d
  unsigned int v56; // r13d
  char v57; // al
  char *v58; // rax
  __int64 v59; // rbx
  int v60; // esi
  int v61; // ecx
  __int16 v62; // ax
  char *v63; // r8
  int v64; // r10d
  signed __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 *v68; // r9
  unsigned int v69; // r8d
  __int64 *v70; // r10
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int8 *v75; // r8
  int v76; // r10d
  __int64 v77; // rdx
  __int64 v78; // rax
  unsigned __int8 *v79; // r8
  int v80; // r10d
  __int64 v81; // rdx
  __int64 v82; // rax
  int v83; // eax
  unsigned int v84; // r9d
  unsigned int v85; // ecx
  __int64 v86; // r9
  unsigned int v87; // eax
  unsigned int v88; // edx
  int v89; // ebp
  __int64 v90; // rax
  __int64 v91; // r10
  int v92; // edx
  __int64 v93; // r14
  unsigned __int64 v94; // rbx
  char v95; // al
  unsigned int v96; // r8d
  unsigned __int8 v97; // r15
  unsigned __int64 v98; // rsi
  unsigned __int64 v99; // r12
  unsigned __int64 v100; // rbp
  int v101; // eax
  _QWORD *v102; // r9
  int v103; // r11d
  const char *v104; // rax
  unsigned __int64 v105; // rcx
  unsigned __int64 v106; // r8
  unsigned int v107; // r10d
  __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // r8
  unsigned __int128 v111; // rax
  unsigned int v112; // r14d
  unsigned __int64 v113; // rdx
  __int64 v114; // rax
  unsigned __int64 k; // rax
  char *v116; // r11
  __int64 v117; // r8
  int v118; // edx
  unsigned int v119; // [rsp+20h] [rbp-B8h]
  int v120; // [rsp+24h] [rbp-B4h]
  unsigned __int64 v121; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v122; // [rsp+30h] [rbp-A8h]
  __int64 v123; // [rsp+30h] [rbp-A8h]
  char v124; // [rsp+38h] [rbp-A0h]
  unsigned int v125; // [rsp+3Ch] [rbp-9Ch]
  int *v126; // [rsp+40h] [rbp-98h]
  unsigned int *v127; // [rsp+48h] [rbp-90h]
  __int64 v128; // [rsp+50h] [rbp-88h]
  char *v129; // [rsp+58h] [rbp-80h]
  unsigned int *v130; // [rsp+60h] [rbp-78h]
  int v132; // [rsp+E0h] [rbp+8h]

  v8 = *(_BYTE **)a1;
  v9 = a3;
  v128 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 504LL))(a4);
  if ( !v128 )
    return 3221225595LL;
  v10 = v9 / 0xC;
  v122 = v9 / 0xC;
  v11 = a5 ? 12 : (a6 & 0x10) != 0 ? 43 : 1;
  v12 = *((unsigned int *)v8 + 505);
  v13 = 3LL;
  v14 = 4 * v10;
  v15 = 4 * v10 + v12 + 48;
  if ( v15 <= *((_DWORD *)v8 + 647) )
  {
    v16 = (__int64)v8;
    *((_DWORD *)v8 + 505) = v15;
  }
  else
  {
    v16 = sub_14036AB20(v8, v15, *((unsigned int *)v8 + 585));
    if ( !v16 )
      return 3221225626LL;
    v17 = *((_DWORD *)v8 + 612);
    if ( (v17 & 4) == 0 )
    {
      v18 = *((_DWORD *)v8 + 505);
      v19 = *((_QWORD *)v8 + 249);
      v20 = (v17 & 0x20000000) != 0 ? *((_DWORD *)v8 + 585) : 0;
      if ( v18 >= 8 )
      {
        v21 = (unsigned __int64)v18 >> 3;
        do
        {
          *(_QWORD *)v8 = 0LL;
          v18 -= 8;
          v8 += 8;
          --v21;
        }
        while ( v21 );
      }
      for ( ; v18; --v18 )
        *v8++ = 0;
      v22 = *(_DWORD *)(v16 + 2340);
      *(_DWORD *)(v16 + 2340) = v20;
      if ( v20 == 3 )
      {
        (*(void (__fastcall **)(__int64))(v16 + 872))(v19);
      }
      else
      {
        v23 = 0;
        if ( (*(_DWORD *)(v16 + 2448) & 0x10000000) == 0 )
          v23 = v20;
        if ( v23 )
          (*(void (__fastcall **)(__int64, _QWORD))(v16 + 552))(v19 - 8, *(_QWORD *)(v19 - 8));
        else
          (*(void (__fastcall **)(__int64))(v16 + 256))(v19);
      }
      *(_DWORD *)(v16 + 2340) = v22;
    }
    *(_DWORD *)(v16 + 2448) &= ~4u;
  }
  ++*(_DWORD *)(v16 + 2060);
  v25 = v16 + v12;
  v26 = 48;
  v126 = (int *)(v16 + v12);
  v27 = (_QWORD *)(v16 + v12);
  v28 = 6LL;
  do
  {
    *v27 = 0LL;
    v26 -= 8;
    ++v27;
    --v28;
  }
  while ( v28 );
  for ( ; v26; --v26 )
  {
    *(_BYTE *)v27 = 0;
    v27 = (_QWORD *)((char *)v27 + 1);
  }
  *(_DWORD *)v25 = v11;
  v29 = a2;
  *(_QWORD *)(v25 + 8) = a2;
  v30 = (const char *)a2;
  *(_DWORD *)(v25 + 16) = v9;
  *(_DWORD *)(v16 + 2088) += v9;
  v31 = *(_DWORD *)(v16 + 2068);
  if ( v30 < &v30[v9] )
  {
    do
    {
      _mm_prefetch(v30, 0);
      v30 += 64;
    }
    while ( v30 < (const char *)a2 + v9 );
  }
  v32 = *(_QWORD *)(v16 + 2072);
  for ( i = (unsigned int)v9 >> 7; i; --i )
  {
    v34 = 8LL;
    do
    {
      v35 = v32 ^ *(_QWORD *)v29;
      v36 = *((_QWORD *)v29 + 1);
      v29 += 4;
      v32 = __ROL8__(__ROL8__(v35, v31) ^ v36, v31);
      --v34;
    }
    while ( v34 );
    v37 = __ROL8__(*(_QWORD *)(v16 + 2072) ^ ((char *)v29 - (char *)a2), 17) ^ *(_QWORD *)(v16 + 2072) ^ ((char *)v29 - (char *)a2);
    v31 = ((unsigned __int8)((((unsigned __int64)v37 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v37) ^ (unsigned __int8)v31) & 0x3F;
    if ( !v31 )
      LOBYTE(v31) = 1;
  }
  v38 = v9 & 0x7F;
  if ( (unsigned int)v38 >= 8 )
  {
    v39 = (v9 & 0x7F) >> 3;
    do
    {
      v32 = __ROL8__(*(_QWORD *)v29 ^ v32, v31);
      v29 += 2;
      v38 = (unsigned int)(v38 - 8);
      --v39;
    }
    while ( v39 );
  }
  if ( (_DWORD)v38 )
  {
    do
    {
      v40 = *(unsigned __int8 *)v29;
      v29 = (unsigned int *)((char *)v29 + 1);
      v32 = __ROL8__(v40 ^ v32, v31);
      v41 = (_DWORD)v38 == 1;
      v38 = (unsigned int)(v38 - 1);
    }
    while ( !v41 );
  }
  for ( j = v32; ; v32 = (unsigned int)j ^ (unsigned int)v32 )
  {
    j >>= 31;
    if ( !j )
      break;
  }
  LODWORD(v32) = v32 & 0x7FFFFFFF;
  v43 = -1073741275;
  v126[5] = v32;
  *(_DWORD *)(v16 + 2088) += v9;
  v44 = v126 + 6;
  *(_QWORD *)a1 = v16;
  v45 = *(_QWORD *)(v16 + 1344);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, unsigned int *))(v16 + 336))(v45, v38, v32, v29);
  v47 = 24;
  v48 = **(unsigned int ***)(v16 + 1552);
  v49 = (unsigned __int64)(v48 + 4);
  while ( *(_QWORD *)(v49 + 8) != a4 )
  {
    v49 += 24LL;
    if ( v49 >= (unsigned __int64)&v48[6 * *v48 + 4] )
      goto LABEL_49;
  }
  v43 = 0;
  *v44 = *(_OWORD *)v49;
  *((_QWORD *)v126 + 5) = *(_QWORD *)(v49 + 16);
LABEL_49:
  (*(void (__fastcall **)(_QWORD))(v16 + 400))(*(_QWORD *)(v16 + 1344));
  __writecr8(CurrentIrql);
  if ( v43 < 0 )
  {
    v50 = v126 + 6;
    do
    {
      *v50 = 0LL;
      v47 -= 8;
      ++v50;
      --v13;
    }
    while ( v13 );
    for ( ; v47; --v47 )
    {
      *(_BYTE *)v50 = 0;
      v50 = (_QWORD *)((char *)v50 + 1);
    }
    *(_QWORD *)v44 = 1LL;
  }
  v127 = (unsigned int *)(v126 + 12);
  v51 = v126 + 12;
  if ( v14 >= 8 )
  {
    v52 = (unsigned __int64)v14 >> 3;
    do
    {
      *v51 = -1LL;
      v14 -= 8;
      ++v51;
      --v52;
    }
    while ( v52 );
  }
  for ( ; v14; --v14 )
  {
    *(_BYTE *)v51 = -1;
    v51 = (_QWORD *)((char *)v51 + 1);
  }
  v53 = -1;
  v54 = a2;
  v55 = 0;
  v56 = 0;
  v119 = 0;
  v121 = 0LL;
  v130 = &a2[3 * (unsigned int)v122];
  v57 = -9;
  v132 = -1;
  if ( (*(_DWORD *)(v16 + 2452) & 0x40) != 0 )
    v57 = a6;
  v124 = v57;
  v58 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v16 + 528))(v128, a4, *a2);
  v59 = v11;
  v123 = v11;
LABEL_164:
  v129 = v58;
  v116 = v58;
  if ( !v58 )
    return 3221225595LL;
  v60 = 0;
  if ( (*((_DWORD *)v58 + 9) & 0x2000000) != 0
    || (v61 = *(_DWORD *)v58, *(_DWORD *)v58 == 1414090313) && *((_DWORD *)v58 + 1) == 1195525195
    || v61 == 1162297680 && ((v62 = *((_WORD *)v58 + 2), v62 == 30839) || v62 == 29303 || v62 == 30583)
    || v61 == 1095914053 && *((_WORD *)v116 + 2) == 16724 )
  {
LABEL_90:
    v60 = 1;
  }
  else
  {
    v63 = *(char **)(v16 + 2352);
    v64 = 7;
    v65 = v116 - v63;
    while ( 1 )
    {
      v66 = (unsigned __int8)v63[v65];
      v67 = (unsigned __int8)*v63++;
      if ( v66 != v67 )
        break;
      if ( !--v64 )
        goto LABEL_90;
    }
    v68 = *(__int64 **)(v16 + 2360);
    v69 = 8;
    v70 = (__int64 *)v116;
    while ( 1 )
    {
      v71 = *v70++;
      v72 = *v68++;
      if ( v71 != v72 )
        break;
      v69 -= 8;
      if ( v69 < 8 )
      {
        if ( !v69 )
          goto LABEL_90;
        while ( 1 )
        {
          v73 = *(unsigned __int8 *)v70;
          v70 = (__int64 *)((char *)v70 + 1);
          v74 = *(unsigned __int8 *)v68;
          v68 = (__int64 *)((char *)v68 + 1);
          if ( v73 != v74 )
            goto LABEL_83;
          if ( !--v69 )
            goto LABEL_90;
        }
      }
    }
LABEL_83:
    v75 = *(unsigned __int8 **)(v16 + 2368);
    v76 = 4;
    while ( 1 )
    {
      v77 = (unsigned __int8)v116[(_QWORD)v75 - *(_QWORD *)(v16 + 2368)];
      v78 = *v75++;
      if ( v77 != v78 )
        break;
      if ( !--v76 )
        goto LABEL_90;
    }
    v79 = *(unsigned __int8 **)(v16 + 2376);
    v80 = 6;
    while ( 1 )
    {
      v81 = (unsigned __int8)v116[(_QWORD)v79 - *(_QWORD *)(v16 + 2376)];
      v82 = *v79++;
      if ( v81 != v82 )
        break;
      if ( !--v80 )
        goto LABEL_90;
    }
  }
  v83 = *((_DWORD *)v116 + 9);
  if ( v83 < 0 )
    v60 = 1;
  v120 = v60;
  if ( v59 == 43 )
  {
    if ( (v83 & 0x20000000) == 0 )
      v60 = 1;
    v120 = v60;
  }
  if ( v60 && *(_DWORD *)v116 == 1414090313 && *((_DWORD *)v116 + 1) == 1195525195 )
  {
    if ( (*(_DWORD *)(v16 + 2452) & 0x2000) != 0 )
      v60 = 0;
    v120 = v60;
  }
  v84 = *((_DWORD *)v116 + 4);
  v85 = *((_DWORD *)v116 + 3);
  if ( v84 <= *((_DWORD *)v116 + 2) )
    v84 = *((_DWORD *)v116 + 2);
  v86 = v85 + v84;
  v125 = v86;
  while ( 1 )
  {
    v87 = v54[2];
    v88 = v53;
    if ( (v87 & 1) == 0 )
    {
      v89 = v54[2];
      if ( v87 >= v88 )
        v89 = v88;
      v132 = v89;
      if ( v87 > v56 )
      {
        v119 = v54[2];
        v132 = v89;
      }
    }
    v90 = *v54;
    v91 = a4;
    v92 = v60;
    v93 = v54[1] - (unsigned int)v90;
    v94 = a4 + v90;
    if ( v123 != 43 )
      goto LABEL_123;
    if ( v60 || v85 - (unsigned int)v90 < 6 || (unsigned int)v90 - v55 < 6 )
    {
LABEL_124:
      v96 = 0x80000000;
      goto LABEL_160;
    }
    v95 = *(_BYTE *)(v94 - 1);
    if ( *(_BYTE *)(v94 - 6) != 76
      || *(_BYTE *)(v94 - 5) != 0x87
      || *(_BYTE *)(v94 - 4)
      || *(_BYTE *)(v94 - 3) != 0x98
      || *(_BYTE *)(v94 - 2) != 0xC3
      || v95 != -112 && v95 != -15 )
    {
      v92 = 1;
LABEL_123:
      if ( v92 )
        goto LABEL_124;
    }
    if ( (v124 & 8) != 0
      && ((((v94 & 0xFFF) + v93 + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0x1000 || (v94 & 0xFFFFFFFFFFFFF000uLL) != v121) )
    {
      if ( (_DWORD)v93 && (*(_DWORD *)(v16 + 2452) & 0x40) != 0 )
      {
        v97 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v98 = v94 & 0xFFFFFFFFFFFFF000uLL;
        v99 = (v94 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 2 )
        {
          v100 = v97;
          while ( 1 )
          {
            v101 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(v16 + 1128))(v98, 1LL);
            if ( v101 != -1073741267 )
              break;
            if ( v97 > 1u )
              goto LABEL_136;
            v100 = v97;
            __writecr8(v97);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          if ( v101 < 0 )
          {
            __writecr8(v100);
            goto LABEL_139;
          }
LABEL_136:
          v98 += 4096LL;
          v99 += 4096LL;
          if ( v99 != ((v94 + v93 - 1) | 0xFFF) )
            continue;
          break;
        }
        __writecr8(v100);
      }
      else
      {
LABEL_139:
        if ( !*(_DWORD *)(v16 + 2296) )
        {
          *(_QWORD *)(v16 + 2304) = v16 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v16 + 2312) = (char *)v126 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v16 + 2320) = *v126;
          *(_QWORD *)(v16 + 2328) = v94;
          *(_DWORD *)(v16 + 2296) = 1;
          sub_14036B3BC(v16, 0LL, 1LL, v86);
        }
      }
      v54 = a2;
      v121 = (v94 + (unsigned int)v93) & 0xFFFFFFFFFFFFF000uLL;
    }
    *(_DWORD *)(v16 + 2088) += v93;
    v102 = (_QWORD *)v94;
    v103 = *(_DWORD *)(v16 + 2068);
    v104 = (const char *)v94;
    v105 = v94 + (unsigned int)v93;
    if ( v94 < v105 )
    {
      do
      {
        _mm_prefetch(v104, 0);
        v104 += 64;
      }
      while ( (unsigned __int64)v104 < v105 );
    }
    v106 = *(_QWORD *)(v16 + 2072);
    v107 = (unsigned int)v93 >> 7;
    if ( (unsigned int)v93 >> 7 )
    {
      do
      {
        v108 = 8LL;
        do
        {
          v109 = v106 ^ *v102;
          v110 = v102[1];
          v102 += 2;
          v106 = __ROL8__(__ROL8__(v109, v103) ^ v110, v103);
          --v108;
        }
        while ( v108 );
        v111 = (__ROL8__(*(_QWORD *)(v16 + 2072) ^ ((unsigned __int64)v102 - v94), 17) ^ *(_QWORD *)(v16 + 2072) ^ ((unsigned __int64)v102 - v94))
             * (unsigned __int128)0x7010008004002001uLL;
        v103 = (BYTE8(v111) ^ (unsigned __int8)(v111 ^ v103)) & 0x3F;
        if ( !v103 )
          LOBYTE(v103) = 1;
        --v107;
      }
      while ( v107 );
      v54 = a2;
    }
    v112 = v93 & 0x7F;
    if ( v112 >= 8 )
    {
      v113 = (unsigned __int64)v112 >> 3;
      do
      {
        v106 = __ROL8__(*v102++ ^ v106, v103);
        v112 -= 8;
        --v113;
      }
      while ( v113 );
    }
    for ( ; v112; --v112 )
    {
      v114 = *(unsigned __int8 *)v102;
      v102 = (_QWORD *)((char *)v102 + 1);
      v106 = __ROL8__(v114 ^ v106, v103);
    }
    for ( k = v106 >> 31; k; k >>= 31 )
      LODWORD(v106) = k ^ v106;
    v116 = v129;
    v96 = v106 & 0x7FFFFFFF;
    v60 = v120;
    v86 = v125;
    v91 = a4;
LABEL_160:
    *v127 = v96;
    v55 = v54[1];
    v54 += 3;
    a2 = v54;
    if ( v54 == v130 )
      break;
    v117 = *v54;
    v85 = *((_DWORD *)v116 + 3);
    ++v127;
    if ( (unsigned int)v117 >= v85 )
    {
      v53 = v132;
      v56 = v119;
      if ( v54[1] <= (unsigned int)v86 )
        continue;
    }
    v58 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v16 + 528))(v128, v91, v117, v86);
    v53 = v132;
    v56 = v119;
    v59 = v123;
    goto LABEL_164;
  }
  v118 = v132;
  if ( v132 == -1 )
    v118 = -(v119 != 0);
  *a7 = v118;
  *a8 = v119;
  return 0LL;
}
