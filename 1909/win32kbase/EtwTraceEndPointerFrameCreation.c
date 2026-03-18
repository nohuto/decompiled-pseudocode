/*
 * XREFs of EtwTraceEndPointerFrameCreation @ 0x1C010B300
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C016D0FC (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     McTemplateK0qqq @ 0x1C010D1E0 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceEndPointerFrameCreation(
        struct _MCGEN_TRACE_CONTEXT *Arg0,
        unsigned int Arg1,
        const GUID *Arg2)
{
  ULONG result; // eax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0qqq(
             Arg0,
             &EndPointerFrameCreation,
             Arg2,
             (const unsigned int)Arg0,
             Arg1,
             (const unsigned int)Arg2);
  return result;
}
