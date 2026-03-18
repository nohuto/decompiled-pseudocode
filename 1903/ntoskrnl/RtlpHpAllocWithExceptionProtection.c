/*
 * XREFs of RtlpHpAllocWithExceptionProtection @ 0x14030C158
 * Callers:
 *     RtlAllocateHeap @ 0x1401112A0 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x1401112F4 (RtlpAllocateHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x14031A068 (RtlpHeapExceptionFilter.c)
 */

void *__fastcall RtlpHpAllocWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  return RtlpAllocateHeapInternal(a1, a2, a3, a4);
}
