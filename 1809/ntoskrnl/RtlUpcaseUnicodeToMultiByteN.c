/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN @ 0x14067C2E0
 * Callers:
 *     toupper @ 0x1401974F0 (toupper.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x140890230 (RtlUpcaseUnicodeStringToAnsiString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1400F4AF0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1402ECC44 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1402ECD80 (UpcaseUnicodeToUTF8NHelper.c)
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
