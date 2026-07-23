/*
 * XREFs of RtlOemStringToCountedUnicodeString @ 0x140891210
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     RtlOemToUnicodeN @ 0x1406F83B0 (RtlOemToUnicodeN.c)
 *     RtlxOemStringToUnicodeSize @ 0x1406F8450 (RtlxOemStringToUnicodeSize.c)
 */

NTSTATUS __stdcall RtlOemStringToCountedUnicodeString(
        PUNICODE_STRING DestinationString,
        PCOEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS result; // eax
  wchar_t *StringRoutine; // rax
  int v8; // esi
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  result = RtlxOemStringToUnicodeSize(SourceString) - 2;
  if ( !result )
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return result;
  }
  if ( (unsigned int)result > 0xFFFE )
    return -1073741584;
  DestinationString->Length = result;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = result;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned int)result);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else if ( (unsigned __int16)result > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v8 = RtlOemToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 )
    v8 = 0;
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
