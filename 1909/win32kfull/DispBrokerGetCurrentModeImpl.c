/*
 * XREFs of DispBrokerGetCurrentModeImpl @ 0x1C0116710
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C012ACDC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 DispBrokerGetCurrentModeImpl()
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_DesktopDisplayBroker__private_propertyCache,
    12773644LL,
    &unk_1C02DB114,
    1LL,
    3);
  if ( (unsigned int)UserIsConsoleConnection() )
  {
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_BrokeredDisplays_ConsoleSessions__private_propertyCache,
      19043985LL,
      &unk_1C02DB11C,
      0LL,
      3);
    return 0LL;
  }
  if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 0LL;
  return 3LL;
}
