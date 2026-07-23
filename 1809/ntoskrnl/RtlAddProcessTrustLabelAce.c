/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x140728BD0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6EF8 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     SeMakeSystemToken @ 0x1409AEE18 (SeMakeSystemToken.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1400ABAA0 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlFirstFreeAce @ 0x140631A10 (RtlFirstFreeAce.c)
 *     RtlValidSid @ 0x140632590 (RtlValidSid.c)
 *     RtlValidAcl @ 0x140632720 (RtlValidAcl.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 */

NTSTATUS __cdecl RtlAddProcessTrustLabelAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID ProcessTrustLabelSid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  UCHAR AclRevision; // si
  ACCESS_MASK v11; // r14d
  PACE v12; // r8
  WORD v13; // dx
  UCHAR v14; // cl
  NTSTATUS result; // eax
  PACE Ace; // [rsp+50h] [rbp+8h] BYREF

  if ( !Acl || !RtlValidAcl(Acl) )
    return -1073741705;
  if ( AceType != 20 )
    return -1073741811;
  if ( !RtlValidSid(ProcessTrustLabelSid) )
    return -1073741704;
  if ( !RtlIsValidProcessTrustLabelSid(ProcessTrustLabelSid) )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  if ( (AceFlags & 0xFFFFFFE0) != 0 )
    return -1073741811;
  v11 = AccessMask;
  if ( (AccessMask & 0xFF000000) != 0 )
    return -1073741811;
  if ( !RtlFirstFreeAce(Acl, &Ace) )
    return -1073741705;
  v12 = Ace;
  v13 = 4 * (*((unsigned __int8 *)ProcessTrustLabelSid + 1) + 4);
  if ( !Ace || (char *)Ace + v13 > (char *)Acl + Acl->AclSize )
    return -1073741671;
  Ace->Header.AceSize = v13;
  v12->Header.AceFlags = AceFlags;
  v12->Header.AceType = 20;
  v12->AccessMask = v11;
  RtlCopySid(4 * *((unsigned __int8 *)ProcessTrustLabelSid + 1) + 8, &v12[1], ProcessTrustLabelSid);
  ++Acl->AceCount;
  v14 = AclRevision;
  if ( AclRevision <= AceRevision )
    v14 = AceRevision;
  result = 0;
  Acl->AclRevision = v14;
  return result;
}
