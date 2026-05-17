/*
 * XREFs of sub_1800FBB70 @ 0x1800FBB70
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB910 (RtlRaiseCustomSystemEventTrigger.c)
 *     sub_1800FBBCC @ 0x1800FBBCC (sub_1800FBBCC.c)
 *     sub_1800FBCF0 @ 0x1800FBCF0 (sub_1800FBCF0.c)
 * Callees:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x1800063F0 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     TpReleaseWork @ 0x180031710 (TpReleaseWork.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall sub_1800FBB70(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[1];
  if ( v2 )
    RtlUnsubscribeWnfNotificationWaitForCompletion(v2);
  if ( a1[2] )
  {
    ZwClose();
    a1[2] = 0LL;
  }
  if ( *a1 )
    TpReleaseWork(*a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)a1);
}
