/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x140727950
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6D70 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     SeMakeSystemToken @ 0x1409ADE18 (SeMakeSystemToken.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1400ABB40 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlFirstFreeAce @ 0x1406309F0 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x140631570 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140631700 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1406491B0 (RtlCopySid.c)
 */

__int64 __fastcall RtlAddProcessTrustLabelAce(PACL Acl, unsigned int a2, int a3, unsigned __int8 *a4, char a5, int a6)
{
  UCHAR AclRevision; // si
  int v11; // r14d
  PACE v12; // r8
  WORD v13; // dx
  UCHAR v14; // cl
  __int64 result; // rax
  PACE Ace; // [rsp+50h] [rbp+8h] BYREF

  if ( !Acl || !RtlValidAcl(Acl) )
    return 3221225591LL;
  if ( a5 != 20 )
    return 3221225485LL;
  if ( !RtlValidSid(a4) )
    return 3221225592LL;
  if ( !RtlIsValidProcessTrustLabelSid((__int64)a4) )
    return 3221225485LL;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 )
    return 3221225485LL;
  v11 = a6;
  if ( (a6 & 0xFF000000) != 0 )
    return 3221225485LL;
  if ( !RtlFirstFreeAce(Acl, &Ace) )
    return 3221225591LL;
  v12 = Ace;
  v13 = 4 * (a4[1] + 4);
  if ( !Ace || (char *)Ace + v13 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  Ace->Header.AceSize = v13;
  v12->Header.AceFlags = a3;
  v12->Header.AceType = 20;
  v12->AccessMask = v11;
  RtlCopySid(4 * a4[1] + 8, &v12[1], a4);
  ++Acl->AceCount;
  v14 = AclRevision;
  if ( AclRevision <= a2 )
    v14 = a2;
  result = 0LL;
  Acl->AclRevision = v14;
  return result;
}
