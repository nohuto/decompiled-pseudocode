/*
 * XREFs of RtlOemStringToUnicodeString @ 0x180061CE0
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x180061A30 (RtlDnsHostNameToComputerName.c)
 * Callees:
 *     RtlxOemStringToUnicodeSize @ 0x180022080 (RtlxOemStringToUnicodeSize.c)
 *     RtlOemToUnicodeN @ 0x180061F00 (RtlOemToUnicodeN.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

NTSTATUS __cdecl RtlOemStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        POEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // edi
  WCHAR *v10; // rax
  ULONG BytesInUnicodeString; // [rsp+78h] [rbp+20h] BYREF

  v6 = RtlxOemStringToUnicodeSize((PCSTR *)SourceString);
  if ( v6 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v6 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    v10 = (WCHAR *)sub_18006D6B8(v6, 2LL);
    DestinationString->Buffer = v10;
    if ( !v10 )
      return -1073741801;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > DestinationString->MaximumLength || v7 < 2 )
      return -2147483643;
  }
  v8 = RtlOemToUnicodeN(
         DestinationString->Buffer,
         DestinationString->Length,
         &BytesInUnicodeString,
         SourceString->Buffer,
         SourceString->Length);
  if ( v8 >= 0 )
  {
    DestinationString->Buffer[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
    v8 = 0;
  }
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
