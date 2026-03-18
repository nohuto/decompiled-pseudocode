/*
 * XREFs of RtlValidSid @ 0x1405C8640
 * Callers:
 *     AdtpPackageParameters @ 0x140132AB8 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x14031EF00 (SepValidateCAPIDs.c)
 *     RtlpSetSecurityObject @ 0x1405C7BE0 (RtlpSetSecurityObject.c)
 *     RtlValidSecurityDescriptor @ 0x1405D6ED0 (RtlValidSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x14061C430 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140644F1C (SeCaptureSid.c)
 *     RtlConvertSidToUnicodeString @ 0x1406677F0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x140667B9C (RtlLengthSidAsUnicodeString.c)
 *     RtlAddMandatoryAce @ 0x140680534 (RtlAddMandatoryAce.c)
 *     RtlpValidateSidBuffer @ 0x140681054 (RtlpValidateSidBuffer.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140719AF0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140719FE0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140758BB0 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14078349C (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1408539E8 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x140855FB0 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x1408587D0 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x1408645C8 (PiAuCheckClientInteractive.c)
 *     NtManageHotPatch @ 0x1408920D0 (NtManageHotPatch.c)
 *     RtlAddAccessFilterAce @ 0x1408D0980 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1408D0CA0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408D0FD4 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1408E3400 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1408E399C (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408E3BB0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408E3D10 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408E3E6C (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x140942174 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x1409F7254 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409F7478 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  BOOLEAN result; // al

  if ( (unsigned __int64)Sid <= 0x7FFFFFFF0000LL )
    return 0;
  result = 1;
  if ( (*(_BYTE *)Sid & 0xF) != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return 0;
  return result;
}
