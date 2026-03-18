/*
 * XREFs of LeaveEditionCrit @ 0x1C013D940
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C002EDB0 (NtUserSetCursorIconData.c)
 *     NtUserFindWindowEx @ 0x1C00CB540 (NtUserFindWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1)
{
  return UserSessionSwitchLeaveCrit(a1);
}
