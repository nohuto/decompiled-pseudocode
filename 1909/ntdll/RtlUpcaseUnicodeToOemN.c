/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1800620B0
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x180061AD0 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180061BD0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8D20 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18006210C (UpcaseUnicodeToSingleByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x180062264 (RtlpIsUtf8Process.c)
 */

__int64 __fastcall RtlUpcaseUnicodeToOemN(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  int v6; // r10d
  int v7; // r11d

  LOBYTE(a1) = 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(a1, a2, a3) )
    return UpcaseUnicodeToUTF8NHelper(v7, v3, v4, v5, v6);
  if ( NlsMbOemCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(v7, v3, v4, v5, v6);
  return UpcaseUnicodeToSingleByteNHelper(v7, v3, v4, v5, v6, NlsUnicodeToOemData, NlsOemToUnicodeData);
}
