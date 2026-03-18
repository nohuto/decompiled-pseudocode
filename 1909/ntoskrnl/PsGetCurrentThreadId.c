/*
 * XREFs of PsGetCurrentThreadId @ 0x140117800
 * Callers:
 *     PoShutdownBugCheck @ 0x1408A8030 (PoShutdownBugCheck.c)
 *     EtwpCovSampContextPruneModules @ 0x140902B00 (EtwpCovSampContextPruneModules.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
