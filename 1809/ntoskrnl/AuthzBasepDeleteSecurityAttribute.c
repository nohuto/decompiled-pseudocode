/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x1400D9298
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1400D8B14 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x1400D8DFC (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepFindSecurityAttribute @ 0x1400A7130 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttributeToLists @ 0x1400D924C (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x140134748 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140134798 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x1401396C0 (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140324D28 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(__int64 a1, __int64 a2)
{
  int v4; // edi
  const UNICODE_STRING *SecurityAttribute; // rax
  UNICODE_STRING *v6; // rbx
  __int64 v8; // r9
  UNICODE_STRING v9; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v9.Length = *(_WORD *)a2;
  v9.MaximumLength = v9.Length;
  v4 = 0;
  v9.Buffer = *(wchar_t **)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, &v9);
  v6 = (UNICODE_STRING *)SecurityAttribute;
  if ( !SecurityAttribute || ((__int64)SecurityAttribute[3].Buffer & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    AuthzBasepAddSecurityAttributeToLists(a1, (__int64)SecurityAttribute, 0, 1);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v4 = AuthzBasepDeleteSecurityAttributeValues(v6, a2, &v10);
      if ( v4 < 0 )
        return (unsigned int)v4;
      if ( v10 )
        LODWORD(v6[3].Buffer) |= 4u;
    }
    else
    {
      LODWORD(v6[3].Buffer) |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues(v6);
    }
    if ( ((__int64)v6[3].Buffer & 5) == 4 )
    {
      LOBYTE(v8) = 1;
      AuthzBasepRemoveSecurityAttributeFromLists(a1, v6, 0LL, v8);
      AuthzBasepFreeSecurityAttributeValues(v6, 0LL);
      ExFreePoolWithTag(v6, 0);
    }
  }
  return (unsigned int)v4;
}
