/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x14067D2E0
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x14067D140 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 *     RtlxUnicodeStringToOemSize @ 0x14067D050 (RtlxUnicodeStringToOemSize.c)
 *     RtlpDidUnicodeToOemWork @ 0x14067D3A0 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x14067D420 (RtlUpcaseUnicodeToOemN.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  int v7; // esi
  char *StringRoutine; // rax
  ULONG BytesInOemString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString) - 1;
  if ( !v6 )
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return 0;
  }
  if ( v6 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v6;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (char *)ExpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)v6 > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v7 = RtlUpcaseUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInOemString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v7 >= 0 && !(unsigned __int8)RtlpDidUnicodeToOemWork(DestinationString, SourceString) )
    v7 = -1073741470;
  if ( v7 >= 0 )
    v7 = 0;
  if ( v7 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v7;
}
