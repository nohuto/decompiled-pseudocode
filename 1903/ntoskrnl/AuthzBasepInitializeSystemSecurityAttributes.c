/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x14077538C
 * Callers:
 *     SeRmInitPhase1 @ 0x140A17B50 (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400795E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140084880 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140194924 (AuthzBasepAllocateSecurityAttributesList.c)
 *     RtlIsMultiSessionSku @ 0x1405BD790 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1, __int64 a2)
{
  _DWORD *SecurityAttributesList; // rbx
  BOOLEAN IsMultiSessionSku; // al
  char v4; // si
  unsigned int v5; // edi
  _DWORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v8; // [rsp+28h] [rbp-38h]
  _QWORD v9[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+48h] [rbp-18h]
  _BOOL8 *v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+84h] [rbp+24h]
  _BOOL8 v15; // [rsp+88h] [rbp+28h] BYREF

  v14 = HIDWORD(a1);
  v9[0] = 3145774LL;
  v9[1] = L"WIN://ISMULTISESSIONSKU";
  v7[0] = 1;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 2;
  v7[1] = 1;
  v8 = v9;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(a1, a2);
  if ( SecurityAttributesList )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    LODWORD(v11) = 1;
    v4 = IsMultiSessionSku;
    LOWORD(v10) = 6;
    v15 = IsMultiSessionSku != 0;
    v12 = &v15;
    v5 = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v13, (__int64)v7);
    if ( _InterlockedCompareExchange64(&WindowsSystemAttributes, (signed __int64)SecurityAttributesList, 0LL) )
    {
      v5 = -1073741823;
    }
    else
    {
      SecurityAttributesList = 0LL;
      SepAllowAccessUponLogoff = v4;
    }
    if ( SecurityAttributesList )
      AuthzBasepFreeSecurityAttributesList(SecurityAttributesList);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
