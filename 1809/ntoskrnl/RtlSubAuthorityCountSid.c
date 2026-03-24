/*
 * XREFs of RtlSubAuthorityCountSid @ 0x1400DCAE0
 * Callers:
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 *     SeQueryInformationToken @ 0x14063C350 (SeQueryInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x140654B60 (RtlGetAppContainerSidType.c)
 *     RtlpValidateSidBuffer @ 0x140654DE4 (RtlpValidateSidBuffer.c)
 *     SeQueryMandatoryLabel @ 0x140654E2C (SeQueryMandatoryLabel.c)
 *     RtlIsElevatedRid @ 0x140654ED0 (RtlIsElevatedRid.c)
 *     LookupSidInTable @ 0x1406B03A0 (LookupSidInTable.c)
 *     SepCheckCapabilities @ 0x1406B3248 (SepCheckCapabilities.c)
 *     RtlReplaceSidInSd @ 0x140893EE0 (RtlReplaceSidInSd.c)
 * Callees:
 *     <none>
 */

PUCHAR __stdcall RtlSubAuthorityCountSid(PSID Sid)
{
  return (PUCHAR)Sid + 1;
}
