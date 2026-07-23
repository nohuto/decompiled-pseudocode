/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x18003A9E0
 * Callers:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTagAllocateHeap @ 0x18004DD2C (RtlpHpTagAllocateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpAllocWithExceptionProtection(void *a1)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagAllocateHeap(a1);
  else
    return RtlpAllocateHeapInternal(a1);
}
