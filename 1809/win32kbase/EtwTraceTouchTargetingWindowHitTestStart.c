/*
 * XREFs of EtwTraceTouchTargetingWindowHitTestStart @ 0x1C00E85F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceTouchTargetingWindowHitTestStart(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &TouchTargetingWindowHitTestStart, (const GUID *)&Context.Flags);
  return result;
}
