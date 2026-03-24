/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x14016EE14
 * Callers:
 *     LogFwReport @ 0x14094E514 (LogFwReport.c)
 *     LogFwStat @ 0x14094F754 (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409513F0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409540A8 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
