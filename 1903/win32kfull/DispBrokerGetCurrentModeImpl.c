/*
 * XREFs of DispBrokerGetCurrentModeImpl @ 0x1C00E3D80
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E413C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 DispBrokerGetCurrentModeImpl()
{
  int v1; // [rsp+20h] [rbp-18h]
  __int64 v2; // [rsp+20h] [rbp-18h]

  v1 = 3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_DesktopDisplayBroker__private_propertyCache,
    12773644LL,
    &unk_1C02DB8F0,
    1LL,
    v1);
  if ( (unsigned int)UserIsConsoleConnection() )
  {
    LODWORD(v2) = 3;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &Feature_BrokeredDisplays_ConsoleSessions__private_propertyCache,
      19043985LL,
      &unk_1C02DB578,
      0LL,
      v2);
    return 0LL;
  }
  if ( !(unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 0LL;
  return 3LL;
}
