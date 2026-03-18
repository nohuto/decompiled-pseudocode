/*
 * XREFs of SymCryptRestoreXmm @ 0x1402A61A0
 * Callers:
 *     SymCryptParallelSha256Process @ 0x1401BD3D4 (SymCryptParallelSha256Process.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140177050 (xHalTimerWatchdogStop.c)
 */

void SymCryptRestoreXmm()
{
  xHalTimerWatchdogStop();
}
