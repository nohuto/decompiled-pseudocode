/*
 * XREFs of EtwTraceTouchPadAAP @ 0x1C010BD70
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01792D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     McTemplateK0qqqtq @ 0x1C010EBA8 (McTemplateK0qqqtq.c)
 */

__int64 __fastcall EtwTraceTouchPadAAP(int a1, int a2, int a3, char a4, char a5)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0qqqtq(a1, a2, a3, a1, a2, a3, a4, a5);
  return result;
}
