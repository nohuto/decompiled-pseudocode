/*
 * XREFs of MmGetSharedCommit @ 0x1400F1AB8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x1406A5030 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSharedCommit()
{
  return qword_14046A608;
}
