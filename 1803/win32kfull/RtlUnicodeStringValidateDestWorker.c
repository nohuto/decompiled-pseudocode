/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1C00698B8
 * Callers:
 *     RtlUnicodeStringCopyString @ 0x1C006974C (RtlUnicodeStringCopyString.c)
 *     RtlUnicodeStringCatString @ 0x1C006980C (RtlUnicodeStringCatString.c)
 *     ?_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z @ 0x1C0103BB0 (-_OpenDeviceKey@InteractiveControlSettings@@IEAAJKHPEAPEAX@Z.c)
 *     AccessPTPEnabledStatus @ 0x1C0107BB0 (AccessPTPEnabledStatus.c)
 *     ?OpenUserProfileKeyForPTP@@YAJKPEAPEAX@Z @ 0x1C0110450 (-OpenUserProfileKeyForPTP@@YAJKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  NTSTATUS v6; // r10d
  USHORT Length; // r11
  USHORT MaximumLength; // ax
  wchar_t *Buffer; // rdx

  v6 = 0;
  *ppszDest = 0LL;
  *pcchDest = 0LL;
  if ( pcchDestLength )
    *pcchDestLength = 0LL;
  Length = DestinationString->Length;
  if ( (DestinationString->Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0 )
    return -1073741811;
  if ( Length > MaximumLength )
    return -1073741811;
  if ( MaximumLength == 0xFFFF )
    return -1073741811;
  Buffer = DestinationString->Buffer;
  if ( !Buffer && (Length || MaximumLength) )
    return -1073741811;
  *ppszDest = Buffer;
  *pcchDest = (unsigned __int64)MaximumLength >> 1;
  if ( pcchDestLength )
    *pcchDestLength = (unsigned __int64)Length >> 1;
  return v6;
}
