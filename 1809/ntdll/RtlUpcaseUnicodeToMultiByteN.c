/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x18006AC90
 * Callers:
 *     toupper @ 0x180095930 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EBE90 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18006ACE4 (UpcaseUnicodeToSingleByteNHelper.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  if ( NlsActiveCodePageIsUTF8 )
    return UpcaseUnicodeToUTF8NHelper(MultiByteString, MaxBytesInMultiByteString, BytesInUnicodeString >> 1);
  if ( NlsMbCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             UnicodeString,
             BytesInUnicodeString >> 1);
  return UpcaseUnicodeToSingleByteNHelper(
           (_DWORD)MultiByteString,
           MaxBytesInMultiByteString,
           (_DWORD)BytesInMultiByteString,
           (_DWORD)UnicodeString,
           BytesInUnicodeString >> 1,
           NlsUnicodeToAnsiData,
           NlsAnsiToUnicodeData);
}
