/*
 * XREFs of PopThermalSxEntry @ 0x140166CE0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x140166E88 (PopTraceThermalZonePassiveHistogram.c)
 *     PopTraceThermalZoneActiveActivity @ 0x140167004 (PopTraceThermalZoneActiveActivity.c)
 *     PopCoolingSxTransition @ 0x1401671AC (PopCoolingSxTransition.c)
 *     PopAcquireRwLockShared @ 0x1401677E0 (PopAcquireRwLockShared.c)
 *     PopThermalStandbyEndTracking @ 0x140167808 (PopThermalStandbyEndTracking.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1407292C0 (PopThermalUpdatePassiveTimeTracking.c)
 *     PopThermalUpdateActiveTimeTracking @ 0x140748B58 (PopThermalUpdateActiveTimeTracking.c)
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
