/*
 * XREFs of EtwTraceLatencyModeSwitchStop @ 0x1C0095AC0
 * Callers:
 *     RIMSendLatencyMgtRequest @ 0x1C009DC40 (RIMSendLatencyMgtRequest.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceLatencyModeSwitchStop(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
    return McTemplateK0(a1, &LatencyModeSwitchStop, (const GUID *)&Context.Flags);
  return result;
}
