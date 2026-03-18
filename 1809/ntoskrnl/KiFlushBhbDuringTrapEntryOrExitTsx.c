/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x1401D1240
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1401D1080 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_1401D124D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
