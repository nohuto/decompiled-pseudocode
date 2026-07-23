/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x1402EDC34
 * Callers:
 *     RtlFreeHeap @ 0x14011EF00 (RtlFreeHeap.c)
 * Callees:
 *     RtlpFreeHeapInternal @ 0x14011EF60 (RtlpFreeHeapInternal.c)
 *     RtlpHeapExceptionFilter @ 0x1402FB914 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpFreeHeapInternal(a1, a2, a3);
}
