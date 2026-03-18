/*
 * XREFs of WdipSemShutdown @ 0x1408B0E90
 * Callers:
 *     WdipSemDisableScenario @ 0x1407174E4 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x14071776C (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x1407434B4 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x1408B0BDC (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x140186154 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     WdipSemFreePool @ 0x1408B1294 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1408B1A2C (WdipSemDisableAllProviders.c)
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
  qword_14040CF08 = 0LL;
  dword_14040CF30 = 0;
  qword_14040CF38 = 0LL;
  qword_14040CF28 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
