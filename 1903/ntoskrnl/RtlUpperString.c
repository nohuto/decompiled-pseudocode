/*
 * XREFs of RtlUpperString @ 0x1406535A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406541F0 (RtlpIsUtf8Process.c)
 */

void __stdcall RtlUpperString(PSTRING DestinationString, const STRING *SourceString)
{
  int Length; // ebp
  unsigned __int16 MaximumLength; // ax
  char *Buffer; // rdi
  char *v5; // rsi
  char v6; // bl

  Length = SourceString->Length;
  MaximumLength = DestinationString->MaximumLength;
  Buffer = DestinationString->Buffer;
  v5 = SourceString->Buffer;
  if ( (unsigned __int16)Length > MaximumLength )
    Length = MaximumLength;
  for ( DestinationString->Length = Length; Length; --Length )
  {
    v6 = *v5;
    RtlpIsUtf8Process(0LL);
    if ( (unsigned __int8)(v6 - 97) <= 0x19u )
      v6 ^= 0x20u;
    *Buffer = v6;
    ++v5;
    ++Buffer;
  }
}
