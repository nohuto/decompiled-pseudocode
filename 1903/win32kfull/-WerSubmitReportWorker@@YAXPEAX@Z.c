/*
 * XREFs of ?WerSubmitReportWorker@@YAXPEAX@Z @ 0x1C023EA80
 * Callers:
 *     <none>
 * Callees:
 *     WerKernelSubmitReportForHungProcess @ 0x1C025D0E4 (WerKernelSubmitReportForHungProcess.c)
 */

void __fastcall WerSubmitReportWorker(unsigned int *StartContext)
{
  WerKernelSubmitReportForHungProcess(*StartContext, StartContext[1], StartContext[2]);
  Win32FreePool(StartContext);
}
