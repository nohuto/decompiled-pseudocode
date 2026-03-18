/*
 * XREFs of RtlHpGlobalsInitialize @ 0x140195C54
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x140195BCC (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x140A18050 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x140111DDC (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void *RtlHpGlobalsInitialize()
{
  void *result; // rax

  memset(&RtlpHpHeapGlobals, 0, 0x38uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_1404367A8 = RtlpHeapGenerateRandomValue64();
  result = &RtlpHeapFailureInfo;
  qword_1404367B0 = (__int64)&RtlpHeapFailureInfo;
  return result;
}
