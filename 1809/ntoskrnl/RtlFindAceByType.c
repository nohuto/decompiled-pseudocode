/*
 * XREFs of RtlFindAceByType @ 0x1400A8EF0
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x1400A8FB0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x1400D9F14 (SepMandatorySubProcessToken.c)
 *     RtlIsUntrustedObject @ 0x140131C70 (RtlIsUntrustedObject.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6EF8 (SepSetProcessTrustLabelAceForToken.c)
 *     SepGetScopedPolicySid @ 0x1402FECA4 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF3BC (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140326D3C (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x14062FD60 (RtlpInheritAcl2.c)
 *     RtlpCopyAces @ 0x140630DE0 (RtlpCopyAces.c)
 *     SeQueryMandatoryLabel @ 0x140655FEC (SeQueryMandatoryLabel.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140896810 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x1408A4EAC (SepSDContainsAttributeACE.c)
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
