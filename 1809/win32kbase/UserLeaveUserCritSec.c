/*
 * XREFs of UserLeaveUserCritSec @ 0x1C002A3D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 */

void UserLeaveUserCritSec()
{
  UserSessionSwitchLeaveCrit();
}
