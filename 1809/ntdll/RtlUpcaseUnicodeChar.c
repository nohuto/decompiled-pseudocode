/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x18003AF90
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18000DB20 (RtlGetFullPathName_Ustr.c)
 *     RtlpComputeLangListCheckSum @ 0x18003ACBC (RtlpComputeLangListCheckSum.c)
 *     RtlpHashStringToAtom @ 0x180073500 (RtlpHashStringToAtom.c)
 *     towupper @ 0x1800959D0 (towupper.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x1800DF31C (HashStringToDwordCaseInsensitiveLen.c)
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter > 0x7Au )
    return SourceCharacter
         + *(_WORD *)(Nls844UnicodeUpcaseTable
                    + 2LL
                    * ((SourceCharacter & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                         + 2LL
                                                         * (((SourceCharacter >> 4) & 0xF)
                                                          + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                              + 2
                                                                                              * ((unsigned __int64)SourceCharacter >> 8))))));
  return SourceCharacter - 32;
}
