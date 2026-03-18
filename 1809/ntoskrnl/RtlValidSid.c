/*
 * XREFs of RtlValidSid @ 0x140631570
 * Callers:
 *     AdtpPackageParameters @ 0x140188D7C (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x140300B8C (SepValidateCAPIDs.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BD0D0 (SeCaptureSidAndAttributesArray.c)
 *     RtlpSetSecurityObject @ 0x1405CA240 (RtlpSetSecurityObject.c)
 *     SeCaptureSid @ 0x1406112D4 (SeCaptureSid.c)
 *     RtlAddMandatoryAce @ 0x1406308A0 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140630CC0 (SeCaptureSecurityDescriptor.c)
 *     RtlpValidateSidBuffer @ 0x140654E04 (RtlpValidateSidBuffer.c)
 *     RtlConvertSidToUnicodeString @ 0x14065A6D0 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x14065A9D4 (RtlLengthSidAsUnicodeString.c)
 *     RtlValidSecurityDescriptor @ 0x14069B9B0 (RtlValidSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD7A8 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE330 (_PnpGetPropertiesSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140727950 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB9C (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14081979C (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x14081BF60 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x14081E860 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x140829E7C (PiAuCheckClientInteractive.c)
 *     NtManageHotPatch @ 0x140858470 (NtManageHotPatch.c)
 *     RtlAddAccessFilterAce @ 0x140892720 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140892A50 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140892D84 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1408A4BC0 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1408A6478 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408A6694 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408A67F4 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408A6950 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B60 (DrvDbGetSecurityDescriptor.c)
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
