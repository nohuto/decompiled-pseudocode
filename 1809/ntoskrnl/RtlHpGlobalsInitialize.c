/*
 * XREFs of RtlHpGlobalsInitialize @ 0x14018D5B0
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x14018D528 (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x1409D51A0 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x140009608 (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

void *RtlHpGlobalsInitialize()
{
  void *result; // rax

  memset(&RtlpHpHeapGlobals, 0, 0x38uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_14040E0A8 = RtlpHeapGenerateRandomValue64();
  result = &RtlpHeapFailureInfo;
  qword_14040E0B0 = (__int64)&RtlpHeapFailureInfo;
  return result;
}
