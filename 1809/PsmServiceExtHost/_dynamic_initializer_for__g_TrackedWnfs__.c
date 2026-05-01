/*
 * XREFs of _dynamic_initializer_for__g_TrackedWnfs__ @ 0x180001180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__g_TrackedWnfs__()
{
  __int64 result; // rax

  qword_18009B014 = 0LL;
  dword_18009B01C = 0;
  qword_18009B020 = WNF_PO_SCENARIO_CHANGE;
  qword_18009B028 = (__int64)SstpHandlePoScenarioChange;
  qword_18009B030 = 0LL;
  qword_18009B038 = 0LL;
  qword_18009B040 = WNF_SHEL_SUSPEND_APP_BACKGROUND_ACTIVITY;
  qword_18009B048 = (__int64)SstpHandleShellSuspendBgActivityChange;
  qword_18009B050 = 0LL;
  qword_18009B058 = 0LL;
  qword_18009B060 = WNF_PO_ENERGY_SAVER_STATE;
  qword_18009B068 = (__int64)SstpHandlePoEnergySaverStateChange;
  qword_18009B070 = 0LL;
  qword_18009B078 = 0LL;
  qword_18009B080 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
  qword_18009B088 = (__int64)SstpHandleThermalLimitingStateChange;
  result = 0LL;
  qword_18009B090 = 0LL;
  qword_18009B098 = 0LL;
  return result;
}
