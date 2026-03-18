/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x14010D238
 * Callers:
 *     KiCommitThreadWait @ 0x140040740 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x140080CBC (KeTerminateThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x14010D0E0 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwitchQueue @ 0x14010D1B8 (KiSwitchQueue.c)
 *     KiSwitchPriQueue @ 0x140139B10 (KiSwitchPriQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterKQueue @ 0x14010D378 (KiActivateWaiterKQueue.c)
 *     KiActivateWaiterPriQueue @ 0x14010D40C (KiActivateWaiterPriQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile LONG *v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v11; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v5 = &KiObjectRundownLocks[16 * ((a2 >> 4) & 0x3F)];
  ExAcquireSpinLockSharedAtDpcLevel(v5);
  v6 = *(volatile signed __int32 **)(a1 + 232);
  if ( v6 )
  {
    KiAcquireKobjectLockSafe(*(volatile signed __int32 **)(a1 + 232));
    if ( !*(_QWORD *)(a1 + 232) )
    {
      _InterlockedAnd(v6, 0xFFFFFF7F);
      v6 = 0LL;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( v6 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
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
              v12 = SchedulerAssist[5];
              SchedulerAssist[5] = v12 + 1;
              if ( v12 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v13 = CurrentPrcb->SchedulerAssist;
          if ( v13 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v14 = v13[5] - 1;
              v13[5] = v14;
              if ( !v14 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v15);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v11 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v6[v11 + 134]);
        KiReleaseThreadLockSafe(a1);
      }
      else
      {
        _InterlockedDecrement(v6 + 10);
      }
      v7 = *a3;
      v8 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v8 != a3 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      KiActivateWaiterPriQueue(v6);
    else
      KiActivateWaiterKQueue(v6);
  }
}
