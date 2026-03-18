/*
 * XREFs of EtwTraceEndPointerFrameBuildPartial @ 0x1C010B250
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C010D1E0 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceEndPointerFrameBuildPartial(
        struct _MCGEN_TRACE_CONTEXT *Arg1,
        unsigned int Arg2,
        const GUID *a3)
{
  ULONG result; // eax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0qqq(Arg1, &EndPointerFrameBuildPartial, a3, 0, (const unsigned int)Arg1, Arg2);
  return result;
}
