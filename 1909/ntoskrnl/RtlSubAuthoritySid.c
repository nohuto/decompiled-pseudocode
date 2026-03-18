/*
 * XREFs of RtlSubAuthoritySid @ 0x14000A950
 * Callers:
 *     RtlIsElevatedRid @ 0x1405D8650 (RtlIsElevatedRid.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     SeQueryInformationToken @ 0x140600830 (SeQueryInformationToken.c)
 *     SepValidateReferencedCachedHandles @ 0x14061FF14 (SepValidateReferencedCachedHandles.c)
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 *     RtlIsParentOfChildAppContainer @ 0x14069CA5C (RtlIsParentOfChildAppContainer.c)
 *     NtCreateLowBoxToken @ 0x14069CB70 (NtCreateLowBoxToken.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14069EFA8 (ObpVerifyCreatorAccessCheck.c)
 *     SepCheckCapabilities @ 0x1406D58A0 (SepCheckCapabilities.c)
 *     SeQueryMandatoryLabel @ 0x1406D9690 (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x1406DD454 (LookupSidInTable.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14071B8E0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14071BDD0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14075B930 (PopCreateHiberFileSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x14075CC80 (InitializeSidLookupTable.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14076351C (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407656C8 (CmpAdminSystemSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x140780C20 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1407857FC (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x140863CC8 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1408D1390 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x1408D1800 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1408D1CB8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D25BC (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408EA934 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14090DC80 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1409152F0 (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093DD88 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140941BE4 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
