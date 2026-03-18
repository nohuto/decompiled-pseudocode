/*
 * XREFs of KiSwInterruptDispatch @ 0x1401AB5C0
 * Callers:
 *     KiSwInterrupt @ 0x1401CA2B0 (KiSwInterrupt.c)
 * Callees:
 *     KeExitRetpoline @ 0x140101AD8 (KeExitRetpoline.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     KiGetTrapFrameMode @ 0x1402A400C (KiGetTrapFrameMode.c)
 *     KiReadKernelDr7 @ 0x1402A42B4 (KiReadKernelDr7.c)
 *     sub_14036B3BC @ 0x14036B3BC (sub_14036B3BC.c)
 *     SdbpCheckDll @ 0x14036D060 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x14036D310 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x14036D320 (KeGuardCheckICall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

const signed __int32 *__fastcall KiSwInterruptDispatch(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // r13
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // r14
  int v12; // r10d
  _QWORD *v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  const char *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r8
  unsigned int i; // r11d
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned int v24; // edx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  unsigned int *v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rdx
  int v32; // esi
  int v33; // r14d
  _QWORD *v34; // r9
  unsigned int v35; // r8d
  int *v36; // rdi
  __int64 v37; // r10
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // rax
  int v43; // eax
  unsigned __int64 v44; // rax
  _QWORD *v45; // r11
  __int64 v46; // r8
  _QWORD *v47; // r9
  const char *v48; // rax
  int v49; // r14d
  unsigned __int64 v50; // rsi
  unsigned int j; // r10d
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rsi
  unsigned __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  bool v58; // zf
  unsigned __int64 k; // rax
  unsigned int v60; // esi
  BOOL v61; // r12d
  __int64 v62; // rcx
  __int64 v63; // rdx
  unsigned __int8 v64; // r13
  unsigned __int64 v65; // r14
  unsigned __int64 v66; // r15
  int v67; // eax
  int v68; // eax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rcx
  unsigned __int8 v72; // r12
  __int64 v73; // rdx
  unsigned int *v74; // rcx
  unsigned int *v75; // rsi
  char v76; // r13
  unsigned __int64 v77; // r15
  __int64 v78; // r8
  __int64 *v79; // r9
  unsigned int *v80; // r10
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  unsigned __int8 v87; // r15
  unsigned __int64 v88; // rdx
  unsigned int *v89; // rcx
  unsigned int *v90; // rsi
  unsigned __int64 v91; // r14
  __int64 v92; // rax
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 v98; // r13
  __int64 v99; // rdi
  __int64 v100; // r14
  unsigned __int64 v101; // r12
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v103; // rsi
  __int64 v104; // r15
  unsigned __int64 v105; // r9
  unsigned __int64 v106; // r14
  unsigned int v107; // r8d
  _QWORD *m; // rdx
  unsigned __int64 v109; // rcx
  __int64 v110; // rdx
  __int64 v111; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v113; // rdx
  unsigned int *v114; // rcx
  char v115; // r13
  unsigned __int64 v116; // r15
  __int64 v117; // r8
  __int64 *v118; // r9
  unsigned int *v119; // r10
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  unsigned __int64 v123; // rax
  __int64 v124; // rdi
  _QWORD *v125; // rcx
  char *v126; // r8
  int v127; // r10d
  unsigned __int64 v128; // r11
  signed __int64 v129; // r8
  int v130; // edi
  _QWORD *v131; // r9
  const char *v132; // rax
  int v133; // r10d
  __int64 v134; // r8
  __int64 v135; // rax
  __int64 v136; // r8
  unsigned __int64 v137; // rcx
  __int64 v138; // rax
  void (__fastcall *v139)(_QWORD *, __int64, __int64, _QWORD *); // rax
  const signed __int32 *result; // rax
  int v141; // ecx
  int v142; // ecx
  int v143; // ecx
  int v144; // ecx
  int v145; // ecx
  int v146; // ecx
  volatile signed __int32 *v147; // rax
  _QWORD *v148; // [rsp+40h] [rbp-39h]
  int v149; // [rsp+40h] [rbp-39h]
  __int64 v150; // [rsp+48h] [rbp-31h]
  int v151; // [rsp+48h] [rbp-31h]
  __int64 v152; // [rsp+78h] [rbp-1h]
  unsigned int v153; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v155; // [rsp+E8h] [rbp+6Fh]
  unsigned __int64 v156; // [rsp+F0h] [rbp+77h]
  int v157; // [rsp+F0h] [rbp+77h]
  _QWORD *v158; // [rsp+F8h] [rbp+7Fh] BYREF

  v1 = *(_QWORD **)&MaxDataSize;
  v2 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)&MaxDataSize + 2452LL) & 0x100000) != 0 )
    KeExitRetpoline();
  else
    _mm_lfence();
  v3 = __rdtsc();
  v4 = __ROR8__(v3, 3) ^ v3;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  v1[338] + 2807LL,
                  dword_14042BBE0[((unsigned __int8)v4 ^ (unsigned __int8)((v4 * (unsigned __int128)0x7010008004002001uLL) >> 64)) & 0xF]);
  v148 = PoolWithTag;
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    v7 = PoolWithTag + 4;
    PoolWithTag[2] = sub_1401B8C80;
    PoolWithTag[3] = PoolWithTag;
    memmove(PoolWithTag + 4, v1, 0xAA0uLL);
    v6[339] = v1;
    v6[340] = v6 + 344;
    v8 = __rdtsc();
    v9 = *((unsigned int *)v6 + 523);
    v10 = (__ROR8__(v8, 3) ^ v8) * (unsigned __int128)0x7010008004002001uLL;
    *((_DWORD *)v6 + 530) = 0;
    *((_DWORD *)v6 + 528) = (*((_QWORD *)&v10 + 1) ^ (unsigned __int64)v10) % v9;
    v11 = v6[339];
    v12 = *((_DWORD *)v6 + 525);
    v13 = (_QWORD *)v11;
    v14 = __rdtsc();
    v15 = __ROR8__(v14, 3);
    v16 = v6[263];
    *((_DWORD *)v6 + 532) = (((v15 ^ v14) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v15 ^ v14));
    v6[341] = ((unsigned __int64)v6 + 2807) & 0xFFFFFFFFFFFFFFF8uLL;
    v17 = (const char *)v11;
    v18 = *(unsigned int *)(v11 + 2020);
    if ( v11 < v11 + v18 )
    {
      do
      {
        _mm_prefetch(v17, 0);
        v17 += 64;
      }
      while ( (unsigned __int64)v17 < v11 + v18 );
    }
    v19 = v16;
    for ( i = (unsigned int)v18 >> 7; i; --i )
    {
      v21 = 8LL;
      do
      {
        v22 = v13[1] ^ __ROL8__(*v13 ^ v19, v12);
        v13 += 2;
        v19 = __ROL8__(v22, v12);
        --v21;
      }
      while ( v21 );
      v23 = __ROL8__(v16 ^ ((unsigned __int64)v13 - v11), 17) ^ v16 ^ ((unsigned __int64)v13 - v11);
      v12 = ((unsigned __int8)(((v23 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v23) ^ (unsigned __int8)v12) & 0x3F;
      if ( !v12 )
        LOBYTE(v12) = 1;
    }
    v24 = *(_DWORD *)(v11 + 2020) & 0x7F;
    if ( v24 >= 8 )
    {
      v25 = (unsigned __int64)(v18 & 0x7F) >> 3;
      do
      {
        v19 = __ROL8__(*v13++ ^ v19, v12);
        v24 -= 8;
        --v25;
      }
      while ( v25 );
    }
    for ( ; v24; --v24 )
    {
      v26 = *(unsigned __int8 *)v13;
      v13 = (_QWORD *)((char *)v13 + 1);
      v19 = __ROL8__(v26 ^ v19, v12);
    }
    if ( v19 != qword_140572350 )
    {
      v27 = v6[182];
      *(_QWORD *)v27 = v11;
      *(_DWORD *)(v27 + 16) = v18;
      if ( !*((_DWORD *)v6 + 582) )
      {
        *(_QWORD *)(v6[182] + 24LL) = v19 ^ qword_140572350;
        if ( !*((_DWORD *)v6 + 582) )
        {
          v6[293] = 0LL;
          v6[292] = v6 - 0xB8BF814EDC6E95FLL;
          v6[294] = 273LL;
          v6[295] = v19;
          *((_DWORD *)v6 + 582) = 1;
          sub_14036B3BC(v6 + 4, 0LL, v19, v13);
        }
      }
    }
    v28 = 4LL;
    v152 = 0LL;
    v29 = &v153;
    v30 = 4;
    do
    {
      *(_BYTE *)v29 = 0;
      v29 = (unsigned int *)((char *)v29 + 1);
      --v30;
    }
    while ( v30 );
    v31 = 2LL;
    v155 = 0;
    v32 = 32;
    v33 = 12;
    if ( *((_DWORD *)v6 + 523) )
    {
      while ( 1 )
      {
        v34 = v7;
        if ( v7[335] )
          v34 = (_QWORD *)v7[335];
        v35 = 0;
        v36 = (int *)((char *)v34 + *((unsigned int *)v34 + 514));
        if ( (_DWORD)v152 && HIDWORD(v152) <= v30 )
        {
          v35 = HIDWORD(v152);
          v36 = (int *)((char *)v34 + v153);
        }
        if ( v35 != v30 )
        {
          v37 = v30 - v35;
          v35 = v30;
          while ( 1 )
          {
            v38 = *v36;
            if ( *v36 > 12 )
              break;
            if ( v38 == 12 )
              goto LABEL_46;
            v39 = v38 - 1;
            if ( !v39 )
              goto LABEL_46;
            v40 = v39 - 6;
            if ( v40 )
            {
              v41 = v40 - 1;
              if ( !v41 )
              {
                v43 = *((unsigned __int16 *)v36 + 16);
LABEL_52:
                v42 = (v43 + 55) & 0xFFFFFFF8;
                goto LABEL_53;
              }
              if ( v41 != 2 )
              {
LABEL_49:
                v42 = 48LL;
                goto LABEL_53;
              }
              v42 = (unsigned int)(16 * (v36[7] + 3));
            }
            else
            {
              v42 = (unsigned int)(24 * (v36[6] + 2));
            }
LABEL_53:
            v36 = (int *)((char *)v36 + v42);
            if ( !--v37 )
            {
              v30 = v155;
              goto LABEL_55;
            }
          }
          if ( v38 == 28 )
          {
            v43 = *((unsigned __int16 *)v36 + 20);
            goto LABEL_52;
          }
          if ( v38 == 30 )
          {
            v42 = (((v36[9] - 1) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v36 + 20) + 2);
          }
          else
          {
            if ( v38 <= 32 )
              goto LABEL_49;
            if ( v38 <= 34 )
            {
              v42 = 20 * (unsigned int)(((v36[8] & 0xFFF) + (unsigned __int64)(unsigned int)v36[10] + 4095) >> 12) + 48;
            }
            else
            {
              if ( v38 != 43 )
                goto LABEL_49;
LABEL_46:
              v42 = 4 * (v36[4] / 0xCu) + 48;
            }
          }
          v31 = 2LL;
          goto LABEL_53;
        }
LABEL_55:
        LODWORD(v152) = 1;
        HIDWORD(v152) = v35;
        v153 = (_DWORD)v36 - (_DWORD)v34;
        v44 = *v36;
        if ( (_DWORD)v44 == 36 )
          break;
        if ( (unsigned int)v44 > 0x2B )
          goto LABEL_120;
        v110 = 0x80200000002LL;
        if ( !_bittest64(&v110, v44) )
          goto LABEL_120;
        v111 = v7[168];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64))v7[42])(v111);
        v114 = *(unsigned int **)v7[194];
        v90 = v114 + 4;
        v115 = *((_BYTE *)v114 + 12);
        v116 = (unsigned __int64)&v114[6 * *v114 + 4];
        do
        {
          v117 = 24LL;
          v118 = (__int64 *)(v36 + 6);
          v119 = v90;
          while ( 1 )
          {
            v120 = *(_QWORD *)v119;
            v119 += 2;
            v121 = *v118++;
            if ( v120 != v121 )
              break;
            v117 = (unsigned int)(v117 - 8);
            if ( (unsigned int)v117 < 8 )
            {
              if ( !(_DWORD)v117 )
                goto LABEL_144;
              while ( 1 )
              {
                v113 = *(unsigned __int8 *)v119;
                v119 = (unsigned int *)((char *)v119 + 1);
                v122 = *(unsigned __int8 *)v118;
                v118 = (__int64 *)((char *)v118 + 1);
                if ( v113 != v122 )
                  goto LABEL_143;
                v58 = (_DWORD)v117 == 1;
                v117 = (unsigned int)(v117 - 1);
                if ( v58 )
                  goto LABEL_144;
              }
            }
          }
LABEL_143:
          v90 += 6;
        }
        while ( (unsigned __int64)v90 < v116 );
LABEL_144:
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v7[50])(v7[168], v113, v117, v118);
        __writecr8(CurrentIrql);
        if ( !v115 )
          goto LABEL_206;
        if ( (*((_DWORD *)v7 + 613) & 0x10) != 0 && !*((_DWORD *)v7 + 574) )
        {
          v7[288] = v7 - 0xB8BF814EDC6E963LL;
          v7[289] = (char *)v36 - 0x4C48B4211BBACBEBLL;
          v7[290] = *v36;
          v7[291] = 1LL;
          *((_DWORD *)v7 + 574) = 1;
          sub_14036B3BC(v7, 0LL, v95, v96);
        }
        if ( *((_QWORD *)v36 + 3) != 1LL )
        {
LABEL_206:
          if ( v90 == (unsigned int *)v116 && !*((_DWORD *)v7 + 574) )
          {
            v7[288] = v7 - 0xB8BF814EDC6E963LL;
            v7[289] = (char *)v36 - 0x4C48B4211BBACBEBLL;
            v97 = *v36;
            *((_DWORD *)v7 + 574) = 1;
LABEL_118:
            v7[291] = v90;
            v7[290] = v97;
            sub_14036B3BC(v7, 0LL, v95, v96);
          }
        }
LABEL_119:
        v30 = v155;
        v32 = 32;
        v33 = 12;
LABEL_120:
        ++v30;
        v31 = 2LL;
        v155 = v30;
        if ( v30 >= *((_DWORD *)v7 + 515) )
        {
          v28 = 4LL;
          goto LABEL_122;
        }
      }
      v45 = (_QWORD *)*((_QWORD *)v36 + 1);
      v46 = (unsigned int)v36[4];
      v47 = v45;
      *((_DWORD *)v7 + 522) += v46;
      v48 = (const char *)v45;
      v49 = *((_DWORD *)v7 + 517);
      if ( v45 < (_QWORD *)((char *)v45 + v46) )
      {
        do
        {
          _mm_prefetch(v48, 0);
          v48 += 64;
        }
        while ( v48 < (const char *)v45 + v46 );
      }
      v50 = v7[259];
      for ( j = (unsigned int)v46 >> 7; j; --j )
      {
        v52 = 8LL;
        do
        {
          v53 = v50 ^ *v47;
          v54 = v47[1];
          v47 += 2;
          v50 = __ROL8__(__ROL8__(v53, v49) ^ v54, v49);
          --v52;
        }
        while ( v52 );
        v55 = __ROL8__(v7[259] ^ ((char *)v47 - (char *)v45), 17) ^ v7[259] ^ ((char *)v47 - (char *)v45);
        v31 = (v55 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v49 = ((unsigned __int8)(v31 ^ v55) ^ (unsigned __int8)v49) & 0x3F;
        if ( !v49 )
          LOBYTE(v49) = 1;
      }
      v56 = v46 & 0x7F;
      if ( (unsigned int)v56 >= 8 )
      {
        v31 = (unsigned __int64)(unsigned int)v56 >> 3;
        do
        {
          v50 = __ROL8__(*v47++ ^ v50, v49);
          v56 = (unsigned int)(v56 - 8);
          --v31;
        }
        while ( v31 );
      }
      if ( (_DWORD)v56 )
      {
        do
        {
          v57 = *(unsigned __int8 *)v47;
          v47 = (_QWORD *)((char *)v47 + 1);
          v50 = __ROL8__(v57 ^ v50, v49);
          v58 = (_DWORD)v56 == 1;
          v56 = (unsigned int)(v56 - 1);
        }
        while ( !v58 );
      }
      for ( k = v50; ; LODWORD(v50) = k ^ v50 )
      {
        k >>= 31;
        if ( !k )
          break;
      }
      v60 = v50 & 0x7FFFFFFF;
      v61 = 0;
      if ( v60 != v36[5] )
      {
        if ( !*v36 )
          v61 = v36[6] != 0;
        v62 = (unsigned int)v36[4];
        v63 = *((_QWORD *)v36 + 1);
        if ( v36[4] && (*((_DWORD *)v7 + 613) & 0x40) != 0 )
        {
          v64 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v65 = v63 & 0xFFFFFFFFFFFFF000uLL;
          v150 = (v63 + v62 - 1) | 0xFFF;
          v156 = (v63 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v66 = v64;
            while ( 1 )
            {
              v67 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v7[141])(v65, 0LL, v56, v47);
              if ( v67 != -1073741267 )
                break;
              if ( v61 )
                goto LABEL_86;
              if ( v64 > 1u )
                goto LABEL_84;
              v66 = v64;
              __writecr8(v64);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v67 < 0 )
            {
LABEL_86:
              __writecr8(v66);
              goto LABEL_87;
            }
LABEL_84:
            v65 += 4096LL;
            v156 += 4096LL;
            if ( v156 != v150 )
              continue;
            break;
          }
          __writecr8(v66);
        }
        else
        {
LABEL_87:
          v68 = *((_DWORD *)v7 + 574);
          v31 = (unsigned int)v36[5];
          if ( !v68 )
          {
            *(_QWORD *)(v7[178] + 24LL) = v31 ^ v60;
            v68 = *((_DWORD *)v7 + 574);
          }
          v69 = *((_QWORD *)v36 + 1);
          if ( !v68 )
          {
            v7[288] = v7 - 0xB8BF814EDC6E963LL;
            v7[289] = (char *)v36 - 0x4C48B4211BBACBEBLL;
            v70 = *v36;
            v7[291] = v69;
            v7[290] = v70;
            *((_DWORD *)v7 + 574) = 1;
            sub_14036B3BC(v7, 0LL, v56, v47);
          }
        }
      }
      v71 = v7[168];
      v72 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *))v7[42])(v71, v31, v56, v47);
      v74 = *(unsigned int **)v7[194];
      v75 = v74 + 4;
      v76 = *((_BYTE *)v74 + 12);
      v77 = (unsigned __int64)&v74[6 * *v74 + 4];
      do
      {
        v78 = 24LL;
        v79 = (__int64 *)(v36 + 6);
        v80 = v75;
        while ( 1 )
        {
          v81 = *(_QWORD *)v80;
          v80 += 2;
          v82 = *v79++;
          if ( v81 != v82 )
            break;
          v78 = (unsigned int)(v78 - 8);
          if ( (unsigned int)v78 < 8 )
          {
            if ( !(_DWORD)v78 )
              goto LABEL_100;
            while ( 1 )
            {
              v73 = *(unsigned __int8 *)v80;
              v80 = (unsigned int *)((char *)v80 + 1);
              v83 = *(unsigned __int8 *)v79;
              v79 = (__int64 *)((char *)v79 + 1);
              if ( v73 != v83 )
                goto LABEL_99;
              v58 = (_DWORD)v78 == 1;
              v78 = (unsigned int)(v78 - 1);
              if ( v58 )
                goto LABEL_100;
            }
          }
        }
LABEL_99:
        v75 += 6;
      }
      while ( (unsigned __int64)v75 < v77 );
LABEL_100:
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v7[50])(v7[168], v73, v78, v79);
      __writecr8(v72);
      if ( !v76 )
        goto LABEL_207;
      if ( (*((_DWORD *)v7 + 613) & 0x10) != 0 && !*((_DWORD *)v7 + 574) )
      {
        v7[288] = v7 - 0xB8BF814EDC6E963LL;
        v7[289] = (char *)v36 - 0x4C48B4211BBACBEBLL;
        v7[290] = *v36;
        v7[291] = 1LL;
        *((_DWORD *)v7 + 574) = 1;
        sub_14036B3BC(v7, 0LL, v84, v85);
      }
      if ( *((_QWORD *)v36 + 3) != 1LL )
      {
LABEL_207:
        if ( v75 == (unsigned int *)v77 && !*((_DWORD *)v7 + 574) )
        {
          v7[288] = v7 - 0xB8BF814EDC6E963LL;
          v7[289] = (char *)v36 - 0x4C48B4211BBACBEBLL;
          v92 = *v36;
          *((_DWORD *)v7 + 574) = 1;
          v7[290] = v92;
          v7[291] = v75;
          sub_14036B3BC(v7, 0LL, v84, v85);
        }
      }
      v86 = v7[168];
      v87 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v7[42])(v86);
      v88 = 0LL;
      v89 = *(unsigned int **)v7[194];
      v90 = v89 + 4;
      v91 = (unsigned __int64)&v89[6 * *v89 + 4];
      while ( 1 )
      {
        v90 += 6;
        if ( (unsigned __int64)v90 >= v91 )
          break;
        v93 = *((_QWORD *)v90 + 1);
        if ( v93 < v88 )
          break;
        if ( (v93 & 0xFFFFFFFFFFFFF000uLL) != v93 )
          break;
        v94 = v93 + v90[4];
        if ( v94 <= v93 || v94 == v88 )
          break;
        v88 = v93 + v90[4];
      }
      ((void (__fastcall *)(_QWORD))v7[50])(v7[168]);
      __writecr8(v87);
      if ( v90 == (unsigned int *)v91 || *((_DWORD *)v7 + 574) )
        goto LABEL_119;
      v7[288] = v7 - 0xB8BF814EDC6E963LL;
      v7[289] = (char *)v36 - 0x4C48B4211BBACBEBLL;
      v97 = *v36;
      *((_DWORD *)v7 + 574) = 1;
      goto LABEL_118;
    }
LABEL_122:
    if ( *((_DWORD *)v7 + 574) )
    {
      v98 = v7[290];
      v99 = v7[291];
      v100 = v7[289];
      v101 = v7[288];
      v157 = v99;
      v151 = v100;
      v149 = v101;
      v158 = v7;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v103 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v7[199]);
      v104 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v7[201]);
      if ( !*((_BYTE *)&CurrentPrcb->MxCsr + v7[200])
        || (unsigned __int64)&v158 > v103
        || (unsigned __int64)&v158 < v103 - 24576 )
      {
        v103 = *(_QWORD *)(v104 + v7[207]);
      }
      if ( (v7[306] & 0x8000000) == 0 )
      {
        v101 = __readcr0();
        __writecr0(v101 & 0xFFFFFFFFFFFEFFFFuLL);
        v105 = (unsigned __int64)(v7 + 341);
        v106 = (unsigned __int64)&v7[2 * *((unsigned int *)v7 + 680) + 341];
        v107 = 0;
        for ( m = (_QWORD *)v106; v107 < *((_DWORD *)v7 + 681); ++v107 )
        {
          *(_QWORD *)*m = m[1];
          v109 = __readcr4();
          if ( (v109 & 0x20080) != 0 )
          {
            __writecr4(v109 ^ 0x80);
            __writecr4(v109);
          }
          else
          {
            v123 = __readcr3();
            __writecr3(v123);
          }
          m += 2;
        }
        if ( v105 < v106 )
        {
          do
          {
            v124 = *(unsigned int *)(v105 + 8);
            v125 = m;
            v126 = *(char **)v105;
            v127 = v124;
            if ( (unsigned int)v124 >= 8 )
            {
              v128 = (unsigned __int64)(unsigned int)v124 >> 3;
              do
              {
                v127 -= 8;
                *(_QWORD *)v126 = *v125++;
                v126 += 8;
                --v128;
              }
              while ( v128 );
            }
            if ( v127 )
            {
              v129 = v126 - (char *)v125;
              do
              {
                *((_BYTE *)v125 + v129) = *(_BYTE *)v125;
                v125 = (_QWORD *)((char *)v125 + 1);
                --v127;
              }
              while ( v127 );
            }
            m = (_QWORD *)((char *)m + v124);
            v105 += 16LL;
          }
          while ( v105 < v106 );
          LODWORD(v99) = v157;
        }
        *(_BYTE *)v7[67] = -61;
        __writecr0(v101);
        LODWORD(v100) = v151;
        LODWORD(v101) = v149;
      }
      v142 = *((_DWORD *)v7 + 586);
      if ( v142 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v142 = *((_DWORD *)v7 + 586);
        }
        if ( v142 )
        {
          v143 = v142 - 1;
          if ( v143 )
          {
            v144 = v143 - 1;
            if ( v144 )
            {
              v145 = v144 - 1;
              if ( v145 )
              {
                v146 = v145 - 1;
                if ( v146 )
                {
                  if ( v146 == 1 )
                    _interlockedbittestandset(
                      *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v7[201]),
                      (*((_DWORD *)v7 + 612) >> 10) & 0x1F);
                  else
                    _InterlockedOr64((volatile signed __int64 *)(v7[183] + 832LL), 1uLL);
                }
                else
                {
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)(v7[213]
                                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v7[201])
                                                + v7[209]),
                    (*((_DWORD *)v7 + 612) >> 10) & 0x1F);
                }
                goto LABEL_202;
              }
              v147 = (volatile signed __int32 *)v7[172];
            }
            else
            {
              v147 = (volatile signed __int32 *)v7[171];
            }
          }
          else
          {
            v147 = (volatile signed __int32 *)v7[169];
          }
          _interlockedbittestandset64(v147, 0LL);
        }
      }
LABEL_202:
      *(_QWORD *)(v104 + v7[210]) = 0LL;
      *(_QWORD *)(v104 + v7[212]) = 0LL;
      SdbpCheckDll(265, v101, v100, v99, v98, v7[43], v103);
      JUMPOUT(0x1401AC527LL);
    }
    v130 = *((_DWORD *)v7 + 49);
    *((_DWORD *)v7 + 49) = 0;
    v131 = v7;
    *((_DWORD *)v7 + 522) += 1568;
    v132 = (const char *)v7;
    v133 = *((_DWORD *)v7 + 517);
    if ( v7 < v7 + 196 )
    {
      do
      {
        _mm_prefetch(v132, 0);
        v132 += 64;
      }
      while ( v132 < (const char *)v7 + 1568 );
    }
    v134 = v7[259];
    do
    {
      v135 = 8LL;
      do
      {
        v136 = v131[1] ^ __ROL8__(*v131 ^ v134, v133);
        v131 += 2;
        v134 = __ROL8__(v136, v133);
        --v135;
      }
      while ( v135 );
      v137 = __ROL8__(v7[259] ^ ((char *)v131 - (char *)v7), 17) ^ v7[259] ^ ((char *)v131 - (char *)v7);
      v133 = ((unsigned __int8)(((v137 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v137) ^ (unsigned __int8)v133) & 0x3F;
      if ( !v133 )
        LOBYTE(v133) = 1;
      --v33;
    }
    while ( v33 );
    v2 = a1;
    do
    {
      v134 = __ROL8__(*v131++ ^ v134, v133);
      v32 -= 8;
      --v28;
    }
    while ( v28 );
    for ( ; v32; --v32 )
    {
      v138 = *(unsigned __int8 *)v131;
      v131 = (_QWORD *)((char *)v131 + 1);
      v134 = __ROL8__(v138 ^ v134, v133);
    }
    v139 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v7[34];
    *((_DWORD *)v7 + 49) = v130;
    v7[324] = v134;
    v139(v148, 1LL, v134, v131);
  }
  result = (const signed __int32 *)KiGetTrapFrameMode(v2);
  v141 = (_BYTE)result != 0;
  if ( (_BYTE)result )
  {
    _disable();
    result = *(const signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr
                                      + *(_QWORD *)(*(_QWORD *)&MaxDataSize + 1608LL));
    _enable();
    v141 = _bittest(result, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v141 )
  {
    result = (const signed __int32 *)KiReadKernelDr7();
    if ( result )
      __writedr(7u, (unsigned __int64)result);
  }
  return result;
}
