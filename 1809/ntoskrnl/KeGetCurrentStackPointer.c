/*
 * XREFs of KeGetCurrentStackPointer @ 0x1401BC400
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400C9BC0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeQueryCurrentStackInformation @ 0x1400CAC30 (KeQueryCurrentStackInformation.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400CCCF0 (RtlEnoughStackSpaceForStackCapture.c)
 *     PnprGetStackLimits @ 0x14028A5D8 (PnprGetStackLimits.c)
 *     EtwpTraceStackWalk @ 0x14030F934 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140318048 (EtwpTraceLastBranchRecord.c)
 *     MmVerifierTrimMemory @ 0x140925C08 (MmVerifierTrimMemory.c)
 *     VerifierCaptureViolationKernelStack @ 0x140931960 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x14093DAA8 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
