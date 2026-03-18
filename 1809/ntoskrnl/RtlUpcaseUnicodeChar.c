/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1405D5C10
 * Callers:
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400175F0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     towupper @ 0x140197590 (towupper.c)
 *     ObpUseSystemDeviceMap @ 0x140582400 (ObpUseSystemDeviceMap.c)
 *     CmpHashUnicodeComponent @ 0x1405AF2C4 (CmpHashUnicodeComponent.c)
 *     CmpFindNameInListCellWithStatus @ 0x1405D0720 (CmpFindNameInListCellWithStatus.c)
 *     CmpWalkOneLevel @ 0x1405D4560 (CmpWalkOneLevel.c)
 *     CmpCompareInIndex @ 0x1405D51D0 (CmpCompareInIndex.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1405D5370 (CmpFindSubKeyInLeafWithStatus.c)
 *     PfpRpFileKeyUpdate @ 0x1405D56D0 (PfpRpFileKeyUpdate.c)
 *     CmpCompareCompressedName @ 0x1405D5D90 (CmpCompareCompressedName.c)
 *     CmpGetNameControlBlock @ 0x1405D6490 (CmpGetNameControlBlock.c)
 *     CmpCheckLeaf @ 0x1405D8BC0 (CmpCheckLeaf.c)
 *     CmpCheckLexicographicalOrder @ 0x1405DBCF0 (CmpCheckLexicographicalOrder.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E5320 (CmpPerformCompleteKcbCacheLookup.c)
 *     RtlpHashStringToAtom @ 0x1405F54C0 (RtlpHashStringToAtom.c)
 *     ObpLookupDirectoryEntryEx @ 0x140624DC0 (ObpLookupDirectoryEntryEx.c)
 *     CmpComputeComponentHashes @ 0x140641910 (CmpComputeComponentHashes.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     CmpCompareUnicodeString @ 0x1406B65B8 (CmpCompareUnicodeString.c)
 *     ObpCreateSymbolicLinkName @ 0x1406C4460 (ObpCreateSymbolicLinkName.c)
 *     CmpHashCompressedComponent @ 0x1406F83FC (CmpHashCompressedComponent.c)
 *     AslStringPatternMatchW @ 0x1407213B4 (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x140722254 (AslEnvVarQuery.c)
 *     CmpCompareTwoCompressedNames @ 0x1407F97CC (CmpCompareTwoCompressedNames.c)
 *     VrpAllocateDiffHiveEntry @ 0x14080D220 (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14080D578 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     SdbpGetProcessHistory @ 0x1408E7C50 (SdbpGetProcessHistory.c)
 *     VfUtilPrintCheckinString @ 0x140926214 (VfUtilPrintCheckinString.c)
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
