/*
 * XREFs of EtwTraceTouchPadCurtainState @ 0x1C00ACB50
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C0125B30 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     McTemplateK0t @ 0x1C00B0300 (McTemplateK0t.c)
 */

__int64 __fastcall EtwTraceTouchPadCurtainState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0t(a1, a2, a3, (unsigned int)a1);
  return result;
}
