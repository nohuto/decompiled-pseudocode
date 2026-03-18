/*
 * XREFs of RtlUpperString @ 0x140679860
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpperChar @ 0x1406798C0 (RtlUpperChar.c)
 */

void __stdcall RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  int MaximumLength; // ebx
  char *Buffer; // rsi
  char *v4; // rdi

  MaximumLength = DestinationString->MaximumLength;
  Buffer = SourceString->Buffer;
  v4 = DestinationString->Buffer;
  if ( SourceString->Length <= (unsigned __int16)MaximumLength )
    MaximumLength = SourceString->Length;
  for ( DestinationString->Length = MaximumLength; MaximumLength; --MaximumLength )
    *v4++ = RtlUpperChar(*Buffer++);
}
