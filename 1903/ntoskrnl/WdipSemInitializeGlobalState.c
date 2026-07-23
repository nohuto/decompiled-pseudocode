/*
 * XREFs of WdipSemInitializeGlobalState @ 0x14076CEB8
 * Callers:
 *     WdipSemInitialize @ 0x14076B3A0 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1408EE05C (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x1400E5520 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x14018F514 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void *WdipSemInitializeGlobalState()
{
  __int64 v0; // rdi
  _SLIST_HEADER *v1; // rbx
  void *result; // rax

  WdipSemPushLock = 0LL;
  WdipSemRegHandle = 0LL;
  WdipSemEnabled = 0;
  WdipSemTimeoutEnabled = 0;
  WdipSemTimeoutValue = 0;
  WdipSemDisabledScenarioTable = 0LL;
  WdipDiagLoggerId = 0;
  WdipContextLoggerId = 0;
  memset(&WdipSemPool, 0, 0x90uLL);
  qword_14046B788 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &stru_14046B7B0;
  qword_14046B7A0 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2008uLL);
  qword_140435208 = 0LL;
  qword_140435228 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_140435230 = 0;
  qword_140435238 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
