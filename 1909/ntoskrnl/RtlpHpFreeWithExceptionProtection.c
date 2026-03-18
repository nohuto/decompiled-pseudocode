/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x14030BC74
 * Callers:
 *     RtlFreeHeap @ 0x1401108B0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x140110910 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x140319AB8 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
