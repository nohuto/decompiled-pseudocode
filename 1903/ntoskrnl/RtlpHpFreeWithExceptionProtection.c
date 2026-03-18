/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x14030C1C4
 * Callers:
 *     RtlFreeHeap @ 0x1401111C0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x140111220 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x14031A068 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
