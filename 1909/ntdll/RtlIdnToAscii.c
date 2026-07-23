/*
 * XREFs of RtlIdnToAscii @ 0x18002C6C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x18002B040 (RtlpNameprepAsciiWorker.c)
 */

NTSTATUS __cdecl RtlIdnToAscii(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return RtlpNameprepAsciiWorker(
           Flags,
           (__int64)SourceString,
           SourceStringLength,
           (__int64)DestinationString,
           (__int64)DestinationStringLength,
           1);
}
