/*
 * XREFs of EtwTraceEndPointerFrameCommit @ 0x1C00ABE50
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z @ 0x1C0118B5C (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@K@Z.c)
 * Callees:
 *     McTemplateK0qqq @ 0x1C00AEFD0 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceEndPointerFrameCommit(struct _MCGEN_TRACE_CONTEXT *Arg0, unsigned int Arg1, const GUID *a3)
{
  ULONG result; // eax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq(Arg0, &EndPointerFrameCommit, a3, (const unsigned int)Arg0, Arg1, 0);
  return result;
}
