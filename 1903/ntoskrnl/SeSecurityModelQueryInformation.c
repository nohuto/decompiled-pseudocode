/*
 * XREFs of SeSecurityModelQueryInformation @ 0x14072DAB0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x1400AF838 (SepIsAdminlessEnforcementModeEnabled.c)
 *     SepIsSModeEnabled @ 0x1400FE6D0 (SepIsSModeEnabled.c)
 *     SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140171440 (SepIsDeviceOwnerProtectionDowngradeAllowed.c)
 *     SepIsAdminlessAuditModeEnabled @ 0x140171454 (SepIsAdminlessAuditModeEnabled.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall SeSecurityModelQueryInformation(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  *a3 = 4;
  memset(a1, 0, a2);
  if ( (SepIsAdminlessEnforcementModeEnabled() == 1 || SepIsAdminlessAuditModeEnabled()) && SepIsSModeEnabled() )
    *a1 |= 1u;
  if ( SepIsDeviceOwnerProtectionDowngradeAllowed() )
    *a1 |= 2u;
  return 0LL;
}
