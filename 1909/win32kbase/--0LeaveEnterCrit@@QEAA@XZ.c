/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C008ADE0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0065F24 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C006747C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this, __int64 a2)
{
  UserSessionSwitchLeaveCrit((__int64)this, a2);
  return this;
}
