/*
 * XREFs of PopThermalSxEntry @ 0x140167290
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140167438 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x1401675B4 (PopTraceThermalZoneActiveActivity.c)
 *     PopCoolingSxTransition @ 0x14016775C (PopCoolingSxTransition.c)
 *     PopAcquireRwLockShared @ 0x140167D90 (PopAcquireRwLockShared.c)
 *     PopThermalStandbyEndTracking @ 0x140167DB8 (PopThermalStandbyEndTracking.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140727F50 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140746C58 (PopThermalUpdateActiveTimeTracking.c)
 */

__int64 __fastcall PopThermalSxEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  PVOID *i; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  PopAcquirePolicyLock(a1, a2);
  PopThermalStandbyEndTracking(4LL);
  PopReleasePolicyLock(v3, v2);
  PopAcquireRwLockShared(&PopPolicyDeviceLock);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)(i + 54));
    if ( *((_BYTE *)i + 145) )
    {
      LOBYTE(v5) = *((_BYTE *)i + 80);
      PopThermalUpdatePassiveTimeTracking(i + 63, v5);
      PopTraceThermalZonePassiveHistogram(i);
    }
    if ( *((_BYTE *)i + 505) )
    {
      LOBYTE(v5) = *((_BYTE *)i + 69);
      PopThermalUpdateActiveTimeTracking(i + 63, v5);
      PopTraceThermalZoneActiveActivity(i);
    }
    *((_BYTE *)i + 504) = 1;
    PopReleaseRwLock((ULONG_PTR)(i + 54));
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  LOBYTE(v6) = 1;
  return PopCoolingSxTransition(v6);
}
