/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x18006AC30
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18006A1D0 (RtlDnsHostNameToComputerName.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x18006A470 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EBFA0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     UpcaseUnicodeToSingleByteNHelper @ 0x18006ACE4 (UpcaseUnicodeToSingleByteNHelper.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  if ( NlsOemCodePageIsUTF8 )
    return UpcaseUnicodeToUTF8NHelper(OemString, MaxBytesInOemString, BytesInUnicodeString >> 1);
  if ( NlsMbOemCodePageTag )
    return UpcaseUnicodeToMultiByteNHelper(
             OemString,
             MaxBytesInOemString,
             BytesInOemString,
             UnicodeString,
             BytesInUnicodeString >> 1);
  return UpcaseUnicodeToSingleByteNHelper(
           (_DWORD)OemString,
           MaxBytesInOemString,
           (_DWORD)BytesInOemString,
           (_DWORD)UnicodeString,
           BytesInUnicodeString >> 1,
           NlsUnicodeToOemData,
           NlsOemToUnicodeData);
}
