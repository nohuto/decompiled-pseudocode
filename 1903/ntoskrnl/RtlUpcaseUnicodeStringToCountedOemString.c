/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x1406C8F20
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x1406C8D70 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlpDidUnicodeToOemWork @ 0x1406C8FE0 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1406C9070 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406C9110 (RtlxUnicodeStringToOemSize.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  ULONG v7; // edx
  int v8; // esi
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
  v8 = RtlUpcaseUnicodeToOemN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInOemString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 && !(unsigned __int8)RtlpDidUnicodeToOemWork(DestinationString, SourceString) )
    v8 = -1073741470;
  if ( v8 >= 0 )
    v8 = 0;
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePoolWithTag(DestinationString->Buffer, v7);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
