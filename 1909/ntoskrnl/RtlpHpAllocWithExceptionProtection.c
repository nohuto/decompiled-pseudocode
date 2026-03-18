/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x14030BC08
 * Callers:
 *     RtlAllocateHeap @ 0x140110990 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1401109E4 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x140319AB8 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
