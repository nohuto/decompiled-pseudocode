/*
 * XREFs of RtlpCtContextFree @ 0x1408D8268
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1403142D0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x1408D82C4 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1408D8490 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExUnsubscribeWnfStateChange @ 0x1406DE2C0 (ExUnsubscribeWnfStateChange.c)
 */

void __fastcall RtlpCtContextFree(PVOID *P)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  PVOID v3; // rcx

  v2 = (struct _EX_RUNDOWN_REF *)P[1];
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
