/*
 * XREFs of KiUpdateThreadPriority @ 0x14000FB30
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityThread @ 0x14000F690 (KiSetPriorityThread.c)
 *     KiQuantumEnd @ 0x140010F00 (KiQuantumEnd.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140011BD8 (KiUpdateVPBackingThreadPriority.c)
 *     KiSetPriorityBoost @ 0x140014060 (KiSetPriorityBoost.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KeStartThread @ 0x14001BC90 (KeStartThread.c)
 *     KiDeferredReadyThread @ 0x140068020 (KiDeferredReadyThread.c)
 *     KiDirectSwitchThread @ 0x14006BA10 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400E49D0 (KiApplyForegroundBoostThread.c)
 *     KeYieldExecution @ 0x140109BD0 (KeYieldExecution.c)
 *     KeTransitionProcessorParkState @ 0x1402B576C (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x1405A1ABC (KiCompleteKernelInit.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140015570 (KiIsThreadRankNonZero.c)
 *     KiAbQueueAutoBoostDpc @ 0x1401126E0 (KiAbQueueAutoBoostDpc.c)
 *     KiSetSchedulerAssistPriority @ 0x1402B0620 (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList, char a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  char v7; // di
  __int64 v9; // rcx
  struct _SINGLE_LIST_ENTRY *v10; // rdx
  bool v11; // zf
  char v12; // al
  __int64 v13; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = (char)p_AbPropagateBoostsList;
  if ( (char)p_AbPropagateBoostsList > *(char *)(a2 + 195) )
  {
    if ( *(_BYTE *)(a2 + 793) )
    {
      v10 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
      if ( v10->Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
        if ( CurrentPrcb != (struct _KPRCB *)-25720LL )
        {
          v10->Next = p_AbPropagateBoostsList->Next;
          p_AbPropagateBoostsList->Next = v10;
          _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1420));
          KiAbQueueAutoBoostDpc(CurrentPrcb);
        }
      }
    }
  }
  *(_BYTE *)(a2 + 195) = v7;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
    {
      v11 = (unsigned __int8)KiIsThreadRankNonZero(a2, a1) == 0;
      v12 = 1;
      if ( v11 )
        v12 = *(_BYTE *)(a2 + 195);
      v7 = v12;
    }
    **(_BYTE **)(a1 + 56) = v7;
    v9 = *(_QWORD *)(a1 + 25016);
    if ( v9 )
    {
      v13 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( a2 != *(_QWORD *)(a1 + 24) )
        v13 = (unsigned int)v7;
      KiSetSchedulerAssistPriority(v9, v13, 0LL);
    }
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
  {
    LOBYTE(p_AbPropagateBoostsList) = 1;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 1520), (unsigned int)*(char *)(a2 + 195), p_AbPropagateBoostsList);
  }
}
