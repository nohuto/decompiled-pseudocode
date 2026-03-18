/*
 * XREFs of EtwTracePTPReadThresholdsStart @ 0x1C00E79D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTracePTPReadThresholdsStart(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0(a1, &PTPReadThresholdsStart, (const GUID *)&Context.Flags);
  return result;
}
