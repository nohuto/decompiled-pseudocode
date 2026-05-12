/*
 * XREFs of RaidUnitPauseTimerDpcRoutine @ 0x1C0016500
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0002714 (RaidResumeUnitQueue.c)
 *     RaidRestartIoQueue @ 0x1C000D2EC (RaidRestartIoQueue.c)
 */

void __fastcall RaidUnitPauseTimerDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx

  v4 = DeferredContext[8];
  if ( (unsigned int)RaidResumeUnitQueue(v4) )
    RaidRestartIoQueue(v4, 0);
}
