/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x14067D480
 * Callers:
 *     toupper @ 0x140197650 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140891470 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1400F4B90 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1402ECF34 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1402ED070 (UpcaseUnicodeToUTF8NHelper.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  if ( BYTE1(NlsMbCodePageTag) )
    return UpcaseUnicodeToUTF8NHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (__int64)UnicodeString,
             BytesInUnicodeString >> 1);
  if ( (_BYTE)NlsMbCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(
             MultiByteString,
             MaxBytesInMultiByteString,
             BytesInMultiByteString,
             (unsigned __int16 *)UnicodeString,
             BytesInUnicodeString >> 1);
  return UpcaseUnicodeToSingleByteNHelper(
           MultiByteString,
           MaxBytesInMultiByteString,
           BytesInMultiByteString,
           (unsigned __int16 *)UnicodeString,
           BytesInUnicodeString >> 1,
           NlsUnicodeToAnsiData,
           NlsAnsiToUnicodeData);
}
