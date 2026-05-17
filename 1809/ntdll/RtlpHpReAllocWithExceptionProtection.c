/*
 * XREFs of RtlpHpReAllocWithExceptionProtection @ 0x18000C1D4
 * Callers:
 *     RtlReAllocateHeap @ 0x18000C320 (RtlReAllocateHeap.c)
 * Callees:
 *     RtlpHpTagReAllocateHeap @ 0x18000A49C (RtlpHpTagReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x18010C5C8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpReAllocWithExceptionProtection(int a1, int a2, int a3, __int64 a4)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  else
    return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
