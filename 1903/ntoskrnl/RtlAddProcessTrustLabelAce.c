/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x140758BB0
 * Callers:
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     SeMakeSystemToken @ 0x140A01540 (SeMakeSystemToken.c)
 * Callees:
 *     RtlValidSid @ 0x1405C8640 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x1405C8830 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1405DD490 (RtlValidAcl.c)
 *     RtlIsValidProcessTrustLabelSid @ 0x1405DEB60 (RtlIsValidProcessTrustLabelSid.c)
 *     RtlCopySid @ 0x140644850 (RtlCopySid.c)
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
