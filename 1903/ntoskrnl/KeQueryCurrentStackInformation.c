/*
 * XREFs of KeQueryCurrentStackInformation @ 0x14001B7E0
 * Callers:
 *     RtlDispatchException @ 0x1400173E0 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140019840 (RtlUnwindEx.c)
 *     RtlpIsFrameInBoundsEx @ 0x14001AAA0 (RtlpIsFrameInBoundsEx.c)
 *     PnprGetStackLimits @ 0x1402A0764 (PnprGetStackLimits.c)
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 *     EtwpTraceStackWalk @ 0x14032D3E4 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140335494 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpTraceLastBranchRecord @ 0x140336884 (EtwpTraceLastBranchRecord.c)
 *     VerifierCaptureViolationKernelStack @ 0x14096F1E0 (VerifierCaptureViolationKernelStack.c)
 *     ViDeadlockAnalyze @ 0x14097BEEC (ViDeadlockAnalyze.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1400C2FA0 (KeQueryCurrentStackInformationEx.c)
 *     KeGetCurrentStackPointer @ 0x1401C4200 (KeGetCurrentStackPointer.c)
 */

__int64 __fastcall KeQueryCurrentStackInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentStackPointer; // rax

  CurrentStackPointer = KeGetCurrentStackPointer();
  return KeQueryCurrentStackInformationEx(CurrentStackPointer, a1, a2, a3);
}
