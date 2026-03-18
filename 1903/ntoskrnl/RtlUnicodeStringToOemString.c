/*
 * XREFs of RtlUnicodeStringToOemString @ 0x1406C8B10
 * Callers:
 *     ExpSystemErrorHandler2 @ 0x1405AE830 (ExpSystemErrorHandler2.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlxUnicodeStringToOemSize @ 0x1406C9110 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeToOemN @ 0x1406C91B0 (RtlUnicodeToOemN.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  ULONG v7; // edx
  int v8; // edi
  char *StringRoutine; // rax
  ULONG BytesInOemString; // [rsp+78h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString);
  if ( v6 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = v6 - 1;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (char *)ExpAllocateStringRoutine(v6);
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
         &BytesInOemString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 )
  {
    DestinationString->Buffer[BytesInOemString] = 0;
    v8 = 0;
  }
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
