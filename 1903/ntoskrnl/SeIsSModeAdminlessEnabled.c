/*
 * XREFs of SeIsSModeAdminlessEnabled @ 0x1400AF810
 * Callers:
 *     NtQueryInformationToken @ 0x1405ECF30 (NtQueryInformationToken.c)
 *     SeGetLinkedToken @ 0x1408E03D0 (SeGetLinkedToken.c)
 * Callees:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x1400AF838 (SepIsAdminlessEnforcementModeEnabled.c)
 *     SepIsSModeEnabled @ 0x1400FE6D0 (SepIsSModeEnabled.c)
 */

char SeIsSModeAdminlessEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( (unsigned __int8)SepIsAdminlessEnforcementModeEnabled() != 1 || (unsigned __int8)SepIsSModeEnabled() != 1 )
    return 0;
  return v0;
}
