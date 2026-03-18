/*
 * XREFs of EtwTracePTPElasticDragModeStart @ 0x1C010B5C0
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01792D0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 */

__int64 __fastcall EtwTracePTPElasticDragModeStart(__int64 a1)
{
  __int64 result; // rax

  if ( (BYTE3(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
    return McTemplateK0(a1, &PTPElasticDragModeStart, &Context.Flags);
  return result;
}
