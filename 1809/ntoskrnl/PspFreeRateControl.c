/*
 * XREFs of PspFreeRateControl @ 0x140699B74
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspRemoveCpuRateControl @ 0x140699B14 (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140699C74 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveRateControl @ 0x14088B2DC (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x14088B750 (PspSetJobRateControl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1405CBCA8 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x140699C54 (PspGetRateControlSize.c)
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
