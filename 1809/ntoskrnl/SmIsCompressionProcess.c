/*
 * XREFs of SmIsCompressionProcess @ 0x14011B058
 * Callers:
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x14088C204 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14088C5E0 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x14088C8A0 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_14055C158;
}
