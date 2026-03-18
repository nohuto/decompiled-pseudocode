/*
 * XREFs of LeaveEditionCrit @ 0x1C010CB20
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C0014770 (NtUserSetCursorIconData.c)
 *     RawInputThread @ 0x1C001CA60 (RawInputThread.c)
 *     NtUserFindWindowEx @ 0x1C0029830 (NtUserFindWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return UserSessionSwitchLeaveCrit(a1, a2, a3, a4);
}
