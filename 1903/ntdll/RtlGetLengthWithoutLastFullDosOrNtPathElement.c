/*
 * XREFs of RtlGetLengthWithoutLastFullDosOrNtPathElement @ 0x180076F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetLengthWithoutLastFullDosOrNtPathElement(ULONG Flags, PUNICODE_STRING PathString, PULONG Length)
{
  return sub_180076F94(Flags, PathString, PathString, Length);
}
