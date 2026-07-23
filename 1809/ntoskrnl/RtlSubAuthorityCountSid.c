/*
 * XREFs of RtlSubAuthorityCountSid @ 0x1400DCB60
 * Callers:
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x140655D20 (RtlGetAppContainerSidType.c)
 *     RtlpValidateSidBuffer @ 0x140655FA4 (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x140655FEC (SeQueryMandatoryLabel.c)
 *     RtlIsElevatedRid @ 0x140656090 (RtlIsElevatedRid.c)
 *     LookupSidInTable @ 0x1406B1640 (LookupSidInTable.c)
 *     SepCheckCapabilities @ 0x1406B44E8 (SepCheckCapabilities.c)
 *     RtlReplaceSidInSd @ 0x140895140 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
