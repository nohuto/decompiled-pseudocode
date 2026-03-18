/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x14028E5AC
 * Callers:
 *     HvlpGetPageList @ 0x14028E418 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x14028E6D0 (HvlpStartPageListIteration.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

PSLIST_ENTRY __fastcall HvlpInvokeGetPageListHypercall(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  PHYSICAL_ADDRESS v5[4]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v6[48]; // [rsp+40h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  v3 = HvlpAcquireHypercallPage(v5, 1, (__int64)v6, 24LL);
  v3[1] = -1LL;
  *v3 = a2;
  v3[2] = 1LL;
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((unsigned int *)v5);
}
