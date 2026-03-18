/*
 * XREFs of EngMultiByteToUnicodeN @ 0x1C00D8B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngMultiByteToUnicodeN(
        LPWSTR UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCHAR MultiByteString,
        ULONG BytesInMultiByteString)
{
  RtlMultiByteToUnicodeN(
    UnicodeString,
    MaxBytesInUnicodeString,
    BytesInUnicodeString,
    MultiByteString,
    BytesInMultiByteString);
}
