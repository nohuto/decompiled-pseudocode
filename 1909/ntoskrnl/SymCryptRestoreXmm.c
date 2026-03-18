/*
 * XREFs of SymCryptRestoreXmm @ 0x1402A5F00
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1401BDAF4 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177740 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
