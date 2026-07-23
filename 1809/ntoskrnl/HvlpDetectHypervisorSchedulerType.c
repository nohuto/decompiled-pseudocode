/*
 * XREFs of HvlpDetectHypervisorSchedulerType @ 0x140277654
 * Callers:
 *     HvlPhase2Initialize @ 0x140193444 (HvlPhase2Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

PSLIST_ENTRY HvlpDetectHypervisorSchedulerType()
{
  _QWORD *v0; // rbx
  int *v1; // rdi
  PSLIST_ENTRY result; // rax
  PHYSICAL_ADDRESS v3[3]; // [rsp+20h] [rbp-878h] BYREF
  PHYSICAL_ADDRESS v4[3]; // [rsp+40h] [rbp-858h] BYREF
  _BYTE v5[16]; // [rsp+60h] [rbp-838h] BYREF
  _BYTE v6[2064]; // [rsp+70h] [rbp-828h] BYREF

  v0 = HvlpAcquireHypercallPage(v4, 1, (__int64)v5, 8LL);
  v1 = (int *)HvlpAcquireHypercallPage(v3, 2, (__int64)v6, 1032LL);
  *(_DWORD *)v0 = 15;
  if ( !(unsigned __int16)HvcallCodeVa() )
    HvlpSchedulerType = *v1;
  HvlpReleaseHypercallPage((unsigned int *)v3);
  result = HvlpReleaseHypercallPage((unsigned int *)v4);
  if ( HvlpSchedulerType == 4 )
    HvlpRootSchedulerEnabled = 1;
  return result;
}
