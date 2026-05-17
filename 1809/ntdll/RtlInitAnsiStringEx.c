/*
 * XREFs of RtlInitAnsiStringEx @ 0x1800265E0
 * Callers:
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180023150 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800CF388 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpAddRedirectedFunction @ 0x1800D7210 (LdrpAddRedirectedFunction.c)
 *     RtlInitStringEx @ 0x1800EC230 (RtlInitStringEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlInitAnsiStringEx(PANSI_STRING DestinationString, PCSZ SourceString)
{
  unsigned __int64 v2; // rax

  *(_QWORD *)&DestinationString->Length = 0LL;
  DestinationString->Buffer = (char *)SourceString;
  if ( !SourceString )
    return 0;
  v2 = -1LL;
  do
    ++v2;
  while ( SourceString[v2] );
  if ( v2 <= 0xFFFE )
  {
    DestinationString->Length = v2;
    DestinationString->MaximumLength = v2 + 1;
    return 0;
  }
  return -1073741562;
}
