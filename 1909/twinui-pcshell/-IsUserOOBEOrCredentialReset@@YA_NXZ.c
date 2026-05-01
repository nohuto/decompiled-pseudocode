/*
 * XREFs of ?IsUserOOBEOrCredentialReset@@YA_NXZ @ 0x1801E02DC
 * Callers:
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x18009ADA4 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x180313860 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?IsCredentialReset@@YA_NXZ @ 0x1801E01A4 (-IsCredentialReset@@YA_NXZ.c)
 *     ?IsUserOOBE@@YA_NXZ @ 0x1801E0240 (-IsUserOOBE@@YA_NXZ.c)
 */

char IsUserOOBEOrCredentialReset(void)
{
  char v0; // bl

  v0 = 0;
  if ( IsUserOOBE() || IsCredentialReset() )
    return 1;
  return v0;
}
