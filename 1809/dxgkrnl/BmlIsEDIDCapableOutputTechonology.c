/*
 * XREFs of BmlIsEDIDCapableOutputTechonology @ 0x1C00C4C18
 * Callers:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00C46E8 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlFillPreferredMonitorMode @ 0x1C00C482C (BmlFillPreferredMonitorMode.c)
 *     BmlGetMonitorModePreference @ 0x1C00C4B10 (BmlGetMonitorModePreference.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsEDIDCapableOutputTechonology(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 80);
  return v1 != 0x80000000 && v1 != -1 && (v1 <= 0 || v1 > 3 && v1 != 6 && (v1 <= 7 || v1 > 9 && (v1 <= 10 || v1 > 14)));
}
