/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x140009608
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x1400093AC (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x140141084 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x14018D710 (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned int v0; // ebx
  __int64 v1; // rax

  v0 = ExGenRandom(1LL) & 0x7FFFFFFF;
  v1 = ExGenRandom(1LL);
  LODWORD(v1) = v1 & 0x7FFFFFFF;
  return ((unsigned __int64)v0 << 32) | v1;
}
