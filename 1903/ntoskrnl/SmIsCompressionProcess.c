/*
 * XREFs of SmIsCompressionProcess @ 0x14011CC14
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1408C9854 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x1408C9B30 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_14058C158;
}
