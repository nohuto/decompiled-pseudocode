/*
 * XREFs of RtlInitializeSid @ 0x140655690
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1400DCE00 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x1402EDED0 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x14030DC54 (WdipAccessCheck.c)
 *     RtlpSetSecurityObject @ 0x1405CA240 (RtlpSetSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140654724 (ObpVerifyCreatorAccessCheck.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD7A8 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE330 (_PnpGetPropertiesSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x1407271D8 (InitializeSidLookupTable.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407335A0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407358E0 (CmpAdminSystemSecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x140739CA8 (PiAuAllocateAndInitializeSid.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140747CA8 (PopCreateHiberFileSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407586C0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB9C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x140829E7C (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1408938E0 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140893D80 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140894238 (RtlpCapabilityCheckSystemCapability.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AE08C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1408D0A30 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8630 (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF48 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B60 (DrvDbGetSecurityDescriptor.c)
 *     SepVariableInitialization @ 0x1409AB3EC (SepVariableInitialization.c)
 *     PopNetInitialize @ 0x1409B2AB4 (PopNetInitialize.c)
 *     IopCreateUmdfDirectory @ 0x1409D9F10 (IopCreateUmdfDirectory.c)
 *     PopCreateTimebrokerServiceSid @ 0x1409DCBB4 (PopCreateTimebrokerServiceSid.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1409DD530 (CmpInitializeTrustedInstallerSid.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(struct _SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
