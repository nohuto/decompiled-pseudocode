/*
 * XREFs of RtlpHpReAllocWithExceptionProtection @ 0x180045138
 * Callers:
 *     RtlReAllocateHeap @ 0x1800431F0 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagReAllocateHeap @ 0x180046EEC (RtlpHpTagReAllocateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpReAllocWithExceptionProtection(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  else
    return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
