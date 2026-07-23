/*
 * XREFs of GetOverlayFilePath @ 0x180032BEC
 * Callers:
 *     RtlpGetMUIRedirectedFilePath @ 0x18003541C (RtlpGetMUIRedirectedFilePath.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 * Callees:
 *     IsOverlaySupportedPath @ 0x180032CD8 (IsOverlaySupportedPath.c)
 *     IsLanguageOverlayBlockedByPolicy @ 0x180032D78 (IsLanguageOverlayBlockedByPolicy.c)
 *     BuildOverlayFilePath @ 0x180032EB0 (BuildOverlayFilePath.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall GetOverlayFilePath(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  NTSTATUS result; // eax
  wchar_t *Buffer; // rbx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-C0h] BYREF
  char v11; // [rsp+50h] [rbp-B0h] BYREF

  if ( (unsigned __int8)IsLanguageOverlayBlockedByPolicy() )
    return -1073740959;
  if ( !a1 || !a2 || !a3 )
    return -1073741811;
  *(_DWORD *)&Destination.Length = 46006272;
  Destination.Buffer = (wchar_t *)&v11;
  result = RtlAppendUnicodeToString(&Destination, a2);
  if ( result >= 0 )
  {
    Buffer = Destination.Buffer;
    result = IsOverlaySupportedPath(Destination.Buffer);
    if ( result >= 0 )
      return BuildOverlayFilePath(a1, Buffer, 0LL, a3, a4);
  }
  return result;
}
