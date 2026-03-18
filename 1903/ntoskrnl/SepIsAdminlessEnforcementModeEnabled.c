/*
 * XREFs of SepIsAdminlessEnforcementModeEnabled @ 0x1400AF838
 * Callers:
 *     SeIsSModeAdminlessEnabled @ 0x1400AF810 (SeIsSModeAdminlessEnabled.c)
 *     SeSecurityModelQueryInformation @ 0x14072DAB0 (SeSecurityModelQueryInformation.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1400AF880 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
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
