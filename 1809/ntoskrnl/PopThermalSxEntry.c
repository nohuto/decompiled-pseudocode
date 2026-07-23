/*
 * XREFs of PopThermalSxEntry @ 0x140142634
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     PopTraceThermalZonePassiveHistogram @ 0x1401426F0 (PopTraceThermalZonePassiveHistogram.c)
 *     PopThermalStandbyEndTracking @ 0x1401428B4 (PopThermalStandbyEndTracking.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x1406DE0B4 (PopThermalUpdatePassiveTimeTracking.c)
 */

void __fastcall PopThermalSxEntry(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *i; // rsi
  __int64 v3; // rdx

  PopAcquirePolicyLock(a1);
  PopThermalStandbyEndTracking(4LL);
  PopReleasePolicyLock();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)(i + 54));
    LOBYTE(v3) = *((_BYTE *)i + 80);
    PopThermalUpdatePassiveTimeTracking(i + 63, v3);
    PopTraceThermalZonePassiveHistogram(i);
    *((_BYTE *)i + 504) = 1;
    PopReleaseRwLock((ULONG_PTR)(i + 54));
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
