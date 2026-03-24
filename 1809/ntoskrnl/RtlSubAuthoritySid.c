/*
 * XREFs of RtlSubAuthoritySid @ 0x1400DCAF0
 * Callers:
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     SeQueryInformationToken @ 0x14063C350 (SeQueryInformationToken.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140654704 (ObpVerifyCreatorAccessCheck.c)
 *     RtlIsParentOfChildAppContainer @ 0x140654C34 (RtlIsParentOfChildAppContainer.c)
 *     SeQueryMandatoryLabel @ 0x140654E2C (SeQueryMandatoryLabel.c)
 *     RtlIsElevatedRid @ 0x140654ED0 (RtlIsElevatedRid.c)
 *     NtCreateLowBoxToken @ 0x140654F70 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x14065D65C (SepValidateReferencedCachedHandles.c)
 *     LookupSidInTable @ 0x1406B03A0 (LookupSidInTable.c)
 *     SepCheckCapabilities @ 0x1406B3248 (SepCheckCapabilities.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD788 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE310 (_PnpGetPropertiesSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x1407271B8 (InitializeSidLookupTable.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140733580 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407358C0 (CmpAdminSystemSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140747C88 (PopCreateHiberFileSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407586A0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB7C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x140829E5C (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1408938C0 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140893D60 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140894218 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DAC (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AE06C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1408D0A10 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8610 (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF28 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B40 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
