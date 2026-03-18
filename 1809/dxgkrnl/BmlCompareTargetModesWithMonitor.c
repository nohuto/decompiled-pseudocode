/*
 * XREFs of BmlCompareTargetModesWithMonitor @ 0x1C013B278
 * Callers:
 *     BmlCompareTargetModes @ 0x1C00C6070 (BmlCompareTargetModes.c)
 * Callees:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00C46E8 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 */

__int64 __fastcall BmlCompareTargetModesWithMonitor(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int TargetModePreferenceOnMonitor; // ebp
  int v8; // eax

  TargetModePreferenceOnMonitor = BmlGetTargetModePreferenceOnMonitor(a1, a3, a4);
  v8 = BmlGetTargetModePreferenceOnMonitor(a2, a3, a4);
  if ( TargetModePreferenceOnMonitor > v8 )
    return 1LL;
  else
    return (unsigned int)(TargetModePreferenceOnMonitor >= v8) - 1;
}
