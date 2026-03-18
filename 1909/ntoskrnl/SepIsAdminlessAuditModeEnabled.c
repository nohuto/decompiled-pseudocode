/*
 * XREFs of SepIsAdminlessAuditModeEnabled @ 0x140171B44
 * Callers:
 *     SeSecurityModelQueryInformation @ 0x14072F980 (SeSecurityModelQueryInformation.c)
 * Callees:
 *     <none>
 */

bool SepIsAdminlessAuditModeEnabled()
{
  return SeAdminlessEnableWatsonReporting != 0;
}
