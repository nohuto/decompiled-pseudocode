/*
 * XREFs of RtlUnicodeStringCbCatStringN @ 0x14032441C
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x1408ECAB0 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1403244F8 (RtlWideCharArrayCopyStringWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCbCatStringN(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        size_t cbToAppend)
{
  unsigned __int16 Length; // r9
  wchar_t *Buffer; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // r8
  size_t cchToCopy; // r10
  size_t pcchNewDestLength; // [rsp+40h] [rbp+8h] BYREF

  Length = DestinationString->Length;
  Buffer = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  result = 0;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
    return -1073741811;
  if ( !DestinationString->Buffer && (Length || MaximumLength) )
  {
    result = -1073741811;
  }
  else
  {
    Buffer = DestinationString->Buffer;
    v8 = (unsigned __int64)MaximumLength >> 1;
    v9 = (unsigned __int64)Length >> 1;
  }
  if ( result >= 0 )
  {
    cchToCopy = cbToAppend >> 1;
    if ( cchToCopy <= 0x7FFF )
    {
      pcchNewDestLength = 0LL;
      result = RtlWideCharArrayCopyStringWorker(&Buffer[v9], v8 - v9, &pcchNewDestLength, pszSrc, cchToCopy);
      DestinationString->Length = 2 * (pcchNewDestLength + v9);
      return result;
    }
    return -1073741811;
  }
  return result;
}
