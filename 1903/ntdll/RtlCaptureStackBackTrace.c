/*
 * XREFs of RtlCaptureStackBackTrace @ 0x180074820
 * Callers:
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x180070F40 (RtlActivateActivationContextEx.c)
 *     RtlGetCallersAddress @ 0x1800EA700 (RtlGetCallersAddress.c)
 *     sub_1800F88D8 @ 0x1800F88D8 (sub_1800F88D8.c)
 *     sub_1800FADC0 @ 0x1800FADC0 (sub_1800FADC0.c)
 *     sub_1801016A0 @ 0x1801016A0 (sub_1801016A0.c)
 *     sub_180101B5C @ 0x180101B5C (sub_180101B5C.c)
 *     sub_180104220 @ 0x180104220 (sub_180104220.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1800748C0 (RtlWalkFrameChain.c)
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
