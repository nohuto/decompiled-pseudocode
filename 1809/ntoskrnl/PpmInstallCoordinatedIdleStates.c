/*
 * XREFs of PpmInstallCoordinatedIdleStates @ 0x1408679B0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmCheckCoordinatedStateInitiator @ 0x1402D3DA0 (PpmCheckCoordinatedStateInitiator.c)
 *     PpmResetPlatformIdleAccounting @ 0x1402D5B1C (PpmResetPlatformIdleAccounting.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PpmEnableCoordinatedIdleStates @ 0x140867968 (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdateCoordinatedDependencies @ 0x14087C544 (PpmIdleUpdateCoordinatedDependencies.c)
 */

__int64 __fastcall PpmInstallCoordinatedIdleStates(unsigned int *a1)
{
  unsigned int *v1; // r14
  char v2; // di
  int updated; // ebx
  __int64 v4; // rsi
  int v5; // r13d
  int v6; // r8d
  int v7; // r9d
  _DWORD *v8; // rcx
  __int64 v9; // r10
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  unsigned int v15; // ecx
  size_t v16; // rbp
  PVOID PoolWithTag; // rax
  int *v18; // rbp
  __int64 v19; // rdx
  __int64 i; // r9
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _DWORD *v23; // r8
  __int64 v24; // r12
  __int64 v25; // rax
  unsigned __int16 *v26; // r15
  __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx
  ULONG v33; // ebp
  __int64 v34; // r15
  __int64 Prcb; // rax
  unsigned int v36; // r9d
  __int64 v37; // r8
  _QWORD *v38; // r10
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // r8
  unsigned int *v43; // r14
  __int64 v44; // r12
  __int64 v45; // r10
  __int64 v46; // rsi
  __int64 v47; // r13
  __int64 v48; // rbp
  __int64 v49; // r9
  unsigned int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r15
  __int64 v53; // r11
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rax
  ULONG j; // ebp
  unsigned int v58; // r14d
  __int64 v59; // r9
  __int64 k; // r15
  char v61; // al
  __int64 v62; // r10
  __int64 v63; // r11
  unsigned int v65; // [rsp+20h] [rbp-58h]
  int v66; // [rsp+24h] [rbp-54h]
  int v67; // [rsp+28h] [rbp-50h]
  unsigned int v68; // [rsp+2Ch] [rbp-4Ch]
  ULONG v70; // [rsp+88h] [rbp+10h]
  unsigned int v71; // [rsp+90h] [rbp+18h]
  unsigned int v72; // [rsp+98h] [rbp+20h]

  v1 = a1;
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 1;
  if ( PpmPlatformStates && !*((_BYTE *)v1 + 40) )
  {
    updated = -1073741431;
LABEL_51:
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    return (unsigned int)updated;
  }
  updated = PpmIdleUpdateCoordinatedDependencies(v1);
  if ( updated < 0 )
    goto LABEL_51;
  v4 = *v1;
  v68 = v4;
  if ( !(_DWORD)v4 )
  {
    updated = -1073741811;
    goto LABEL_51;
  }
  v5 = KeNumberProcessors_0;
  v6 = 0;
  v70 = KeNumberProcessors_0;
  v7 = v4 * KeNumberProcessors_0;
  v8 = v1 + 62;
  v9 = *v1;
  do
  {
    v10 = v8[1];
    v6 += v10;
    v11 = *v8 * v10;
    v8 += 56;
    v7 += v11;
    --v9;
  }
  while ( v9 );
  v12 = PpmPlatformStates;
  if ( PpmPlatformStates )
  {
    if ( *(_DWORD *)(PpmPlatformStates + 8) != (_DWORD)KeNumberProcessors_0
      || *(_QWORD *)PpmPlatformStates != ((unsigned int)v4 | 0x100000000LL) )
    {
      updated = -1073741811;
      goto LABEL_50;
    }
  }
  else
  {
    v13 = (384 * v4 + 71) & 0xFFFFFFF8;
    v72 = v13 + 24 * v6;
    v65 = v72 + 24 * v7;
    v14 = (v65 + 4 * v4 * KeNumberProcessors_0 + 7) & 0xFFFFFFF8;
    v66 = (4 * v4 + 15) & 0xFFFFFFF8;
    v15 = ((v14 + 1008 * v4 + 31) & 0xFFFFFFF8) + KeNumberProcessors_0 * v66;
    v67 = (v14 + 1008 * v4 + 31) & 0xFFFFFFF8;
    v71 = v15;
    if ( PpmIdleVetoList )
      v15 += ((_DWORD)v4 * *(_DWORD *)PpmIdleVetoList) << 6;
    v16 = v15;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v15, 0x694D5050u);
    v12 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      updated = -1073741670;
      goto LABEL_51;
    }
    memset(PoolWithTag, 0, v16);
    *(_DWORD *)v12 = v4;
    *(_DWORD *)(v12 + 4) = 1;
    *(_BYTE *)(v12 + 12) = 1;
    *(_DWORD *)(v12 + 8) = v5;
    *(_QWORD *)(v12 + 16) = *((_QWORD *)v1 + 1);
    *(_QWORD *)(v12 + 24) = *((_QWORD *)v1 + 2);
    *(_QWORD *)(v12 + 32) = *((_QWORD *)v1 + 3);
    *(_QWORD *)(v12 + 40) = *((_QWORD *)v1 + 4);
    v18 = (int *)(v12 + v14);
    *(_QWORD *)(v12 + 48) = v18;
    v18[1] = v4;
    PpmResetPlatformIdleAccounting(v18);
    v19 = 0LL;
    for ( i = v12 + v71; (unsigned int)v19 < *v1; v19 = (unsigned int)(v19 + 1) )
    {
      v21 = 384 * v19;
      v22 = (_QWORD *)(384 * v19 + v12 + 88);
      v22[1] = v22;
      *v22 = v22;
      *(_BYTE *)(384 * v19 + v12 + 104) = 7;
      if ( (unsigned int)PpmIdleDisableStatesAtBoot > 1 )
        *(_DWORD *)(v21 + v12 + 80) = 0x80000000;
      v23 = (_DWORD *)PpmIdleVetoList;
      if ( PpmIdleVetoList )
      {
        if ( (_DWORD)v19 == *v1 - 1 )
          *(_BYTE *)(v21 + v12 + 105) = 1;
        *(_DWORD *)(v21 + v12 + 108) = *v23;
        *(_QWORD *)(v21 + v12 + 112) = i;
        i += (unsigned __int64)(unsigned int)*v23 << 6;
        *(_QWORD *)&v18[252 * (unsigned int)v19 + 48] = v12 + v21 + 80;
      }
    }
    v24 = v12 + v72;
    v25 = v12 + v13;
    v26 = (unsigned __int16 *)(v1 + 63);
    v27 = v4;
    v28 = v25;
    v29 = v12 + 128;
    do
    {
      *(_OWORD *)(v29 + 168) = *(_OWORD *)(v26 - 18);
      *(_QWORD *)(v29 - 64) = *(_QWORD *)(v26 - 10);
      KeCopyAffinityEx(v29, v26 - 102);
      v30 = 0LL;
      *(_DWORD *)(v29 - 4) = *(_DWORD *)v26;
      *(_QWORD *)(v29 + 184) = v28;
      v31 = *(unsigned int *)v26;
      v28 += 24 * v31;
      if ( (_DWORD)v31 )
      {
        do
        {
          v32 = 3 * v30;
          v30 = (unsigned int)(v30 + 1);
          *(_QWORD *)(*(_QWORD *)(v29 + 184) + 8 * v32 + 16) = v24;
          v24 += 24LL * *((unsigned int *)v26 - 1);
        }
        while ( (unsigned int)v30 < *(_DWORD *)v26 );
      }
      v26 += 112;
      v29 += 384LL;
      --v27;
    }
    while ( v27 );
    v1 = a1;
    v33 = 0;
    v34 = v12 + v65;
    if ( v70 )
    {
      do
      {
        Prcb = KeGetPrcb(v33);
        v36 = 0;
        v37 = *(_QWORD *)(Prcb + 23808);
        *(_QWORD *)(v37 + 784) = v24;
        v24 += 24 * v4;
        *(_QWORD *)(v37 + 808) = v34;
        v34 += 4 * v4;
        *(_DWORD *)(v37 + 776) = v4;
        *(_QWORD *)(v37 + 752) = v12 + v67 + v33 * v66;
        *(_DWORD *)(v37 + 792) = v4;
        v38 = (_QWORD *)(v12 + 312);
        do
        {
          v39 = *(_QWORD *)(v37 + 784);
          v40 = 3LL * ((unsigned int)v4 - v36 - 1);
          *(_DWORD *)(v39 + 8 * v40 + 4) = v36++;
          *(_DWORD *)(v39 + 8 * v40 + 8) = *((_DWORD *)v38 - 47);
          v41 = *v38;
          v38 += 48;
          *(_QWORD *)(v39 + 8 * v40 + 16) = v41;
        }
        while ( v36 < (unsigned int)v4 );
        ++v33;
      }
      while ( v33 < v70 );
      v1 = a1;
    }
  }
  v42 = v12 + 76;
  v43 = v1 + 61;
  v44 = v4;
  do
  {
    v45 = 0LL;
    *(_DWORD *)(v42 - 4) = *(v43 - 1);
    *(_DWORD *)v42 = *v43;
    for ( *(_BYTE *)(v42 + 45) = *((_BYTE *)v43 + 12); (unsigned int)v45 < v43[2]; v45 = (unsigned int)(v45 + 1) )
    {
      v46 = *(_QWORD *)(v42 + 236);
      v47 = 3 * v45;
      v48 = 0LL;
      v49 = *(_QWORD *)(v43 + 5) + 16LL * (unsigned int)v45;
      *(_DWORD *)(v46 + 8 * v47) = *(_DWORD *)v49;
      *(_DWORD *)(v46 + 8 * v47 + 8) = *(_DWORD *)(v49 + 4);
      v50 = *(_DWORD *)(v49 + 4);
      if ( v50 )
      {
        do
        {
          v51 = *(_QWORD *)(v49 + 8);
          v52 = *(_QWORD *)(v46 + 24 * v45 + 16);
          v53 = 3LL * (v50 - (unsigned int)v48 - 1);
          v54 = *(unsigned __int8 *)(v51 + 4 * v48);
          *(_DWORD *)(v52 + 8 * v53 + 4) = v54;
          *(_BYTE *)(v52 + 8 * v53) = *(_BYTE *)(v51 + 4 * v48 + 1) == 0;
          *(_BYTE *)(v52 + 8 * v53 + 1) = *(_BYTE *)(v51 + 4 * v48 + 2);
          *(_BYTE *)(v52 + 8 * v53 + 2) = *(_BYTE *)(v51 + 4 * v48 + 3);
          if ( *(_DWORD *)(v46 + 24 * v45) == -1 )
          {
            v55 = 384LL * (unsigned __int8)v54;
            *(_DWORD *)(v52 + 8 * v53 + 8) = *(_DWORD *)(v55 + v12 + 124);
            v56 = *(_QWORD *)(v55 + v12 + 312);
          }
          else
          {
            *(_DWORD *)(v52 + 8 * v53 + 8) = 0;
            v56 = 0LL;
          }
          *(_QWORD *)(v52 + 8 * v53 + 16) = v56;
          v48 = (unsigned int)(v48 + 1);
          v50 = *(_DWORD *)(v49 + 4);
        }
        while ( (unsigned int)v48 < v50 );
      }
    }
    v42 += 384LL;
    v43 += 56;
    --v44;
  }
  while ( v44 );
  for ( j = 0; j < v70; ++j )
  {
    v58 = 0;
    for ( k = *(_QWORD *)(KeGetPrcb(j) + 23808); v58 < v68; *(_BYTE *)(v62 + 8 * v63 + 1) = v61 )
    {
      v61 = PpmCheckCoordinatedStateInitiator(
              j,
              *(_DWORD *)(*(_QWORD *)(k + 784) + 24LL * (v68 - v58 - 1) + 8),
              *(_QWORD *)(*(_QWORD *)(k + 784) + 24LL * (v68 - v58 - 1) + 16),
              v59);
      ++v58;
    }
  }
  if ( !PpmPlatformStates )
  {
    PpmEnableCoordinatedIdleStates((int *)v12, 1);
    v2 = 0;
  }
  updated = 0;
LABEL_50:
  if ( v2 )
    goto LABEL_51;
  return (unsigned int)updated;
}
