/*
 * XREFs of EtwTraceEndPointerFrameMessageGeneration @ 0x1C010B330
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0165E1C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     McTemplateK0qqq @ 0x1C010D1E0 (McTemplateK0qqq.c)
 */

ULONG __fastcall EtwTraceEndPointerFrameMessageGeneration(
        struct _MCGEN_TRACE_CONTEXT *Arg0,
        unsigned int Arg1,
        const GUID *a3)
{
  ULONG result; // eax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0qqq(Arg0, &EndPointerFrameMessageGeneration, a3, (const unsigned int)Arg0, Arg1, 0);
  return result;
}
