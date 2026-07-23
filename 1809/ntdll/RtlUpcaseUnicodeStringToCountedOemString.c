/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EBFA0
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x1800F8B50 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x18006A6C0 (RtlxUnicodeStringToOemSize.c)
 *     RtlpDidUnicodeToOemWork @ 0x18006AB9C (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18006AC30 (RtlUpcaseUnicodeToOemN.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS result; // eax
  char *StringRoutine; // rax
  int v8; // esi
  ULONG BytesInOemString; // [rsp+88h] [rbp+20h] BYREF

  result = RtlxUnicodeStringToOemSize((PWCH *)SourceString) - 1;
  if ( !result )
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return result;
  }
  if ( (unsigned int)result > 0xFFFF )
    return -1073741584;
  DestinationString->Length = result;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = result;
    StringRoutine = (char *)NtdllpAllocateStringRoutine((unsigned int)result);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)result > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v8 = RtlUpcaseUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInOemString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 && !RtlpDidUnicodeToOemWork(&DestinationString->Length, (__int64)SourceString) )
    v8 = -1073741470;
  if ( v8 >= 0 )
    v8 = 0;
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      NtdllpFreeStringRoutine(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
