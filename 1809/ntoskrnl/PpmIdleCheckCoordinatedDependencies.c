/*
 * XREFs of PpmIdleCheckCoordinatedDependencies @ 0x1402D4454
 * Callers:
 *     PpmIdleCheckCoordinatedDependency @ 0x1402D45B4 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1402D4884 (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     PpmIdleCheckCoordinatedDependency @ 0x1402D45B4 (PpmIdleCheckCoordinatedDependency.c)
 *     PpmIdleSelectCoordinatedProcessorDependency @ 0x1402D5298 (PpmIdleSelectCoordinatedProcessorDependency.c)
 *     PpmTestAndLockProcessor @ 0x1402D5EB8 (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedDependencies(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  unsigned int v10; // edi
  __int64 v14; // rbx
  __int64 v15; // rsi
  ULONG v16; // ecx
  __int64 result; // rax
  __int64 Prcb; // rsi
  int v19; // [rsp+90h] [rbp+18h]

  v19 = a3;
  v10 = 0;
  if ( !a6 )
    return 0LL;
  v14 = a7 + 8;
  v15 = a10;
  while ( 1 )
  {
    v16 = *(_DWORD *)(v14 - 8);
    if ( v16 == -1 )
    {
      result = PpmIdleCheckCoordinatedDependency(a1, a2, a4, a5, a3, v14, a8, a9, v15);
    }
    else if ( v16 == *(_DWORD *)(a1 + 36) )
    {
      result = PpmIdleSelectCoordinatedProcessorDependency(a1, a2, a4, a5, v14, a8);
    }
    else
    {
      Prcb = KeGetPrcb(v16);
      if ( (int)PpmTestAndLockProcessor(Prcb, a10, v14) >= 0 )
        result = *(_BYTE *)(PpmPlatformStates + 12)
              && *(_DWORD *)(248LL * *(unsigned int *)(Prcb + 23860) + *(_QWORD *)(Prcb + 23808) + 1000) > a4
               ? 2147483650LL
               : 0LL;
      else
        result = 2147483653LL;
      v15 = a10;
    }
    if ( result )
      break;
    a3 = v19;
    ++v10;
    v14 += 24LL;
    if ( v10 >= a6 )
      return 0LL;
  }
  return result;
}
