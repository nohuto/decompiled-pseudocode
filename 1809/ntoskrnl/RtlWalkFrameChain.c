/*
 * XREFs of RtlWalkFrameChain @ 0x1400CCC50
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     RtlCaptureStackBackTrace @ 0x1400CCD30 (RtlCaptureStackBackTrace.c)
 *     CmpThreadInfoLogStack @ 0x1401B3194 (CmpThreadInfoLogStack.c)
 *     KiDpcWatchdogCaptureStack @ 0x14028D34C (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x1402FECEC (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14030E6C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x14030F934 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140316C58 (EtwpCovSampCaptureKernelStack.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140583AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406D1564 (PoDiagCaptureUsermodeStack.c)
 *     EtwpCovSampCaptureUserStack @ 0x1408C5720 (EtwpCovSampCaptureUserStack.c)
 *     ExpUpdateDebugInfo @ 0x1408CF6A8 (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlpWalkFrameChain @ 0x14009EAD0 (RtlpWalkFrameChain.c)
 *     MmCanThreadFault @ 0x1400CC2D4 (MmCanThreadFault.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400CCCF0 (RtlEnoughStackSpaceForStackCapture.c)
 */

ULONG __stdcall RtlWalkFrameChain(PVOID *Callers, ULONG Count, ULONG Flags)
{
  ULONG v4; // ebx
  BOOL v5; // esi
  int v6; // edi
  unsigned int v7; // ebp
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
  if ( !MmCanThreadFault() && (v4 & 1) != 0 )
    return 0;
  if ( !(unsigned int)RtlEnoughStackSpaceForStackCapture() )
    return 0;
  result = RtlpWalkFrameChain((__int64)Callers, v7, v4, v6);
  if ( result )
    return (__PAIR64__(result, v4 & 2) - 1) >> 32;
  return result;
}
