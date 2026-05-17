/*
 * XREFs of RtlInitAnsiStringEx @ 0x180021240
 * Callers:
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180021280 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800CDC50 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpAddRedirectedFunction @ 0x1800D5124 (LdrpAddRedirectedFunction.c)
 *     RtlInitStringEx @ 0x1800E8F20 (RtlInitStringEx.c)
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
