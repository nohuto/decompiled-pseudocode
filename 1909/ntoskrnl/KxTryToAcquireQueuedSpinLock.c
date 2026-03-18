/*
 * XREFs of KxTryToAcquireQueuedSpinLock @ 0x1400C23E8
 * Callers:
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400C219C (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetPerfectColorHeadPage @ 0x1400C21CC (MiGetPerfectColorHeadPage.c)
 *     KeTryToAcquireQueuedSpinLock @ 0x1402A6FE0 (KeTryToAcquireQueuedSpinLock.c)
 *     KeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x1402A70B0 (KeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x1402A72A4 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxTryToAcquireQueuedSpinLock(signed __int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int v7; // ebx
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    return (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(a1, a2, a3, a4);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = 0;
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
    _m_prefetchw(a2);
    if ( *a2 || _InterlockedCompareExchange64((volatile signed __int64 *)a2, a1, 0LL) )
    {
      v10 = CurrentPrcb->SchedulerAssist;
      if ( v10 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = v10[5] - 1;
          v10[5] = v12;
          if ( !v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _mm_pause();
    }
    else
    {
      return 1;
    }
  }
  return v7;
}
