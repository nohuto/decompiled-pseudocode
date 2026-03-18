/*
 * XREFs of RtlSubAuthoritySid @ 0x14000A8C0
 * Callers:
 *     RtlIsElevatedRid @ 0x1405D7E90 (RtlIsElevatedRid.c)
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     SepValidateReferencedCachedHandles @ 0x14061E3F8 (SepValidateReferencedCachedHandles.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 *     RtlIsParentOfChildAppContainer @ 0x14067F9B4 (RtlIsParentOfChildAppContainer.c)
 *     NtCreateLowBoxToken @ 0x14067FAD0 (NtCreateLowBoxToken.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140680A48 (ObpVerifyCreatorAccessCheck.c)
 *     SepCheckCapabilities @ 0x1406D6070 (SepCheckCapabilities.c)
 *     SeQueryMandatoryLabel @ 0x1406D9A20 (SeQueryMandatoryLabel.c)
 *     LookupSidInTable @ 0x1406DC7D4 (LookupSidInTable.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140719AF0 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x140719FE0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14074A954 (PopCreateHiberFileSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x1407583EC (InitializeSidLookupTable.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14075EBF8 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140760CC0 (CmpAdminSystemSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x14077E200 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14078349C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x1408645C8 (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1408D1A90 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x1408D1F00 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1408D23B8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D2CBC (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408EB02C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14090E220 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x140915890 (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093E318 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140942174 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
