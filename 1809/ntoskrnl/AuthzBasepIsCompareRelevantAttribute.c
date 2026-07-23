/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x1405BD1C4
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x1405BD0FC (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1405C8460 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0 && !RtlPrefixUnicodeString(&stru_140350880, (PCUNICODE_STRING)(a1 + 32), 1u);
}
