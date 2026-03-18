/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x140186154
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x140744EDC (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1408B0E90 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x410uLL);
  qword_14040ACC8 = 0LL;
  return result;
}
