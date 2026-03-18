/*
 * XREFs of PsGetCurrentThreadId @ 0x140119770
 * Callers:
 *     PoShutdownBugCheck @ 0x1408A87D0 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x1409031A0 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
