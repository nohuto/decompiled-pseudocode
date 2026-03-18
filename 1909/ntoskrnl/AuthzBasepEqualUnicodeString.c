/*
 * XREFs of AuthzBasepEqualUnicodeString @ 0x140085440
 * Callers:
 *     AuthzBasepFindSecurityAttributeValue @ 0x1400852E4 (AuthzBasepFindSecurityAttributeValue.c)
 *     SeSecurityAttributePresent @ 0x1400CF830 (SeSecurityAttributePresent.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400CF9D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepQuerySecurityAttributeAndValues @ 0x1400CFB50 (AuthzBasepQuerySecurityAttributeAndValues.c)
 *     AuthzBasepFindTokenAttribute @ 0x140345F70 (AuthzBasepFindTokenAttribute.c)
 *     AuthzBasepFindSystemSecurityAttribute @ 0x14061AFF4 (AuthzBasepFindSystemSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140133EF0 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall AuthzBasepEqualUnicodeString(const UNICODE_STRING *a1, const UNICODE_STRING *a2)
{
  if ( KeGetCurrentIrql() >= 2u )
    return AuthzBasepEqualUnicodeStringCaseSensitive();
  else
    return RtlEqualUnicodeString(a1, a2, 1u);
}
