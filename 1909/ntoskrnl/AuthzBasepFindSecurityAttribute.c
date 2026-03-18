/*
 * XREFs of AuthzBasepFindSecurityAttribute @ 0x1400CF9D0
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x140085044 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140085684 (AuthzBasepDeleteSecurityAttribute.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400CF360 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x1400CF540 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1400D0914 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x14061B8D4 (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 *     AuthzBasepCompareSecurityAttributesInformation @ 0x14092BD48 (AuthzBasepCompareSecurityAttributesInformation.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140085440 (AuthzBasepEqualUnicodeString.c)
 *     AuthzBasepEqualUnicodeStringCaseSensitive @ 0x140133EF0 (AuthzBasepEqualUnicodeStringCaseSensitive.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall AuthzBasepFindSecurityAttribute(__int64 a1, const UNICODE_STRING *a2)
{
  const UNICODE_STRING *v2; // rbx
  const UNICODE_STRING *v3; // r14
  __int64 v4; // rsi
  char v5; // bp
  const UNICODE_STRING *v8; // rdi
  const UNICODE_STRING *v9; // rcx
  __int64 *v11; // r14

  v2 = *(const UNICODE_STRING **)(a1 + 8);
  v3 = (const UNICODE_STRING *)(a1 + 8);
  v4 = 0LL;
  v5 = 0;
  v8 = 0LL;
  if ( v2 == (const UNICODE_STRING *)(a1 + 8) )
  {
LABEL_6:
    v11 = *(__int64 **)(a1 + 32);
    if ( v11 == (__int64 *)(a1 + 32) )
      goto LABEL_7;
    while ( 1 )
    {
      v8 = (const UNICODE_STRING *)(v11 - 2);
      if ( (v11[5] & 1) == 0 )
      {
        if ( AuthzBasepEqualUnicodeString(v8 + 2, a2) )
          break;
      }
      v11 = (__int64 *)*v11;
      if ( v11 == (__int64 *)(a1 + 32) )
        goto LABEL_7;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = v2;
      v9 = v2 + 2;
      if ( KeGetCurrentIrql() >= 2u ? AuthzBasepEqualUnicodeStringCaseSensitive(v9) : RtlEqualUnicodeString(v9, a2, 1u) )
        break;
      v2 = *(const UNICODE_STRING **)&v2->Length;
      if ( v2 == v3 )
        goto LABEL_6;
    }
  }
  v5 = 1;
LABEL_7:
  if ( v5 )
    return v8;
  return (const UNICODE_STRING *)v4;
}
