/*
 * XREFs of RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x140899970
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     RtlpCtContextFree @ 0x14089974C (RtlpCtContextFree.c)
 */

void __fastcall RtlpRtlpCtWaitForWnfQuiescentWorker(PVOID *P)
{
  KeWaitForSingleObject(P[2], Executive, 0, 0, 0LL);
  RtlpCtContextFree(P);
  _InterlockedExchange(&RtlpCtPublishInProgress, 0);
}
