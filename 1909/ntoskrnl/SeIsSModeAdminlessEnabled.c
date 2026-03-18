/*
 * XREFs of SeIsSModeAdminlessEnabled @ 0x1400E8634
 * Callers:
 *     NtQueryInformationToken @ 0x1405ED700 (NtQueryInformationToken.c)
 *     SeGetLinkedToken @ 0x1408DFCD0 (SeGetLinkedToken.c)
 * Callees:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x1400E865C (SepIsAdminlessEnforcementModeEnabled.c)
 *     SepIsSModeEnabled @ 0x1401010D0 (SepIsSModeEnabled.c)
 */

char SeIsSModeAdminlessEnabled()
{
  char v0; // bl

  v0 = 1;
  if ( (unsigned __int8)SepIsAdminlessEnforcementModeEnabled() != 1 || (unsigned __int8)SepIsSModeEnabled() != 1 )
    return 0;
  return v0;
}
