/*
 * XREFs of RtlCaptureStackBackTrace @ 0x180003790
 * Callers:
 *     RtlReleaseActivationContext @ 0x18002D7A0 (RtlReleaseActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x180033820 (RtlActivateActivationContextEx.c)
 *     RtlGetCallersAddress @ 0x1800ED5F0 (RtlGetCallersAddress.c)
 *     RtlpHeapTrkTrackStack @ 0x1800FACD4 (RtlpHeapTrkTrackStack.c)
 *     RtlStdLogStackTrace @ 0x1800FDBE0 (RtlStdLogStackTrace.c)
 *     RtlpHpHeapHandleError @ 0x180103FC0 (RtlpHpHeapHandleError.c)
 *     RtlpHpStackTraceAddStack @ 0x18010449C (RtlpHpStackTraceAddStack.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x180106C20 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x180003830 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  unsigned int v9; // r8d
  ULONG v10; // edx
  unsigned int i; // ecx
  __int64 v13; // rax

  v4 = 0xFFFF;
  if ( FramesToCapture <= 0xFFFF )
    v4 = FramesToCapture;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v4 + v7, v7 << 8);
  v9 = v8;
  if ( v8 <= v7 )
    return 0;
  v10 = 0;
  if ( BackTraceHash )
  {
    for ( i = 0; i < v4; v10 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v9 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v10;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
