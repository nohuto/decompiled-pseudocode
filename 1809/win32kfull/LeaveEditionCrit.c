/*
 * XREFs of LeaveEditionCrit @ 0x1C0131580
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C006C880 (NtUserSetCursorIconData.c)
 *     NtUserFindWindowEx @ 0x1C00700C0 (NtUserFindWindowEx.c)
 *     xxxDesktopThread @ 0x1C00BB9E0 (xxxDesktopThread.c)
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 *     NtUserGetRawInputBuffer @ 0x1C02165D0 (NtUserGetRawInputBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
}
