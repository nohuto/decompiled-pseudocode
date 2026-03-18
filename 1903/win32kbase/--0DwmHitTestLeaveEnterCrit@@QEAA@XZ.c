/*
 * XREFs of ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C01059D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 */

DwmHitTestLeaveEnterCrit *__fastcall DwmHitTestLeaveEnterCrit::DwmHitTestLeaveEnterCrit(
        DwmHitTestLeaveEnterCrit *this,
        __int64 a2)
{
  gbDITInHitTest = 1;
  UserSessionSwitchLeaveCrit((__int64)this, a2);
  return this;
}
