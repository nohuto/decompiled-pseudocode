/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x1401D1340
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1180 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_1401D134D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
