/*
 * XREFs of ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x1C00737D0
 * Callers:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0073674 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_MapReportingKind(enum wil_ReportingKind a1)
{
  unsigned __int8 v1; // cl

  if ( a1 )
  {
    switch ( a1 )
    {
      case wil_ReportingKind_UniqueUsage:
        return 4LL;
      case wil_ReportingKind_UniqueOpportunity:
        return 5LL;
      case wil_ReportingKind_DeviceUsage:
        return 6LL;
      case wil_ReportingKind_DeviceOpportunity:
        return 7LL;
      case wil_ReportingKind_TotalDuration:
        return 10LL;
      case wil_ReportingKind_PausedDuration:
        return 11LL;
    }
    v1 = a1 - 100;
    if ( v1 <= 0x31u )
      return (unsigned int)v1 + 150;
  }
  return 255LL;
}
