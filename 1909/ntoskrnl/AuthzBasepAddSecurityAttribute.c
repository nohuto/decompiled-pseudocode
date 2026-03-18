/*
 * XREFs of AuthzBasepAddSecurityAttribute @ 0x140085044
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140084C80 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140084FD4 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeValues @ 0x1400850EC (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140085468 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1400854B4 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400CF9D0 (AuthzBasepFindSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttribute(__int64 a1, __int64 a2)
{
  __int64 SecurityAttribute; // rax
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // r11
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  if ( !*(_DWORD *)(a2 + 24) )
    return 3221225485LL;
  SourceString.Length = *(_WORD *)a2;
  SourceString.MaximumLength = SourceString.Length;
  SourceString.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &SourceString);
  v6 = SecurityAttribute;
  if ( SecurityAttribute )
  {
    *(_DWORD *)(SecurityAttribute + 56) &= ~4u;
    goto LABEL_5;
  }
  v7 = AuthzBasepAllocateSecurityAttribute(&SourceString);
  v6 = v7;
  if ( v7 )
  {
    *(_DWORD *)(v7 + 52) = *(_DWORD *)(a2 + 20);
    *(_WORD *)(v7 + 48) = *(_WORD *)(a2 + 16);
LABEL_5:
    LOBYTE(v5) = 1;
    AuthzBasepAddSecurityAttributeToLists(a1, v6, 0LL, v5);
    return AuthzBasepAddSecurityAttributeValues(v8, a2);
  }
  return 3221225626LL;
}
