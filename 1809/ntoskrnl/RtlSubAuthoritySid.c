/*
 * XREFs of RtlSubAuthoritySid @ 0x1400DCB70
 * Callers:
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406558C4 (ObpVerifyCreatorAccessCheck.c)
 *     RtlIsParentOfChildAppContainer @ 0x140655DF4 (RtlIsParentOfChildAppContainer.c)
 *     SeQueryMandatoryLabel @ 0x140655FEC (SeQueryMandatoryLabel.c)
 *     RtlIsElevatedRid @ 0x140656090 (RtlIsElevatedRid.c)
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 *     SepValidateReferencedCachedHandles @ 0x14065E81C (SepValidateReferencedCachedHandles.c)
 *     LookupSidInTable @ 0x1406B1640 (LookupSidInTable.c)
 *     SepCheckCapabilities @ 0x1406B44E8 (SepCheckCapabilities.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FEA28 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FF5B0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x140728458 (InitializeSidLookupTable.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140734770 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140736AB0 (CmpAdminSystemSecurityDescriptor.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140748E78 (PopCreateHiberFileSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x140759890 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075DD6C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x14082B05C (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x140894B20 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140894FC0 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140895478 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14089600C (RtlpGetTokenNamedObjectPath.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AF2CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1408D1CD0 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D98D0 (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140904E00 (DrvDbGetSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

PULONG __stdcall RtlSubAuthoritySid(PSID Sid, ULONG SubAuthority)
{
  return (PULONG)((char *)Sid + 4 * SubAuthority + 8);
}
