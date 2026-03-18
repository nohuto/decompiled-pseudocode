/*
 * XREFs of SepIsAdminlessAuditModeEnabled @ 0x140171454
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14072DAB0 (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsAdminlessAuditModeEnabled()
{
  return SeAdminlessEnableWatsonReporting != 0;
}
