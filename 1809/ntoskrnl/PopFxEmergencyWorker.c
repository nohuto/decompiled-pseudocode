/*
 * XREFs of PopFxEmergencyWorker @ 0x140192F50
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn PopFxEmergencyWorker(PKQUEUE Queue, __int64 a2, __int64 a3)
{
  PLIST_ENTRY EntryArray; // [rsp+48h] [rbp+10h] BYREF

  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16LL, a3);
  while ( 1 )
  {
    do
      KeRemoveQueueEx(Queue, 0, 0, 0LL, &EntryArray, 1u);
    while ( EntryArray == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))EntryArray[1].Flink)(EntryArray[1].Blink);
  }
}
