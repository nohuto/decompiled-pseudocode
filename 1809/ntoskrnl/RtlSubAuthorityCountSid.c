/*
 * XREFs of RtlSubAuthorityCountSid @ 0x1400DCAC0
 * Callers:
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 *     SeQueryInformationToken @ 0x14063C370 (SeQueryInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x140654B80 (RtlGetAppContainerSidType.c)
 *     RtlpValidateSidBuffer @ 0x140654E04 (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x140654E4C (SeQueryMandatoryLabel.c)
 *     RtlIsElevatedRid @ 0x140654EF0 (RtlIsElevatedRid.c)
 *     LookupSidInTable @ 0x1406B03C0 (LookupSidInTable.c)
 *     SepCheckCapabilities @ 0x1406B3268 (SepCheckCapabilities.c)
 *     RtlReplaceSidInSd @ 0x140893F00 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
