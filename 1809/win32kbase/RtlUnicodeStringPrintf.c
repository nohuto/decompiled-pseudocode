/*
 * XREFs of RtlUnicodeStringPrintf @ 0x1C011FF34
 * Callers:
 *     RIMIDECreateDeviceInstancePath @ 0x1C011D640 (RIMIDECreateDeviceInstancePath.c)
 * Callees:
 *     _vsnwprintf @ 0x1C00A657C (_vsnwprintf.c)
 */

NTSTATUS RtlUnicodeStringPrintf(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  USHORT Length; // cx
  wchar_t *Buffer; // r10
  size_t v5; // rdi
  NTSTATUS v6; // ebx
  USHORT MaximumLength; // ax
  int v8; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, pszFormat);
  Length = DestinationString->Length;
  Buffer = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
  {
    v6 = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v5 = (unsigned __int64)MaximumLength >> 1;
  }
  if ( v6 >= 0 )
  {
    v6 = 0;
    v8 = vsnwprintf(Buffer, v5, pszFormat, Args);
    if ( v8 < 0 || v8 > v5 )
    {
      LOWORD(v8) = v5;
      v6 = -2147483643;
    }
    DestinationString->Length = 2 * v8;
  }
  return v6;
}
