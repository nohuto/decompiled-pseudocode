/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x140276884
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x140275490 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x140279580 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(__int64 a1, int a2)
{
  _DWORD *v4; // rbx
  __int16 v5; // bx
  PHYSICAL_ADDRESS v7[3]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v8[176]; // [rsp+48h] [rbp-C0h] BYREF

  v4 = HvlpAcquireHypercallPage(v7, 1, (__int64)v8, 88LL);
  if ( (unsigned int)HvlpAffinityToHvProcessorSet(a1, v4 + 2, (v7[0].LowPart & 2) != 0 ? 64 : 4072) == -1 )
  {
    HvlpReleaseHypercallPage((unsigned int *)v7);
    v4 = HvlpAcquireHypercallPage(v7, 1, 0LL, 0LL);
    HvlpAffinityToHvProcessorSet(a1, v4 + 2, 4072LL);
  }
  v4[1] = 0;
  *v4 = a2;
  v5 = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v7);
  return v5 != 0 ? 0xC0000001 : 0;
}
