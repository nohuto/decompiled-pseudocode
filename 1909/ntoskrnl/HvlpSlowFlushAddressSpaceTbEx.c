/*
 * XREFs of HvlpSlowFlushAddressSpaceTbEx @ 0x14028DEA8
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14028D684 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14028D430 (HvlpAffinityToHvProcessorSet.c)
 */

PSLIST_ENTRY __fastcall HvlpSlowFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // r9
  unsigned int v7; // r8d
  _QWORD *v8; // rbx
  __int64 v9; // rax
  PHYSICAL_ADDRESS v11[4]; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v12[192]; // [rsp+48h] [rbp-D0h] BYREF

  memset(v11, 0, sizeof(v11));
  v6 = HvlpAcquireHypercallPage(v11, 1, (__int64)v12, 96LL);
  *v6 = a1;
  v7 = a3 == 0 ? 4 : 0;
  v8 = v6 + 2;
  v9 = v7 | 2;
  if ( a1 )
    v9 = v7;
  v6[1] = v9;
  if ( (unsigned int)HvlpAffinityToHvProcessorSet(a2, v6 + 2, (v11[0].LowPart & 2) != 0 ? 64 : 4064) == -1 )
    HvlpAffinityToHvProcessorSet(0LL, v8, 0);
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((unsigned int *)v11);
}
