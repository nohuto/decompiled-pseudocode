/*
 * XREFs of KiTryToAcquireSpinLockInstrumented @ 0x140291154
 * Callers:
 *     KxTryToAcquireSpinLock @ 0x14011BB44 (KxTryToAcquireSpinLock.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PerfLogSpinLockAcquire @ 0x140313CB4 (PerfLogSpinLockAcquire.c)
 */

char __fastcall KiTryToAcquireSpinLockInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // bp
  unsigned __int64 v4; // rax
  unsigned int InterruptCount; // r15d
  unsigned int v6; // r14d
  _DWORD *SchedulerAssist; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  char v10; // di
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned int v14; // [rsp+58h] [rbp+10h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v3 = 1;
    v4 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v6 = v4;
  }
  else
  {
    v6 = v14;
    v3 = 0;
    InterruptCount = v14;
  }
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v8 = SchedulerAssist[5];
      SchedulerAssist[5] = v8 + 1;
      if ( v8 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset64(a1, 0LL) )
  {
    v9 = CurrentPrcb->SchedulerAssist;
    v10 = 0;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v9[5] - 1;
        v9[5] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    _mm_pause();
  }
  else
  {
    ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
    v10 = 1;
    if ( v3 )
    {
      v12 = __rdtsc();
      PerfLogSpinLockAcquire((_DWORD)a1, v12, v12 - v6, 0, InterruptCount, 0);
    }
  }
  return v10;
}
