/*
 * XREFs of RtlUnicodeStringCatString @ 0x140179EA4
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1406D0908 (CmpLogTransactionAbortedWithChildName.c)
 *     PopFxGenerateFriendlyName @ 0x1407265A0 (PopFxGenerateFriendlyName.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1408ECAB0 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int16 Length; // dx
  wchar_t *Buffer; // rdi
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r11
  NTSTATUS v8; // r8d
  unsigned __int16 MaximumLength; // ax
  __int64 v10; // rdx
  __int16 v11; // cx
  unsigned __int64 v12; // r9
  char *v13; // rdi

  Length = DestinationString->Length;
  Buffer = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
  {
    v8 = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v6 = (unsigned __int64)MaximumLength >> 1;
    v7 = (unsigned __int64)Length >> 1;
  }
  if ( v8 >= 0 )
  {
    v10 = 0x7FFFLL;
    v8 = 0;
    v11 = 0;
    v12 = v6 - v7;
    if ( !v12 )
      goto LABEL_26;
    v13 = (char *)Buffer + 2 * v7 - (_QWORD)pszSrc;
    do
    {
      if ( !v10 )
        break;
      if ( !*pszSrc )
        break;
      *(NTSTRSAFE_PCWSTR)((char *)pszSrc + (_QWORD)v13) = *pszSrc;
      --v10;
      ++pszSrc;
      ++v11;
      --v12;
    }
    while ( v12 );
    if ( !v12 && v10 )
    {
LABEL_26:
      if ( *pszSrc )
        v8 = -2147483643;
    }
    DestinationString->Length = 2 * (v7 + v11);
  }
  return v8;
}
