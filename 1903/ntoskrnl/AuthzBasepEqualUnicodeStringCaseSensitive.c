/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140133400
 * Callers:
 *     AuthzBasepEqualUnicodeString @ 0x140085040 (AuthzBasepEqualUnicodeString.c)
 *     SeSecurityAttributePresent @ 0x140092510 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400926B0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140092830 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400958C4 (AuthzBasepCompareUnicodeStringOperands.c)
 * Callees:
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
