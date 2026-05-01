/*
 * XREFs of _dynamic_initializer_for__g_TrackedWnfs__ @ 0x180001190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__g_TrackedWnfs__()
{
  __int64 result; // rax

  qword_1800AB184 = 0LL;
  dword_1800AB18C = 0;
  qword_1800AB190 = WNF_PO_SCENARIO_CHANGE;
  qword_1800AB198 = (__int64)SstpHandlePoScenarioChange;
  qword_1800AB1A0 = 0LL;
  qword_1800AB1A8 = 0LL;
  qword_1800AB1B0 = WNF_SHEL_SUSPEND_APP_BACKGROUND_ACTIVITY;
  qword_1800AB1B8 = (__int64)SstpHandleShellSuspendBgActivityChange;
  qword_1800AB1C0 = 0LL;
  qword_1800AB1C8 = 0LL;
  qword_1800AB1D0 = WNF_PO_ENERGY_SAVER_STATE;
  qword_1800AB1D8 = (__int64)SstpHandlePoEnergySaverStateChange;
  qword_1800AB1E0 = 0LL;
  qword_1800AB1E8 = 0LL;
  qword_1800AB1F0 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
  qword_1800AB1F8 = (__int64)SstpHandleThermalLimitingStateChange;
  result = 0LL;
  qword_1800AB200 = 0LL;
  qword_1800AB208 = 0LL;
  return result;
}
