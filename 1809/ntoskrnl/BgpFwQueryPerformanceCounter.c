/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x14016EF14
 * Callers:
 *     LogFwReport @ 0x14094F514 (LogFwReport.c)
 *     LogFwStat @ 0x140950754 (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409523F0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409550A8 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
