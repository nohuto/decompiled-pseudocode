/*
 * XREFs of EtwTraceBeginPointerFrameBuildPartial @ 0x1C010D4D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C010FB50 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceBeginPointerFrameBuildPartial(
        struct _MCGEN_TRACE_CONTEXT *Arg1,
        unsigned int Arg2,
        const GUID *a3)
{
  ULONG result; // eax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0qqq(Arg1, &BeginPointerFrameBuildPartial, a3, 0, (const unsigned int)Arg1, Arg2);
  return result;
}
