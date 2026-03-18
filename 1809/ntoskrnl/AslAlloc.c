/*
 * XREFs of AslAlloc @ 0x14067C7A0
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1405A21DC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1405A22C0 (SdbpOpenDatabaseInMemory.c)
 *     AslStringUpcaseToMultiByteN @ 0x14067C40C (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x14067C4E4 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14067C5C0 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreate @ 0x14067E49C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x14071F250 (AslFileMappingCreateFromImageView.c)
 *     AslpFileGetVersionBlock @ 0x14071FDEC (AslpFileGetVersionBlock.c)
 *     SdbpCheckAllAttributes @ 0x140720364 (SdbpCheckAllAttributes.c)
 *     SdbpResolveMatchingFile @ 0x140721A94 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x140721CF4 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x1407223FC (AslPathToNetworkPathNt.c)
 *     SdbpInitializeSearchDBContext @ 0x140722598 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140722684 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x1407229A4 (SdbQueryDataExTagID.c)
 *     AslRegistryBuildMachinePath @ 0x14072351C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x1407235D0 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x1408E59F4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E6188 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E6604 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E73F4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x1408E7C50 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x1408E84D0 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1408E8F10 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x1408E9134 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1408E9284 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x1408EA508 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EAAE4 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x1408EB5A0 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x1408EB6E0 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408EB810 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1408EBD24 (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapCreate @ 0x1408EE06C (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
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
