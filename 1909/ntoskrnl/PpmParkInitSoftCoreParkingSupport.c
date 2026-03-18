/*
 * XREFs of PpmParkInitSoftCoreParkingSupport @ 0x1405B1FCC
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140759428 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PpmConvertTime @ 0x140004EB4 (PpmConvertTime.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400E86A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x140194CF0 (PpmCheckApplyParkConstraints.c)
 *     Feature_SoftCoreParking_Policy__private_IsEnabled @ 0x1401BF76C (Feature_SoftCoreParking_Policy__private_IsEnabled.c)
 *     PpmReinitializeHeteroEngine @ 0x140776088 (PpmReinitializeHeteroEngine.c)
 */

char PpmParkInitSoftCoreParkingSupport()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  char v3; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v5; // esi
  char v6; // bp
  unsigned __int8 CpuModel; // al
  unsigned __int64 v8; // rcx
  char result; // al

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v3 = 1;
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = 50000;
  v6 = PpmParkSoftParkingEnabled != 0;
  PoSoftParkingAllowed = 0;
  if ( CurrentPrcb->CpuVendor == 2
    && CurrentPrcb->CpuType == 6
    && CurrentPrcb->CpuModel == 126
    && (PopPlatformRole == 2 || PopPlatformRole == 8) )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_SoftCoreParking__private_propertyCache,
      21637024LL,
      (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
      1u,
      3);
    PpmParkSoftParkingVelocityEnabled = 1;
    PoSoftParkingAllowed = 1;
    PpmParkSoftParkingVelocityConfigured = (unsigned int)Feature_SoftCoreParking_Policy__private_IsEnabled() != 0;
  }
  if ( CurrentPrcb->CpuVendor == 2 && CurrentPrcb->CpuType == 6 )
  {
    CpuModel = CurrentPrcb->CpuModel;
    if ( (CpuModel == 0x8C || CpuModel == 0xA6) && (PopPlatformRole == 2 || PopPlatformRole == 8) )
    {
      v5 = 10000;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_SoftCoreParking__private_propertyCache,
        21637024LL,
        (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
        1u,
        3);
      PpmParkSoftParkingVelocityEnabled = 1;
      PoSoftParkingAllowed = 1;
    }
  }
  PpmParkSoftParkingEnabled = PoSoftParkingAllowed;
  if ( PoSoftParkingAllowed )
  {
    v8 = 1000000LL * KeGetCurrentPrcb()->MHz;
    if ( PpmParkSoftParkedQueueThreshold == -1 )
    {
      if ( PpmParkSoftParkingVelocityConfigured )
        v5 = 10000;
    }
    else
    {
      v5 = PpmParkSoftParkedQueueThreshold;
    }
    KeSoftParkedQueueThreshold = PpmConvertTime(v8, 0x989680uLL, v5);
  }
  if ( v6 != PpmParkSoftParkingEnabled && PpmIsParkingEnabled )
  {
    PpmCheckApplyParkConstraints(v1, v0, v2);
    v3 = 0;
  }
  result = PpmPerfQosTransitionHysteresisUse19h2Value;
  PpmPerfQosTransitionHysteresisUse19h2Value = 1;
  if ( result != 1 )
  {
    if ( !v3 )
      PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    result = PpmReinitializeHeteroEngine(0LL);
    v3 = 0;
  }
  if ( v3 )
    return PpmReleaseLock(&PpmPerfPolicyLock);
  return result;
}
