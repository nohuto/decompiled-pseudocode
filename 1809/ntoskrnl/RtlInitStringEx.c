/*
 * XREFs of RtlInitStringEx @ 0x1402ECAB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140181040 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitStringEx(PSTRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
