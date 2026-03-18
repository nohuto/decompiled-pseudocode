/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x1405B74A4
 * Callers:
 *     PiDqQueryFreeActiveData @ 0x1405B63E8 (PiDqQueryFreeActiveData.c)
 *     PiDqQuerySerializeActionQueue @ 0x1405B7128 (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiPnpRtlObjectEventRelease @ 0x1405BBA60 (PiPnpRtlObjectEventRelease.c)
 *     PiDmObjectRelease @ 0x1405BF214 (PiDmObjectRelease.c)
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
