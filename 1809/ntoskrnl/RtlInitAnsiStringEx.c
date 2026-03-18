/*
 * XREFs of RtlInitAnsiStringEx @ 0x140180EE0
 * Callers:
 *     RtlInitStringEx @ 0x1402EC7C0 (RtlInitStringEx.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14073253C (RtlCreateUnicodeStringFromAsciiz.c)
 *     ExpCovReadFriendlyName @ 0x1408D7FF8 (ExpCovReadFriendlyName.c)
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
