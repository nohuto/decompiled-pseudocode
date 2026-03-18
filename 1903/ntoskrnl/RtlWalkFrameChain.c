/*
 * XREFs of RtlWalkFrameChain @ 0x140017230
 * Callers:
 *     RtlCaptureStackBackTrace @ 0x140017170 (RtlCaptureStackBackTrace.c)
 *     SepCreateTokenEx @ 0x140086D2C (SepCreateTokenEx.c)
 *     KiDpcWatchdogCaptureStack @ 0x1402A31FC (KiDpcWatchdogCaptureStack.c)
 *     SepGetStackTraceHash @ 0x14031CD0C (SepGetStackTraceHash.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14032C0DC (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpTraceStackWalk @ 0x14032D3E4 (EtwpTraceStackWalk.c)
 *     EtwpCovSampCaptureKernelStack @ 0x140335494 (EtwpCovSampCaptureKernelStack.c)
 *     SepDuplicateToken @ 0x1405D88E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406EF7D8 (PoDiagCaptureUsermodeStack.c)
 *     EtwpCovSampCaptureUserStack @ 0x1409016A4 (EtwpCovSampCaptureUserStack.c)
 *     ExpUpdateDebugInfo @ 0x14090B9AC (ExpUpdateDebugInfo.c)
 * Callees:
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400171F0 (RtlEnoughStackSpaceForStackCapture.c)
 *     RtlpWalkFrameChain @ 0x140017EB0 (RtlpWalkFrameChain.c)
 *     MmCanThreadFault @ 0x1400BF6DC (MmCanThreadFault.c)
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
