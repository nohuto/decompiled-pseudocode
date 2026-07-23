/*
 * XREFs of PopThermalCoolingPowerSettingCallback @ 0x140178150
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x14086D9B8 (PopThermalZoneUpdateCoolingPolicy.c)
 */

__int64 __fastcall PopThermalCoolingPowerSettingCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v6; // r9
  int v7; // eax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalLock);
  v6 = *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_SYSTEM_COOLING_POLICY.Data4 - a1[1];
  if ( !v6 && a3 == 4 )
    dword_1404191C8 = *a2;
  if ( !PopPlatformAoAc || (v7 = 1, PopConsoleDisplayState) )
    v7 = dword_1404191C8;
  if ( v7 != PopCoolingMode )
  {
    PopCoolingMode = v7;
    PopThermalZoneUpdateCoolingPolicy();
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalLock);
  return 0LL;
}
