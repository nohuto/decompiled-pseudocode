/*
 * XREFs of EtwTracePowerOnMonitorEnd @ 0x1C0066C9C
 * Callers:
 *     PowerOnMonitor @ 0x1C00669D0 (PowerOnMonitor.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C0104AA8 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     McTemplateK0q @ 0x1C010D17C (McTemplateK0q.c)
 */

__int64 __fastcall EtwTracePowerOnMonitorEnd(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0q(a1, &PowerOnMonitorEnd, a3, (unsigned int)a1);
  return result;
}
