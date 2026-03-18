/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x1400A5DC8
 * Callers:
 *     SeSecurityAttributePresent @ 0x1400A7030 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400A71D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1400D9064 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepFindTokenAttribute @ 0x140324B8C (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x140625864 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x14013ADD8 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140625D40 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive(a1, a2);
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
