/*
 * XREFs of KeGetCurrentStackPointer @ 0x1401BC280
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400C9AC0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeQueryCurrentStackInformation @ 0x1400CAB30 (KeQueryCurrentStackInformation.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400CCC50 (RtlEnoughStackSpaceForStackCapture.c)
 *     PnprGetStackLimits @ 0x14028A2E8 (PnprGetStackLimits.c)
 *     EtwpTraceStackWalk @ 0x14030F644 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140317D58 (EtwpTraceLastBranchRecord.c)
 *     MmVerifierTrimMemory @ 0x140924C08 (MmVerifierTrimMemory.c)
 *     VerifierCaptureViolationKernelStack @ 0x140930960 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x14093CAA8 (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
