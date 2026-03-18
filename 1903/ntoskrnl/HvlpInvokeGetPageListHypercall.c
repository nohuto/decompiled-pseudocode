/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x14028E84C
 * Callers:
 *     HvlpGetPageList @ 0x14028E6B8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x14028E970 (HvlpStartPageListIteration.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
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
