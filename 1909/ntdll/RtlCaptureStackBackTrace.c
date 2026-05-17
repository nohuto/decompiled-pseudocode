/*
 * XREFs of RtlCaptureStackBackTrace @ 0x180074CA0
 * Callers:
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180033A40 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x180071190 (RtlActivateActivationContextEx.c)
 *     RtlGetCallersAddress @ 0x1800EA7F0 (RtlGetCallersAddress.c)
 *     RtlpHeapTrkTrackStack @ 0x1800F89B8 (RtlpHeapTrkTrackStack.c)
 *     RtlStdLogStackTrace @ 0x1800FAEA0 (RtlStdLogStackTrace.c)
 *     RtlpHpHeapHandleError @ 0x180101780 (RtlpHpHeapHandleError.c)
 *     RtlpHpStackTraceAddStack @ 0x180101C3C (RtlpHpStackTraceAddStack.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x180104300 (RtlpStackTraceDatabaseLogPrefix.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x180074D40 (RtlWalkFrameChain.c)
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
