/*
 * XREFs of KsepCacheHwIdEqual @ 0x140177AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeString @ 0x140666EF0 (RtlCompareUnicodeString.c)
 */

_BOOL8 __fastcall KsepCacheHwIdEqual(__int64 a1, __int64 a2)
{
  return RtlCompareUnicodeString((PCUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)(a2 + 40), 1u) == 0;
}
