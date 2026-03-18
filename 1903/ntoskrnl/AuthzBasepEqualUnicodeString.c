/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x140085040
 * Callers:
 *     AuthzBasepFindSecurityAttributeValue @ 0x140084EE4 (AuthzBasepFindSecurityAttributeValue.c)
 *     SeSecurityAttributePresent @ 0x140092510 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400926B0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x140092830 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepFindTokenAttribute @ 0x140346510 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x1406194E4 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140133400 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive();
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
