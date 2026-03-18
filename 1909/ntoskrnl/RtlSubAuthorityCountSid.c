/*
 * XREFs of RtlSubAuthorityCountSid @ 0x14000A940
 * Callers:
 *     RtlIsElevatedRid @ 0x1405D8650 (RtlIsElevatedRid.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x14069CAF0 (RtlGetAppContainerSidType.c)
 *     RtlpValidateSidBuffer @ 0x14069F5B4 (RtlpValidateSidBuffer.c)
 *     SepCheckCapabilities @ 0x1406D58A0 (SepCheckCapabilities.c)
 *     SeQueryMandatoryLabel @ 0x1406D9690 (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x1406DD454 (LookupSidInTable.c)
 *     RtlReplaceSidInSd @ 0x1408D1980 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
