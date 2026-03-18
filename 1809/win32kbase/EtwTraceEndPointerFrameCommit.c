/*
 * XREFs of EtwTraceEndPointerFrameCommit @ 0x1C00E66B0
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0140910 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     McTemplateK0qqq @ 0x1C00E94C0 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceEndPointerFrameCommit(struct _MCGEN_TRACE_CONTEXT *Arg0, unsigned int Arg1, const GUID *a3)
{
  ULONG result; // eax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0qqq(Arg0, &EndPointerFrameCommit, a3, (const unsigned int)Arg0, Arg1, 0);
  return result;
}
