/*
 * XREFs of WdipSemShutdown @ 0x1408B20D0
 * Callers:
 *     WdipSemDisableScenario @ 0x140718764 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407189EC (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x140744684 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x1408B1E1C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x1401862B4 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     WdipSemFreePool @ 0x1408B24D4 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1408B2C6C (WdipSemDisableAllProviders.c)
 */

__int64 WdipSemShutdown()
{
  WdipSemDisabledScenarioTable = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 600;
  WdipSemDisableAllProviders();
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2010uLL);
  qword_14040DFA8 = 0LL;
  dword_14040B950 = 0;
  qword_14040B958 = 0LL;
  qword_14040B948 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
