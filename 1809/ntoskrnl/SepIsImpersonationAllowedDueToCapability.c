/*
 * XREFs of SepIsImpersonationAllowedDueToCapability @ 0x1406AEBEC
 * Callers:
 *     SeTokenCanImpersonate @ 0x140639100 (SeTokenCanImpersonate.c)
 * Callees:
 *     SepSidInToken @ 0x140013310 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x140013360 (SeTokenIsRestricted.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x1400AAAA0 (SepSidInTokenSidHash.c)
 *     RtlIsMultiSessionSku @ 0x1406AEC60 (RtlIsMultiSessionSku.c)
 *     SepCheckCapabilities @ 0x1406B44E8 (SepCheckCapabilities.c)
 */

BOOLEAN __fastcall SepIsImpersonationAllowedDueToCapability(char *Token, __int64 a2)
{
  bool v4; // si
  BOOLEAN result; // al
  PSID v6; // r14
  char v7; // bp
  PSID v8; // r14
  char v9; // bp
  char v10; // al
  PSID v11; // r14
  char v12; // bp
  char v13; // cl
  bool v14; // sf
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  if ( *(_DWORD *)(a2 + 120) != *((_DWORD *)Token + 30)
    || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 0x10) != 0
    || RtlIsMultiSessionSku() )
  {
    return 0;
  }
  v6 = SeDefaultAccountAliasSid;
  v7 = SepSidInToken((__int64)Token, 0LL, (__int64)SeDefaultAccountAliasSid, 0LL, 0, 0, 0);
  if ( v7 )
  {
    if ( SeTokenIsRestricted(Token) )
      v7 = SepSidInToken((__int64)Token, 0LL, (__int64)v6, 0LL, 1, 0, 0);
    v4 = v7 != 0;
  }
  if ( SepAllowSessionImpersonationCap && (*((_DWORD *)Token + 50) & 0x4000) == 0 )
  {
    v8 = SeSessionImpersonationCapabilityGroupSid;
    v9 = SepSidInToken((__int64)Token, 0LL, (__int64)SeSessionImpersonationCapabilityGroupSid, 0LL, 0, 0, 0);
    if ( v9 )
    {
      if ( SeTokenIsRestricted(Token) )
        v9 = SepSidInToken((__int64)Token, 0LL, (__int64)v8, 0LL, 1, 0, 0);
      if ( v9 )
        return 1;
    }
    v10 = v9;
    if ( v4 )
      v10 = 1;
    if ( v10 )
      return 1;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
    return 0;
  v11 = SeConstrainedImpersonationCapabilityGroupSid;
  v12 = SepSidInToken((__int64)Token, 0LL, (__int64)SeConstrainedImpersonationCapabilityGroupSid, 0LL, 0, 0, 0);
  if ( v12 )
  {
    if ( SeTokenIsRestricted(Token) )
      v12 = SepSidInToken((__int64)Token, 0LL, (__int64)v11, 0LL, 1, 0, 0);
    if ( v12 )
      goto LABEL_27;
  }
  v13 = v12;
  if ( v4 )
    v13 = 1;
  if ( v13 )
  {
LABEL_27:
    if ( (*((_DWORD *)Token + 50) & 0x4000) == 0 )
      return 1;
  }
  result = SepSidInTokenSidHash(
             (PSID_AND_ATTRIBUTES_HASH)(Token + 808),
             0LL,
             SeConstrainedImpersonationCapabilitySid,
             0,
             1,
             0,
             0);
  LOBYTE(v15) = result;
  if ( result )
  {
    v14 = (int)SepCheckCapabilities(Token, (__int64)&v15) < 0;
    result = v15;
    if ( !v14 && !(_BYTE)v15 )
      return RtlEqualSid(*((PSID *)Token + 98), *(PSID *)(a2 + 784));
  }
  return result;
}
