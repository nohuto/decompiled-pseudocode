/*
 * XREFs of ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x1C0058C88
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0058B1C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_MapReportingKind(wil_ReportingKind kind, int enabled)
{
  unsigned __int8 v2; // cl

  if ( kind )
  {
    switch ( kind )
    {
      case wil_ReportingKind_UniqueUsage:
        return enabled == 0 ? 4 : 0;
      case wil_ReportingKind_UniqueOpportunity:
        return enabled != 0 ? 1 : 5;
      case wil_ReportingKind_DeviceUsage:
        return enabled != 0 ? 2 : 6;
      case wil_ReportingKind_DeviceOpportunity:
        return enabled != 0 ? 3 : 7;
      case wil_ReportingKind_TotalDuration:
        return enabled != 0 ? 8 : 10;
      case wil_ReportingKind_PausedDuration:
        return enabled != 0 ? 9 : 11;
    }
    v2 = kind - 100;
    if ( v2 <= 0x31u )
      return v2 + (enabled != 0 ? 100 : 150);
  }
  return 255LL;
}
