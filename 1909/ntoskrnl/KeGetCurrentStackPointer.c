/*
 * XREFs of KeGetCurrentStackPointer @ 0x1401C4D80
 * Callers:
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400175E0 (RtlEnoughStackSpaceForStackCapture.c)
 *     KeQueryCurrentStackInformation @ 0x14001BBD0 (KeQueryCurrentStackInformation.c)
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1400A17E0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400A1930 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     RtlpGetStackLimits @ 0x1400A2DD0 (RtlpGetStackLimits.c)
 *     PnprGetStackLimits @ 0x1402A04C4 (PnprGetStackLimits.c)
 *     EtwpTraceStackWalk @ 0x14032CE44 (EtwpTraceStackWalk.c)
 *     EtwpTraceLastBranchRecord @ 0x1403362E4 (EtwpTraceLastBranchRecord.c)
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
