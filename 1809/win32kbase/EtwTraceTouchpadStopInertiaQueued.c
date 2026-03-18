/*
 * XREFs of EtwTraceTouchpadStopInertiaQueued @ 0x1C00E86E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceTouchpadStopInertiaQueued(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0(a1, &TouchpadStopInertiaQueued, (const GUID *)&Context.Flags);
  return result;
}
