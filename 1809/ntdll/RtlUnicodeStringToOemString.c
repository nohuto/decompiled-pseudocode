/*
 * XREFs of RtlUnicodeStringToOemString @ 0x18006A560
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlUnicodeToOemN @ 0x18006A620 (RtlUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x18006A6C0 (RtlxUnicodeStringToOemSize.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v6; // eax
  char *StringRoutine; // rax
  NTSTATUS v8; // edi
  int v10; // [rsp+78h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString);
  if ( v6 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v6 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (char *)NtdllpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v6 - 1) >= DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v8 = RtlUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         (unsigned int)&v10,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 )
  {
    DestinationString->Buffer[v10] = 0;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      NtdllpFreeStringRoutine((__int64)DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
