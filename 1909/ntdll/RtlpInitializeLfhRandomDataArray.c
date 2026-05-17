/*
 * XREFs of RtlpInitializeLfhRandomDataArray @ 0x180049F38
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18004B21C (RtlpCreateLowFragHeap.c)
 *     RtlpHpLfhContextInitialize @ 0x18004C38C (RtlpHpLfhContextInitialize.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x180049F80 (RtlpHeapGenerateRandomValue64.c)
 */

__int64 __fastcall RtlpInitializeLfhRandomDataArray(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rbx
  __int64 v3; // rdi
  __int64 RandomValue64; // rax
  __int64 result; // rax

  v2 = RtlpLowFragHeapRandomData;
  v3 = 32LL;
  do
  {
    RandomValue64 = RtlpHeapGenerateRandomValue64(a1, a2);
    a1 = 0x7F7F7F7F7F7F7F7FLL;
    result = RandomValue64 & 0x7F7F7F7F7F7F7F7FLL;
    *(_QWORD *)v2 = result;
    v2 += 8;
    --v3;
  }
  while ( v3 );
  return result;
}
