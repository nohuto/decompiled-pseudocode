/*
 * XREFs of EtwTraceEndPointerFrameBuildPartial @ 0x1C00E6630
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq @ 0x1C00E94C0 (McTemplateK0qqq.c)
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
