/*
 * XREFs of KiSwInterruptDispatch @ 0x1401A0690
 * Callers:
 *     KiSwInterrupt @ 0x1401C2C00 (KiSwInterrupt.c)
 * Callees:
 *     KeExitRetpoline @ 0x14013926C (KeExitRetpoline.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     KiGetTrapFrameMode @ 0x14028D95C (KiGetTrapFrameMode.c)
 *     KiReadKernelDr7 @ 0x14028DC18 (KiReadKernelDr7.c)
 *     SdbpCheckDll @ 0x14034B890 (SdbpCheckDll.c)
 *     KeGuardDispatchICall @ 0x14034BB40 (KeGuardDispatchICall.c)
 *     KeGuardCheckICall @ 0x14034BB50 (KeGuardCheckICall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

const signed __int32 *__fastcall KiSwInterruptDispatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // r15
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // r14
  int v15; // r10d
  _QWORD *v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  const char *v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r8
  unsigned int i; // r11d
  __int64 v24; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // rax
  unsigned int v32; // ecx
  int v33; // esi
  int v34; // r14d
  _QWORD *v35; // r9
  unsigned int v36; // r8d
  int *v37; // rdi
  __int64 v38; // r10
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  __int64 v43; // rax
  int v44; // eax
  unsigned __int64 v45; // rax
  _QWORD *v46; // r11
  __int64 v47; // r8
  _QWORD *v48; // r9
  const char *v49; // rax
  int v50; // r14d
  __int64 v51; // r15
  unsigned __int64 v52; // rsi
  unsigned int v53; // r10d
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rsi
  unsigned __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  unsigned __int64 j; // rax
  unsigned int v61; // esi
  BOOL v62; // r12d
  __int64 v63; // rcx
  __int64 v64; // rdx
  unsigned __int8 v65; // r13
  unsigned __int64 v66; // r14
  unsigned __int64 v67; // r15
  int v68; // eax
  int v69; // eax
  __int64 v70; // rcx
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
  bool v83; // zf
  __int64 v84; // rax
  __int64 v85; // rcx
  unsigned __int8 v86; // r15
  unsigned __int64 v87; // rdx
  unsigned int *v88; // rcx
  unsigned int *v89; // rsi
  unsigned __int64 v90; // r14
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v96; // rdx
  unsigned int *v97; // rcx
  char v98; // r13
  unsigned __int64 v99; // r15
  __int64 v100; // r8
  __int64 *v101; // r9
  unsigned int *v102; // r10
  __int64 v103; // rcx
  __int64 v104; // rax
  bool v105; // zf
  __int64 v106; // rax
  __int64 v107; // rdi
  __int64 v108; // r14
  unsigned __int64 v109; // r12
  __int64 v110; // r13
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v112; // rsi
  __int64 v113; // r15
  unsigned __int64 v114; // r9
  unsigned __int64 v115; // r14
  unsigned int v116; // r8d
  _QWORD *k; // rdx
  unsigned __int64 v118; // rcx
  unsigned __int64 v119; // rax
  __int64 v120; // rdi
  _QWORD *v121; // rcx
  char *v122; // r8
  int v123; // r10d
  unsigned __int64 v124; // r11
  signed __int64 v125; // r8
  int v126; // edi
  _QWORD *v127; // r9
  const char *v128; // rax
  int v129; // r10d
  __int64 v130; // r8
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // r8
  unsigned __int64 v134; // rcx
  __int64 v135; // rdi
  __int64 v136; // rax
  void (__fastcall *v137)(_QWORD *, __int64, __int64, _QWORD *); // rax
  const signed __int32 *result; // rax
  int v139; // ecx
  int v140; // ecx
  int v141; // ecx
  int v142; // ecx
  int v143; // ecx
  int v144; // ecx
  volatile signed __int32 *v145; // rax
  __int64 v146; // [rsp+40h] [rbp-39h]
  unsigned int v147; // [rsp+48h] [rbp-31h] BYREF
  _QWORD *v148; // [rsp+50h] [rbp-29h] BYREF
  __int64 v149; // [rsp+58h] [rbp-21h]
  _QWORD *v150; // [rsp+60h] [rbp-19h]
  __int64 v151; // [rsp+68h] [rbp-11h]
  __int64 v152; // [rsp+70h] [rbp-9h]
  __int64 v153; // [rsp+78h] [rbp-1h]
  __int64 v154; // [rsp+80h] [rbp+7h]
  __int64 v155; // [rsp+88h] [rbp+Fh]
  unsigned int v157; // [rsp+E8h] [rbp+6Fh]
  int v158; // [rsp+E8h] [rbp+6Fh]
  int v159; // [rsp+E8h] [rbp+6Fh]
  _QWORD *v160; // [rsp+F0h] [rbp+77h]
  int v161; // [rsp+F0h] [rbp+77h]
  unsigned __int64 v162; // [rsp+F8h] [rbp+7Fh]
  int v163; // [rsp+F8h] [rbp+7Fh]

  v4 = Src;
  v5 = a1;
  if ( (*((_DWORD *)Src + 605) & 0x100000) != 0 )
    KeExitRetpoline(a1, a2, a3, a4);
  else
    _mm_lfence();
  v6 = __rdtsc();
  v7 = __ROR8__(v6, 3) ^ v6;
  v151 = (v7 * (unsigned __int128)0x7010008004002001uLL) >> 64;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNx,
                  v4[332] + 2759LL,
                  dword_1404066A0[((unsigned __int8)v7 ^ (unsigned __int8)v151) & 0xF]);
  v150 = PoolWithTag;
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    v10 = PoolWithTag + 4;
    PoolWithTag[3] = PoolWithTag;
    PoolWithTag[2] = sub_1401AD820;
    v160 = PoolWithTag + 4;
    memmove(PoolWithTag + 4, v4, 0xA70uLL);
    v9[333] = v4;
    v9[334] = v9 + 338;
    v11 = __rdtsc();
    v12 = *((unsigned int *)v9 + 517);
    v13 = (__ROR8__(v11, 3) ^ v11) * (unsigned __int128)0x7010008004002001uLL;
    v152 = *((_QWORD *)&v13 + 1);
    *((_DWORD *)v9 + 524) = 0;
    *((_DWORD *)v9 + 522) = (*((_QWORD *)&v13 + 1) ^ (unsigned __int64)v13) % v12;
    v14 = v9[333];
    v15 = *((_DWORD *)v9 + 519);
    v16 = (_QWORD *)v14;
    v17 = __rdtsc();
    v18 = __ROR8__(v17, 3);
    v19 = v9[260];
    v153 = ((v18 ^ v17) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    *((_DWORD *)v9 + 526) = v153 ^ (67117057 * (v18 ^ v17));
    v9[335] = ((unsigned __int64)v9 + 2759) & 0xFFFFFFFFFFFFFFF8uLL;
    v20 = (const char *)v14;
    v21 = *(unsigned int *)(v14 + 1996);
    if ( v14 < v14 + v21 )
    {
      do
      {
        _mm_prefetch(v20, 0);
        v20 += 64;
      }
      while ( (unsigned __int64)v20 < v14 + v21 );
    }
    v22 = v19;
    for ( i = (unsigned int)v21 >> 7; i; --i )
    {
      v24 = 8LL;
      do
      {
        v25 = v16[1] ^ __ROL8__(*v16 ^ v22, v15);
        v16 += 2;
        v22 = __ROL8__(v25, v15);
        --v24;
      }
      while ( v24 );
      v26 = __ROL8__(v19 ^ ((unsigned __int64)v16 - v14), 17) ^ v19 ^ ((unsigned __int64)v16 - v14);
      v154 = (v26 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v15 = ((unsigned __int8)(v154 ^ v26) ^ (unsigned __int8)v15) & 0x3F;
      if ( !v15 )
        LOBYTE(v15) = 1;
    }
    v27 = v21 & 0x7F;
    if ( (unsigned int)v27 >= 8 )
    {
      v28 = (unsigned __int64)(v21 & 0x7F) >> 3;
      do
      {
        v22 = __ROL8__(*v16++ ^ v22, v15);
        v27 = (unsigned int)(v27 - 8);
        --v28;
      }
      while ( v28 );
    }
    if ( (_DWORD)v27 )
    {
      do
      {
        v29 = *(unsigned __int8 *)v16;
        v16 = (_QWORD *)((char *)v16 + 1);
        v22 = __ROL8__(v29 ^ v22, v15);
        v83 = (_DWORD)v27 == 1;
        v27 = (unsigned int)(v27 - 1);
      }
      while ( !v83 );
    }
    if ( v22 != qword_140542290 )
    {
      v30 = v9[180];
      *(_QWORD *)v30 = v14;
      *(_DWORD *)(v30 + 16) = v21;
      if ( !*((_DWORD *)v9 + 574) )
      {
        *(_QWORD *)(v9[180] + 24LL) = v22 ^ qword_140542290;
        if ( !*((_DWORD *)v9 + 574) )
        {
          v9[289] = 0LL;
          v9[288] = v9 - 0xB8BF814EDC6E95FLL;
          v9[290] = 273LL;
          v9[291] = v22;
          *((_DWORD *)v9 + 574) = 1;
        }
      }
    }
    v146 = 0LL;
    v31 = &v147;
    v32 = 4;
    do
    {
      *(_BYTE *)v31 = 0;
      v31 = (unsigned int *)((char *)v31 + 1);
      --v32;
    }
    while ( v32 );
    v33 = 16;
    v157 = 0;
    v34 = 12;
    if ( *((_DWORD *)v9 + 517) )
    {
      while ( 1 )
      {
        v35 = v10;
        if ( v10[329] )
          v35 = (_QWORD *)v10[329];
        v36 = 0;
        v37 = (int *)((char *)v35 + *((unsigned int *)v35 + 508));
        if ( (_DWORD)v146 && HIDWORD(v146) <= v32 )
        {
          v36 = HIDWORD(v146);
          v37 = (int *)((char *)v35 + v147);
        }
        if ( v36 != v32 )
        {
          v38 = v32 - v36;
          v36 = v32;
          while ( 1 )
          {
            v39 = *v37;
            if ( *v37 > 12 )
              break;
            if ( v39 == 12 )
              goto LABEL_46;
            v40 = v39 - 1;
            if ( !v40 )
              goto LABEL_46;
            v41 = v40 - 6;
            if ( v41 )
            {
              v42 = v41 - 1;
              if ( !v42 )
              {
                v44 = *((unsigned __int16 *)v37 + 16);
LABEL_51:
                v43 = (v44 + 55) & 0xFFFFFFF8;
                goto LABEL_52;
              }
              if ( v42 != 2 )
                goto LABEL_48;
              v43 = (unsigned int)(16 * (v37[7] + 3));
            }
            else
            {
              v43 = (unsigned int)(24 * (v37[6] + 2));
            }
LABEL_52:
            v37 = (int *)((char *)v37 + v43);
            if ( !--v38 )
            {
              v10 = v160;
              v32 = v157;
              goto LABEL_54;
            }
          }
          if ( v39 == 28 )
          {
            v44 = *((unsigned __int16 *)v37 + 20);
            goto LABEL_51;
          }
          if ( v39 == 30 )
          {
            v27 = ((v37[9] - 1) / 0xCu + 7) & 0xFFFFFFF8;
            v43 = (unsigned int)v27 + 24 * (*((unsigned __int16 *)v37 + 20) + 2);
            goto LABEL_52;
          }
          if ( v39 <= 32 )
          {
LABEL_48:
            v43 = 48LL;
            goto LABEL_52;
          }
          if ( v39 <= 34 )
          {
            v27 = ((v37[8] & 0xFFF) + (unsigned __int64)(unsigned int)v37[10] + 4095) >> 12;
            v43 = (unsigned int)(20 * v27 + 48);
            goto LABEL_52;
          }
          if ( v39 != 43 )
            goto LABEL_48;
LABEL_46:
          v27 = (unsigned int)v37[4] / 0xCuLL;
          v43 = (unsigned int)(4 * v27 + 48);
          goto LABEL_52;
        }
LABEL_54:
        LODWORD(v146) = 1;
        HIDWORD(v146) = v36;
        v147 = (_DWORD)v37 - (_DWORD)v35;
        v45 = *v37;
        if ( (_DWORD)v45 == 36 )
          break;
        if ( (unsigned int)v45 > 0x2B )
          goto LABEL_139;
        v27 = 0x80200000002LL;
        if ( !_bittest64(&v27, v45) )
          goto LABEL_139;
        v94 = v10[166];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        ((void (__fastcall *)(__int64))v10[41])(v94);
        v97 = *(unsigned int **)v10[192];
        v89 = v97 + 4;
        v98 = *((_BYTE *)v97 + 12);
        v99 = (unsigned __int64)&v97[6 * *v97 + 4];
        while ( 2 )
        {
          v100 = 24LL;
          v101 = (__int64 *)(v37 + 6);
          v102 = v89;
          while ( 1 )
          {
            v103 = *(_QWORD *)v102;
            v102 += 2;
            v104 = *v101++;
            if ( v103 != v104 )
              break;
            v100 = (unsigned int)(v100 - 8);
            if ( (unsigned int)v100 < 8 )
            {
              v105 = (_DWORD)v100 == 0;
              while ( !v105 )
              {
                v96 = *(unsigned __int8 *)v102;
                v102 = (unsigned int *)((char *)v102 + 1);
                v106 = *(unsigned __int8 *)v101;
                v101 = (__int64 *)((char *)v101 + 1);
                if ( v96 != v106 )
                  goto LABEL_129;
                v105 = (_DWORD)v100 == 1;
                v100 = (unsigned int)(v100 - 1);
              }
              goto LABEL_130;
            }
          }
LABEL_129:
          v89 += 6;
          if ( (unsigned __int64)v89 < v99 )
            continue;
          break;
        }
LABEL_130:
        ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v10[49])(v10[166], v96, v100, v101);
        __writecr8(CurrentIrql);
        if ( v98 )
        {
          if ( (*((_DWORD *)v10 + 605) & 0x10) != 0 && !*((_DWORD *)v10 + 566) )
          {
            v10[284] = v10 - 0xB8BF814EDC6E963LL;
            v10[285] = (char *)v37 - 0x4C48B4211BBACBEBLL;
            v10[286] = *v37;
            v10[287] = 1LL;
            *((_DWORD *)v10 + 566) = 1;
          }
          if ( *((_QWORD *)v37 + 3) == 1LL )
            goto LABEL_138;
        }
        if ( v89 != (unsigned int *)v99 )
        {
LABEL_138:
          v32 = v157;
          v34 = 12;
          goto LABEL_139;
        }
        v32 = v157;
        v34 = 12;
        if ( !*((_DWORD *)v10 + 566) )
        {
          v93 = v10 - 0xB8BF814EDC6E963LL;
LABEL_118:
          v10[284] = v93;
          v10[285] = (char *)v37 - 0x4C48B4211BBACBEBLL;
          v10[286] = *v37;
          v10[287] = v89;
          *((_DWORD *)v10 + 566) = 1;
        }
LABEL_139:
        v157 = ++v32;
        if ( v32 >= *((_DWORD *)v10 + 509) )
        {
          v9 = v150;
          v33 = 16;
          goto LABEL_141;
        }
      }
      v46 = (_QWORD *)*((_QWORD *)v37 + 1);
      v47 = (unsigned int)v37[4];
      v48 = v46;
      *((_DWORD *)v10 + 516) += v47;
      v49 = (const char *)v46;
      v50 = *((_DWORD *)v10 + 511);
      v51 = v10[256];
      if ( v46 < (_QWORD *)((char *)v46 + v47) )
      {
        do
        {
          _mm_prefetch(v49, 0);
          v49 += 64;
        }
        while ( v49 < (const char *)v46 + v47 );
      }
      v52 = v10[256];
      v53 = (unsigned int)v47 >> 7;
      if ( (unsigned int)v47 >> 7 )
      {
        do
        {
          v54 = 8LL;
          do
          {
            v55 = v52 ^ *v48;
            v56 = v48[1];
            v48 += 2;
            v52 = __ROL8__(__ROL8__(v55, v50) ^ v56, v50);
            --v54;
          }
          while ( v54 );
          v57 = __ROL8__(v51 ^ ((char *)v48 - (char *)v46), 17) ^ v51 ^ ((char *)v48 - (char *)v46);
          v27 = (v57 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v155 = v27;
          v50 = ((unsigned __int8)(v27 ^ v57) ^ (unsigned __int8)v50) & 0x3F;
          if ( !v50 )
            LOBYTE(v50) = 1;
          --v53;
        }
        while ( v53 );
        v10 = v160;
      }
      v58 = v47 & 0x7F;
      if ( (unsigned int)v58 >= 8 )
      {
        v27 = (unsigned __int64)(unsigned int)v58 >> 3;
        do
        {
          v52 = __ROL8__(*v48++ ^ v52, v50);
          v58 = (unsigned int)(v58 - 8);
          --v27;
        }
        while ( v27 );
      }
      if ( (_DWORD)v58 )
      {
        do
        {
          v59 = *(unsigned __int8 *)v48;
          v48 = (_QWORD *)((char *)v48 + 1);
          v52 = __ROL8__(v59 ^ v52, v50);
          v83 = (_DWORD)v58 == 1;
          v58 = (unsigned int)(v58 - 1);
        }
        while ( !v83 );
      }
      for ( j = v52; ; LODWORD(v52) = j ^ v52 )
      {
        j >>= 31;
        if ( !j )
          break;
      }
      v61 = v52 & 0x7FFFFFFF;
      v62 = 0;
      if ( v61 != v37[5] )
      {
        if ( !*v37 )
          v62 = v37[6] != 0;
        v63 = (unsigned int)v37[4];
        v64 = *((_QWORD *)v37 + 1);
        if ( v37[4] && (*((_DWORD *)v10 + 605) & 0x40) != 0 )
        {
          v65 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v66 = v64 & 0xFFFFFFFFFFFFF000uLL;
          v149 = (v64 + v63 - 1) | 0xFFF;
          v162 = (v64 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v67 = v65;
            while ( 1 )
            {
              v68 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64, _QWORD *))v10[140])(v66, 0LL, v58, v48);
              if ( v68 != -1073741267 )
                break;
              if ( v62 )
                goto LABEL_86;
              if ( v65 > 1u )
                goto LABEL_84;
              v67 = v65;
              __writecr8(v65);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v68 < 0 )
            {
LABEL_86:
              __writecr8(v67);
              goto LABEL_87;
            }
LABEL_84:
            v66 += 4096LL;
            v162 += 4096LL;
            if ( v162 != v149 )
              continue;
            break;
          }
          __writecr8(v67);
        }
        else
        {
LABEL_87:
          v69 = *((_DWORD *)v10 + 566);
          v27 = (unsigned int)v37[5];
          if ( !v69 )
          {
            *(_QWORD *)(v10[176] + 24LL) = v27 ^ v61;
            v69 = *((_DWORD *)v10 + 566);
          }
          v70 = *((_QWORD *)v37 + 1);
          if ( !v69 )
          {
            v10[284] = v10 - 0xB8BF814EDC6E963LL;
            v10[285] = (char *)v37 - 0x4C48B4211BBACBEBLL;
            v10[286] = *v37;
            v10[287] = v70;
            *((_DWORD *)v10 + 566) = 1;
          }
        }
      }
      v71 = v10[166];
      v72 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *))v10[41])(v71, v27, v58, v48);
      v74 = *(unsigned int **)v10[192];
      v75 = v74 + 4;
      v76 = *((_BYTE *)v74 + 12);
      v77 = (unsigned __int64)&v74[6 * *v74 + 4];
      while ( 2 )
      {
        v78 = 24LL;
        v79 = (__int64 *)(v37 + 6);
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
            v83 = (_DWORD)v78 == 0;
            while ( !v83 )
            {
              v73 = *(unsigned __int8 *)v80;
              v80 = (unsigned int *)((char *)v80 + 1);
              v84 = *(unsigned __int8 *)v79;
              v79 = (__int64 *)((char *)v79 + 1);
              if ( v73 != v84 )
                goto LABEL_99;
              v83 = (_DWORD)v78 == 1;
              v78 = (unsigned int)(v78 - 1);
            }
            goto LABEL_100;
          }
        }
LABEL_99:
        v75 += 6;
        if ( (unsigned __int64)v75 < v77 )
          continue;
        break;
      }
LABEL_100:
      ((void (__fastcall *)(_QWORD, __int64, __int64, __int64 *))v10[49])(v10[166], v73, v78, v79);
      __writecr8(v72);
      if ( !v76 )
        goto LABEL_206;
      if ( (*((_DWORD *)v10 + 605) & 0x10) != 0 && !*((_DWORD *)v10 + 566) )
      {
        v10[284] = v10 - 0xB8BF814EDC6E963LL;
        v10[285] = (char *)v37 - 0x4C48B4211BBACBEBLL;
        v10[286] = *v37;
        v10[287] = 1LL;
        *((_DWORD *)v10 + 566) = 1;
      }
      if ( *((_QWORD *)v37 + 3) != 1LL )
      {
LABEL_206:
        if ( v75 == (unsigned int *)v77 && !*((_DWORD *)v10 + 566) )
        {
          v10[284] = v10 - 0xB8BF814EDC6E963LL;
          v10[285] = (char *)v37 - 0x4C48B4211BBACBEBLL;
          v10[286] = *v37;
          v10[287] = v75;
          *((_DWORD *)v10 + 566) = 1;
        }
      }
      v85 = v10[166];
      v86 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      ((void (__fastcall *)(__int64))v10[41])(v85);
      v87 = 0LL;
      v88 = *(unsigned int **)v10[192];
      v89 = v88 + 4;
      v90 = (unsigned __int64)&v88[6 * *v88 + 4];
      while ( 1 )
      {
        v89 += 6;
        if ( (unsigned __int64)v89 >= v90 )
          break;
        v91 = *((_QWORD *)v89 + 1);
        if ( v91 < v87 )
          break;
        if ( (v91 & 0xFFFFFFFFFFFFF000uLL) != v91 )
          break;
        v92 = v91 + v89[4];
        if ( v92 <= v91 || v92 == v87 )
          break;
        v87 = v91 + v89[4];
      }
      ((void (__fastcall *)(_QWORD))v10[49])(v10[166]);
      __writecr8(v86);
      v32 = v157;
      v83 = v89 == (unsigned int *)v90;
      v34 = 12;
      if ( v83 || *((_DWORD *)v10 + 566) )
        goto LABEL_139;
      v93 = v10 - 0xB8BF814EDC6E963LL;
      goto LABEL_118;
    }
LABEL_141:
    if ( *((_DWORD *)v10 + 566) )
    {
      v107 = v10[287];
      v108 = v10[285];
      v109 = v10[284];
      v110 = v10[286];
      v158 = v107;
      v161 = v108;
      v163 = v109;
      v148 = v10;
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v112 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v10[196]);
      v113 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v10[198]);
      if ( !*((_BYTE *)&CurrentPrcb->MxCsr + v10[197])
        || (unsigned __int64)&v148 > v112
        || (unsigned __int64)&v148 < v112 - 24576 )
      {
        v112 = *(_QWORD *)(v113 + v10[204]);
      }
      if ( (v10[302] & 0x8000000) == 0 )
      {
        v109 = __readcr0();
        __writecr0(v109 & 0xFFFFFFFFFFFEFFFFuLL);
        v114 = (unsigned __int64)(v10 + 335);
        v115 = (unsigned __int64)&v10[2 * *((unsigned int *)v10 + 668) + 335];
        v116 = 0;
        for ( k = (_QWORD *)v115; v116 < *((_DWORD *)v10 + 669); ++v116 )
        {
          *(_QWORD *)*k = k[1];
          v118 = __readcr4();
          if ( (v118 & 0x20080) != 0 )
          {
            __writecr4(v118 ^ 0x80);
            __writecr4(v118);
          }
          else
          {
            v119 = __readcr3();
            __writecr3(v119);
          }
          k += 2;
        }
        if ( v114 < v115 )
        {
          do
          {
            v120 = *(unsigned int *)(v114 + 8);
            v121 = k;
            v122 = *(char **)v114;
            v123 = v120;
            if ( (unsigned int)v120 >= 8 )
            {
              v124 = (unsigned __int64)(unsigned int)v120 >> 3;
              do
              {
                v123 -= 8;
                *(_QWORD *)v122 = *v121++;
                v122 += 8;
                --v124;
              }
              while ( v124 );
            }
            if ( v123 )
            {
              v125 = v122 - (char *)v121;
              do
              {
                *((_BYTE *)v121 + v125) = *(_BYTE *)v121;
                v121 = (_QWORD *)((char *)v121 + 1);
                --v123;
              }
              while ( v123 );
            }
            k = (_QWORD *)((char *)k + v120);
            v114 += 16LL;
          }
          while ( v114 < v115 );
          LODWORD(v107) = v158;
        }
        *(_BYTE *)v10[66] = -61;
        __writecr0(v109);
        LODWORD(v108) = v161;
        LODWORD(v109) = v163;
      }
      v140 = *((_DWORD *)v10 + 578);
      if ( v140 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          KeGetCurrentIrql();
          __writecr8(2uLL);
          v140 = *((_DWORD *)v10 + 578);
        }
        if ( v140 )
        {
          v141 = v140 - 1;
          if ( v141 )
          {
            v142 = v141 - 1;
            if ( v142 )
            {
              v143 = v142 - 1;
              if ( v143 )
              {
                v144 = v143 - 1;
                if ( v144 )
                {
                  if ( v144 == 1 )
                    _interlockedbittestandset(
                      *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + v10[198]),
                      (*((_DWORD *)v10 + 604) >> 10) & 0x1F);
                  else
                    _InterlockedOr64((volatile signed __int64 *)(v10[181] + 832LL), 1uLL);
                }
                else
                {
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)(v10[210]
                                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v10[198])
                                                + v10[206]),
                    (*((_DWORD *)v10 + 604) >> 10) & 0x1F);
                }
                goto LABEL_202;
              }
              v145 = (volatile signed __int32 *)v10[170];
            }
            else
            {
              v145 = (volatile signed __int32 *)v10[169];
            }
          }
          else
          {
            v145 = (volatile signed __int32 *)v10[167];
          }
          _interlockedbittestandset64(v145, 0LL);
        }
      }
LABEL_202:
      *(_QWORD *)(v113 + v10[207]) = 0LL;
      *(_QWORD *)(v113 + v10[209]) = 0LL;
      SdbpCheckDll(265, v109, v108, v107, v110, v10[42], v112);
      JUMPOUT(0x1401A152ALL);
    }
    v126 = *((_DWORD *)v10 + 49);
    *((_DWORD *)v10 + 49) = 0;
    v127 = v10;
    *((_DWORD *)v10 + 516) += 1552;
    v128 = (const char *)v10;
    v129 = *((_DWORD *)v10 + 511);
    v159 = v126;
    if ( v10 < v10 + 194 )
    {
      do
      {
        _mm_prefetch(v128, 0);
        v128 += 64;
      }
      while ( v128 < (const char *)v10 + 1552 );
    }
    v130 = v10[256];
    do
    {
      v131 = 8LL;
      do
      {
        v132 = v130 ^ *v127;
        v133 = v127[1];
        v127 += 2;
        v130 = __ROL8__(__ROL8__(v132, v129) ^ v133, v129);
        --v131;
      }
      while ( v131 );
      v134 = __ROL8__(v10[256] ^ ((char *)v127 - (char *)v10), 17) ^ v10[256] ^ ((char *)v127 - (char *)v10);
      v129 = ((unsigned __int8)(((v134 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v134) ^ (unsigned __int8)v129) & 0x3F;
      if ( !v129 )
        LOBYTE(v129) = 1;
      --v34;
    }
    while ( v34 );
    v5 = a1;
    v135 = 2LL;
    do
    {
      v130 = __ROL8__(*v127++ ^ v130, v129);
      v33 -= 8;
      --v135;
    }
    while ( v135 );
    for ( ; v33; --v33 )
    {
      v136 = *(unsigned __int8 *)v127;
      v127 = (_QWORD *)((char *)v127 + 1);
      v130 = __ROL8__(v136 ^ v130, v129);
    }
    v137 = (void (__fastcall *)(_QWORD *, __int64, __int64, _QWORD *))v10[33];
    *((_DWORD *)v10 + 49) = v159;
    v10[320] = v130;
    v137(v9, 1LL, v130, v127);
  }
  result = (const signed __int32 *)KiGetTrapFrameMode(v5);
  v139 = (_BYTE)result != 0;
  if ( (_BYTE)result )
  {
    _disable();
    result = *(const signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)Src + 198));
    _enable();
    v139 = _bittest(result, 0x18u);
  }
  if ( !KdpBootedNodebug && !(_BYTE)KdDebuggerNotPresent && !v139 )
  {
    result = (const signed __int32 *)KiReadKernelDr7();
    if ( result )
      __writedr(7u, (unsigned __int64)result);
  }
  return result;
}
