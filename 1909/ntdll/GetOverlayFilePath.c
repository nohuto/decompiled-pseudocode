/*
 * XREFs of GetOverlayFilePath @ 0x18005BC10
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18005A338 (RtlpGetMUIRedirectedFilePath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     IsOverlaySupportedPath @ 0x18005BCFC (IsOverlaySupportedPath.c)
 *     IsLanguageOverlayBlockedByPolicy @ 0x18005BD9C (IsLanguageOverlayBlockedByPolicy.c)
 *     BuildOverlayFilePath @ 0x18005BED4 (BuildOverlayFilePath.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

__int64 __fastcall GetOverlayFilePath(__int64 a1, _WORD *a2, __int64 a3, __int64 a4)
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
  result = RtlAppendUnicodeToString((unsigned __int16 *)&v10, a2);
  if ( (int)result >= 0 )
  {
    v9 = String1;
    result = IsOverlaySupportedPath(String1);
    if ( (int)result >= 0 )
      return BuildOverlayFilePath(a1, v9, 0LL, a3, a4);
  }
  return result;
}
