/*
 * XREFs of KiWaitSatisfyAny @ 0x1401192C0
 * Callers:
 *     KiWaitForAllObjects @ 0x140118F10 (KiWaitForAllObjects.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiWaitSatisfyOther @ 0x14011935C (KiWaitSatisfyOther.c)
 *     KiWaitSatisfyMutant @ 0x140119908 (KiWaitSatisfyMutant.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiWaitSatisfyAny(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  PRTL_BALANCED_NODE v6; // rax
  __int64 v7; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  int v15; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(v6) = KiWaitSatisfyOther(BugCheckParameter2);
  if ( !(_BYTE)v6 )
  {
    LOBYTE(v6) = *(_BYTE *)v7 & 0x7F;
    if ( (_BYTE)v6 == 2 && (*(_DWORD *)(v7 + 4))-- == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v11 = SchedulerAssist[5];
            SchedulerAssist[5] = v11 + 1;
            if ( v11 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
          break;
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v13 = v12[5] - 1;
            v12[5] = v13;
            if ( !v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v15);
        while ( *(_QWORD *)(a2 + 64) );
      }
      KiWaitSatisfyMutant(BugCheckParameter2, a2, a3);
      LOBYTE(v6) = KiReleaseThreadLockSafe(a2);
      if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 2) != 0 )
      {
        v6 = KeAbPreAcquire(BugCheckParameter2, 0LL, 1);
        if ( v6 )
          BYTE2(v6[1].Left) |= 1u;
      }
    }
  }
  return (char)v6;
}
