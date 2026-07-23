/*
 * XREFs of RtlHpGlobalsInitialize @ 0x14018D710
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x14018D688 (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x1409D61A0 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x140009608 (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void *RtlHpGlobalsInitialize()
{
  void *result; // rax

  memset(&RtlpHpHeapGlobals, 0, 0x38uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_14040F0E8 = RtlpHeapGenerateRandomValue64();
  result = &RtlpHeapFailureInfo;
  qword_14040F0F0 = (__int64)&RtlpHeapFailureInfo;
  return result;
}
