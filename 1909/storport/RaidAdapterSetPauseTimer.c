/*
 * XREFs of RaidAdapterSetPauseTimer @ 0x1C00374CC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0001AF0 (RaidAdapterDeferredRoutine.c)
 *     RaidAdapterResetBus @ 0x1C0035EBC (RaidAdapterResetBus.c)
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C0016154 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0016230 (RaidResumeAdapterQueue.c)
 */

BOOLEAN __fastcall RaidAdapterSetPauseTimer(__int64 a1, struct _KTIMER *a2, struct _KDPC *Dpc, unsigned int a4)
{
  BOOLEAN v5; // di

  v5 = KeSetCoalescableTimer(a2, (LARGE_INTEGER)(-10000000LL * a4), 0, 0, Dpc);
  if ( v5 && !(unsigned int)RaidResumeAdapterQueue(a1) )
    RaidAdapterRestartQueues(a1);
  return v5;
}
