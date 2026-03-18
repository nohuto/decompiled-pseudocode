/*
 * XREFs of AslAlloc @ 0x14070CCDC
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x140708DFC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x140708F28 (SdbpOpenDatabaseInMemory.c)
 *     AslFileMappingCreate @ 0x14070A6C4 (AslFileMappingCreate.c)
 *     AslStringDuplicate @ 0x14070B328 (AslStringDuplicate.c)
 *     AslStringUpcaseToMultiByteN @ 0x14070CA34 (AslStringUpcaseToMultiByteN.c)
 *     SdbpCreateSearchDBContext @ 0x14070CB08 (SdbpCreateSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x14074BB34 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x14074BD88 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x14074C46C (AslPathToNetworkPathNt.c)
 *     SdbpInitializeSearchDBContext @ 0x14074C608 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x14074C6F4 (SdbpCreateSearchPathPartsFromPath.c)
 *     AslRegistryBuildMachinePath @ 0x140772708 (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407727BC (AslRegistryBuildUserPath.c)
 *     AslFileMappingCreateFromImageView @ 0x140776268 (AslFileMappingCreateFromImageView.c)
 *     SdbOpenDatabaseEx @ 0x140921994 (SdbOpenDatabaseEx.c)
 *     SdbQueryDataExTagID @ 0x140921C40 (SdbQueryDataExTagID.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140922848 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x140922CC4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x140923A88 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x1409243B0 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x140924C00 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140925650 (SdbpOpenCompressedDatabase.c)
 *     SdbpCheckAllAttributes @ 0x1409257F8 (SdbpCheckAllAttributes.c)
 *     AslGuidToString_UStr @ 0x140925D90 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x140925EE0 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x1409272DC (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1409278C4 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x1409282CC (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x140928408 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x140928538 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x140928A68 (AslpProcessMatchRegNode.c)
 *     AslpFileGetVersionBlock @ 0x14092A66C (AslpFileGetVersionBlock.c)
 *     AslpFileLargeMapCreate @ 0x14092BF74 (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
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
