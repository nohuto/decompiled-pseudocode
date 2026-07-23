/*
 * XREFs of AslAlloc @ 0x14067D940
 * Callers:
 *     SdbInitDatabaseInMemory @ 0x1405A31DC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1405A32C0 (SdbpOpenDatabaseInMemory.c)
 *     AslStringUpcaseToMultiByteN @ 0x14067D5AC (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x14067D684 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14067D760 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingCreate @ 0x14067F63C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x1407204D0 (AslFileMappingCreateFromImageView.c)
 *     AslpFileGetVersionBlock @ 0x14072106C (AslpFileGetVersionBlock.c)
 *     SdbpCheckAllAttributes @ 0x1407215E4 (SdbpCheckAllAttributes.c)
 *     SdbpResolveMatchingFile @ 0x140722D14 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x140722F74 (AslEnvExpandStrings2.c)
 *     AslPathToNetworkPathNt @ 0x14072367C (AslPathToNetworkPathNt.c)
 *     SdbpInitializeSearchDBContext @ 0x140723818 (SdbpInitializeSearchDBContext.c)
 *     SdbpCreateSearchPathPartsFromPath @ 0x140723904 (SdbpCreateSearchPathPartsFromPath.c)
 *     SdbQueryDataExTagID @ 0x140723C24 (SdbQueryDataExTagID.c)
 *     AslRegistryBuildMachinePath @ 0x14072479C (AslRegistryBuildMachinePath.c)
 *     AslRegistryBuildUserPath @ 0x140724850 (AslRegistryBuildUserPath.c)
 *     SdbOpenDatabaseEx @ 0x1408E6C94 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E7428 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E78A4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E8694 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetProcessHistory @ 0x1408E8EF0 (SdbpGetProcessHistory.c)
 *     SdbResolveDatabaseEx @ 0x1408E9770 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1408EA1B0 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x1408EA3D4 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1408EA524 (AslStringAnsiToUnicode.c)
 *     AslPathWildcardFindFirst @ 0x1408EB7A8 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EBD84 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindFirst @ 0x1408EC840 (AslRegWildcardFindFirst.c)
 *     AslpAllocMatchNode @ 0x1408EC980 (AslpAllocMatchNode.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408ECAB0 (AslpPathWildcardAllocMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1408ECFC4 (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapCreate @ 0x1408EF30C (AslpFileLargeMapCreate.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
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
