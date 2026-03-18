/*
 * XREFs of RtlFindAceByType @ 0x1400A8F90
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x1400A9050 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x1400D9E74 (SepMandatorySubProcessToken.c)
 *     RtlIsUntrustedObject @ 0x140131B80 (RtlIsUntrustedObject.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6D70 (SepSetProcessTrustLabelAceForToken.c)
 *     SepGetScopedPolicySid @ 0x1402FE9B4 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF0CC (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140326A4C (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1405CA240 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x14062ED40 (RtlpInheritAcl2.c)
 *     RtlpCopyAces @ 0x14062FDC0 (RtlpCopyAces.c)
 *     SeQueryMandatoryLabel @ 0x140654E4C (SeQueryMandatoryLabel.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1408955D0 (RtlpValidFilterAclSubjectContext.c)
 *     SepSDContainsAttributeACE @ 0x1408A3C6C (SepSDContainsAttributeACE.c)
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
