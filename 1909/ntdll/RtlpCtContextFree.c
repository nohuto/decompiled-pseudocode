/*
 * XREFs of RtlpCtContextFree @ 0x1800FBC50
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB9F0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x1800FBCAC (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1800FBDD0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x1800063F0 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     TpReleaseWork @ 0x180031710 (TpReleaseWork.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 */

__int64 __fastcall RtlpCtContextFree(__int64 *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = a1[1];
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  v3 = (void *)a1[2];
  if ( v3 )
  {
    NtClose(v3);
    a1[2] = 0LL;
  }
  if ( *a1 )
    TpReleaseWork(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
}
