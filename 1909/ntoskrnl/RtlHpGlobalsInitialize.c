/*
 * XREFs of RtlHpGlobalsInitialize @ 0x140196434
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x1401963AC (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x140A18510 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x1401114CC (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *RtlHpGlobalsInitialize()
{
  void *result; // rax

  memset(&RtlpHpHeapGlobals, 0, 0x38uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_140436728 = RtlpHeapGenerateRandomValue64();
  result = &RtlpHeapFailureInfo;
  qword_140436730 = (__int64)&RtlpHeapFailureInfo;
  return result;
}
