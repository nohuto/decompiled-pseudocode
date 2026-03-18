/*
 * XREFs of HvlpSetPowerProperty @ 0x14028B474
 * Callers:
 *     HvlConfigureIdleStates @ 0x14028A6E0 (HvlConfigureIdleStates.c)
 *     HvlRegisterLogicalProcessorFrequency @ 0x14028AF2C (HvlRegisterLogicalProcessorFrequency.c)
 *     HvlRegisterPerfFeedbackCounters @ 0x14028AF8C (HvlRegisterPerfFeedbackCounters.c)
 *     HvlSetPlatformIdleState @ 0x14028B02C (HvlSetPlatformIdleState.c)
 *     HvlpPowerPolicySettingCallback @ 0x14028B380 (HvlpPowerPolicySettingCallback.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlpSetPowerProperty(_OWORD *a1)
{
  _OWORD *v2; // rcx
  __int64 v3; // rax
  __int128 v4; // xmm1
  unsigned int v5; // ebx
  PHYSICAL_ADDRESS v7[5]; // [rsp+20h] [rbp-28h] BYREF

  memset(v7, 0, 0x20uLL);
  v2 = HvlpAcquireHypercallPage(v7, 1, 0LL, 408LL);
  v3 = 3LL;
  do
  {
    *v2 = *a1;
    v2[1] = a1[1];
    v2[2] = a1[2];
    v2[3] = a1[3];
    v2[4] = a1[4];
    v2[5] = a1[5];
    v2[6] = a1[6];
    v2 += 8;
    v4 = a1[7];
    a1 += 8;
    *(v2 - 1) = v4;
    --v3;
  }
  while ( v3 );
  *v2 = *a1;
  *((_QWORD *)v2 + 2) = *((_QWORD *)a1 + 2);
  v5 = (unsigned __int16)HvcallCodeVa() != 0 ? 0xC0000001 : 0;
  HvlpReleaseHypercallPage((unsigned int *)v7);
  return v5;
}
