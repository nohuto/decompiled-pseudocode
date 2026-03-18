/*
 * XREFs of RtlWalkFrameChain @ 0x140017620
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x140017560 (RtlCaptureStackBackTrace.c)
 *     SepCreateTokenEx @ 0x14008714C (SepCreateTokenEx.c)
 *     KiDpcWatchdogCaptureStack @ 0x1402A2F5C (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x14031C75C (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14032BB2C (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x14032CE44 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140334EF4 (EtwpCovSampCaptureKernelStack.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406A51C4 (PoDiagCaptureUsermodeStack.c)
 *     EtwpCovSampCaptureUserStack @ 0x140901004 (EtwpCovSampCaptureUserStack.c)
 *     ExpUpdateDebugInfo @ 0x14090B40C (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400175E0 (RtlEnoughStackSpaceForStackCapture.c)
 *     RtlpWalkFrameChain @ 0x1400182A0 (RtlpWalkFrameChain.c)
 *     MmCanThreadFault @ 0x14009F55C (MmCanThreadFault.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // ebx
  BOOL v5; // esi
  ULONG v6; // edi
  ULONG v7; // ebp
  ULONG result; // eax

  if ( (Flags & 0xFFFF00FC) != 0 )
    return 0;
  v4 = Flags & 3;
  if ( Flags >> 8 > 0xFE )
    return 0;
  if ( Count == -1 )
    return 0;
  v5 = (Flags & 2) == 0;
  v6 = v5 + (Flags >> 8);
  v7 = v5 + Count;
  if ( !(unsigned int)MmCanThreadFault() && (v4 & 1) != 0 )
    return 0;
  if ( !(unsigned int)RtlEnoughStackSpaceForStackCapture() )
    return 0;
  result = RtlpWalkFrameChain(Callers, v7, v4, v6);
  if ( result )
    return (__PAIR64__(result, v4 & 2) - 1) >> 32;
  return result;
}
