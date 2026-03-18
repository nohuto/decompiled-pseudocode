/*
 * XREFs of PspRemoveRateControl @ 0x1408C7898
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     PspSetJobRateControl @ 0x1408C7D20 (PspSetJobRateControl.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x1406BD29C (PspFreeRateControl.c)
 *     PspModifyAncestorBits @ 0x1408C75EC (PspModifyAncestorBits.c)
 */

void __fastcall PspRemoveRateControl(volatile signed __int32 *Object)
{
  __int64 v2[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v2, 0, 0x28uLL);
  _InterlockedAnd(Object + 326, 0xFBFFFFFF);
  memset(v2, 0, 37);
  PspEnumJobsAndProcessesInJobHierarchy(
    Object,
    (int)PspSetRateControlJobPreCallback,
    0,
    (int)PspSetRateControlProcessCallback,
    (__int64)v2,
    5);
  PspModifyAncestorBits((__int64)Object, 0x2000000u, 0);
  PspFreeRateControl(*((char ***)Object + 162), 0);
  *((_QWORD *)Object + 162) = 0LL;
}
