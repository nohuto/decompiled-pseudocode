/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C008F2B0
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C002F9C4 (xxxCreateThreadInfo.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C005A854 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00ABABC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this, __int64 a2)
{
  UserSessionSwitchLeaveCrit((__int64)this, a2);
  return this;
}
