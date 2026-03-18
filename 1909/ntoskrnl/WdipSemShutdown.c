/*
 * XREFs of WdipSemShutdown @ 0x1408EDC20
 * Callers:
 *     WdipSemDisableScenario @ 0x140718294 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x1407467AC (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x14076E248 (WdipSemCleanStart.c)
 *     WdipSemUpdate @ 0x1408ED96C (WdipSemUpdate.c)
 * Callees:
 *     WdipSemClearFrequentScenarioTable @ 0x140190414 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     WdipSemFreePool @ 0x1408EE024 (WdipSemFreePool.c)
 *     WdipSemDisableAllProviders @ 0x1408EE7D0 (WdipSemDisableAllProviders.c)
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
  qword_1404355E8 = 0LL;
  dword_140432F90 = 0;
  qword_140432F98 = 0LL;
  qword_140432F88 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemClearFrequentScenarioTable();
  return WdipSemFreePool();
}
