/*
 * XREFs of ExpAllocateStringRoutine @ 0x1406B2120
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x14015D998 (PnpDuplicateUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x14031F754 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlStringFromGUIDEx @ 0x14058B238 (RtlStringFromGUIDEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405AADA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x14064B0C0 (RtlUpcaseUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14065A5C0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x14065AA30 (RtlCreateUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x14067BAF0 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x14067BEE0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14067C140 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     CmpInitCmRM @ 0x14067F308 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x140683674 (CmpQueryNameString.c)
 *     RtlDowncaseUnicodeString @ 0x1406A2C00 (RtlDowncaseUnicodeString.c)
 *     RtlpQueryRegistryDirect @ 0x1406B52CC (RtlpQueryRegistryDirect.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406CEEE0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToOemString @ 0x1406D04B0 (RtlUnicodeStringToOemString.c)
 *     RtlDuplicateUnicodeString @ 0x1406D3C20 (RtlDuplicateUnicodeString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F3980 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406F3E88 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F5774 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406F5A30 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F6260 (PiDevCfgQueryObjectProperties.c)
 *     RtlOemStringToUnicodeString @ 0x1406F7050 (RtlOemStringToUnicodeString.c)
 *     PiDrvDbCreateNode @ 0x14073AB68 (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x14082B2E8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x1408313D8 (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14083D6D8 (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14083ECF8 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14083EE88 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x14083F118 (PiDrvDbSetupNodeHive.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BC0 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x14088FFD0 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140890230 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140894BB0 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DCC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}
