/*
 * XREFs of KiInitializeVelocity @ 0x1409FD810
 * Callers:
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     KiGetDisableFgBoostDecayRegKeyHandle @ 0x14018A744 (KiGetDisableFgBoostDecayRegKeyHandle.c)
 *     RtlQueryImageFileKeyOption @ 0x1406DC5E0 (RtlQueryImageFileKeyOption.c)
 */

NTSTATUS KiInitializeVelocity()
{
  NTSTATUS result; // eax
  ULONG v1; // ecx
  ULONG v2; // [rsp+40h] [rbp+8h] BYREF

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistReflectPriority__private_propertyCache,
    13535778LL,
    (__int64)&Feature_PdttSupport_logged_traits,
    0,
    3);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistPreemptionPriorityKick__private_propertyCache,
    13780444LL,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 2u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistThreadFlag__private_propertyCache,
    13535795LL,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 4u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistForegroundBoostBias__private_propertyCache,
    14547726LL,
    (__int64)&Feature_PdttSupport_logged_traits,
    0,
    3);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistEnableBAM__private_propertyCache,
    14554252LL,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 0x10u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistSystemIrql__private_propertyCache,
    16641989LL,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 0x200u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistHRTimer__private_propertyCache,
    14647919LL,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 0x40u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_SchedulerAggressiveForegroundBoost__private_propertyCache,
    14612316LL,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiForegroundBoostTicks = 1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistAllowRealTime__private_propertyCache,
    14983736LL,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 0x80u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_SchedulerAssistLongSpinWait__private_propertyCache,
    16642015LL,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 0x400u;
  v2 = 0;
  result = KiGetDisableFgBoostDecayRegKeyHandle();
  if ( result >= 0 )
  {
    result = RtlQueryImageFileKeyOption(KiDisableFgBoostDecayRegistryHandle, L"DisableFGBoostDecay", 4, &v2, 4u, 0LL);
    v1 = v2;
    if ( result < 0 )
      v1 = 0;
    v2 = v1;
    if ( v1 )
      KiForegrounBoostVelocityFlag = 1;
  }
  return result;
}
