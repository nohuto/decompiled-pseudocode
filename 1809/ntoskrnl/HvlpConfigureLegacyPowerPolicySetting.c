/*
 * XREFs of HvlpConfigureLegacyPowerPolicySetting @ 0x140276EFC
 * Callers:
 *     HvlpLegacyPowerPolicySettingCallback @ 0x140277040 (HvlpLegacyPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x140271764 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272284 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpConfigureLegacyPowerPolicySetting(_QWORD *a1)
{
  _QWORD *v2; // rax
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-28h] BYREF

  v2 = HvlpAcquireHypercallPage(v4, 1, 0LL, 40LL);
  v2[1] = *a1;
  *(_DWORD *)v2 = 2;
  LODWORD(a1) = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v4);
  return (unsigned int)a1;
}
