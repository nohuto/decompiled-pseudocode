/*
 * XREFs of RtlSubAuthorityCountSid @ 0x14000A8B0
 * Callers:
 *     RtlIsElevatedRid @ 0x1405D7E90 (RtlIsElevatedRid.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x14067FA50 (RtlGetAppContainerSidType.c)
 *     RtlpValidateSidBuffer @ 0x140681054 (RtlpValidateSidBuffer.c)
 *     SepCheckCapabilities @ 0x1406D6070 (SepCheckCapabilities.c)
 *     SeQueryMandatoryLabel @ 0x1406D9A20 (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x1406DC7D4 (LookupSidInTable.c)
 *     RtlReplaceSidInSd @ 0x1408D2080 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
