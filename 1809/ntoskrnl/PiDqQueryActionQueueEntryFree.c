/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x1405923C4
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x140591124 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x140592044 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiPnpRtlObjectEventRelease @ 0x140596DE0 (PiPnpRtlObjectEventRelease.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
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
