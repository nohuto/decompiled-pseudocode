/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1408D7D90
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x1408D7B68 (RtlpCtContextFree.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PVOID *P)
{
  KeWaitForSingleObject(P[2], Executive, 0, 0, 0LL);
  RtlpCtContextFree(P);
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
