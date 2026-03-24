/*
 * XREFs of ExpAllocateStringRoutine @ 0x1406B2100
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x14015D9B8 (PnpDuplicateUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14031F854 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlStringFromGUIDEx @ 0x14058B238 (RtlStringFromGUIDEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x14064B0A0 (RtlUpcaseUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14065A5A0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x14065AA10 (RtlCreateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x14067BAD0 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14067BEC0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14067C120 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     CmpInitCmRM @ 0x14067F2E8 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x140683654 (CmpQueryNameString.c)
 *     RtlDowncaseUnicodeString @ 0x1406A2BE0 (RtlDowncaseUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1406B52AC (RtlpQueryRegistryDirect.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406CEEC0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x1406D0490 (RtlUnicodeStringToOemString.c)
 *     RtlDuplicateUnicodeString @ 0x1406D3C00 (RtlDuplicateUnicodeString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3960 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406F3E68 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F5754 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406F5A10 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F6240 (PiDevCfgQueryObjectProperties.c)
 *     RtlOemStringToUnicodeString @ 0x1406F7030 (RtlOemStringToUnicodeString.c)
 *     PiDrvDbCreateNode @ 0x14073AB48 (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x14082B2C8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408313B8 (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14083D6B8 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14083ECD8 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14083EE68 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x14083F0F8 (PiDrvDbSetupNodeHive.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BA0 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14088FFB0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140890210 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140894B90 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DAC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}
