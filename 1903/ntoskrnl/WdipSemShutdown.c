/*
 * XREFs of WdipSemShutdown @ 0x1408EE310
 * Callers:
 *     WdipSemDisableScenario @ 0x1407164A4 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407448AC (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x14076B3F4 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x1408EE05C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x14018F514 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WdipSemFreePool @ 0x1408EE714 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1408EEEC0 (WdipSemDisableAllProviders.c)
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
  memset(WdipSemProviderTable, 0, 0x2008uLL);
  qword_140435208 = 0LL;
  dword_140435230 = 0;
  qword_140435238 = 0LL;
  qword_140435228 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
