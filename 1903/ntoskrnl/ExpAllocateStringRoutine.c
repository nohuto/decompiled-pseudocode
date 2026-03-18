/*
 * XREFs of ExpAllocateStringRoutine @ 0x1406D4F60
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x14014506C (PnpDuplicateUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140653F20 (RtlUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x140657A70 (RtlUpcaseUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1406676F0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x140667B10 (RtlCreateUnicodeString.c)
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x1406986B8 (CmpQueryNameString.c)
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 *     RtlDowncaseUnicodeString @ 0x1406C7360 (RtlDowncaseUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x1406C8B10 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406C8BD0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1406C8CB0 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406C8F20 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlpQueryRegistryDirect @ 0x1406D7E74 (RtlpQueryRegistryDirect.c)
 *     RtlDuplicateUnicodeString @ 0x1406F2E70 (RtlDuplicateUnicodeString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FBBB4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406FC124 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1406FC8B8 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406FCB88 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FCD34 (PiDevCfgQueryObjectProperties.c)
 *     RtlOemStringToUnicodeString @ 0x140712020 (RtlOemStringToUnicodeString.c)
 *     PiDrvDbCreateNode @ 0x1407565AC (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x140865AC8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14086BD98 (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x140878A3C (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140879864 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14087A474 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbResolveSystemFilePath @ 0x14087A5E0 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x14087A994 (PiDrvDbSetupNodeHive.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087C5A0 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1408CE380 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1408CE530 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1408D2AA0 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D2CBC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}
