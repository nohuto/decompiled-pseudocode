/*
 * XREFs of AuthzBasepDeleteSecurityAttribute @ 0x140085284
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140084880 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140084BD4 (AuthzBasepReplaceSecurityAttribute.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140085068 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400926B0 (AuthzBasepFindSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x1401354E4 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140135534 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14013B35C (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1403463BC (AuthzBasepDeleteSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepDeleteSecurityAttribute(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 SecurityAttribute; // rax
  _DWORD *v6; // rbx
  __int64 v8; // r9
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v9[0] = 0LL;
  v4 = 0;
  LOWORD(v9[0]) = *(_WORD *)a2;
  WORD1(v9[0]) = v9[0];
  v9[1] = *(_QWORD *)(a2 + 8);
  SecurityAttribute = AuthzBasepFindSecurityAttribute(a1, v9);
  v6 = (_DWORD *)SecurityAttribute;
  if ( !SecurityAttribute || (*(_DWORD *)(SecurityAttribute + 56) & 4) != 0 )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    AuthzBasepAddSecurityAttributeToLists(a1, SecurityAttribute, 0, 1);
    if ( *(_DWORD *)(a2 + 24) )
    {
      v4 = AuthzBasepDeleteSecurityAttributeValues(v6, a2, &v10);
      if ( v4 < 0 )
        return (unsigned int)v4;
      if ( v10 )
        v6[14] |= 4u;
    }
    else
    {
      v6[14] |= 4u;
      AuthzBasepDeleteAllSecurityAttributeValues(v6);
    }
    if ( (v6[14] & 5) == 4 )
    {
      LOBYTE(v8) = 1;
      AuthzBasepRemoveSecurityAttributeFromLists(a1, v6, 0LL, v8);
      AuthzBasepFreeSecurityAttributeValues(v6, 0LL);
      ExFreePoolWithTag(v6, 0);
    }
  }
  return (unsigned int)v4;
}
