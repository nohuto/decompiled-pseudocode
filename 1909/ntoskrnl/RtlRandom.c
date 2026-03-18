/*
 * XREFs of RtlRandom @ 0x1406EA830
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x14027DEB4 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E314 (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x1409FEB44 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
