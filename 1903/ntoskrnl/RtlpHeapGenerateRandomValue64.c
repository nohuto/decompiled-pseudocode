/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x140111DDC
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x140111B88 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x140159A68 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x140195C54 (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x1406E6750 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned int v0; // ebx
  __int64 v1; // rax

  v0 = ExGenRandom(1) & 0x7FFFFFFF;
  v1 = ExGenRandom(1);
  LODWORD(v1) = v1 & 0x7FFFFFFF;
  return ((unsigned __int64)v0 << 32) | v1;
}
