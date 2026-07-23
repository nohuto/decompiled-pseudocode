/*
 * XREFs of RtlValidSid @ 0x180014E00
 * Callers:
 *     RtlAddMandatoryAce @ 0x18000E5A0 (RtlAddMandatoryAce.c)
 *     RtlLengthSidAsUnicodeString @ 0x180013910 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     RtlpAddKnownAce @ 0x180014974 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x180014D00 (RtlValidSecurityDescriptor.c)
 *     EvtIntReportEventWorker @ 0x18005291C (EvtIntReportEventWorker.c)
 *     RtlpSetSecurityObject @ 0x18007BBE0 (RtlpSetSecurityObject.c)
 *     RtlpValidateSidBuffer @ 0x18007D5B0 (RtlpValidateSidBuffer.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18007EA90 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlpAddKnownObjectAce @ 0x18008881C (RtlpAddKnownObjectAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008B540 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E6FB0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E71C0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7330 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7670 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
