/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x140626980
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14060B60C (SeQuerySigningPolicyWorker.c)
 *     PsQueryProcessAttributes @ 0x14062691C (PsQueryProcessAttributes.c)
 *     EtwpQueryTokenPackageInfo @ 0x14066DF0C (EtwpQueryTokenPackageInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406A078C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408B60D0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C2F7C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x1400A6F90 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspPackagedAppClaim);
}
