/*
 * XREFs of RtlInitStringEx @ 0x14030AB20
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x14018D920 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitStringEx(PSTRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
