/*
 * XREFs of WdipSemClearFrequentScenarioTable @ 0x1401862B4
 * Callers:
 *     WdipSemInitializeGlobalState @ 0x1407460AC (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1408B20D0 (WdipSemShutdown.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

void *WdipSemClearFrequentScenarioTable()
{
  void *result; // rax

  result = memset(&WdipSemFrequentScenarioTable, 0, 0x410uLL);
  qword_14040BD68 = 0LL;
  return result;
}
