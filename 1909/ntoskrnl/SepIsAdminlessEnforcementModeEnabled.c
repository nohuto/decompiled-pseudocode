/*
 * XREFs of SepIsAdminlessEnforcementModeEnabled @ 0x1400E865C
 * Callers:
 *     SeIsSModeAdminlessEnabled @ 0x1400E8634 (SeIsSModeAdminlessEnabled.c)
 *     SeSecurityModelQueryInformation @ 0x14072F980 (SeSecurityModelQueryInformation.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400E86A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

char SepIsAdminlessEnforcementModeEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( SeAdminlessEnforcementModeEnabled )
    return 1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (unsigned int)&Feature_SModeAdminless__private_propertyCache,
    17051301,
    (unsigned int)&Feature_PdttSupport_logged_traits,
    0,
    3);
  return v0;
}
