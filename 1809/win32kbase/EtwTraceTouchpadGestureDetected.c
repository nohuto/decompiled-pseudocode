/*
 * XREFs of EtwTraceTouchpadGestureDetected @ 0x1C00E8680
 * Callers:
 *     ?SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z @ 0x1C014BE00 (-SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 */

ULONG __fastcall EtwTraceTouchpadGestureDetected(struct _MCGEN_TRACE_CONTEXT *a1)
{
  ULONG result; // eax

  if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 0x40) != 0 )
    return McTemplateK0(a1, &TouchpadGestureDetected, (const GUID *)&Context.Flags);
  return result;
}
