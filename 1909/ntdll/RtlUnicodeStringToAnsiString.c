/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x1800623D0
 * Callers:
 *     LdrpGetModuleName @ 0x1800622B8 (LdrpGetModuleName.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1800624A0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1800624E0 (RtlUnicodeToMultiByteN.c)
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // esi
  __int64 v7; // rdx
  ULONG v8; // eax
  unsigned __int16 v9; // cx
  unsigned __int16 MaximumLength; // ax
  int v11; // edi
  bool v12; // sf
  char *StringRoutine; // rax
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
    StringRoutine = (char *)NtdllpAllocateStringRoutine(v8, v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
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
      NtdllpFreeStringRoutine(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
    v12 = v11 < 0;
  }
  if ( !v12 )
    return v6;
  return v11;
}
