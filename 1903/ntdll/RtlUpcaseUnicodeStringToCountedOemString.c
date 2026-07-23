/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8C30
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x1800F6770 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     sub_180061DC4 @ 0x180061DC4 (sub_180061DC4.c)
 *     RtlUpcaseUnicodeToOemN @ 0x180062010 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800621F0 (RtlxUnicodeStringToOemSize.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS result; // eax
  CHAR *v7; // rax
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
    v7 = (CHAR *)sub_18006D6B8((unsigned int)result);
    DestinationString->Buffer = v7;
    if ( !v7 )
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
  if ( v8 >= 0 && !sub_180061DC4((__int64)DestinationString, (__int64)SourceString) )
    v8 = -1073741470;
  if ( v8 >= 0 )
    v8 = 0;
  if ( v8 < 0 )
  {
    if ( AllocateDestinationString )
    {
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
  }
  return v8;
}
