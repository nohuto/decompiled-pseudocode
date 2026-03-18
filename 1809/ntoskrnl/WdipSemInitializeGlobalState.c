/*
 * XREFs of WdipSemInitializeGlobalState @ 0x140744EDC
 * Callers:
 *     WdipSemInitialize @ 0x140743460 (WdipSemInitialize.c)
 *     WdipSemUpdate @ 0x1408B0BDC (WdipSemUpdate.c)
 * Callees:
 *     InitializeSListHead @ 0x1400F3160 (InitializeSListHead.c)
 *     WdipSemClearFrequentScenarioTable @ 0x140186154 (WdipSemClearFrequentScenarioTable.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

void *WdipSemInitializeGlobalState()
{
  __int64 v0; // rdi
  union _SLIST_HEADER *v1; // rbx
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
  qword_14043F948 = (__int64)&WdipSemPool;
  v0 = 6LL;
  WdipSemPool = &WdipSemPool;
  v1 = &stru_14043F970;
  qword_14043F960 = 0LL;
  do
  {
    InitializeSListHead(v1++);
    --v0;
  }
  while ( v0 );
  memset(WdipSemScenarioTable, 0, 0x208uLL);
  memset(WdipSemProviderTable, 0, 0x2010uLL);
  qword_14040CF08 = 0LL;
  qword_14040CF28 = (__int64)&WdipSemEnabledInstanceTable;
  WdipSemEnabledInstanceTable = (__int64)&WdipSemEnabledInstanceTable;
  dword_14040CF30 = 0;
  qword_14040CF38 = 0LL;
  result = WdipSemClearFrequentScenarioTable();
  WdipSemInitialized = 1;
  return result;
}
