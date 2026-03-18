/*
 * XREFs of RtlInitAnsiStringEx @ 0x14018D0A0
 * Callers:
 *     RtlInitStringEx @ 0x14030B070 (RtlInitStringEx.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14075DCB0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     ExpCovReadFriendlyName @ 0x140915220 (ExpCovReadFriendlyName.c)
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
