/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x14018F514
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x14076CEB8 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1408EE310 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x408uLL);
  qword_140435648 = 0LL;
  return result;
}
