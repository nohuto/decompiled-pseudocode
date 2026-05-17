/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x18003A9E0
 * Callers:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpHpTagAllocateHeap @ 0x18004DD2C (RtlpHpTagAllocateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpAllocWithExceptionProtection(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagAllocateHeap();
  else
    return RtlpAllocateHeapInternal(a1, a2, a3, 0LL);
}
