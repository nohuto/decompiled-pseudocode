/*
 * XREFs of RtlInitStringEx @ 0x14030B070
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x14018D0A0 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitStringEx(PSTRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
