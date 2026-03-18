/*
 * XREFs of PsGetCurrentThreadId @ 0x140119BC0
 * Callers:
 *     PoShutdownBugCheck @ 0x14086BEE0 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x1408C5CF8 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
