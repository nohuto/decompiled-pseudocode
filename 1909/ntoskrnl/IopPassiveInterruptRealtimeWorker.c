/*
 * XREFs of IopPassiveInterruptRealtimeWorker @ 0x14019D0A0
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x140044C00 (KeRemoveQueueEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn IopPassiveInterruptRealtimeWorker(PKQUEUE Queue)
{
  PLIST_ENTRY EntryArray; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    do
      KeRemoveQueueEx(Queue, 0, 0, 0LL, &EntryArray, 1u);
    while ( EntryArray == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))EntryArray[1].Flink)(EntryArray[1].Blink);
  }
}
