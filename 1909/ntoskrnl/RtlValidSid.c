/*
 * XREFs of RtlValidSid @ 0x1405C8B40
 * Callers:
 *     AdtpPackageParameters @ 0x1401335A8 (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x14031E950 (SepValidateCAPIDs.c)
 *     RtlpSetSecurityObject @ 0x1405C80E0 (RtlpSetSecurityObject.c)
 *     RtlValidSecurityDescriptor @ 0x1405D7690 (RtlValidSecurityDescriptor.c)
 *     SeCaptureSidAndAttributesArray @ 0x14061DF40 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x140658A6C (SeCaptureSid.c)
 *     RtlConvertSidToUnicodeString @ 0x140694C10 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x140694FBC (RtlLengthSidAsUnicodeString.c)
 *     RtlAddMandatoryAce @ 0x14069E9D4 (RtlAddMandatoryAce.c)
 *     RtlpValidateSidBuffer @ 0x14069F5B4 (RtlpValidateSidBuffer.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14071B8E0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14071BDD0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x14075D440 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407857FC (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1408530E8 (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x1408556B0 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x140857ED0 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x140863CC8 (PiAuCheckClientInteractive.c)
 *     NtManageHotPatch @ 0x1408918F0 (NtManageHotPatch.c)
 *     RtlAddAccessFilterAce @ 0x1408D0280 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1408D05A0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x1408D08D4 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1408E2BF8 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1408E32A4 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408E34B8 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408E3618 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408E3774 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x140941BE4 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x1409F7164 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409F7388 (PiAuCreateStandardSecurityObject.c)
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
