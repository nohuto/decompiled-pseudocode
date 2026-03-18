/*
 * XREFs of PoGetFrequencyBucket @ 0x1402D3660
 * Callers:
 *     KiEndDebugAccumulation @ 0x140297530 (KiEndDebugAccumulation.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x1400C8340 (PpmPerfGetCurrentFrequency.c)
 */

__int64 __fastcall PoGetFrequencyBucket(__int64 a1)
{
  unsigned int CurrentFrequency; // edx

  CurrentFrequency = PpmPerfGetCurrentFrequency(a1, 0);
  if ( CurrentFrequency >= 0x4B )
    return 3;
  else
    return CurrentFrequency / 0x19;
}
