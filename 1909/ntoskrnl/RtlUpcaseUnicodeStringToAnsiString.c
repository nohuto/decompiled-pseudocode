/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1408CDE10
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140666A40 (RtlUpcaseUnicodeToMultiByteN.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x140711920 (RtlxUnicodeStringToAnsiSize.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToAnsiString(
        PANSI_STRING AnsiDest,
        PCUNICODE_STRING UniSource,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  char *StringRoutine; // rax
  ULONG v9; // edx
  int v10; // edi
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToAnsiSize(UniSource);
  if ( v6 > 0xFFFF )
    return -1073741584;
  AnsiDest->Length = v6 - 1;
  if ( AllocateDestinationString )
  {
    AnsiDest->MaximumLength = v6;
    StringRoutine = (char *)ExpAllocateStringRoutine(v6);
    AnsiDest->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)(v6 - 1) >= AnsiDest->MaximumLength )
  {
    return -2147483643;
  }
  v10 = RtlUpcaseUnicodeToMultiByteN(
          AnsiDest->Buffer,
          AnsiDest->Length,
          &BytesInMultiByteString,
          UniSource->Buffer,
          UniSource->Length);
  if ( v10 >= 0 )
  {
    AnsiDest->Buffer[BytesInMultiByteString] = 0;
    v10 = 0;
  }
  if ( v10 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePoolWithTag(AnsiDest->Buffer, v9);
      AnsiDest->Buffer = 0LL;
    }
  }
  return v10;
}
