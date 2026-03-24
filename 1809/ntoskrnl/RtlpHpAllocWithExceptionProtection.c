/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x1402ED9D8
 * Callers:
 *     RtlAllocateHeap @ 0x14011EF60 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x14011EFB4 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1402FB724 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
