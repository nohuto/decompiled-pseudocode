/*
 * XREFs of HvlpConfigureLegacyPowerPolicySetting @ 0x14028B320
 * Callers:
 *     HvlpLegacyPowerPolicySettingCallback @ 0x14028B4A0 (HvlpLegacyPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpConfigureLegacyPowerPolicySetting(_QWORD *a1)
{
  _QWORD *v2; // rax
  PHYSICAL_ADDRESS v4[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v4, 0, 0x20uLL);
  v2 = HvlpAcquireHypercallPage(v4, 1, 0LL, 40LL);
  v2[1] = *a1;
  *(_DWORD *)v2 = 2;
  LODWORD(a1) = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v4);
  return (unsigned int)a1;
}
