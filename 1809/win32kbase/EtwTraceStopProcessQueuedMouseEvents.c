/*
 * XREFs of EtwTraceStopProcessQueuedMouseEvents @ 0x1C0031AE0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0030058 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceStopProcessQueuedMouseEvents(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x20) != 0 )
    return McTemplateK0(a1, &StopProcessQueuedMouseEvents, (const GUID *)&Context.Flags);
  return result;
}
