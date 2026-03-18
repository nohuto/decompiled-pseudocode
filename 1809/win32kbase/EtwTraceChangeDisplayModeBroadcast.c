/*
 * XREFs of EtwTraceChangeDisplayModeBroadcast @ 0x1C00950D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceChangeDisplayModeBroadcast(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 8) != 0 )
    return McTemplateK0(a1, &ChangeDisplayModeBroadcast, (const GUID *)a1);
  return result;
}
