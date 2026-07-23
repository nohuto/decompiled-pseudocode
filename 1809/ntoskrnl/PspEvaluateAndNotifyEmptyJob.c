/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x140604DE8
 * Callers:
 *     PspNotifyEmptyJobsInJobChain @ 0x140604D9C (PspNotifyEmptyJobsInJobChain.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406C8224 (PspTerminateAllProcessesInJobHierarchy.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     PspHardDereferenceSiloWorker @ 0x1402E9884 (PspHardDereferenceSiloWorker.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405FF100 (PspLockJobExclusive.c)
 *     PspSendReliableJobNotification @ 0x1406BA958 (PspSendReliableJobNotification.c)
 */

void __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  int Flink; // eax

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive((__int64)Event, (__int64)CurrentThread);
  Flink = (int)Event[50].Header.WaitListHead.Flink;
  if ( a2 )
    LODWORD(Event[50].Header.WaitListHead.Flink) = --Flink;
  if ( !Flink )
  {
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Event[54].Header.WaitListHead, 7u) )
      KeSetEvent(Event, 0, 0);
    if ( !_interlockedbittestandset((volatile signed __int32 *)&Event[54].Header.WaitListHead, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Event[19].Header.Lock && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 0x10) != 0 )
        PspSendReliableJobNotification(Event);
      if ( ((__int64)Event[10].Header.WaitListHead.Blink & 0x400000) != 0
        && !_interlockedbittestandset((volatile signed __int32 *)&Event[54].Header.WaitListHead, 0x1Du)
        && ((__int64)Event[54].Header.WaitListHead.Flink & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Event);
      }
    }
  }
  PspUnlockJob((__int64)Event, (__int64)CurrentThread);
}
