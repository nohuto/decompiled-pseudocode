/*
 * XREFs of RtlSubAuthoritySid @ 0x1400DCAD0
 * Callers:
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     SeQueryInformationToken @ 0x14063C370 (SeQueryInformationToken.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140654724 (ObpVerifyCreatorAccessCheck.c)
 *     RtlIsParentOfChildAppContainer @ 0x140654C54 (RtlIsParentOfChildAppContainer.c)
 *     SeQueryMandatoryLabel @ 0x140654E4C (SeQueryMandatoryLabel.c)
 *     RtlIsElevatedRid @ 0x140654EF0 (RtlIsElevatedRid.c)
 *     NtCreateLowBoxToken @ 0x140654F90 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x14065D67C (SepValidateReferencedCachedHandles.c)
 *     LookupSidInTable @ 0x1406B03C0 (LookupSidInTable.c)
 *     SepCheckCapabilities @ 0x1406B3268 (SepCheckCapabilities.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD7A8 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE330 (_PnpGetPropertiesSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x1407271D8 (InitializeSidLookupTable.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407335A0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407358E0 (CmpAdminSystemSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140747CA8 (PopCreateHiberFileSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407586C0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB9C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x140829E7C (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1408938E0 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140893D80 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140894238 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DCC (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AE08C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1408D0A30 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8630 (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF48 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B60 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
