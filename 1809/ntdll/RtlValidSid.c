/*
 * XREFs of RtlValidSid @ 0x1800411A0
 * Callers:
 *     RtlLengthSidAsUnicodeString @ 0x18003F670 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180040940 (RtlConvertSidToUnicodeString.c)
 *     RtlpAddKnownAce @ 0x180040C44 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x1800410A0 (RtlValidSecurityDescriptor.c)
 *     EvtIntReportEventWorker @ 0x18004D38C (EvtIntReportEventWorker.c)
 *     RtlAddMandatoryAce @ 0x180072970 (RtlAddMandatoryAce.c)
 *     RtlpSetSecurityObject @ 0x18007C620 (RtlpSetSecurityObject.c)
 *     RtlpValidateSidBuffer @ 0x180081E18 (RtlpValidateSidBuffer.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180082C00 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlAddProcessTrustLabelAce @ 0x1800883A0 (RtlAddProcessTrustLabelAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008B1EC (RtlpAddKnownObjectAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E9BF0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E9E10 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9F80 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800EA2D0 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
