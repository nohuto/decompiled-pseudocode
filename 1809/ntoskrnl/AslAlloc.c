/*
 * XREFs of AslAlloc @ 0x14067C780
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1405A21DC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1405A22C0 (SdbpOpenDatabaseInMemory.c)
 *     AslStringUpcaseToMultiByteN @ 0x14067C3EC (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x14067C4C4 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14067C5A0 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreate @ 0x14067E47C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x14071F230 (AslFileMappingCreateFromImageView.c)
 *     AslpFileGetVersionBlock @ 0x14071FDCC (AslpFileGetVersionBlock.c)
 *     SdbpCheckAllAttributes @ 0x140720344 (SdbpCheckAllAttributes.c)
 *     SdbpResolveMatchingFile @ 0x140721A74 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x140721CD4 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x1407223DC (AslPathToNetworkPathNt.c)
 *     SdbpInitializeSearchDBContext @ 0x140722578 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140722664 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x140722984 (SdbQueryDataExTagID.c)
 *     AslRegistryBuildMachinePath @ 0x1407234FC (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407235B0 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x1408E59D4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E6168 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E65E4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E73D4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x1408E7C30 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x1408E84B0 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1408E8EF0 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x1408E9114 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1408E9264 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x1408EA4E8 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EAAC4 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x1408EB580 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x1408EB6C0 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408EB7F0 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1408EBD04 (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapCreate @ 0x1408EE04C (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
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
