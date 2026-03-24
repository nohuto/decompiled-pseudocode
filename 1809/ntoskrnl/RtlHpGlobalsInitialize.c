/*
 * XREFs of RtlHpGlobalsInitialize @ 0x14018D5D0
 * Callers:
 *     RtlHpKInitializeHeapManager @ 0x14018D548 (RtlHpKInitializeHeapManager.c)
 *     ExpInitSystemPhase0 @ 0x1409D51A0 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x140009608 (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x1401D1880 (memset.c)
 */

void *RtlHpGlobalsInitialize()
{
  void *result; // rax

  memset(&RtlpHpHeapGlobals, 0, 0x38uLL);
  RtlpHpHeapGlobals = RtlpHeapGenerateRandomValue64();
  qword_14040E088 = RtlpHeapGenerateRandomValue64();
  result = &RtlpHeapFailureInfo;
  qword_14040E090 = (__int64)&RtlpHeapFailureInfo;
  return result;
}
