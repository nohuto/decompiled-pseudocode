/*
 * XREFs of HvlpSlowFlushAddressSpaceTbEx @ 0x140279F90
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x1402797CC (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x140279580 (HvlpAffinityToHvProcessorSet.c)
 */

PSLIST_ENTRY __fastcall HvlpSlowFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // r9
  unsigned int v7; // r8d
  _QWORD *v8; // rbx
  __int64 v9; // rax
  PHYSICAL_ADDRESS v11[3]; // [rsp+28h] [rbp-F0h] BYREF
  _BYTE v12[192]; // [rsp+48h] [rbp-D0h] BYREF

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
