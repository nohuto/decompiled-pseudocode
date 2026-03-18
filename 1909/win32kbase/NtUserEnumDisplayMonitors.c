/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C004C740
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0026390 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     xxxEnumDisplayMonitors @ 0x1C004C7E0 (xxxEnumDisplayMonitors.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(HDC a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // edi

  EnterCrit(0, 1);
  v4 = 0;
  if ( gbVideoInitialized )
    v4 = xxxEnumDisplayMonitors(a1, 0);
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
