/*
 * XREFs of PpmIdleCheckCoordinatedStateEligibility @ 0x1402EED84
 * Callers:
 *     PpmIdleSelectStates @ 0x140189C30 (PpmIdleSelectStates.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1402EEAA8 (PpmIdleCheckCoordinatedDependency.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1402A4EA0 (KeIsSubsetAffinityEx.c)
 *     PpmCheckIdleVeto @ 0x1402EE324 (PpmCheckIdleVeto.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x1402EE948 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1402EF704 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1402EFB3C (PpmIdleWaitForDependentTransitions.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedStateEligibility(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v9; // rsi
  unsigned int v10; // r12d
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rbx
  unsigned int v16; // eax
  unsigned __int64 v17; // r9
  int v18; // r10d
  unsigned int v20; // [rsp+B0h] [rbp+28h]

  v9 = PpmPlatformStates;
  v10 = a3;
  v12 = *(_QWORD *)(a1 + 23808);
  v13 = 384LL * a5;
  v14 = v12 + 240;
  v20 = *(_DWORD *)(a8 + 4);
  if ( *(_BYTE *)(v13 + PpmPlatformStates + 121) )
  {
    if ( !*(_BYTE *)(v12 + 540) )
    {
      v15 = *(_BYTE *)(a1 + 33) != 0 ? 0xFFFFFFFFLL : 2147483660LL;
LABEL_21:
      PpmIdleRollbackCoordinatedSelection(a8, v20, a3);
      return v15;
    }
  }
  else if ( !(unsigned int)KeIsSubsetAffinityEx(
                             (unsigned __int16 *)(v13 + PpmPlatformStates + 128),
                             (unsigned __int16 *)(v12 + 576)) )
  {
LABEL_5:
    v15 = 0xFFFFFFFFLL;
    goto LABEL_21;
  }
  a3 = a6;
  if ( _InterlockedCompareExchange(
         (volatile signed __int32 *)(v13 + v9 + 320),
         (a6 << 27) | KeGetPcr()->Prcb.Number & 0xFFF | 0x1000000,
         0) )
  {
    goto LABEL_5;
  }
  *(_DWORD *)(*(_QWORD *)(a8 + 16) + 4LL * (unsigned int)(*(_DWORD *)(a8 + 4))++) = a5;
  v16 = PpmCheckIdleVeto(v13 + v9 + 80);
  if ( v16 )
  {
    v15 = v16 | 0x100000000LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 72) > v10 )
  {
    v15 = 2147483650LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 384) )
    goto LABEL_20;
  if ( *(unsigned int *)(v13 + v9 + 76) > v17 )
  {
    v15 = 2147483651LL;
    goto LABEL_21;
  }
  v15 = PpmIdleCheckCoordinatedDependencies(
          a1,
          v18,
          a3,
          v10 - *(_DWORD *)(v13 + v9 + 72),
          v17,
          *(_DWORD *)(v13 + v9 + 124),
          *(_QWORD *)(v13 + v9 + 312),
          (__int64)a7,
          a8,
          v14);
  if ( v15 )
    goto LABEL_21;
  if ( *a7 == -1 )
  {
    v15 = 2147483649LL;
    goto LABEL_21;
  }
  if ( (int)PpmIdleWaitForDependentTransitions(v14) < 0 )
  {
    v15 = 2147483653LL;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v13 + v9 + 384) )
  {
LABEL_20:
    v15 = 2147483652LL;
    goto LABEL_21;
  }
  return v15;
}
