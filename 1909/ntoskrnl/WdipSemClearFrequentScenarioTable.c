/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x140190414
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14076FD0C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1408EDC20 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_1404333A8 = 0LL;
  return result;
}
