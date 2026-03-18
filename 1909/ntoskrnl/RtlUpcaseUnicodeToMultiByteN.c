/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x140666A40
 * Callers:
 *     toupper @ 0x1401A2430 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1408CDE10 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1400CFAA0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x14030AFC4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x14030B0BC (UpcaseUnicodeToUTF8NHelper.c)
 *     RtlpIsUtf8Process @ 0x1406672F0 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx

  v6 = BytesInUnicodeString >> 1;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
    return UpcaseUnicodeToUTF8NHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (__int64)UnicodeString,
             v6);
  if ( (_BYTE)NlsMbCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(
             (int)MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             v6);
  return UpcaseUnicodeToSingleByteNHelper(
           (__int64)MultiByteString,
           MaxBytesInMultiByteString,
           BytesInMultiByteString,
           (unsigned __int16 *)UnicodeString,
           v6,
           NlsUnicodeToAnsiData,
           NlsAnsiToUnicodeData);
}
