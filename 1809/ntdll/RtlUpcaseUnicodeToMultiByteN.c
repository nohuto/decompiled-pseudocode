/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x18006AC90
 * Callers:
 *     toupper @ 0x180095920 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EBE90 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18006ACE4 (UpcaseUnicodeToSingleByteNHelper.c)
 */

__int64 __fastcall RtlUpcaseUnicodeToMultiByteN(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( NlsActiveCodePageIsUTF8 )
    return UpcaseUnicodeToUTF8NHelper(a1, a2, a3, a4, a5 >> 1);
  if ( NlsMbCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(a1, a2, a3, a4, a5 >> 1);
  return UpcaseUnicodeToSingleByteNHelper(a1, a2, a3, a4, a5 >> 1, NlsUnicodeToAnsiData, NlsAnsiToUnicodeData);
}
