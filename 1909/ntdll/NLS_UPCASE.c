/*
 * XREFs of NLS_UPCASE @ 0x18001A234
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x180018A84 (RtlpComputeLangListCheckSum.c)
 *     RtlpQueryEnvironmentCache @ 0x180019D38 (RtlpQueryEnvironmentCache.c)
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x180019FB0 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18001A040 (RtlCompareUnicodeStrings.c)
 *     RtlpScanEnvironment @ 0x18001A0D8 (RtlpScanEnvironment.c)
 *     RtlGetFullPathName_Ustr @ 0x180027B70 (RtlGetFullPathName_Ustr.c)
 *     RtlpHashStringToAtom @ 0x18005B720 (RtlpHashStringToAtom.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18006210C (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlFindUnicodeSubstring @ 0x180086750 (RtlFindUnicodeSubstring.c)
 *     WerEscalationLazyInit @ 0x1800DD0D0 (WerEscalationLazyInit.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1800E3CE0 (RtlUpcaseUnicodeToCustomCPN.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1800E3E30 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1800E3F30 (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800F5664 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlIsValidOemCharacter @ 0x1800F6A00 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_UPCASE(unsigned __int16 a1)
{
  if ( a1 < 0x61u )
    return a1;
  if ( a1 <= 0x7Au )
    return a1 - 32;
  if ( !Nls844UnicodeUpcaseTable || a1 < 0xC0u )
    return a1;
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
}
