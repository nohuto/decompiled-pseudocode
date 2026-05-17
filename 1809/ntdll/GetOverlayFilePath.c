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
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 */

__int64 __fastcall GetOverlayFilePath(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  wchar_t *v9; // rbx
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t *String1; // [rsp+48h] [rbp-B8h]
  char v12; // [rsp+50h] [rbp-B0h] BYREF

  if ( (unsigned __int8)IsLanguageOverlayBlockedByPolicy() )
    return 3221226337LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v10 = 46006272;
  String1 = (wchar_t *)&v12;
  result = RtlAppendUnicodeToString(&v10, a2);
  if ( (int)result >= 0 )
  {
    v9 = String1;
    result = IsOverlaySupportedPath(String1);
    if ( (int)result >= 0 )
      return BuildOverlayFilePath(a1, v9, 0LL, a3, a4);
  }
  return result;
}
