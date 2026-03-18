/*
 * XREFs of PoGetFrequencyBucket @ 0x1402EDADC
 * Callers:
 *     KiEndDebugAccumulation @ 0x1402AE214 (KiEndDebugAccumulation.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140013240 (PpmPerfGetCurrentFrequency.c)
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
