/*
 * XREFs of KeGetCurrentStackPointer @ 0x1401C4200
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400171F0 (RtlEnoughStackSpaceForStackCapture.c)
 *     KeQueryCurrentStackInformation @ 0x14001B7E0 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400C1960 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400C1AB0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlpGetStackLimits @ 0x1400C2F50 (RtlpGetStackLimits.c)
 *     PnprGetStackLimits @ 0x1402A0764 (PnprGetStackLimits.c)
 *     EtwpTraceStackWalk @ 0x14032D3E4 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x140336884 (EtwpTraceLastBranchRecord.c)
 *     MmVerifierTrimMemory @ 0x140963D98 (MmVerifierTrimMemory.c)
 *     VerifierCaptureViolationKernelStack @ 0x14096F1E0 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x14097BEEC (ViDeadlockAnalyze.c)
 * Callees:
 *     <none>
 */

char *KeGetCurrentStackPointer()
{
  char v1; // [rsp+8h] [rbp+8h] BYREF

  return &v1;
}
