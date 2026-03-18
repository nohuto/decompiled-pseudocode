/*
 * XREFs of EtwTraceTouchPadWMPointerProcessingStart @ 0x1C00E83D0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceTouchPadWMPointerProcessingStart(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &TouchPadWMPointerProcessingStart, (const GUID *)&Context.Flags);
  return result;
}
