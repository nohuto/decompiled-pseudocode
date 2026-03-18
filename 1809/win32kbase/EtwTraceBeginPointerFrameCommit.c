/*
 * XREFs of EtwTraceBeginPointerFrameCommit @ 0x1C00E5F80
 * Callers:
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01238D0 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 * Callees:
 *     McTemplateK0qqq @ 0x1C00E94C0 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceBeginPointerFrameCommit(struct _MCGEN_TRACE_CONTEXT *Arg0, unsigned int Arg1, const GUID *a3)
{
  ULONG result; // eax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0qqq(Arg0, &BeginPointerFrameCommit, a3, (const unsigned int)Arg0, Arg1, 0);
  return result;
}
