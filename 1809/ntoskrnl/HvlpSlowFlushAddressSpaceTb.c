/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x140279D00
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x1402795DC (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E6A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271864 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272384 (HvlpReleaseHypercallPage.c)
 *     HvlpPrepareFlushHeader @ 0x140279CA8 (HvlpPrepareFlushHeader.c)
 */

PSLIST_ENTRY __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rax
  PHYSICAL_ADDRESS v8[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+40h] [rbp-48h] BYREF

  v6 = HvlpAcquireHypercallPage(v8, 1, (__int64)&v9, 24LL);
  HvlpPrepareFlushHeader(v6, a1, a2, a3);
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((unsigned int *)v8);
}
