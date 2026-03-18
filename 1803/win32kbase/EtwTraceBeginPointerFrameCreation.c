/*
 * XREFs of EtwTraceBeginPointerFrameCreation @ 0x1C00AB6B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C00AEFD0 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceBeginPointerFrameCreation(
        struct _MCGEN_TRACE_CONTEXT *Arg0,
        unsigned int Arg1,
        const GUID *Arg2)
{
  ULONG result; // eax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0qqq(
             Arg0,
             &BeginPointerFrameCreation,
             Arg2,
             (const unsigned int)Arg0,
             Arg1,
             (const unsigned int)Arg2);
  return result;
}
