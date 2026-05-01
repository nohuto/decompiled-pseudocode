/*
 * XREFs of _anonymous_namespace_::GetCurTime @ 0x1801E07D8
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800FF1B0 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801E13B4 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 */

BOOL __fastcall anonymous_namespace_::GetCurTime(LPFILETIME lpFileTime)
{
  struct _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF

  GetSystemTime(&SystemTime);
  return SystemTimeToFileTime(&SystemTime, lpFileTime);
}
