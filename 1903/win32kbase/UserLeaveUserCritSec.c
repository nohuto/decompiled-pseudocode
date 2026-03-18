/*
 * XREFs of UserLeaveUserCritSec @ 0x1C00902D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 */

void __fastcall UserLeaveUserCritSec(__int64 a1, __int64 a2)
{
  UserSessionSwitchLeaveCrit(a1, a2);
}
