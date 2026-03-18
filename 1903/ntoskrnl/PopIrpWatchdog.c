/*
 * XREFs of PopIrpWatchdog @ 0x1402EDB30
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     PopIrpWatchdogBugcheck @ 0x1402EDB68 (PopIrpWatchdogBugcheck.c)
 */

void __fastcall __noreturn PopIrpWatchdog(__int64 a1, ULONG a2)
{
  struct _KLOCK_QUEUE_HANDLE v3; // [rsp+20h] [rbp-28h] BYREF

  memset(&v3, 0, sizeof(v3));
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &v3);
  PopIrpWatchdogBugcheck(a2);
}
