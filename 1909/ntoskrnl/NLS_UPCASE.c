/*
 * XREFs of NLS_UPCASE @ 0x1400CFCA0
 * Callers:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400CF2CC (RtlpUpcaseUnicodeStringPrivate.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1400CFAA0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14030AFC4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x14030B0BC (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpHashStringToAtom @ 0x1405EC4C0 (RtlpHashStringToAtom.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F8430 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindNameInListWithStatus @ 0x140600430 (CmpFindNameInListWithStatus.c)
 *     CmpCheckLeaf @ 0x1406627D0 (CmpCheckLeaf.c)
 *     CmpCheckLexicographicalOrder @ 0x140664F10 (CmpCheckLexicographicalOrder.c)
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmpCompareInIndex @ 0x1406662F0 (CmpCompareInIndex.c)
 *     RtlPrefixUnicodeString @ 0x140666440 (RtlPrefixUnicodeString.c)
 *     RtlHashUnicodeString @ 0x140666720 (RtlHashUnicodeString.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406667C0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpComputeComponentHashes @ 0x140666AE0 (CmpComputeComponentHashes.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x140666EF0 (RtlCompareUnicodeString.c)
 *     CmpDoCompareKeyName @ 0x140667370 (CmpDoCompareKeyName.c)
 *     CmpGetNameControlBlock @ 0x140667B50 (CmpGetNameControlBlock.c)
 *     RtlFindUnicodeSubstring @ 0x14066A080 (RtlFindUnicodeSubstring.c)
 *     CmpCompareCompressedName @ 0x14066A180 (CmpCompareCompressedName.c)
 *     RtlCompareUnicodeStrings @ 0x1406AF3A0 (RtlCompareUnicodeStrings.c)
 *     CompareUnicodeStrings @ 0x1406B5100 (CompareUnicodeStrings.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BEB70 (ObpLookupDirectoryEntryEx.c)
 *     CmpHashUnicodeComponent @ 0x1406C533C (CmpHashUnicodeComponent.c)
 *     CmpCompareUnicodeString @ 0x1406CCDC0 (CmpCompareUnicodeString.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E67F0 (ObpCreateSymbolicLinkName.c)
 *     CmpHashCompressedComponent @ 0x1407151D0 (CmpHashCompressedComponent.c)
 *     AslStringPatternMatchW @ 0x14074C350 (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x14074CD5C (AslEnvVarQuery.c)
 *     CmpCompareTwoCompressedNames @ 0x1408322B8 (CmpCompareTwoCompressedNames.c)
 *     RtlSuffixUnicodeString @ 0x1408CDD70 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1408CED30 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x1408D4AC0 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x140923E10 (SdbpGetProcessHistory.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_UPCASE(unsigned __int16 a1)
{
  if ( a1 < 0x61u )
    return a1;
  if ( a1 <= 0x7Au )
    return a1 - 32;
  if ( Nls844UnicodeUpcaseTable && a1 >= 0xC0u )
    return a1
         + *(_WORD *)(Nls844UnicodeUpcaseTable
                    + 2LL
                    * ((a1 & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                         + 2LL
                                                         * (((unsigned __int8)a1 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                              + 2
                                                                                              * ((unsigned __int64)a1 >> 8))))));
  else
    return a1;
}
