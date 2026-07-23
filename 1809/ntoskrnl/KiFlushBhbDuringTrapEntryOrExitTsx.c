/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x1401D1440
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1280 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_1401D144D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
