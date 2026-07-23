/*
 * XREFs of RtlDowncaseUnicodeString @ 0x180070C80
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     NLS_DOWNCASE @ 0x180070D24 (NLS_DOWNCASE.c)
 */

NTSTATUS __cdecl RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v5; // ebx
  unsigned __int16 v6; // ax
  unsigned int v7; // r10d
  wchar_t v8; // ax
  __int64 v9; // r9
  unsigned int Length; // eax
  wchar_t *StringRoutine; // rax

  v5 = 0;
  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    v6 = SourceString->Length;
  }
  else
  {
    v6 = SourceString->Length;
    if ( SourceString->Length > DestinationString->MaximumLength )
      return -2147483643;
  }
  v7 = v6 >> 1;
  while ( v5 < v7 )
  {
    v8 = NLS_DOWNCASE(SourceString->Buffer[v5]);
    DestinationString->Buffer[v9] = v8;
    ++v5;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
