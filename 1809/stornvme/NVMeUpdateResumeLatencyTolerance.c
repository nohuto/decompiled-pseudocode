/*
 * XREFs of NVMeUpdateResumeLatencyTolerance @ 0x1C000FB38
 * Callers:
 *     NVMePowerSetFState @ 0x1C000F2D8 (NVMePowerSetFState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C000F56C (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C000FA74 (NVMeSystemPowerHint.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeUpdateResumeLatencyTolerance(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned __int8 v3; // al
  bool v4; // zf

  v1 = *(_DWORD *)(a1 + 1584);
  if ( *(_DWORD *)(a1 + 1580) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 100);
    if ( v2 == -1 )
      v2 = *(_DWORD *)(a1 + 1588);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 96);
    if ( v2 == -1 )
    {
      v3 = *(_BYTE *)(a1 + 1578);
      if ( !v3 || v3 >= *(unsigned __int8 *)(a1 + 1577) - 1 || (v2 = *(_DWORD *)(a1 + 1600), v1 > v2) )
        v2 = *(_DWORD *)(a1 + 1592);
    }
  }
  *(_DWORD *)(a1 + 1584) = v2;
  v4 = v1 == v2;
  if ( v1 != v2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Current Resume Latency Tolerance changed from %dms to %dms\n", v1, v2);
    v4 = v1 == v2;
  }
  return !v4;
}
