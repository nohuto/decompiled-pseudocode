/*
 * XREFs of ?WerSubmitReportWorker@@YAXPEAX@Z @ 0x1C0226DD0
 * Callers:
 *     <none>
 * Callees:
 *     WerKernelSubmitReportForHungProcess @ 0x1C0244274 (WerKernelSubmitReportForHungProcess.c)
 */

void __fastcall WerSubmitReportWorker(unsigned int *StartContext)
{
  WerKernelSubmitReportForHungProcess(*StartContext, StartContext[1], StartContext[2]);
  Win32FreePool(StartContext);
}
