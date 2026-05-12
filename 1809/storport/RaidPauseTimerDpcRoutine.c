/*
 * XREFs of RaidPauseTimerDpcRoutine @ 0x1C003B3D0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterRestartQueues @ 0x1C0013C80 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C001435C (RaidResumeAdapterQueue.c)
 */

void __fastcall RaidPauseTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( !(unsigned int)RaidResumeAdapterQueue(v4) )
    RaidAdapterRestartQueues(v4, 0);
}
