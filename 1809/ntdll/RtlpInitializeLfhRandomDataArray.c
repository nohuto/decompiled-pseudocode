/*
 * XREFs of RtlpInitializeLfhRandomDataArray @ 0x180063168
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x18005F5F8 (RtlpCreateLowFragHeap.c)
 *     RtlpHpLfhContextInitialize @ 0x180063C34 (RtlpHpLfhContextInitialize.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x18000E97C (RtlpHeapGenerateRandomValue64.c)
 */

unsigned __int64 RtlpInitializeLfhRandomDataArray()
{
  unsigned __int8 *v0; // rbx
  __int64 v1; // rdi
  unsigned __int64 result; // rax

  v0 = RtlpLowFragHeapRandomData;
  v1 = 32LL;
  do
  {
    result = RtlpHeapGenerateRandomValue64() & 0x7F7F7F7F7F7F7F7FLL;
    *(_QWORD *)v0 = result;
    v0 += 8;
    --v1;
  }
  while ( v1 );
  return result;
}
