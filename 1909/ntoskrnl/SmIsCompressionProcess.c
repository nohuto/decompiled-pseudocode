/*
 * XREFs of SmIsCompressionProcess @ 0x14011D134
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x1408C8D44 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1408C9134 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x1408C9410 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_14058C158;
}
