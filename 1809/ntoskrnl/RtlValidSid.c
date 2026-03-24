/*
 * XREFs of RtlValidSid @ 0x140631570
 * Callers:
 *     AdtpPackageParameters @ 0x140188D9C (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x140300C8C (SepValidateCAPIDs.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BD0D0 (SeCaptureSidAndAttributesArray.c)
 *     RtlpSetSecurityObject @ 0x1405CA240 (RtlpSetSecurityObject.c)
 *     SeCaptureSid @ 0x1406112D4 (SeCaptureSid.c)
 *     RtlAddMandatoryAce @ 0x1406308A0 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140630CC0 (SeCaptureSecurityDescriptor.c)
 *     RtlpValidateSidBuffer @ 0x140654DE4 (RtlpValidateSidBuffer.c)
 *     RtlConvertSidToUnicodeString @ 0x14065A6B0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x14065A9B4 (RtlLengthSidAsUnicodeString.c)
 *     RtlValidSecurityDescriptor @ 0x14069B990 (RtlValidSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD788 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE310 (_PnpGetPropertiesSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140727930 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB7C (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14081977C (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x14081BF40 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x14081E840 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x140829E5C (PiAuCheckClientInteractive.c)
 *     NtManageHotPatch @ 0x140858450 (NtManageHotPatch.c)
 *     RtlAddAccessFilterAce @ 0x140892700 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140892A30 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140892D64 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1408A4BA0 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1408A6458 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408A6674 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408A67D4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408A6930 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B40 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x1409C6A68 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409C6C8C (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlValidSid(PSID Sid)
{
  BOOLEAN result; // al

  if ( (unsigned __int64)Sid <= 0x7FFFFFFF0000LL )
    return 0;
  result = *(_BYTE *)Sid & 0xF;
  if ( result != 1 || *((_BYTE *)Sid + 1) > 0xFu )
    return 0;
  return result;
}
