/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x18006AC30
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18006A1D0 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18006A470 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EBFA0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18006ACE4 (UpcaseUnicodeToSingleByteNHelper.c)
 */

__int64 __fastcall RtlUpcaseUnicodeToOemN(int a1, int a2, int a3, int a4, unsigned int a5)
{
  if ( NlsOemCodePageIsUTF8 )
    return UpcaseUnicodeToUTF8NHelper(a1, a2, a3, a4, a5 >> 1);
  if ( NlsMbOemCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(a1, a2, a3, a4, a5 >> 1);
  return UpcaseUnicodeToSingleByteNHelper(a1, a2, a3, a4, a5 >> 1, NlsUnicodeToOemData, NlsOemToUnicodeData);
}
