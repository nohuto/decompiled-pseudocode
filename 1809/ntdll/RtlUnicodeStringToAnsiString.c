/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x18006A800
 * Callers:
 *     LdrpGetModuleName @ 0x18006A6E8 (LdrpGetModuleName.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x180066C70 (RtlUnicodeToUTF8N.c)
 *     RtlUnicodeToMultiByteSize @ 0x18006A9E0 (RtlUnicodeToMultiByteSize.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // r14d
  ULONG v7; // r9d
  char *StringRoutine; // rax
  ULONG UnicodeStringByteCount; // r9d
  wchar_t *Buffer; // r11
  ULONG Length; // ecx
  char *v12; // r10
  ULONG v13; // r9d
  __int64 v14; // rbx
  ULONG i; // eax
  int v16; // ebx
  __int64 v17; // rdi
  __int16 v18; // r8
  unsigned int v19; // eax
  unsigned __int16 MaximumLength; // cx
  ULONG BytesInMultiByteString; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v23; // [rsp+B0h] [rbp+18h]
  ULONG UTF8StringActualByteCount; // [rsp+B8h] [rbp+20h] BYREF

  v23 = AllocateDestinationString;
  v6 = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, SourceString->Buffer, SourceString->Length);
  v7 = BytesInMultiByteString + 1;
  if ( BytesInMultiByteString + 1 > 0xFFFF )
    return -1073741584;
  DestinationString->Length = BytesInMultiByteString;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v7;
    StringRoutine = (char *)NtdllpAllocateStringRoutine(v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( (unsigned __int16)(v7 - 1) >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  UnicodeStringByteCount = SourceString->Length;
  Buffer = SourceString->Buffer;
  Length = DestinationString->Length;
  v12 = DestinationString->Buffer;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( SourceString->Length )
      RtlUnicodeToUTF8N(v12, Length, &UTF8StringActualByteCount, Buffer, UnicodeStringByteCount);
    else
      UTF8StringActualByteCount = 0;
  }
  else
  {
    v13 = UnicodeStringByteCount >> 1;
    if ( NlsMbCodePageTag )
    {
      v16 = (int)DestinationString->Buffer;
      v17 = NlsUnicodeToMbAnsiData;
      while ( v13 && Length )
      {
        v18 = *(_WORD *)(v17 + 2LL * *Buffer);
        LOWORD(BytesInMultiByteString) = v18;
        ++Buffer;
        if ( HIBYTE(v18) )
        {
          v19 = Length--;
          if ( v19 < 2 )
            break;
          *v12++ = HIBYTE(v18);
        }
        *v12++ = v18;
        --Length;
        --v13;
      }
      UTF8StringActualByteCount = (_DWORD)v12 - v16;
    }
    else
    {
      if ( v13 >= Length )
        v13 = DestinationString->Length;
      UTF8StringActualByteCount = v13;
      v14 = NlsUnicodeToAnsiData;
      for ( i = 0; i < v13; ++i )
        v12[i] = *(_BYTE *)(Buffer[i] + v14);
    }
  }
  DestinationString->Buffer[UTF8StringActualByteCount] = 0;
  return v6;
}
