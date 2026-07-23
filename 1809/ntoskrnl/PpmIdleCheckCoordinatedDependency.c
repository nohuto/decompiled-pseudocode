/*
 * XREFs of PpmIdleCheckCoordinatedDependency @ 0x1402D45B4
 * Callers:
 *     PpmIdleCheckCoordinatedDependencies @ 0x1402D4454 (PpmIdleCheckCoordinatedDependencies.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x1402D4454 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1402D4884 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1402D5254 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleTransitionStall @ 0x1402D5508 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x1402D5EB8 (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedDependency(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rax
  __int64 v10; // r10
  unsigned int v11; // r11d
  __int64 v12; // r8
  __int64 v13; // rbx
  char v14; // r12
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r8
  unsigned int v23; // ebx
  unsigned int v24; // r9d
  __int64 Prcb; // rax
  unsigned int v27; // [rsp+58h] [rbp-51h]
  int v28; // [rsp+5Ch] [rbp-4Dh] BYREF
  int v29; // [rsp+60h] [rbp-49h]
  ULONG v30; // [rsp+64h] [rbp-45h] BYREF
  unsigned __int16 *v31[2]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v32; // [rsp+78h] [rbp-31h]
  _QWORD v33[13]; // [rsp+80h] [rbp-29h] BYREF

  v9 = *(unsigned int *)(a1 + 36);
  v10 = a1;
  v28 = -1;
  v27 = 0;
  v11 = a3;
  v12 = a6;
  v13 = 2147483649LL;
  v14 = (*(_QWORD *)(PpmPlatformStates
                   + 8
                   * (48LL * *(unsigned int *)(*(_QWORD *)(a6 + 8) + 4LL)
                    + ((unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[v9] >> 6))
                   + 136) >> (KiProcessorIndexToNumberMappingTable[v9] & 0x3F)) & 1;
  v15 = 0LL;
  v29 = 0;
  if ( !*(_DWORD *)a6 )
    return v13;
  v16 = a8;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v12 + 8);
    v18 = 3 * v15;
    v19 = PpmPlatformStates;
    v20 = *(unsigned int *)(v17 + 24 * v15 + 4);
    v21 = 384 * v20;
    if ( v14 )
    {
      v27 = *(_DWORD *)(v16 + 4);
      if ( !*(_BYTE *)(v17 + 24 * v15 + 1) )
        goto LABEL_26;
      v28 = -1;
      v13 = PpmIdleCheckCoordinatedStateEligibility(v10, a2, v11, a4, v20, a5, (__int64)&v28, v16);
      if ( !v13 )
        break;
LABEL_24:
      PpmIdleRollbackCoordinatedSelection(v16, v27, v22);
      goto LABEL_25;
    }
    if ( !*(_BYTE *)(v17 + 24 * v15 + 2) )
      goto LABEL_26;
    v23 = *(_DWORD *)(v21 + PpmPlatformStates + 320);
    if ( (v23 & 0x4000000) == 0 )
    {
      memset(v33, 0, 0x20uLL);
      v33[1] = PopIdleTransitionTimeout;
      BYTE4(v33[3]) = 1;
      v33[2] = 0LL;
      if ( (v23 & 0x3000000) == 0x1000000 )
      {
        do
        {
          if ( v23 >> 27 > a5 )
            break;
          PpmIdleTransitionStall(v33);
          v23 = *(_DWORD *)(v21 + v19 + 320);
        }
        while ( (v23 & 0x3000000) == 0x1000000 );
        v16 = a8;
      }
      v11 = a3;
      v12 = a6;
      v10 = a1;
      if ( (v23 & 0x4000000) == 0 )
      {
        v13 = 2147483659LL;
        goto LABEL_26;
      }
    }
    v24 = *(_DWORD *)(v21 + v19 + 72);
    if ( v24 > v11 )
    {
      v13 = 2147483650LL;
      goto LABEL_26;
    }
    v13 = PpmIdleCheckCoordinatedDependencies(
            v10,
            a2,
            a5,
            v24 - v11,
            a4,
            *(_DWORD *)(v17 + 8 * v18 + 8),
            *(_QWORD *)(v17 + 8 * v18 + 16),
            0LL,
            0LL,
            a9);
    if ( !v13 )
      break;
LABEL_25:
    v12 = a6;
LABEL_26:
    v15 = (unsigned int)(v29 + 1);
    v29 = v15;
    if ( (unsigned int)v15 >= *(_DWORD *)v12 )
      return v13;
    v10 = a1;
    v11 = a3;
  }
  if ( *(_BYTE *)(v17 + 8 * v18) )
  {
    v32 = 0;
    v13 = 0LL;
    v31[1] = *(unsigned __int16 **)(v21 + v19 + 128 + 8);
    v31[0] = (unsigned __int16 *)(v21 + v19 + 128);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v30, v31) )
    {
      Prcb = KeGetPrcb(v30);
      if ( a1 != Prcb && (int)PpmTestAndLockProcessor(Prcb, a9, 0LL) < 0 )
      {
        v13 = 2147483653LL;
        if ( !v14 )
          goto LABEL_25;
        goto LABEL_24;
      }
    }
  }
  if ( v14 )
    *a7 = v28;
  return v13;
}
