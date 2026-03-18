/*
 * XREFs of RtlRandom @ 0x1406E9410
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x14027E154 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E5B4 (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x1409FE628 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
