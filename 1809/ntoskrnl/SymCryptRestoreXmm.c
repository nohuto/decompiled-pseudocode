/*
 * XREFs of SymCryptRestoreXmm @ 0x14028F990
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1401B2318 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176900 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
