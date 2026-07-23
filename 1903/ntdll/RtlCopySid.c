/*
 * XREFs of RtlCopySid @ 0x180014AC0
 * Callers:
 *     RtlAddMandatoryAce @ 0x18000E5A0 (RtlAddMandatoryAce.c)
 *     sub_18000F3AC @ 0x18000F3AC (sub_18000F3AC.c)
 *     sub_180014974 @ 0x180014974 (sub_180014974.c)
 *     RtlCreateAndSetSD @ 0x1800686E0 (RtlCreateAndSetSD.c)
 *     sub_18008817C @ 0x18008817C (sub_18008817C.c)
 *     RtlAddProcessTrustLabelAce @ 0x18008AEA0 (RtlAddProcessTrustLabelAce.c)
 *     RtlCopySidAndAttributesArray @ 0x1800E49F0 (RtlCopySidAndAttributesArray.c)
 *     RtlAddAccessFilterAce @ 0x1800E6EC0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E70D0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7240 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E7580 (RtlAddScopedPolicyIDAce.c)
 * Callees:
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySid(ULONG DestinationSidLength, PSID DestinationSid, PSID SourceSid)
{
  ULONG v3; // eax

  v3 = 4 * *((unsigned __int8 *)SourceSid + 1) + 8;
  if ( v3 > DestinationSidLength )
    return -1073741789;
  memmove(DestinationSid, SourceSid, v3);
  return 0;
}
