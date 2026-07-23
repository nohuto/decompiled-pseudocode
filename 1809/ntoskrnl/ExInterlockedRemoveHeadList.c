/*
 * XREFs of ExInterlockedRemoveHeadList @ 0x14010C050
 * Callers:
 *     WheapWorkQueueWorkerRoutine @ 0x1403213F0 (WheapWorkQueueWorkerRoutine.c)
 *     WmipEventNotification @ 0x140690300 (WmipEventNotification.c)
 * Callees:
 *     ExpReleaseSpinLockDisabled @ 0x14010C0BC (ExpReleaseSpinLockDisabled.c)
 *     ExpAcquireSpinLockDisabled @ 0x14010C0F4 (ExpAcquireSpinLockDisabled.c)
 */

PLIST_ENTRY __stdcall ExInterlockedRemoveHeadList(PLIST_ENTRY ListHead, PKSPIN_LOCK Lock)
{
  _LIST_ENTRY *v4; // rbx
  __int64 v5; // rdx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v8; // rax

  v4 = 0LL;
  LOBYTE(v5) = ExpAcquireSpinLockDisabled(Lock);
  Flink = ListHead->Flink;
  if ( ListHead->Flink != ListHead )
  {
    v4 = ListHead->Flink;
    if ( Flink->Blink != ListHead || (v8 = Flink->Flink, v8->Blink != v4) )
      __fastfail(3u);
    ListHead->Flink = v8;
    v8->Blink = ListHead;
  }
  ExpReleaseSpinLockDisabled(Lock, v5);
  return v4;
}
