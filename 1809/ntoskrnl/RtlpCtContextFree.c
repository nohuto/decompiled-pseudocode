/*
 * XREFs of RtlpCtContextFree @ 0x14089A98C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1402F5890 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x14089A9E8 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x14089ABB0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExUnsubscribeWnfStateChange @ 0x140607B80 (ExUnsubscribeWnfStateChange.c)
 */

void __fastcall RtlpCtContextFree(PVOID *P)
{
  PVOID v2; // rcx
  PVOID v3; // rcx

  v2 = P[1];
  if ( v2 )
    ExUnsubscribeWnfStateChange(v2);
  v3 = P[2];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x67744364u);
    P[2] = 0LL;
  }
  if ( *P )
    ExFreePoolWithTag(*P, 0x67744364u);
  ExFreePoolWithTag(P, 0x67744364u);
}
