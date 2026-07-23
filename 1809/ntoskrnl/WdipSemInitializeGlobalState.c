/*
 * XREFs of WdipSemInitializeGlobalState @ 0x1407460AC
 * Callers:
 *     WdipSemInitialize @ 0x140744630 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1408B1E1C (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x1401862B4 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401D1980 (memset.c)
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
  qword_140440A08 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &stru_140440A30;
  qword_140440A20 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2010uLL);
  qword_14040DFA8 = 0LL;
  qword_14040B948 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_14040B950 = 0;
  qword_14040B958 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
