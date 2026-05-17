/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x18000E97C
 * Callers:
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x1800619AC (RtlpCreateHeapEncoding.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180062370 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x180063168 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlInitializeHeapManager @ 0x1800F1FC4 (RtlInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18010A3CC (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000E9A4 (RtlpHeapGenerateRandomValue32.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32() << 32;
  return v0 | (unsigned int)RtlpHeapGenerateRandomValue32();
}
