/*
 * XREFs of RtlFindAceByType @ 0x14000AC80
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14000AD40 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x140085D88 (SepMandatorySubProcessToken.c)
 *     RtlIsUntrustedObject @ 0x140132B70 (RtlIsUntrustedObject.c)
 *     SepGetScopedPolicySid @ 0x14031C714 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x14031CE64 (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140347DC8 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1405C80E0 (RtlpSetSecurityObject.c)
 *     RtlpGenerateInheritAcl @ 0x1405CF9D0 (RtlpGenerateInheritAcl.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     RtlpCopyAces @ 0x1405DC8E0 (RtlpCopyAces.c)
 *     SeQueryMandatoryLabel @ 0x1406D9690 (SeQueryMandatoryLabel.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1408D2DD8 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x1408E30C4 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v4; // r10
  unsigned int v5; // r11d

  if ( !a1 )
    return 0LL;
  v4 = (unsigned __int8 *)(a1 + 8);
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( !a3 )
  {
    if ( *v4 == a2 )
      return v4;
LABEL_9:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= *(unsigned __int16 *)(a1 + 4) )
      return 0LL;
  }
  if ( v5 < *a3 || *v4 != a2 )
    goto LABEL_9;
  *a3 = v5;
  return v4;
}
