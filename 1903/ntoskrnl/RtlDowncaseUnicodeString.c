/*
 * XREFs of RtlDowncaseUnicodeString @ 0x1406C7360
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x14011EE98 (NLS_DOWNCASE.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v5; // ebx
  unsigned __int16 v6; // ax
  unsigned int v7; // r10d
  unsigned __int16 v8; // ax
  __int64 v9; // r9
  unsigned int Length; // eax
  wchar_t *StringRoutine; // rax

  v5 = 0;
  if ( AllocateDestinationString )
  {
    Length = SourceString->Length;
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
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
