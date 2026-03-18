/*
 * XREFs of EtwTraceEdgyDetectionStart @ 0x1C00E6400
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceEdgyDetectionStart(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
    return McTemplateK0(a1, &EdgyDetectionStart, (const GUID *)&Context.Flags);
  return result;
}
