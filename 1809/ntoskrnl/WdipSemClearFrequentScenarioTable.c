/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x140186174
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x140744EBC (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1408B0E70 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x410uLL);
  qword_14040CF08 = 0LL;
  return result;
}
