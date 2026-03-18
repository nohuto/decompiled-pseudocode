/*
 * XREFs of LeaveEditionCrit @ 0x1C0117860
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C0024370 (NtUserSetCursorIconData.c)
 *     NtUserFindWindowEx @ 0x1C006CC10 (NtUserFindWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1)
{
  return UserSessionSwitchLeaveCrit(a1);
}
