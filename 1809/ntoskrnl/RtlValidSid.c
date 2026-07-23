/*
 * XREFs of RtlValidSid @ 0x140632590
 * Callers:
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 *     SepValidateCAPIDs @ 0x140300E7C (SepValidateCAPIDs.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BE0D0 (SeCaptureSidAndAttributesArray.c)
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 *     SeCaptureSid @ 0x1406122D4 (SeCaptureSid.c)
 *     RtlAddMandatoryAce @ 0x1406318C0 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 *     RtlpValidateSidBuffer @ 0x140655FA4 (RtlpValidateSidBuffer.c)
 *     RtlConvertSidToUnicodeString @ 0x14065B870 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x14065BB74 (RtlLengthSidAsUnicodeString.c)
 *     RtlValidSecurityDescriptor @ 0x14069CB50 (RtlValidSecurityDescriptor.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FEA28 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FF5B0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x140728BD0 (RtlAddProcessTrustLabelAce.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075DD6C (_PnpGetEnumSecurityDescriptor.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14081A97C (IopCheckGetQuotaBufferValidity.c)
 *     IoCheckQuotaBufferValidity @ 0x14081D140 (IoCheckQuotaBufferValidity.c)
 *     NtQueryQuotaInformationFile @ 0x14081FA40 (NtQueryQuotaInformationFile.c)
 *     PiAuCheckClientInteractive @ 0x14082B05C (PiAuCheckClientInteractive.c)
 *     NtManageHotPatch @ 0x1408596B0 (NtManageHotPatch.c)
 *     RtlAddAccessFilterAce @ 0x140893960 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140893C90 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140893FC4 (RtlpAddKnownObjectAce.c)
 *     SepReadSingleCap @ 0x1408A5E00 (SepReadSingleCap.c)
 *     SddlAddAccessFilterAce @ 0x1408A76B8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408A78D4 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408A7A34 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408A7B90 (SddlAddScopedPolicyIDAce.c)
 *     DrvDbGetSecurityDescriptor @ 0x140904E00 (DrvDbGetSecurityDescriptor.c)
 *     PiAuCreateUserSids @ 0x1409C7A68 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409C7C8C (PiAuCreateStandardSecurityObject.c)
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
