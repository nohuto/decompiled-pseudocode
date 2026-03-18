/*
 * XREFs of SmIsCompressionProcess @ 0x14011AFC8
 * Callers:
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x14088AFC4 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14088B3A0 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x14088B660 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_14055B158;
}
