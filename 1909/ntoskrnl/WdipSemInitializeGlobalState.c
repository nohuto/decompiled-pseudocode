/*
 * XREFs of WdipSemInitializeGlobalState @ 0x14076FD0C
 * Callers:
 *     WdipSemInitialize @ 0x14076E1F4 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1408ED96C (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x1400EA4C0 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x140190414 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
  qword_14046B4C8 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &stru_14046B4F0;
  qword_14046B4E0 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2008uLL);
  qword_1404355E8 = 0LL;
  qword_140432F88 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_140432F90 = 0;
  qword_140432F98 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
