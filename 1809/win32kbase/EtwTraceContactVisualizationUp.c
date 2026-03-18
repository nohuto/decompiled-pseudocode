/*
 * XREFs of EtwTraceContactVisualizationUp @ 0x1C00E6150
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceContactVisualizationUp(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE2(Microsoft_Windows_Win32kEnableBits) & 2) != 0 )
    return McTemplateK0(a1, &ContactVisualizationUp, (const GUID *)&Context.Flags);
  return result;
}
