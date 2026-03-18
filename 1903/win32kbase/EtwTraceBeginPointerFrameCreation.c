/*
 * XREFs of EtwTraceBeginPointerFrameCreation @ 0x1C010D580
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C010FB50 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceBeginPointerFrameCreation(
        struct _MCGEN_TRACE_CONTEXT *Arg0,
        unsigned int Arg1,
        const GUID *Arg2)
{
  ULONG result; // eax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0qqq(
             Arg0,
             &BeginPointerFrameCreation,
             Arg2,
             (const unsigned int)Arg0,
             Arg1,
             (const unsigned int)Arg2);
  return result;
}
