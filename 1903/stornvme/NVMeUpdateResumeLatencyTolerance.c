/*
 * XREFs of NVMeUpdateResumeLatencyTolerance @ 0x1C000DD64
 * Callers:
 *     NVMePowerSetFState @ 0x1C000D504 (NVMePowerSetFState.c)
 *     NVMePowerSettingChangeNotification @ 0x1C000D798 (NVMePowerSettingChangeNotification.c)
 *     NVMeSystemPowerHint @ 0x1C000DCA0 (NVMeSystemPowerHint.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeUpdateResumeLatencyTolerance(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned __int8 v3; // al
  bool v4; // zf

  v1 = *(_DWORD *)(a1 + 1592);
  if ( *(_DWORD *)(a1 + 1588) == 1 )
  {
    v2 = *(_DWORD *)(a1 + 100);
    if ( v2 == -1 )
      v2 = *(_DWORD *)(a1 + 1596);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 96);
    if ( v2 == -1 )
    {
      v3 = *(_BYTE *)(a1 + 1586);
      if ( !v3 || v3 >= *(unsigned __int8 *)(a1 + 1585) - 1 || (v2 = *(_DWORD *)(a1 + 1608), v1 > v2) )
        v2 = *(_DWORD *)(a1 + 1600);
    }
  }
  *(_DWORD *)(a1 + 1592) = v2;
  v4 = v1 == v2;
  if ( v1 != v2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: Current Resume Latency Tolerance changed from %dms to %dms\n", v1, v2);
    v4 = v1 == v2;
  }
  return !v4;
}
