/*
 * XREFs of UserLeaveUserCritSec @ 0x1C0033110
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 */

void __fastcall UserLeaveUserCritSec(__int64 a1)
{
  UserSessionSwitchLeaveCrit(a1);
}
