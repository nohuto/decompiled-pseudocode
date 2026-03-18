/*
 * XREFs of AslAlloc @ 0x14070EABC
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x14070ABDC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x14070AD08 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x14070C4A4 (AslFileMappingCreate.c)
 *     AslStringDuplicate @ 0x14070D108 (AslStringDuplicate.c)
 *     AslStringUpcaseToMultiByteN @ 0x14070E814 (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x14070E8E8 (SdbpCreateSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x14074C5C4 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x14074C818 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x14074CEFC (AslPathToNetworkPathNt.c)
 *     SdbpInitializeSearchDBContext @ 0x14074D098 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14074D184 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslRegistryBuildMachinePath @ 0x140775CE8 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140775D9C (AslRegistryBuildUserPath.c)
 *     AslFileMappingCreateFromImageView @ 0x140779848 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x1409213F4 (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x1409216A0 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1409222A8 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140922724 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409234E8 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x140923E10 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140924660 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1409250B0 (SdbpOpenCompressedDatabase.c)
 *     SdbpCheckAllAttributes @ 0x140925258 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x1409257F0 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140925940 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x140926D3C (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x140927324 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x140927D2C (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x140927E68 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140927F98 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1409284C8 (AslpProcessMatchRegNode.c)
 *     AslpFileGetVersionBlock @ 0x14092A0CC (AslpFileGetVersionBlock.c)
 *     AslpFileLargeMapCreate @ 0x14092B9E8 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AslAlloc(__int64 a1, SIZE_T a2)
{
  PVOID PoolWithTag; // rax
  PVOID v4; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x74705041u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, a2);
  return v4;
}
