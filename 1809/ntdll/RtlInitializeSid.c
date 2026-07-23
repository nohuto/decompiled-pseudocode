/*
 * XREFs of RtlInitializeSid @ 0x1800487A0
 * Callers:
 *     RtlDefaultNpAcl @ 0x180002040 (RtlDefaultNpAcl.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1800480C0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCapabilityCheck @ 0x180048270 (RtlCapabilityCheck.c)
 *     RtlInitializeSidEx @ 0x180048600 (RtlInitializeSidEx.c)
 *     RtlpOwnerAcesPresent @ 0x180048658 (RtlpOwnerAcesPresent.c)
 *     RtlGetAppContainerParent @ 0x18004AA90 (RtlGetAppContainerParent.c)
 *     RtlCreateServiceSid @ 0x18004B3A0 (RtlCreateServiceSid.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18004B61C (RtlpCapabilityCheckSystemCapability.c)
 *     RtlCreateVirtualAccountSid @ 0x18004CC20 (RtlCreateVirtualAccountSid.c)
 *     RtlpSetSecurityObject @ 0x18007C620 (RtlpSetSecurityObject.c)
 *     RtlpCompareKnownObjectAces @ 0x18008AC68 (RtlpCompareKnownObjectAces.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DEB38 (WerpAllocateAndInitializeSid.c)
 *     RtlpCompareKnownAces @ 0x1800E7EA8 (RtlpCompareKnownAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7FE8 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E933C (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
