/*
 * XREFs of SymCryptRestoreXmm @ 0x14028F6A0
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1401B21B8 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1401767E0 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
