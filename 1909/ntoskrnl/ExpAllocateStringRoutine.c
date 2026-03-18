/*
 * XREFs of ExpAllocateStringRoutine @ 0x1406D4640
 * Callers:
 *     PnpDuplicateUnicodeString @ 0x14014570C (PnpDuplicateUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x140667020 (RtlUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x14066AA90 (RtlUpcaseUnicodeString.c)
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     CmpQueryNameString @ 0x14068BC28 (CmpQueryNameString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140694B10 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateUnicodeString @ 0x140694F30 (RtlCreateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x14069DD28 (RtlStringFromGUIDEx.c)
 *     RtlDowncaseUnicodeString @ 0x1406C5C40 (RtlDowncaseUnicodeString.c)
 *     RtlUnicodeStringToOemString @ 0x1406C7360 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406C7420 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1406C7500 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1406C7770 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlpQueryRegistryDirect @ 0x1406D7C54 (RtlpQueryRegistryDirect.c)
 *     RtlDuplicateUnicodeString @ 0x1406F4910 (RtlDuplicateUnicodeString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x1406FDF04 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgBuildIndirectString @ 0x1406FE698 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x1406FE968 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FEB14 (PiDevCfgQueryObjectProperties.c)
 *     RtlOemStringToUnicodeString @ 0x140713E00 (RtlOemStringToUnicodeString.c)
 *     PiDrvDbCreateNode @ 0x14075703C (PiDrvDbCreateNode.c)
 *     PiDevCfgAppendMultiSz @ 0x1408651C8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14086B498 (PiDevCfgSplitDriverConfigurationId.c)
 *     PiDrvDbGetNodeSystemRoot @ 0x14087813C (PiDrvDbGetNodeSystemRoot.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x140878F64 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140879B74 (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbResolveSystemFilePath @ 0x140879CE0 (PiDrvDbResolveSystemFilePath.c)
 *     PiDrvDbSetupNodeHive @ 0x14087A094 (PiDrvDbSetupNodeHive.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14087BCA0 (PiCreateDriverSwDeviceCallback.c)
 *     RtlOemStringToCountedUnicodeString @ 0x1408CDC60 (RtlOemStringToCountedUnicodeString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1408CDE10 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1408D23A0 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1408D25BC (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocateStringRoutine(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x67727453u);
}
