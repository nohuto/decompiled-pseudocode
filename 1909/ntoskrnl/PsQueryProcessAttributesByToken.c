/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x140684660
 * Callers:
 *     EtwpQueryTokenPackageInfo @ 0x140684530 (EtwpQueryTokenPackageInfo.c)
 *     PsQueryProcessAttributes @ 0x1406845F4 (PsQueryProcessAttributes.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14068688C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1408F15D0 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1408FE7F0 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x1400CF830 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, struct _KTHREAD *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspSysAppIdClaim, a3);
  if ( a3 )
    a3->Header.Type = SeSecurityAttributePresent(a1, (const UNICODE_STRING *)&PspPackagedAppClaim, a3);
}
