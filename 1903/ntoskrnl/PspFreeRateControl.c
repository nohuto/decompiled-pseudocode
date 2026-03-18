/*
 * XREFs of PspFreeRateControl @ 0x1406988D4
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspRemoveCpuRateControl @ 0x140698874 (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1406989D4 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveRateControl @ 0x1408C7FB8 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1408C8440 (PspSetJobRateControl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1405C866C (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x1406989B4 (PspGetRateControlSize.c)
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
