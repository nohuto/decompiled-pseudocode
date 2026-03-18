/*
 * XREFs of EtwTraceGreMovePointerBegin @ 0x1C008ECD0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C00E94C0 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceGreMovePointerBegin(struct _MCGEN_TRACE_CONTEXT *Arg0, unsigned int Arg1, const GUID *Arg2)
{
  ULONG result; // eax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0qqq(Arg0, &GreMovePointerBegin, Arg2, (const unsigned int)Arg0, Arg1, (const unsigned int)Arg2);
  return result;
}
