/*
 * XREFs of PsGetCurrentThreadId @ 0x140119C50
 * Callers:
 *     PoShutdownBugCheck @ 0x14086D120 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x1408C6F98 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
