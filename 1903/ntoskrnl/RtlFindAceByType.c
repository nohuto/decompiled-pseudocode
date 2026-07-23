/*
 * XREFs of RtlFindAceByType @ 0x14000ABF0
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14000ACB0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x140085988 (SepMandatorySubProcessToken.c)
 *     RtlIsUntrustedObject @ 0x1401340C0 (RtlIsUntrustedObject.c)
 *     SepGetScopedPolicySid @ 0x14031CCC4 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14031D414 (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140348368 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1405C7BE0 (RtlpSetSecurityObject.c)
 *     RtlpGenerateInheritAcl @ 0x1405CF4D0 (RtlpGenerateInheritAcl.c)
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     RtlpCopyAces @ 0x1405DC140 (RtlpCopyAces.c)
 *     SeQueryMandatoryLabel @ 0x1406D9A20 (SeQueryMandatoryLabel.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1408D34D8 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x1408E304C (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v4; // r10
  unsigned int v5; // r11d

  if ( !Acl )
    return 0LL;
  v4 = Acl + 1;
  v5 = 0;
  if ( !Acl->AceCount )
    return 0LL;
  while ( !Index )
  {
    if ( v4->AclRevision == AceType )
      return v4;
LABEL_9:
    ++v5;
    v4 = (PACL)((char *)v4 + v4->AclSize);
    if ( v5 >= Acl->AceCount )
      return 0LL;
  }
  if ( v5 < *Index || v4->AclRevision != AceType )
    goto LABEL_9;
  *Index = v5;
  return v4;
}
