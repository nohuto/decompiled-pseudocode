/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x140625960
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14060A60C (SeQuerySigningPolicyWorker.c)
 *     PsQueryProcessAttributes @ 0x1406258FC (PsQueryProcessAttributes.c)
 *     EtwpQueryTokenPackageInfo @ 0x14066CD4C (EtwpQueryTokenPackageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14069F4CC (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408B4E10 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C1CBC (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x1400A7050 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspPackagedAppClaim);
}
