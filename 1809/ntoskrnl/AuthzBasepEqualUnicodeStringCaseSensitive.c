/*
 * XREFs of AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14013ADD8
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A45B0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepEqualUnicodeString @ 0x1400A5DC8 (AuthzBasepEqualUnicodeString.c)
 *     SeSecurityAttributePresent @ 0x1400A7030 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400A71D0 (AuthzBasepFindSecurityAttribute.c)
 * Callees:
 *     memcmp @ 0x1401961E0 (memcmp.c)
 */

bool __fastcall AuthzBasepEqualUnicodeStringCaseSensitive(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2 && memcmp(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == 0;
}
