/*
 * XREFs of NLS_UPCASE @ 0x140092980
 * Callers:
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140091FAC (RtlpUpcaseUnicodeStringPrivate.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140092780 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14030B514 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x14030B60C (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpHashStringToAtom @ 0x1405EBCF0 (RtlpHashStringToAtom.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405F73E0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindNameInListWithStatus @ 0x1405FEA00 (CmpFindNameInListWithStatus.c)
 *     CmpHashUnicodeComponent @ 0x140632D10 (CmpHashUnicodeComponent.c)
 *     CmpCheckLeaf @ 0x14064F610 (CmpCheckLeaf.c)
 *     CmpCheckLexicographicalOrder @ 0x140651E10 (CmpCheckLexicographicalOrder.c)
 *     CmpWalkOneLevel @ 0x140652490 (CmpWalkOneLevel.c)
 *     CmpCompareInIndex @ 0x1406531F0 (CmpCompareInIndex.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     RtlHashUnicodeString @ 0x140653620 (RtlHashUnicodeString.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1406536C0 (CmpFindSubKeyInLeafWithStatus.c)
 *     CmpComputeComponentHashes @ 0x1406539E0 (CmpComputeComponentHashes.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x140653DF0 (RtlCompareUnicodeString.c)
 *     CmpDoCompareKeyName @ 0x140654270 (CmpDoCompareKeyName.c)
 *     CmpGetNameControlBlock @ 0x140654A50 (CmpGetNameControlBlock.c)
 *     RtlFindUnicodeSubstring @ 0x140657060 (RtlFindUnicodeSubstring.c)
 *     CmpCompareCompressedName @ 0x140657160 (CmpCompareCompressedName.c)
 *     CompareUnicodeStrings @ 0x1406B2160 (CompareUnicodeStrings.c)
 *     RtlCompareUnicodeStrings @ 0x1406B9CB0 (RtlCompareUnicodeStrings.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BF0C0 (ObpLookupDirectoryEntryEx.c)
 *     CmpCompareUnicodeString @ 0x1406CE020 (CmpCompareUnicodeString.c)
 *     ObpCreateSymbolicLinkName @ 0x1406E5900 (ObpCreateSymbolicLinkName.c)
 *     CmpHashCompressedComponent @ 0x1407133F0 (CmpHashCompressedComponent.c)
 *     AslStringPatternMatchW @ 0x14074B8C0 (AslStringPatternMatchW.c)
 *     AslEnvVarQuery @ 0x14074C2CC (AslEnvVarQuery.c)
 *     CmpCompareTwoCompressedNames @ 0x140832C58 (CmpCompareTwoCompressedNames.c)
 *     RtlSuffixUnicodeString @ 0x1408CE490 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1408CF430 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x1408D51C0 (RtlIsValidOemCharacter.c)
 *     SdbpGetProcessHistory @ 0x1409243B0 (SdbpGetProcessHistory.c)
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
