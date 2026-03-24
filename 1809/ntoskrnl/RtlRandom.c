/*
 * XREFs of RtlRandom @ 0x1406C8B50
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x14026A6D8 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026AAAC (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x1409D5F0C (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
