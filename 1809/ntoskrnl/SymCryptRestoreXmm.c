/*
 * XREFs of SymCryptRestoreXmm @ 0x14028F7A0
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1401B21D8 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140176800 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
