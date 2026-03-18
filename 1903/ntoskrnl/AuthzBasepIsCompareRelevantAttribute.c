/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x140619E8C
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140619DC4 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0 && !RtlPrefixUnicodeString(&stru_14036F9C8, (PCUNICODE_STRING)(a1 + 32), 1u);
}
