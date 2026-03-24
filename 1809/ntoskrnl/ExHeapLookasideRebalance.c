/*
 * XREFs of ExHeapLookasideRebalance @ 0x1401B74AC
 * Callers:
 *     ExpScanSystemLookasideList @ 0x1401071F8 (ExpScanSystemLookasideList.c)
 * Callees:
 *     RtlpDynamicLookasideRebalance @ 0x1401B7BEC (RtlpDynamicLookasideRebalance.c)
 */

__int64 ExHeapLookasideRebalance()
{
  unsigned int i; // ebx
  __int64 v1; // rsi
  char *v2; // rdi
  __int64 result; // rax

  for ( i = 0; i < dword_140443408; ++i )
  {
    v1 = 2LL;
    v2 = (char *)&unk_140443480 + 8384 * i;
    do
    {
      result = RtlpDynamicLookasideRebalance(v2);
      v2 += 4160;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
