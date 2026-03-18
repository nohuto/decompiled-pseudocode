/*
 * XREFs of PspFreeRateControl @ 0x1406BD29C
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspRemoveCpuRateControl @ 0x1406BD23C (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1406BD39C (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveRateControl @ 0x1408C7898 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1408C7D20 (PspSetJobRateControl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1405C8B6C (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x1406BD37C (PspGetRateControlSize.c)
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
