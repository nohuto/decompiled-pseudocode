/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x1405913C4
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140590124 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x140591044 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PiPnpRtlObjectEventRelease @ 0x140595DE0 (PiPnpRtlObjectEventRelease.c)
 *     PiDmObjectRelease @ 0x140598D30 (PiDmObjectRelease.c)
 */

void __fastcall PiDqQueryActionQueueEntryFree(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[2];
  if ( v2 )
    PiDmObjectRelease(v2);
  v3 = (void *)P[3];
  if ( v3 )
    PiPnpRtlObjectEventRelease(v3);
  ExFreePoolWithTag(P, 0x58706E50u);
}
