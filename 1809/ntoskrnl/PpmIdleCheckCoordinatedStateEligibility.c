/*
 * XREFs of PpmIdleCheckCoordinatedStateEligibility @ 0x1402D4884
 * Callers:
 *     PpmIdleSelectStates @ 0x1401801D0 (PpmIdleSelectStates.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1402D45B4 (PpmIdleCheckCoordinatedDependency.c)
 * Callees:
 *     KeAndAffinityEx @ 0x1400DC780 (KeAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x14018A430 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PpmCheckIdleVeto @ 0x1402D3E44 (PpmCheckIdleVeto.c)
 *     PpmIdleCheckCoordinatedDependencies @ 0x1402D4454 (PpmIdleCheckCoordinatedDependencies.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1402D5254 (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleWaitForDependentTransitions @ 0x1402D568C (PpmIdleWaitForDependentTransitions.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedStateEligibility(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned int v17; // eax
  unsigned __int64 v18; // r9
  int v19; // r10d
  unsigned int v21; // [rsp+58h] [rbp-110h]
  unsigned __int16 v22[88]; // [rsp+70h] [rbp-F8h] BYREF

  v9 = a5;
  v10 = PpmPlatformStates;
  v12 = *(_QWORD *)(a1 + 23808);
  v13 = 384LL * a5;
  v14 = v12 + 240;
  v21 = *(_DWORD *)(a8 + 4);
  if ( *(_BYTE *)(v13 + PpmPlatformStates + 121) )
  {
    if ( !*(_BYTE *)(v12 + 540) )
    {
      v15 = *(_BYTE *)(a1 + 33) != 0 ? 0xFFFFFFFFLL : 2147483660LL;
LABEL_22:
      PpmIdleRollbackCoordinatedSelection(a8, v21, v9);
      return v15;
    }
  }
  else
  {
    v16 = v13 + PpmPlatformStates;
    KeAndAffinityEx((unsigned __int16 *)(v13 + PpmPlatformStates + 128), (unsigned __int16 *)(v12 + 576), v22);
    if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)(v16 + 128), v22) )
    {
LABEL_5:
      v15 = 0xFFFFFFFFLL;
      goto LABEL_22;
    }
    v9 = a5;
  }
  if ( _InterlockedCompareExchange(
         (volatile signed __int32 *)(v13 + v10 + 320),
         (a6 << 27) | KeGetPcr()->Prcb.Number & 0xFFF | 0x1000000,
         0) )
  {
    goto LABEL_5;
  }
  *(_DWORD *)(*(_QWORD *)(a8 + 16) + 4LL * (unsigned int)(*(_DWORD *)(a8 + 4))++) = v9;
  v17 = PpmCheckIdleVeto(v13 + v10 + 80);
  if ( v17 )
  {
    v15 = v17 | 0x100000000LL;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v13 + v10 + 72) > a3 )
  {
    v15 = 2147483650LL;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v13 + v10 + 384) )
    goto LABEL_21;
  if ( *(unsigned int *)(v13 + v10 + 76) > v18 )
  {
    v15 = 2147483651LL;
    goto LABEL_22;
  }
  v15 = PpmIdleCheckCoordinatedDependencies(
          a1,
          v19,
          a6,
          a3 - *(_DWORD *)(v13 + v10 + 72),
          v18,
          *(_DWORD *)(v13 + v10 + 124),
          *(_QWORD *)(v13 + v10 + 312),
          (__int64)a7,
          a8,
          v14);
  if ( v15 )
    goto LABEL_22;
  if ( *a7 == -1 )
  {
    v15 = 2147483649LL;
    goto LABEL_22;
  }
  if ( (int)PpmIdleWaitForDependentTransitions(v14) < 0 )
  {
    v15 = 2147483653LL;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(v13 + v10 + 384) )
  {
LABEL_21:
    v15 = 2147483652LL;
    goto LABEL_22;
  }
  return v15;
}
