/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x1406910F0
 * Callers:
 *     EtwpQueryTokenPackageInfo @ 0x140690FC0 (EtwpQueryTokenPackageInfo.c)
 *     PsQueryProcessAttributes @ 0x140691084 (PsQueryProcessAttributes.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14069331C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408F1CC0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1408FEE9C (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x140092510 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, struct _KTHREAD *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspSysAppIdClaim, a3);
  if ( a3 )
    a3->Header.Type = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspPackagedAppClaim, a3);
}
