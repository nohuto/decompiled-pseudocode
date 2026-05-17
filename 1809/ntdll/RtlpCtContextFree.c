/*
 * XREFs of RtlpCtContextFree @ 0x1800FE788
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FE520 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x1800FE7E4 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1800FE900 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     TpReleaseWork @ 0x18002C520 (TpReleaseWork.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18005DD60 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
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
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)a1);
}
