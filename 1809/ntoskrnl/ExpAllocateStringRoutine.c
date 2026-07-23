/*
 * XREFs of ExpAllocateStringRoutine @ 0x1406B33A0
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x14015DAB8 (PnpDuplicateUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14031FA44 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x14064C260 (RtlUpcaseUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14065B760 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x14067CC90 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14067D080 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14067D2E0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x140684814 (CmpQueryNameString.c)
 *     RtlDowncaseUnicodeString @ 0x1406A3E80 (RtlDowncaseUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1406B654C (RtlpQueryRegistryDirect.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406D0160 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x1406D1730 (RtlUnicodeStringToOemString.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F4C00 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406F5108 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F69F4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406F6CB0 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
 *     RtlOemStringToUnicodeString @ 0x1406F82D0 (RtlOemStringToUnicodeString.c)
 *     PiDrvDbCreateNode @ 0x14073BD38 (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x14082C4C8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x140832618 (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14083E918 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14083FF38 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbResolveSystemFilePath @ 0x1408400C8 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x140840358 (PiDrvDbSetupNodeHive.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140841E00 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x140891210 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140891470 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140895DF0 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14089600C (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}
