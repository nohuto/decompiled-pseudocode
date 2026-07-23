/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x14067D420
 * Callers:
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x14067D2E0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x1406D0160 (RtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1400F4B90 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x1402ECF34 (UpcaseUnicodeToMultiByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1402ED070 (UpcaseUnicodeToUTF8NHelper.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  if ( BYTE4(NlsMbCodePageTag) )
    return UpcaseUnicodeToUTF8NHelper(
             OemString,
             MaxBytesInOemString,
             BytesInOemString,
             (__int64)UnicodeString,
             BytesInUnicodeString >> 1);
  if ( (_BYTE)NlsMbOemCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(
             OemString,
             MaxBytesInOemString,
             BytesInOemString,
             (unsigned __int16 *)UnicodeString,
             BytesInUnicodeString >> 1);
  return UpcaseUnicodeToSingleByteNHelper(
           OemString,
           MaxBytesInOemString,
           BytesInOemString,
           (unsigned __int16 *)UnicodeString,
           BytesInUnicodeString >> 1,
           NlsUnicodeToOemData,
           NlsOemToUnicodeData);
}
