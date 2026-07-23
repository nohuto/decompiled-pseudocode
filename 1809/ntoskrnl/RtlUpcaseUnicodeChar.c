/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1405D6C10
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400175F0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x1401976F0 (towupper.c)
 *     ObpUseSystemDeviceMap @ 0x140583400 (ObpUseSystemDeviceMap.c)
 *     CmpHashUnicodeComponent @ 0x1405B02C4 (CmpHashUnicodeComponent.c)
 *     CmpFindNameInListCellWithStatus @ 0x1405D1720 (CmpFindNameInListCellWithStatus.c)
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpCompareInIndex @ 0x1405D61D0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405D6370 (CmpFindSubKeyInLeafWithStatus.c)
 *     PfpRpFileKeyUpdate @ 0x1405D66D0 (PfpRpFileKeyUpdate.c)
 *     CmpCompareCompressedName @ 0x1405D6D90 (CmpCompareCompressedName.c)
 *     CmpGetNameControlBlock @ 0x1405D7490 (CmpGetNameControlBlock.c)
 *     CmpCheckLeaf @ 0x1405D9BC0 (CmpCheckLeaf.c)
 *     CmpCheckLexicographicalOrder @ 0x1405DCCF0 (CmpCheckLexicographicalOrder.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E6320 (CmpPerformCompleteKcbCacheLookup.c)
 *     RtlpHashStringToAtom @ 0x1405F64C0 (RtlpHashStringToAtom.c)
 *     ObpLookupDirectoryEntryEx @ 0x140625DE0 (ObpLookupDirectoryEntryEx.c)
 *     CmpComputeComponentHashes @ 0x140642910 (CmpComputeComponentHashes.c)
 *     CmQueryValueKey @ 0x1406461B0 (CmQueryValueKey.c)
 *     CmpCompareUnicodeString @ 0x1406B7838 (CmpCompareUnicodeString.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C56E0 (ObpCreateSymbolicLinkName.c)
 *     CmpHashCompressedComponent @ 0x1406F967C (CmpHashCompressedComponent.c)
 *     AslStringPatternMatchW @ 0x140722634 (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x1407234D4 (AslEnvVarQuery.c)
 *     CmpCompareTwoCompressedNames @ 0x1407FA9AC (CmpCompareTwoCompressedNames.c)
 *     VrpAllocateDiffHiveEntry @ 0x14080E400 (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14080E758 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     SdbpGetProcessHistory @ 0x1408E8EF0 (SdbpGetProcessHistory.c)
 *     VfUtilPrintCheckinString @ 0x140927214 (VfUtilPrintCheckinString.c)
 * Callees:
 *     <none>
 */

WCHAR __stdcall RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter <= 0x7Au )
    return SourceCharacter - 32;
  return SourceCharacter
       + *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (SourceCharacter & 0xF)
                                                                 + 2
                                                                 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((SourceCharacter >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)SourceCharacter >> 8)]]];
}
