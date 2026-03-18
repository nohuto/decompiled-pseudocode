/*
 * XREFs of EtwTraceTouchTargetingSpeedHitTestStart @ 0x1C00E8590
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceTouchTargetingSpeedHitTestStart(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &TouchTargetingSpeedHitTestStart, (const GUID *)&Context.Flags);
  return result;
}
