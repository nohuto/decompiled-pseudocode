/*
 * XREFs of ?IsMixedRealitySetupCompleteForCurrentUser@@YA_NXZ @ 0x1801DC7AC
 * Callers:
 *     ?HolographicUsageUpdatedFromRegistry@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DC2FC (-HolographicUsageUpdatedFromRegistry@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?IsSystemEligibleForNewCortanaApp@CortanaStoreAppHelper@@YAJPEAE@Z @ 0x1801E63EC (-IsSystemEligibleForNewCortanaApp@CortanaStoreAppHelper@@YAJPEAE@Z.c)
 * Callees:
 *     <none>
 */

bool IsMixedRealitySetupCompleteForCurrentUser(void)
{
  int v1; // [rsp+50h] [rbp+8h] BYREF
  DWORD v2; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 4;
  RegGetValueW(
    HKEY_CURRENT_USER,
    L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Holographic",
    L"FirstRunSucceeded",
    0x20000018u,
    0LL,
    &v1,
    &v2);
  return v1 != 0;
}
