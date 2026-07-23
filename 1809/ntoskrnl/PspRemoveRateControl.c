/*
 * XREFs of PspRemoveRateControl @ 0x14088B2DC
 * Callers:
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     PspSetJobRateControl @ 0x14088B750 (PspSetJobRateControl.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FE9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x140699B74 (PspFreeRateControl.c)
 *     PspModifyAncestorBits @ 0x14088B03C (PspModifyAncestorBits.c)
 */

void __fastcall PspRemoveRateControl(__int64 a1)
{
  _QWORD v2[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v3; // [rsp+40h] [rbp-28h]
  int v4; // [rsp+50h] [rbp-18h]
  char v5; // [rsp+54h] [rbp-14h]

  _InterlockedAnd((volatile signed __int32 *)(a1 + 1304), 0xFBFFFFFF);
  v2[0] = 0LL;
  v2[1] = 0LL;
  v4 = 0;
  v5 = 0;
  v3 = 0LL;
  PspEnumJobsAndProcessesInJobHierarchy(
    (_QWORD *)a1,
    (int)PspSetRateControlJobPreCallback,
    0,
    (int)PspSetRateControlProcessCallback,
    (__int64)v2,
    5);
  PspModifyAncestorBits(a1, 0x2000000u, 0);
  PspFreeRateControl(*(char ***)(a1 + 1296), 0);
  *(_QWORD *)(a1 + 1296) = 0LL;
}
