/*
 * XREFs of IopQueueIrpToFileObject @ 0x140100010
 * Callers:
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008970 (KxWaitForSpinLockAndAcquire.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A7878 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A7988 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 */

char __fastcall IopQueueIrpToFileObject(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _KPROCESS *Process; // r14
  signed __int64 BugCheckParameter4; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_OtherTransferCount; // rbp
  signed __int64 v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // r8
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  struct _KPRCB *v24; // rcx
  int v25; // eax
  struct _KPRCB *v26; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a2 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a2 + 184);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = SchedulerAssist[5];
        SchedulerAssist[5] = v22 + 1;
        if ( v22 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v3, 0LL) )
    {
      v21 = CurrentPrcb->SchedulerAssist;
      if ( v21 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v23 = v21[5] - 1;
          v21[5] = v23;
          if ( !v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v3, a2);
    }
  }
  if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)v3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v24 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v24);
    }
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    v8 = (_QWORD *)(a2 + 192);
    v9 = *(_QWORD *)(a2 + 192);
    v10 = (_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v9 + 8) != a2 + 192 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(a1 + 40) = v8;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = v10;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].Spare2[39]);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
    CurrentThread = KeGetCurrentThread();
    p_OtherTransferCount = &CurrentThread[-1].OtherTransferCount;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)CurrentThread - 48);
    v15 = _InterlockedIncrement64(p_OtherTransferCount);
    if ( v15 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(p_OtherTransferCount + 6), 0x10uLL, v15);
    *(_DWORD *)(a1 + 16) |= 0x2000u;
    *(_QWORD *)(a1 + 88) = Process;
    v16 = *(_QWORD *)(a1 + 88);
    do
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 88),
              v16 & 0xFFFFFFFFFFFFFFF9uLL | ((v16 & 6) + 2),
              v16);
    }
    while ( v17 != v16 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v3, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v25 = v19[5] - 1;
        v19[5] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v26 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v26);
    }
    __writecr8(CurrentIrql);
    return 1;
  }
}
