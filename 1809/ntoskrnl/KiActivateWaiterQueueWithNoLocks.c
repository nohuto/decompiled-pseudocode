/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x1401124F8
 * Callers:
 *     KiCommitThreadWait @ 0x140055AD0 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x140089A10 (KeTerminateThread.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1401123A0 (KiPriQueueThreadPriorityChanged.c)
 *     KiSwitchQueue @ 0x140112478 (KiSwitchQueue.c)
 *     KiSwitchPriQueue @ 0x140136044 (KiSwitchPriQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterKQueue @ 0x14011262C (KiActivateWaiterKQueue.c)
 *     KiActivateWaiterPriQueue @ 0x1401126C0 (KiActivateWaiterPriQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile LONG *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v15; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // [rsp+30h] [rbp+8h] BYREF

  v5 = &KiObjectRundownLocks[16 * ((a2 >> 4) & 0x3F)];
  ExAcquireSpinLockSharedAtDpcLevel(v5);
  v8 = *(volatile signed __int32 **)(a1 + 232);
  if ( v8 )
  {
    KiAcquireKobjectLockSafe(*(volatile signed __int32 **)(a1 + 232), v6, v7);
    if ( !*(_QWORD *)(a1 + 232) )
    {
      _InterlockedAnd(v8, 0xFFFFFF7F);
      v8 = 0LL;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( v8 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = 0;
        while ( 1 )
        {
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v16 = SchedulerAssist[5];
              SchedulerAssist[5] = v16 + 1;
              if ( v16 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v17 = CurrentPrcb->SchedulerAssist;
          if ( v17 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v18 = v17[5] - 1;
              v17[5] = v18;
              if ( !v18 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v19, v9, v10);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v15 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v8[v15 + 134]);
        KiReleaseThreadLockSafe(a1);
      }
      else
      {
        _InterlockedDecrement(v8 + 10);
      }
      v11 = *a3;
      v12 = (_QWORD *)a3[1];
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (_QWORD *)*v12 != a3 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v8 & 0x7F) == 0x15 )
      KiActivateWaiterPriQueue(v8);
    else
      KiActivateWaiterKQueue(v8);
  }
}
