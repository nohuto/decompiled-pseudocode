/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x180049F80
 * Callers:
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlpCreateHeapEncoding @ 0x180049EDC (RtlpCreateHeapEncoding.c)
 *     RtlpInitializeLfhRandomDataArray @ 0x180049F38 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlInitializeHeapManager @ 0x1800EEF74 (RtlInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x180107870 (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18004A840 (RtlpHeapGenerateRandomValue32.c)
 */

unsigned __int64 __fastcall RtlpHeapGenerateRandomValue64(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v3 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32(a1, a2, a3) << 32;
  return v3 | (unsigned int)RtlpHeapGenerateRandomValue32(v5, v4, v6);
}
