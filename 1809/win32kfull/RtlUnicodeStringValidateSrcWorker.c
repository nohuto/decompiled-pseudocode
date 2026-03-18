/*
 * XREFs of RtlUnicodeStringValidateSrcWorker @ 0x1C01DA1A4
 * Callers:
 *     RtlStringCbCopyUnicodeString @ 0x1C01DA0F0 (RtlStringCbCopyUnicodeString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateSrcWorker(
        PCUNICODE_STRING SourceString,
        wchar_t **ppszSrc,
        size_t *pcchSrcLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  USHORT Length; // r10
  NTSTATUS v6; // r9d
  USHORT MaximumLength; // ax
  wchar_t *Buffer; // rcx

  Length = SourceString->Length;
  v6 = 0;
  *ppszSrc = 0LL;
  *pcchSrcLength = 0LL;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = SourceString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  Buffer = SourceString->Buffer;
  if ( !Buffer && (Length || MaximumLength) )
    return -1073741811;
  *pcchSrcLength = (unsigned __int64)Length >> 1;
  *ppszSrc = Buffer;
  return v6;
}
