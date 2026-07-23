/*
 * XREFs of RtlIdnToNameprepUnicode @ 0x1800F8B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B040 @ 0x18002B040 (sub_18002B040.c)
 */

NTSTATUS __cdecl RtlIdnToNameprepUnicode(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return sub_18002B040(
           Flags,
           (__int64)SourceString,
           SourceStringLength,
           (__int64)DestinationString,
           (__int64)DestinationStringLength,
           0);
}
