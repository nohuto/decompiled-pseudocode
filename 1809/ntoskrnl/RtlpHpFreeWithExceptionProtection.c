/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1402ED944
 * Callers:
 *     RtlFreeHeap @ 0x14011EE70 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14011EED0 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1402FB624 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
