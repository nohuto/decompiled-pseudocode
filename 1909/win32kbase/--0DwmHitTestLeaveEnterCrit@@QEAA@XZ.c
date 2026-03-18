/*
 * XREFs of ??0DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C0103060
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 */

DwmHitTestLeaveEnterCrit *__fastcall DwmHitTestLeaveEnterCrit::DwmHitTestLeaveEnterCrit(
        DwmHitTestLeaveEnterCrit *this,
        __int64 a2)
{
  gbDITInHitTest = 1;
  UserSessionSwitchLeaveCrit((__int64)this, a2);
  return this;
}
