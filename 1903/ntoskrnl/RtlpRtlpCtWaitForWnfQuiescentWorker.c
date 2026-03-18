/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1408D8490
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x1408D8268 (RtlpCtContextFree.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PVOID *P)
{
  KeWaitForSingleObject(P[2], Executive, 0, 0, 0LL);
  RtlpCtContextFree(P);
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
