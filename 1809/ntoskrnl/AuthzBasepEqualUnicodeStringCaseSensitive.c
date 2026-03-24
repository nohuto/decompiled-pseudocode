/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14013ADF8
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A45D0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEqualUnicodeString @ 0x1400A5DE8 (AuthzBasepEqualUnicodeString.c)
 *     SeSecurityAttributePresent @ 0x1400A7050 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400A71F0 (AuthzBasepFindSecurityAttribute.c)
 * Callees:
 *     memcmp @ 0x140196200 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
