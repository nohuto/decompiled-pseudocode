/*
 * XREFs of sub_140348B4C @ 0x140348B4C
 * Callers:
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140333010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140346BE8 @ 0x140346BE8 (sub_140346BE8.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     sub_1403495B4 @ 0x1403495B4 (sub_1403495B4.c)
 *     KeGuardDispatchICall @ 0x14034BB40 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_140348B4C(
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
  __int64 v11; // r14
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
  int v53; // esi
  unsigned int *v54; // r13
  unsigned int v55; // r12d
  unsigned int v56; // ebx
  char v57; // al
  char *v58; // rax
  int v59; // ebp
  int v60; // ecx
  __int16 v61; // ax
  char *v62; // r8
  __int64 *v63; // r10
  signed __int64 v64; // r9
  char *v65; // rbx
  int v66; // r11d
  char *v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rax
  unsigned int v70; // r8d
  __int64 *v71; // r9
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  int v76; // r9d
  signed __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // rax
  int v80; // r9d
  signed __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rax
  int v84; // eax
  unsigned int v85; // r9d
  unsigned int v86; // ecx
  __int64 v87; // r9
  unsigned int v88; // eax
  unsigned int v89; // edx
  int v90; // esi
  __int64 v91; // rax
  int v92; // edx
  __int64 v93; // r10
  __int64 v94; // r14
  unsigned __int64 v95; // rbx
  char v96; // al
  unsigned int v97; // r8d
  unsigned __int8 v98; // r15
  unsigned __int64 v99; // rsi
  unsigned __int64 v100; // r12
  unsigned __int64 v101; // rbp
  int v102; // eax
  char *v103; // r15
  _QWORD *v104; // r9
  int v105; // r11d
  const char *v106; // rax
  unsigned __int64 v107; // rcx
  unsigned __int64 v108; // r8
  unsigned int v109; // r10d
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // r8
  unsigned __int64 v113; // rcx
  unsigned int v114; // r14d
  unsigned __int64 v115; // rdx
  __int64 v116; // rax
  unsigned __int64 k; // rax
  __int64 v118; // r8
  int v119; // edx
  unsigned int v120; // [rsp+20h] [rbp-98h]
  int v121; // [rsp+24h] [rbp-94h]
  unsigned __int64 v122; // [rsp+28h] [rbp-90h]
  unsigned __int64 v123; // [rsp+30h] [rbp-88h]
  __int64 v124; // [rsp+30h] [rbp-88h]
  char v125; // [rsp+38h] [rbp-80h]
  unsigned int v126; // [rsp+3Ch] [rbp-7Ch]
  int *v127; // [rsp+40h] [rbp-78h]
  char *v128; // [rsp+48h] [rbp-70h]
  unsigned int *v129; // [rsp+50h] [rbp-68h]
  __int64 v130; // [rsp+58h] [rbp-60h]
  unsigned int *v131; // [rsp+60h] [rbp-58h]
  int v133; // [rsp+C0h] [rbp+8h]

  v8 = *(_BYTE **)a1;
  v9 = a3;
  v130 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 496LL))(a4);
  if ( !v130 )
    return 3221225595LL;
  v10 = v9 / 0xC;
  v123 = v9 / 0xC;
  v11 = a5 ? 12LL : (a6 & 0x10) != 0 ? 43 : 1;
  v12 = *((unsigned int *)v8 + 499);
  v13 = 3LL;
  v14 = 4 * v10;
  v15 = 4 * v10 + v12 + 48;
  if ( v15 <= *((_DWORD *)v8 + 639) )
  {
    v16 = (__int64)v8;
    *((_DWORD *)v8 + 499) = v15;
  }
  else
  {
    v16 = sub_1403495B4(v8, v15, *((unsigned int *)v8 + 577));
    if ( !v16 )
      return 3221225626LL;
    v17 = *((_DWORD *)v8 + 604);
    if ( (v17 & 4) == 0 )
    {
      v18 = *((_DWORD *)v8 + 499);
      v19 = *((_QWORD *)v8 + 246);
      v20 = (v17 & 0x20000000) != 0 ? *((_DWORD *)v8 + 577) : 0;
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
      v22 = *(_DWORD *)(v16 + 2308);
      *(_DWORD *)(v16 + 2308) = v20;
      if ( v20 == 3 )
      {
        (*(void (__fastcall **)(__int64))(v16 + 864))(v19);
      }
      else
      {
        v23 = 0;
        if ( (*(_DWORD *)(v16 + 2416) & 0x10000000) == 0 )
          v23 = v20;
        if ( v23 )
          (*(void (__fastcall **)(__int64, _QWORD))(v16 + 544))(v19 - 8, *(_QWORD *)(v19 - 8));
        else
          (*(void (__fastcall **)(__int64))(v16 + 248))(v19);
      }
      *(_DWORD *)(v16 + 2308) = v22;
    }
    *(_DWORD *)(v16 + 2416) &= ~4u;
  }
  ++*(_DWORD *)(v16 + 2036);
  v25 = v16 + v12;
  v26 = 48;
  v127 = (int *)(v16 + v12);
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
  *(_DWORD *)(v16 + 2064) += v9;
  v31 = *(_DWORD *)(v16 + 2044);
  if ( v30 < &v30[v9] )
  {
    do
    {
      _mm_prefetch(v30, 0);
      v30 += 64;
    }
    while ( v30 < (const char *)a2 + v9 );
  }
  v32 = *(_QWORD *)(v16 + 2048);
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
    v37 = __ROL8__(*(_QWORD *)(v16 + 2048) ^ ((char *)v29 - (char *)a2), 17) ^ *(_QWORD *)(v16 + 2048) ^ ((char *)v29 - (char *)a2);
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
  v127[5] = v32;
  *(_DWORD *)(v16 + 2064) += v9;
  v44 = v127 + 6;
  *(_QWORD *)a1 = v16;
  v45 = *(_QWORD *)(v16 + 1328);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64, unsigned __int64, unsigned int *))(v16 + 328))(v45, v38, v32, v29);
  v47 = 24;
  v48 = **(unsigned int ***)(v16 + 1536);
  v49 = (unsigned __int64)(v48 + 4);
  while ( *(_QWORD *)(v49 + 8) != a4 )
  {
    v49 += 24LL;
    if ( v49 >= (unsigned __int64)&v48[6 * *v48 + 4] )
      goto LABEL_49;
  }
  v43 = 0;
  *v44 = *(_OWORD *)v49;
  *((_QWORD *)v127 + 5) = *(_QWORD *)(v49 + 16);
LABEL_49:
  (*(void (__fastcall **)(_QWORD))(v16 + 392))(*(_QWORD *)(v16 + 1328));
  __writecr8(CurrentIrql);
  if ( v43 < 0 )
  {
    v50 = v127 + 6;
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
  v51 = v127 + 12;
  v129 = (unsigned int *)(v127 + 12);
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
  v120 = 0;
  v122 = 0LL;
  v131 = &a2[3 * (unsigned int)v123];
  v57 = -9;
  v133 = -1;
  if ( (*(_DWORD *)(v16 + 2420) & 0x40) != 0 )
    v57 = a6;
  v125 = v57;
  v58 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v16 + 520))(v130, a4, *a2);
  v124 = v11;
LABEL_167:
  v128 = v58;
  v103 = v58;
  if ( !v58 )
    return 3221225595LL;
  v59 = 0;
  if ( (*((_DWORD *)v58 + 9) & 0x2000000) != 0
    || (v60 = *(_DWORD *)v58, *(_DWORD *)v58 == 1414090313) && *((_DWORD *)v58 + 1) == 1195525195
    || v60 == 1162297680 && ((v61 = *((_WORD *)v58 + 2), v61 == 30839) || v61 == 29303 || v61 == 30583)
    || v60 == 1095914053 && *((_WORD *)v103 + 2) == 16724 )
  {
    v59 = 1;
  }
  else
  {
    v62 = *(char **)(v16 + 2320);
    v63 = *(__int64 **)(v16 + 2328);
    v64 = v103 - v62;
    v65 = *(char **)(v16 + 2336);
    v66 = 7;
    v67 = *(char **)(v16 + 2344);
    while ( 1 )
    {
      v68 = (unsigned __int8)v62[v64];
      v69 = (unsigned __int8)*v62++;
      if ( v68 != v69 )
        break;
      if ( !--v66 )
      {
LABEL_90:
        v59 = 1;
        goto LABEL_92;
      }
    }
    v70 = 8;
    v71 = (__int64 *)v103;
    while ( 1 )
    {
      v72 = *v71++;
      v73 = *v63++;
      if ( v72 != v73 )
        break;
      v70 -= 8;
      if ( v70 < 8 )
      {
        if ( !v70 )
          goto LABEL_90;
        while ( 1 )
        {
          v74 = *(unsigned __int8 *)v71;
          v71 = (__int64 *)((char *)v71 + 1);
          v75 = *(unsigned __int8 *)v63;
          v63 = (__int64 *)((char *)v63 + 1);
          if ( v74 != v75 )
            goto LABEL_83;
          if ( !--v70 )
            goto LABEL_90;
        }
      }
    }
LABEL_83:
    v76 = 4;
    v77 = v103 - v65;
    while ( 1 )
    {
      v78 = (unsigned __int8)v65[v77];
      v79 = (unsigned __int8)*v65++;
      if ( v78 != v79 )
        break;
      if ( !--v76 )
        goto LABEL_90;
    }
    v80 = 6;
    v81 = v103 - v67;
    while ( 1 )
    {
      v82 = (unsigned __int8)v67[v81];
      v83 = (unsigned __int8)*v67++;
      if ( v82 != v83 )
        break;
      if ( !--v80 )
        goto LABEL_90;
    }
LABEL_92:
    v56 = v120;
    v53 = v133;
  }
  v84 = *((_DWORD *)v103 + 9);
  if ( v84 < 0 )
    v59 = 1;
  v121 = v59;
  if ( v11 == 43 )
  {
    if ( (v84 & 0x20000000) == 0 )
      v59 = 1;
    v121 = v59;
  }
  if ( v59 && *(_DWORD *)v103 == 1414090313 && *((_DWORD *)v103 + 1) == 1195525195 )
  {
    if ( (*(_DWORD *)(v16 + 2420) & 0x2000) != 0 )
      v59 = 0;
    v121 = v59;
  }
  v85 = *((_DWORD *)v103 + 4);
  v86 = *((_DWORD *)v103 + 3);
  if ( v85 <= *((_DWORD *)v103 + 2) )
    v85 = *((_DWORD *)v103 + 2);
  v87 = v86 + v85;
  v126 = v87;
  while ( 1 )
  {
    v88 = v54[2];
    v89 = v53;
    if ( (v88 & 1) == 0 )
    {
      v90 = v54[2];
      if ( v88 >= v89 )
        v90 = v89;
      v133 = v90;
      if ( v88 > v56 )
      {
        v120 = v54[2];
        v133 = v90;
      }
    }
    v91 = *v54;
    v92 = v59;
    v93 = a4;
    v94 = v54[1] - (unsigned int)v91;
    v95 = a4 + v91;
    if ( v124 != 43 )
      goto LABEL_125;
    if ( v59 || v86 - (unsigned int)v91 < 6 || (unsigned int)v91 - v55 < 6 )
    {
LABEL_126:
      v97 = 0x80000000;
      goto LABEL_163;
    }
    v96 = *(_BYTE *)(v95 - 1);
    if ( *(_BYTE *)(v95 - 6) != 76
      || *(_BYTE *)(v95 - 5) != 0x87
      || *(_BYTE *)(v95 - 4)
      || *(_BYTE *)(v95 - 3) != 0x98
      || *(_BYTE *)(v95 - 2) != 0xC3
      || v96 != -112 && v96 != -15 )
    {
      v92 = 1;
LABEL_125:
      if ( v92 )
        goto LABEL_126;
    }
    if ( (v125 & 8) != 0 )
    {
      if ( (((v95 & 0xFFF) + v94 + 4095) & 0xFFFFFFFFFFFFF000uLL) != 0x1000 || (v95 & 0xFFFFFFFFFFFFF000uLL) != v122 )
      {
        if ( (_DWORD)v94 && (*(_DWORD *)(v16 + 2420) & 0x40) != 0 )
        {
          v98 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v99 = v95 & 0xFFFFFFFFFFFFF000uLL;
          v100 = (v95 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v101 = v98;
            while ( 1 )
            {
              v102 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(v16 + 1120))(v99, 1LL);
              if ( v102 != -1073741267 )
                break;
              if ( v98 > 1u )
                goto LABEL_138;
              v101 = v98;
              __writecr8(v98);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v102 < 0 )
            {
              __writecr8(v101);
              goto LABEL_141;
            }
LABEL_138:
            v99 += 4096LL;
            v100 += 4096LL;
            if ( v100 != ((v95 + v94 - 1) | 0xFFF) )
              continue;
            break;
          }
          __writecr8(v101);
        }
        else
        {
LABEL_141:
          if ( !*(_DWORD *)(v16 + 2264) )
          {
            *(_QWORD *)(v16 + 2272) = v16 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v16 + 2280) = (char *)v127 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v16 + 2288) = *v127;
            *(_QWORD *)(v16 + 2296) = v95;
            *(_DWORD *)(v16 + 2264) = 1;
          }
        }
        v103 = v128;
        v59 = v121;
        v122 = (v95 + v94) & 0xFFFFFFFFFFFFF000uLL;
      }
      v54 = a2;
    }
    *(_DWORD *)(v16 + 2064) += v94;
    v104 = (_QWORD *)v95;
    v105 = *(_DWORD *)(v16 + 2044);
    v106 = (const char *)v95;
    v107 = v95 + (unsigned int)v94;
    if ( v95 < v107 )
    {
      do
      {
        _mm_prefetch(v106, 0);
        v106 += 64;
      }
      while ( (unsigned __int64)v106 < v107 );
    }
    v108 = *(_QWORD *)(v16 + 2048);
    v109 = (unsigned int)v94 >> 7;
    if ( (unsigned int)v94 >> 7 )
    {
      do
      {
        v110 = 8LL;
        do
        {
          v111 = v108 ^ *v104;
          v112 = v104[1];
          v104 += 2;
          v108 = __ROL8__(__ROL8__(v111, v105) ^ v112, v105);
          --v110;
        }
        while ( v110 );
        v113 = __ROL8__(*(_QWORD *)(v16 + 2048) ^ ((unsigned __int64)v104 - v95), 17) ^ *(_QWORD *)(v16 + 2048) ^ ((unsigned __int64)v104 - v95);
        v105 = ((unsigned __int8)((v113 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v113 ^ v105)) & 0x3F;
        if ( !v105 )
          LOBYTE(v105) = 1;
        --v109;
      }
      while ( v109 );
      v103 = v128;
      v59 = v121;
    }
    v114 = v94 & 0x7F;
    if ( v114 >= 8 )
    {
      v115 = (unsigned __int64)v114 >> 3;
      do
      {
        v108 = __ROL8__(*v104++ ^ v108, v105);
        v114 -= 8;
        --v115;
      }
      while ( v115 );
    }
    for ( ; v114; --v114 )
    {
      v116 = *(unsigned __int8 *)v104;
      v104 = (_QWORD *)((char *)v104 + 1);
      v108 = __ROL8__(v116 ^ v108, v105);
    }
    for ( k = v108 >> 31; k; k >>= 31 )
      LODWORD(v108) = k ^ v108;
    v87 = v126;
    v97 = v108 & 0x7FFFFFFF;
    v93 = a4;
LABEL_163:
    *v129 = v97;
    v55 = v54[1];
    v54 += 3;
    a2 = v54;
    if ( v54 == v131 )
      break;
    v118 = *v54;
    v86 = *((_DWORD *)v103 + 3);
    ++v129;
    if ( (unsigned int)v118 >= v86 )
    {
      v53 = v133;
      v56 = v120;
      if ( v54[1] <= (unsigned int)v87 )
        continue;
    }
    v58 = (char *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v16 + 520))(v130, v93, v118, v87);
    v53 = v133;
    v56 = v120;
    v11 = v124;
    goto LABEL_167;
  }
  v119 = v133;
  if ( v133 == -1 )
    v119 = -(v120 != 0);
  *a7 = v119;
  *a8 = v120;
  return 0LL;
}
