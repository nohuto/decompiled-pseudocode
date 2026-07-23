/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x180062330
 * Callers:
 *     sub_180062218 @ 0x180062218 (sub_180062218.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x180062400 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x180062440 (RtlUnicodeToMultiByteN.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // esi
  __int64 v7; // rdx
  ULONG v8; // eax
  USHORT v9; // cx
  USHORT MaximumLength; // ax
  int v11; // edi
  bool v12; // sf
  CHAR *v14; // rax
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v16; // [rsp+80h] [rbp+18h]

  v16 = AllocateDestinationString;
  v6 = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, SourceString->Buffer, SourceString->Length);
  v8 = BytesInMultiByteString + 1;
  if ( BytesInMultiByteString + 1 > 0xFFFF )
    return -1073741584;
  v9 = BytesInMultiByteString;
  DestinationString->Length = BytesInMultiByteString;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v8;
    v14 = (CHAR *)sub_18006D6B8(v8, v7);
    DestinationString->Buffer = v14;
    if ( !v14 )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v9 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  v11 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          DestinationString->Length,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v11 >= 0 )
    DestinationString->Buffer[BytesInMultiByteString] = 0;
  v12 = v11 < 0;
  if ( v11 < 0 )
  {
    if ( AllocateDestinationString )
    {
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
    v12 = v11 < 0;
  }
  if ( !v12 )
    return v6;
  return v11;
}
