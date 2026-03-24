/*
 * XREFs of PsGetCurrentThreadId @ 0x140119BE0
 * Callers:
 *     PoShutdownBugCheck @ 0x14086BEC0 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x1408C5CD8 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
