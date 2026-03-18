/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x14061B99C
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x14061B8D4 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0 && !RtlPrefixUnicodeString(&stru_14036F9C8, (PCUNICODE_STRING)(a1 + 32), 1u);
}
