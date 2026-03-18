/*
 * XREFs of PspJobIoRateControlDisable @ 0x14068A5A4
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1405B347C (PspSetJobIoRateControl.c)
 * Callees:
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x1400EBA88 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspIoRateEntryDeactivate @ 0x1405B37CC (PspIoRateEntryDeactivate.c)
 */

__int64 __fastcall PspJobIoRateControlDisable(struct _EX_RUNDOWN_REF *a1)
{
  unsigned int v1; // edi
  struct _EX_RUNDOWN_REF *v3; // rbx
  __int64 v5; // rax
  PVOID P[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( a1[178].Count )
  {
    PspIoRateEntryDeactivate(a1 + 173);
    v1 = 1;
  }
  P[1] = P;
  P[0] = P;
  PspJobIoRateVolumeEntryRemoveAll((__int64)a1, (__int64)P);
  while ( 1 )
  {
    v3 = (struct _EX_RUNDOWN_REF *)P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v5 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v5 + 8) = P;
    PspIoRateEntryDeactivate(v3);
    ExFreePoolWithTag(v3, 0);
    ++v1;
  }
  return v1;
}
