/*
 * XREFs of KiUpdateThreadPriority @ 0x1400D0D40
 * Callers:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiDeferredReadyThread @ 0x1400C3390 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x1400C5230 (KiDirectSwitchThread.c)
 *     KeSetPriorityBoost @ 0x1400CEEE0 (KeSetPriorityBoost.c)
 *     KiSetPriorityThread @ 0x1400CF640 (KiSetPriorityThread.c)
 *     KiRemoveBoostThread @ 0x1400CFDE0 (KiRemoveBoostThread.c)
 *     KiQuantumEnd @ 0x1400D0020 (KiQuantumEnd.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1400D0E40 (KiUpdateVPBackingThreadPriority.c)
 *     KiQueueReadyThread @ 0x1400D2370 (KiQueueReadyThread.c)
 *     KeStartThread @ 0x1400D39B4 (KeStartThread.c)
 *     KeYieldExecution @ 0x1400D65D0 (KeYieldExecution.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7E6C (KiApplyForegroundBoostThread.c)
 *     KiSetPriorityBoost @ 0x1401174E8 (KiSetPriorityBoost.c)
 *     KeTransitionProcessorParkState @ 0x14029CD9C (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x140571B50 (KiCompleteKernelInit.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1400D1480 (KiIsThreadRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010EDDC (KiAbQueueAutoBoostDpc.c)
 *     KiSetSchedulerAssistPriority @ 0x14029962C (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList, __int64 a4)
{
  char v5; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  char v7; // di
  struct _SINGLE_LIST_ENTRY *v9; // rdx
  bool v10; // zf
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rdx

  v5 = a4;
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (char)p_AbPropagateBoostsList;
  if ( (char)p_AbPropagateBoostsList > *(char *)(a2 + 195) )
  {
    if ( *(_BYTE *)(a2 + 793) )
    {
      v9 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
      if ( v9->Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
        if ( CurrentPrcb != (struct _KPRCB *)-25720LL )
        {
          v9->Next = p_AbPropagateBoostsList->Next;
          p_AbPropagateBoostsList->Next = v9;
          _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
          KiAbQueueAutoBoostDpc(CurrentPrcb);
        }
      }
    }
  }
  *(_BYTE *)(a2 + 195) = v7;
  if ( v5 )
  {
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
    {
      v10 = (unsigned __int8)KiIsThreadRankNonZero(a2, a1) == 0;
      v11 = 1;
      if ( v10 )
        v11 = *(_BYTE *)(a2 + 195);
      v7 = v11;
    }
    **(_BYTE **)(a1 + 56) = v7;
    v12 = *(_QWORD *)(a1 + 25016);
    if ( v12 )
    {
      v13 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( a2 != *(_QWORD *)(a1 + 24) )
        v13 = (unsigned int)v7;
      KiSetSchedulerAssistPriority(v12, v13, 0LL, a4);
    }
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
  {
    LOBYTE(p_AbPropagateBoostsList) = 1;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 1512), (unsigned int)*(char *)(a2 + 195), p_AbPropagateBoostsList, a4);
  }
}
