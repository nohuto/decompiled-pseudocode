/*
 * XREFs of KeQueryCurrentStackInformation @ 0x14001BBD0
 * Callers:
 *     RtlDispatchException @ 0x1400177D0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140019C30 (RtlUnwindEx.c)
 *     RtlpIsFrameInBoundsEx @ 0x14001AE90 (RtlpIsFrameInBoundsEx.c)
 *     PnprGetStackLimits @ 0x1402A04C4 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x1402A78C0 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x14032CE44 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140334EF4 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpTraceLastBranchRecord @ 0x1403362E4 (EtwpTraceLastBranchRecord.c)
 *     VerifierCaptureViolationKernelStack @ 0x14096F1E0 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x14097BEEC (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1400A2E20 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1401C4D80 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KeQueryCurrentStackInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
