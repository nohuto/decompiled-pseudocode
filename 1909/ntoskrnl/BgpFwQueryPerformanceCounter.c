/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x140178CC4
 * Callers:
 *     LogFwReport @ 0x14098E514 (LogFwReport.c)
 *     LogFwStat @ 0x14098F79C (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x140991450 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409941C8 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
