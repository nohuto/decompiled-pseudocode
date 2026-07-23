/*
 * XREFs of PpmInstallPlatformIdleStates @ 0x140867F50
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeGetProcessorIndexFromNumber @ 0x1400A73B0 (KeGetProcessorIndexFromNumber.c)
 *     KeQueryActiveProcessorAffinity @ 0x14018A4D0 (KeQueryActiveProcessorAffinity.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmResetPlatformIdleAccounting @ 0x1402D5B1C (PpmResetPlatformIdleAccounting.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PpmEnableCoordinatedIdleStates @ 0x140867968 (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdatePlatformDependencies @ 0x14087C6B8 (PpmIdleUpdatePlatformDependencies.c)
 */

__int64 __fastcall PpmInstallPlatformIdleStates(__int64 a1)
{
  __int64 v1; // r14
  char v2; // bp
  unsigned int v3; // ebx
  unsigned int v4; // edi
  ULONG v5; // r15d
  unsigned int v6; // edx
  unsigned int v7; // eax
  _DWORD *v8; // rcx
  int v9; // ebx
  int v10; // ecx
  ULONG v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // r12d
  unsigned int v15; // ecx
  size_t v16; // rbx
  PVOID PoolWithTag; // rax
  int *v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // rax
  _DWORD *v23; // rcx
  __int64 v24; // r13
  __int64 v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int128 v30; // xmm0
  __int64 v31; // r14
  __int64 v32; // r13
  ULONG v33; // r12d
  __int64 v34; // rbx
  __int64 v35; // rcx
  int v36; // eax
  ULONG i; // ebx
  __int64 Prcb; // rax
  __int64 v39; // r9
  __int64 v40; // r10
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // r9
  __int64 v45; // r13
  __int64 v46; // rbx
  __int64 v47; // r11
  unsigned int v48; // ecx
  __int64 v49; // r15
  __int64 v50; // rdi
  unsigned int v51; // eax
  __int64 v52; // r8
  __int64 v53; // rdx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v55; // rbx
  __int64 v56; // rdi
  int v57; // edx
  __int64 v58; // rcx
  __int64 v59; // rax
  ULONG j; // ebx
  __int64 v61; // rdi
  __int64 v62; // r13
  unsigned int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // r12
  bool v66; // al
  unsigned int v68; // [rsp+20h] [rbp-68h]
  unsigned int v69; // [rsp+24h] [rbp-64h]
  __int64 v70; // [rsp+28h] [rbp-60h]
  __int64 v71; // [rsp+30h] [rbp-58h]
  unsigned int v73; // [rsp+98h] [rbp+10h]
  int v74; // [rsp+98h] [rbp+10h]
  __int64 v75; // [rsp+98h] [rbp+10h]
  ULONG v76; // [rsp+A0h] [rbp+18h]
  unsigned int v77; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 1;
  if ( PpmPlatformStates && !*(_BYTE *)(v1 + 48) )
  {
    v3 = -1073741431;
LABEL_75:
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    return v3;
  }
  v4 = *(_DWORD *)(v1 + 4);
  if ( !v4 || *(_DWORD *)(v1 + 8) > v4 )
  {
LABEL_5:
    v3 = -1073741811;
    goto LABEL_75;
  }
  PpmIdleUpdatePlatformDependencies(v1);
  v5 = KeNumberProcessors_0;
  v6 = 0;
  v7 = *(_DWORD *)(v1 + 8);
  v76 = KeNumberProcessors_0;
  if ( v7 )
  {
    v8 = (_DWORD *)(v1 + 72);
    while ( *v8 <= (unsigned int)KeNumberProcessors_0 )
    {
      ++v6;
      v8 += 12;
      if ( v6 >= v7 )
        goto LABEL_11;
    }
    goto LABEL_5;
  }
LABEL_11:
  v9 = 0;
  v10 = 0;
  if ( v7 )
  {
    v11 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(KeGetPrcb(v11) + 23808);
        if ( !v12 )
          goto LABEL_5;
        v9 += *(_DWORD *)(v12 + 32);
        if ( ++v11 >= v5 )
        {
          v7 = *(_DWORD *)(v1 + 8);
          break;
        }
      }
    }
    v9 = v7 * (v5 + v9);
    v10 = v5 * v7;
  }
  v13 = PpmPlatformStates;
  if ( PpmPlatformStates )
  {
    if ( *(_DWORD *)(PpmPlatformStates + 8) != v5
      || *(_DWORD *)PpmPlatformStates != v4
      || (LODWORD(v26) = v7, *(_DWORD *)(PpmPlatformStates + 4) != 1) )
    {
      v3 = -1073741811;
      goto LABEL_74;
    }
  }
  else
  {
    v73 = (384 * v4 + 71) & 0xFFFFFFF8;
    v77 = v73 + 24 * v10;
    v14 = v77 + 24 * v9;
    v69 = (4 * v4 + 15) & 0xFFFFFFF8;
    v68 = (v14 + 1008 * v4 + 31) & 0xFFFFFFF8;
    v15 = v68 + v5 * v69;
    if ( PpmIdleVetoList )
      v15 += (v4 * *(_DWORD *)PpmIdleVetoList) << 6;
    v16 = v15;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v15, 0x694D5050u);
    v13 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v3 = -1073741670;
      goto LABEL_75;
    }
    memset(PoolWithTag, 0, v16);
    *(_DWORD *)v13 = v4;
    *(_DWORD *)(v13 + 4) = *(_DWORD *)(v1 + 8) != 0;
    *(_DWORD *)(v13 + 8) = v5;
    *(_QWORD *)(v13 + 16) = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v13 + 32) = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v13 + 40) = *(_QWORD *)(v1 + 40);
    v18 = (int *)(v13 + v14);
    *(_QWORD *)(v13 + 48) = v18;
    v18[1] = v4;
    PpmResetPlatformIdleAccounting(v18);
    v19 = v13 + v68 + v5 * v69;
    v20 = 0LL;
    if ( *(_DWORD *)(v1 + 4) )
    {
      do
      {
        v21 = 384 * v20;
        *(_BYTE *)(384 * v20 + v13 + 121) = 1;
        KeQueryActiveProcessorAffinity(384 * v20 + v13 + 128);
        v22 = (_QWORD *)(384 * v20 + v13 + 88);
        v22[1] = v22;
        *v22 = v22;
        *(_BYTE *)(384 * v20 + v13 + 104) = 7;
        if ( PpmIdleDisableStatesAtBoot )
          *(_DWORD *)(v21 + v13 + 80) = 0x80000000;
        v23 = (_DWORD *)PpmIdleVetoList;
        if ( PpmIdleVetoList )
        {
          if ( (_DWORD)v20 == *(_DWORD *)(v1 + 4) - 1 )
            *(_BYTE *)(v21 + v13 + 105) = 1;
          *(_DWORD *)(v21 + v13 + 108) = *v23;
          *(_QWORD *)(v21 + v13 + 112) = v19;
          v19 += (unsigned __int64)(unsigned int)*v23 << 6;
          *(_QWORD *)(1008LL * (unsigned int)v20 + v13 + v14 + 192) = v21 + v13 + 80;
        }
        v20 = (unsigned int)(v20 + 1);
      }
      while ( (unsigned int)v20 < *(_DWORD *)(v1 + 4) );
      v5 = v76;
    }
    v24 = 0LL;
    v25 = v13 + v73;
    LODWORD(v26) = *(_DWORD *)(v1 + 8);
    v27 = v13 + v77;
    v70 = v27;
    v74 = 0;
    if ( (_DWORD)v26 )
    {
      v28 = 24LL * v5;
      do
      {
        v29 = 384 * v24;
        v30 = *(_OWORD *)(v1 + 48 * v24 + 80);
        *(_QWORD *)(v29 + v13 + 312) = v25;
        v25 += v28;
        *(_DWORD *)(v29 + v13 + 124) = v5;
        v71 = v25;
        *(_OWORD *)(v29 + v13 + 296) = v30;
        if ( v5 )
        {
          v31 = v70;
          v32 = 0LL;
          v33 = 0;
          do
          {
            v34 = *(_QWORD *)(v29 + v13 + 312);
            v35 = *(_QWORD *)(KeGetPrcb(v33) + 23808);
            *(_DWORD *)(v34 + v32) = v33++;
            v32 += 24LL;
            v36 = *(_DWORD *)(v35 + 32);
            *(_QWORD *)(v34 + v32 - 8) = v31;
            *(_DWORD *)(v34 + v32 - 16) = v36;
            v31 += 24LL * *(unsigned int *)(v35 + 32);
          }
          while ( v33 < v5 );
          v25 = v71;
          LODWORD(v24) = v74;
          v28 = 24LL * v5;
          v70 = v31;
          v1 = a1;
        }
        LODWORD(v26) = *(_DWORD *)(v1 + 8);
        v24 = (unsigned int)(v24 + 1);
        v74 = v24;
      }
      while ( (unsigned int)v24 < (unsigned int)v26 );
      v27 = v70;
    }
    for ( i = 0; i < v5; ++i )
    {
      Prcb = KeGetPrcb(i);
      v39 = 0LL;
      v40 = *(_QWORD *)(Prcb + 23808);
      *(_QWORD *)(v40 + 752) = v13 + v68 + i * v69;
      *(_DWORD *)(v40 + 776) = *(_DWORD *)(v1 + 8);
      *(_QWORD *)(v40 + 784) = v27;
      v26 = *(unsigned int *)(v1 + 8);
      v27 += 24 * v26;
      if ( (_DWORD)v26 )
      {
        do
        {
          v41 = 384 * v39;
          v42 = 3LL * (unsigned int)(v26 - v39 - 1);
          v26 = *(_QWORD *)(v40 + 784);
          *(_DWORD *)(v26 + 8 * v42 + 4) = v39;
          v39 = (unsigned int)(v39 + 1);
          *(_DWORD *)(v26 + 8 * v42 + 8) = *(_DWORD *)(v41 + v13 + 124);
          *(_QWORD *)(v26 + 8 * v42 + 16) = *(_QWORD *)(v41 + v13 + 312);
          LODWORD(v26) = *(_DWORD *)(v1 + 8);
        }
        while ( (unsigned int)v39 < (unsigned int)v26 );
      }
    }
  }
  v43 = 0LL;
  if ( (_DWORD)v26 )
  {
    do
    {
      v44 = 0LL;
      v45 = v1 + 48 * v43;
      v46 = 384 * v43;
      *(_DWORD *)(v46 + v13 + 72) = *(_DWORD *)(v45 + 64);
      *(_DWORD *)(v46 + v13 + 76) = *(_DWORD *)(v45 + 68);
      if ( *(_DWORD *)(v45 + 72) )
      {
        do
        {
          v47 = *(_QWORD *)(v45 + 96);
          v48 = 0;
          v49 = *(_QWORD *)(v46 + v13 + 312);
          v50 = 3LL * *(unsigned int *)(v47 + 8 * v44);
          v51 = *(_DWORD *)(v49 + 24LL * *(unsigned int *)(v47 + 8 * v44) + 8);
          if ( v51 )
          {
            do
            {
              v52 = *(_QWORD *)(v49 + 8 * v50 + 16);
              v53 = 3LL * (v51 - v48 - 1);
              *(_QWORD *)(v52 + 8 * v53) = 0LL;
              *(_QWORD *)(v52 + 8 * v53 + 8) = 0LL;
              *(_QWORD *)(v52 + 8 * v53 + 16) = 0LL;
              *(_DWORD *)(v52 + 8 * v53 + 4) = v48;
              if ( !*(_BYTE *)(v45 + 60) && v48 == *(unsigned __int8 *)(v45 + 61) )
                *(_BYTE *)(v52 + 24LL * (v51 - v48 - 1) + 1) = 1;
              if ( v48 >= *(unsigned __int8 *)(v47 + 8 * v44 + 4) )
              {
                *(_BYTE *)(v52 + 24LL * (v51 - v48 - 1) + 2) = 1;
                if ( !*(_BYTE *)(v47 + 8 * v44 + 6) )
                  *(_BYTE *)(v52 + 24LL * (v51 - v48 - 1)) = 1;
              }
              v51 = *(_DWORD *)(v49 + 8 * v50 + 8);
              ++v48;
            }
            while ( v48 < v51 );
          }
          v44 = (unsigned int)(v44 + 1);
        }
        while ( (unsigned int)v44 < *(_DWORD *)(v45 + 72) );
      }
      if ( *(_BYTE *)(v45 + 60) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v45 + 56));
        v55 = *(_QWORD *)(v46 + v13 + 312);
        v56 = 3LL * ProcessorIndexFromNumber;
        memset(
          *(void **)(v55 + 24LL * ProcessorIndexFromNumber + 16),
          0,
          24LL * *(unsigned int *)(v55 + 24LL * ProcessorIndexFromNumber + 8));
        v57 = *(unsigned __int8 *)(v45 + 61);
        v58 = 3LL * (unsigned int)(*(_DWORD *)(v55 + 8 * v56 + 8) - v57 - 1);
        v59 = *(_QWORD *)(v55 + 8 * v56 + 16);
        *(_DWORD *)(v59 + 8 * v58 + 4) = v57;
        *(_BYTE *)(v59 + 8 * v58 + 1) = 1;
      }
      v43 = (unsigned int)(v43 + 1);
    }
    while ( (unsigned int)v43 < *(_DWORD *)(v1 + 8) );
    v5 = v76;
  }
  for ( j = 0; j < v5; ++j )
  {
    v61 = 0LL;
    v62 = *(_QWORD *)(KeGetPrcb(j) + 23808);
    v63 = *(_DWORD *)(v62 + 776);
    if ( v63 )
    {
      do
      {
        v64 = v1 + 48 * v61 + 56;
        v65 = 3LL * (v63 - (unsigned int)v61 - 1);
        v75 = *(_QWORD *)(v62 + 784);
        v66 = !*(_BYTE *)(v64 + 4) || KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v64) == j;
        v61 = (unsigned int)(v61 + 1);
        *(_BYTE *)(v75 + 8 * v65 + 1) = v66;
        v63 = *(_DWORD *)(v62 + 776);
      }
      while ( (unsigned int)v61 < v63 );
    }
  }
  if ( !PpmPlatformStates )
  {
    PpmEnableCoordinatedIdleStates((int *)v13, 0);
    v2 = 0;
  }
  v3 = 0;
LABEL_74:
  if ( v2 )
    goto LABEL_75;
  return v3;
}
