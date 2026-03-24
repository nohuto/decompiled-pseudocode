/*
 * XREFs of PopNetIsCompliantNicPresent @ 0x140876DC8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402DF0EC (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

bool PopNetIsCompliantNicPresent()
{
  return PopNetCompliantNicCount != 0;
}
