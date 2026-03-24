/*
 * XREFs of RtlInitializeSid @ 0x140655670
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x1400DCE20 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x1402EDFD0 (RtlInitializeSidEx.c)
 *     WdipAccessCheck @ 0x14030DD54 (WdipAccessCheck.c)
 *     RtlpSetSecurityObject @ 0x1405CA240 (RtlpSetSecurityObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140654704 (ObpVerifyCreatorAccessCheck.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD788 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE310 (_PnpGetPropertiesSecurityDescriptor.c)
 *     InitializeSidLookupTable @ 0x1407271B8 (InitializeSidLookupTable.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140733580 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407358C0 (CmpAdminSystemSecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x140739C88 (PiAuAllocateAndInitializeSid.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140747C88 (PopCreateHiberFileSecurityDescriptor.c)
 *     NtSetUuidSeed @ 0x1407586A0 (NtSetUuidSeed.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB7C (_PnpGetEnumSecurityDescriptor.c)
 *     PiAuCheckClientInteractive @ 0x140829E5C (PiAuCheckClientInteractive.c)
 *     RtlCapabilityCheck @ 0x1408938C0 (RtlCapabilityCheck.c)
 *     RtlGetAppContainerParent @ 0x140893D60 (RtlGetAppContainerParent.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x140894218 (RtlpCapabilityCheckSystemCapability.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AE06C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1408D0A10 (ExpFirmwareAccessAppContainerCheck.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8610 (CMFCreateSecurityDescriptor.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF28 (_SysCtxRegOpenCurrentUserKey.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B40 (DrvDbGetSecurityDescriptor.c)
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
