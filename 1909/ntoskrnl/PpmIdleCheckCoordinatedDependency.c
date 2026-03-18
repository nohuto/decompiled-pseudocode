/*
 * XREFs of PpmIdleCheckCoordinatedDependency @ 0x1402EE808
 * Callers:
 *     PpmIdleCheckCoordinatedDependencies @ 0x1402EE6A8 (PpmIdleCheckCoordinatedDependencies.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x1402EE6A8 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1402EEAE4 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1402EF464 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleTransitionStall @ 0x1402EF718 (PpmIdleTransitionStall.c)
 *     PpmTestAndLockProcessor @ 0x1402F00FC (PpmTestAndLockProcessor.c)
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
  __int64 v9; // r10
  __int64 v10; // r9
  unsigned int v11; // r11d
  __int64 v12; // rbx
  unsigned int v13; // ecx
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
  unsigned __int16 *v31; // [rsp+68h] [rbp-41h] BYREF
  __int64 v32; // [rsp+70h] [rbp-39h]
  __int64 v33; // [rsp+78h] [rbp-31h]
  _QWORD v34[13]; // [rsp+80h] [rbp-29h] BYREF

  v28 = -1;
  v27 = 0;
  v9 = a1;
  v10 = a6;
  v11 = a3;
  v31 = 0LL;
  v12 = 2147483649LL;
  v32 = 0LL;
  v33 = 0LL;
  v13 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
  v14 = (*(_QWORD *)(PpmPlatformStates
                   + 8 * (48LL * *(unsigned int *)(*(_QWORD *)(a6 + 8) + 4LL) + ((unsigned __int64)v13 >> 6))
                   + 136) >> (v13 & 0x3F)) & 1;
  v15 = 0LL;
  v29 = 0;
  if ( !*(_DWORD *)a6 )
    return v12;
  v16 = a8;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v10 + 8);
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
      v12 = PpmIdleCheckCoordinatedStateEligibility(v9, a2, v11, a4, v20, a5, (__int64)&v28, v16);
      if ( !v12 )
        goto LABEL_18;
LABEL_24:
      PpmIdleRollbackCoordinatedSelection(v16, v27, v22);
      goto LABEL_25;
    }
    if ( !*(_BYTE *)(v17 + 24 * v15 + 2) )
      goto LABEL_26;
    v23 = *(_DWORD *)(v21 + PpmPlatformStates + 320);
    if ( (v23 & 0x4000000) == 0 )
    {
      memset(v34, 0, 0x20uLL);
      v34[1] = PopIdleTransitionTimeout;
      BYTE4(v34[3]) = 1;
      v34[2] = 0LL;
      if ( (v23 & 0x3000000) == 0x1000000 )
      {
        do
        {
          if ( v23 >> 27 > a5 )
            break;
          PpmIdleTransitionStall(v34);
          v23 = *(_DWORD *)(v21 + v19 + 320);
        }
        while ( (v23 & 0x3000000) == 0x1000000 );
        v16 = a8;
      }
      v11 = a3;
      v10 = a6;
      v9 = a1;
      if ( (v23 & 0x4000000) == 0 )
      {
        v12 = 2147483659LL;
        goto LABEL_26;
      }
    }
    v24 = *(_DWORD *)(v21 + v19 + 72);
    if ( v24 <= v11 )
      break;
    v12 = 2147483650LL;
LABEL_25:
    v10 = a6;
LABEL_26:
    v15 = (unsigned int)(v29 + 1);
    v29 = v15;
    if ( (unsigned int)v15 >= *(_DWORD *)v10 )
      return v12;
    v9 = a1;
    v11 = a3;
  }
  v12 = PpmIdleCheckCoordinatedDependencies(
          v9,
          a2,
          a5,
          v24 - v11,
          a4,
          *(_DWORD *)(v17 + 8 * v18 + 8),
          *(_QWORD *)(v17 + 8 * v18 + 16),
          0LL,
          0LL,
          a9);
  if ( v12 )
    goto LABEL_25;
LABEL_18:
  if ( *(_BYTE *)(v17 + 8 * v18) )
  {
    LOWORD(v33) = 0;
    v12 = 0LL;
    v32 = *(_QWORD *)(v21 + v19 + 128 + 8);
    v31 = (unsigned __int16 *)(v21 + v19 + 128);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v31) )
    {
      Prcb = KeGetPrcb(v30);
      if ( a1 != Prcb && (int)PpmTestAndLockProcessor(Prcb, a9, 0LL) < 0 )
      {
        v12 = 2147483653LL;
        if ( !v14 )
          goto LABEL_25;
        goto LABEL_24;
      }
    }
  }
  if ( v14 )
    *a7 = v28;
  return v12;
}
