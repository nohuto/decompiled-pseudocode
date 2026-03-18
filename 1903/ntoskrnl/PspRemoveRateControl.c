/*
 * XREFs of PspRemoveRateControl @ 0x1408C7FB8
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     PspSetJobRateControl @ 0x1408C8440 (PspSetJobRateControl.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140611210 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x1406988D4 (PspFreeRateControl.c)
 *     PspModifyAncestorBits @ 0x1408C7D0C (PspModifyAncestorBits.c)
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
