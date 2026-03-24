/*
 * XREFs of KeGetCurrentStackPointer @ 0x1401BC2A0
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400C9AE0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeQueryCurrentStackInformation @ 0x1400CAB50 (KeQueryCurrentStackInformation.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400CCC70 (RtlEnoughStackSpaceForStackCapture.c)
 *     PnprGetStackLimits @ 0x14028A3E8 (PnprGetStackLimits.c)
 *     EtwpTraceStackWalk @ 0x14030F744 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140317E58 (EtwpTraceLastBranchRecord.c)
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
