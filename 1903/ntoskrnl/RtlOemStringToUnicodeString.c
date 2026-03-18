/*
 * XREFs of RtlOemStringToUnicodeString @ 0x140712020
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
 *     RtlOemToUnicodeN @ 0x140712100 (RtlOemToUnicodeN.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407121B0 (RtlxOemStringToUnicodeSize.c)
 */

NTSTATUS __stdcall RtlOemStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCOEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  wchar_t *StringRoutine; // rax
  ULONG v8; // edx
  int v9; // edi
  unsigned __int64 v11; // rcx
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  v6 = RtlxOemStringToUnicodeSize(SourceString);
  if ( v6 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v6 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v6);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    v11 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v11 > DestinationString->MaximumLength || v11 < 2 )
      return -2147483643;
  }
  v9 = RtlOemToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v9 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePoolWithTag(DestinationString->Buffer, v8);
      DestinationString->Buffer = 0LL;
    }
  }
  return v9;
}
