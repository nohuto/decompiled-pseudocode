/*
 * XREFs of HvlpSlowSendSyntheticClusterIpiEx @ 0x14028A850
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1402893E0 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14028D6D0 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlpSlowSendSyntheticClusterIpiEx(__int64 a1, int a2)
{
  _DWORD *v4; // rbx
  __int16 v5; // bx
  PHYSICAL_ADDRESS v7[4]; // [rsp+28h] [rbp-E0h] BYREF
  _BYTE v8[176]; // [rsp+48h] [rbp-C0h] BYREF

  memset(v7, 0, sizeof(v7));
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
