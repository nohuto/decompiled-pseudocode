/*
 * XREFs of WdipSemShutdown @ 0x1408B0E70
 * Callers:
 *     WdipSemDisableScenario @ 0x1407174C4 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x14071774C (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x140743494 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x1408B0BBC (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x140186174 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     WdipSemFreePool @ 0x1408B1274 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1408B1A0C (WdipSemDisableAllProviders.c)
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
  qword_14040CAC8 = 0LL;
  dword_14040CAF0 = 0;
  qword_14040CAF8 = 0LL;
  qword_14040CAE8 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
