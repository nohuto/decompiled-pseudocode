/*
 * XREFs of PspFreeRateControl @ 0x1406989B4
 * Callers:
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspRemoveCpuRateControl @ 0x140698954 (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140698AB4 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveRateControl @ 0x14088A07C (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x14088A4F0 (PspSetJobRateControl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1405CACA8 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x140698A94 (PspGetRateControlSize.c)
 */

void __fastcall PspFreeRateControl(char **P, unsigned int a2)
{
  ULONG_PTR RateControlSize; // rax
  char *v4; // rcx

  RateControlSize = PspGetRateControlSize(a2);
  PsReturnSharedPoolQuota(*P, RateControlSize, 0LL);
  v4 = P[3];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x624A7350u);
  ExFreePoolWithTag(P, 0x624A7350u);
}
