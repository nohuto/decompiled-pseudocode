/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x140876DE8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DEFEC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetIsCompliantNicPresent()
{
  return PopNetCompliantNicCount != 0;
}
