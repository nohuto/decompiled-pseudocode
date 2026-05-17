/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x18003AF90
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18000DB20 (RtlGetFullPathName_Ustr.c)
 *     RtlpComputeLangListCheckSum @ 0x18003ACBC (RtlpComputeLangListCheckSum.c)
 *     RtlpHashStringToAtom @ 0x1800734F0 (RtlpHashStringToAtom.c)
 *     towupper @ 0x1800959C0 (towupper.c)
 *     HashStringToDwordCaseInsensitiveLen @ 0x1800DF31C (HashStringToDwordCaseInsensitiveLen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpcaseUnicodeChar(unsigned __int16 a1)
{
  if ( a1 < 0x61u )
    return a1;
  if ( a1 > 0x7Au )
    return (unsigned __int16)(a1
                            + *(_WORD *)(Nls844UnicodeUpcaseTable
                                       + 2LL
                                       * ((a1 & 0xF)
                                        + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                            + 2LL
                                                                            * (((a1 >> 4) & 0xF)
                                                                             + (unsigned int)*(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * ((unsigned __int64)a1 >> 8)))))));
  return (unsigned int)a1 - 32;
}
