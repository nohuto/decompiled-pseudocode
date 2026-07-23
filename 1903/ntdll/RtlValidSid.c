/*
 * XREFs of RtlValidSid @ 0x180014E00
 * Callers:
 *     RtlAddMandatoryAce @ 0x18000E5A0 (RtlAddMandatoryAce.c)
 *     RtlLengthSidAsUnicodeString @ 0x180013910 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 *     RtlValidSecurityDescriptor @ 0x180014D00 (RtlValidSecurityDescriptor.c)
 *     sub_18005287C @ 0x18005287C (sub_18005287C.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 *     sub_18007CF10 @ 0x18007CF10 (sub_18007CF10.c)
 *     sub_18007E3F0 @ 0x18007E3F0 (sub_18007E3F0.c)
 *     sub_18008817C @ 0x18008817C (sub_18008817C.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008AEA0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x1800E6EC0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E70D0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7240 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7580 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidSid(PSID Sid)
{
  return Sid && (*(_BYTE *)Sid & 0xF) == 1 && *((_BYTE *)Sid + 1) <= 0xFu;
}
