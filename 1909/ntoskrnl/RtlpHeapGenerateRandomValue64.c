/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x1401114CC
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x140111278 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x14015A108 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x140196434 (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
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
