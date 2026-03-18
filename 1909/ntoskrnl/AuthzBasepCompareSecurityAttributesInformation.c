/*
 * XREFs of AuthzBasepCompareSecurityAttributesInformation @ 0x14092BD48
 * Callers:
 *     SepCompareClaimAttributes @ 0x14061BED4 (SepCompareClaimAttributes.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1400CF9D0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x14061B828 (AuthzBasepCompareSecurityAttribute.c)
 */

char __fastcall AuthzBasepCompareSecurityAttributesInformation(__int64 a1, _DWORD *a2)
{
  char v2; // bl
  __int64 v4; // rsi
  __int64 i; // rdi
  const UNICODE_STRING *SecurityAttribute; // rax

  v2 = 0;
  if ( *(_DWORD *)a1 == *a2 )
  {
    if ( *(_DWORD *)a1 )
    {
      v4 = a1 + 8;
      for ( i = *(_QWORD *)(a1 + 8); i != v4; i = *(_QWORD *)i )
      {
        SecurityAttribute = AuthzBasepFindSecurityAttribute((__int64)a2, (const UNICODE_STRING *)(i + 32));
        if ( !SecurityAttribute || !AuthzBasepCompareSecurityAttribute(i, (__int64)SecurityAttribute) )
          return v2;
      }
    }
    return 1;
  }
  return v2;
}
