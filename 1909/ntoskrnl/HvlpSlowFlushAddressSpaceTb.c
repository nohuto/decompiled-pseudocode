/*
 * XREFs of HvlpSlowFlushAddressSpaceTb @ 0x14028DDF8
 * Callers:
 *     HvlFlushAddressSpaceTb @ 0x14028D684 (HvlFlushAddressSpaceTb.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 *     HvlpPrepareFlushHeader @ 0x14028DDA0 (HvlpPrepareFlushHeader.c)
 */

PSLIST_ENTRY __fastcall HvlpSlowFlushAddressSpaceTb(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rax
  PHYSICAL_ADDRESS v8[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v9[48]; // [rsp+40h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  v6 = HvlpAcquireHypercallPage(v8, 1, (__int64)v9, 24LL);
  HvlpPrepareFlushHeader(v6, a1, a2, a3);
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((unsigned int *)v8);
}
