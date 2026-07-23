/*
 * XREFs of KiInitializeVelocity @ 0x1409C5FA8
 * Callers:
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400F2A84 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

_UNKNOWN **KiInitializeVelocity()
{
  _UNKNOWN **result; // rax

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
  result = wil_details_FeaturePropertyCache_ReportUsageToService(
             (__int64)&Feature_OneShotHRTimer__private_propertyCache,
             13256949LL,
             (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
             1u,
             3);
  KiVelocityFlags |= 0x100u;
  return result;
}
