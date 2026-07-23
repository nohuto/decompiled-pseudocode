/*
 * XREFs of RtlRandom @ 0x1406C9DF0
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x14026A8C8 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026AC9C (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x1409D6F0C (PspInitPhase2.c)
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
