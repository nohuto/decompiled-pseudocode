/*
 * XREFs of HvlpInvokeGetPageListHypercall @ 0x14027A3C0
 * Callers:
 *     HvlpGetPageList @ 0x14027A1D8 (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x14027A4D8 (HvlpStartPageListIteration.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271764 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272284 (HvlpReleaseHypercallPage.c)
 */

PSLIST_ENTRY __fastcall HvlpInvokeGetPageListHypercall(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  PHYSICAL_ADDRESS v5[3]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v6[48]; // [rsp+40h] [rbp-48h] BYREF

  v3 = HvlpAcquireHypercallPage(v5, 1, (__int64)v6, 24LL);
  v3[1] = -1LL;
  *v3 = a2;
  v3[2] = 1LL;
  HvcallCodeVa();
  return HvlpReleaseHypercallPage((unsigned int *)v5);
}
