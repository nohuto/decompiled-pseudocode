/*
 * XREFs of PopQueryPowerButtonBugcheckEnabled @ 0x1408B449C
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1403015D0 (PopPowerButtonWorkCallback.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

__int64 PopQueryPowerButtonBugcheckEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  unsigned int v2; // ebx
  int v3; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  v1 = PopPowerButtonBugcheckConfig;
  v2 = 0;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
      v2 = 1;
    else
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_PowerButtonBugcheck__private_propertyCache,
        9304334LL,
        (__int64)&Feature_PPLEnforcement_logged_traits,
        0,
        3);
  }
  byte_140438AB8 = v2;
  return v2;
}
