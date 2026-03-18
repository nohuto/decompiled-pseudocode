/*
 * XREFs of SeSecurityModelQueryInformation @ 0x14072F980
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     SepIsAdminlessEnforcementModeEnabled @ 0x1400E865C (SepIsAdminlessEnforcementModeEnabled.c)
 *     SepIsSModeEnabled @ 0x1401010D0 (SepIsSModeEnabled.c)
 *     SepIsDeviceOwnerProtectionDowngradeAllowed @ 0x140171B30 (SepIsDeviceOwnerProtectionDowngradeAllowed.c)
 *     SepIsAdminlessAuditModeEnabled @ 0x140171B44 (SepIsAdminlessAuditModeEnabled.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
