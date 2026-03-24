/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1402EDA44
 * Callers:
 *     RtlFreeHeap @ 0x14011EE90 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14011EEF0 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1402FB724 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
