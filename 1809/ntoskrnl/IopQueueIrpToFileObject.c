/*
 * XREFs of IopQueueIrpToFileObject @ 0x1400B7930
 * Callers:
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140291128 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 */

char __fastcall IopQueueIrpToFileObject(__int64 a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v4; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  _KPROCESS *Process; // r14
  signed __int64 BugCheckParameter4; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *p_ReadTransferCount; // rbp
  signed __int64 v16; // rbx
  signed __int64 v17; // rax
  signed __int64 v18; // r8
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  _DWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  struct _KPRCB *v25; // rcx
  int v26; // eax
  struct _KPRCB *v27; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (volatile signed __int32 *)(a2 + 184);
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
        v23 = SchedulerAssist[5];
        SchedulerAssist[5] = v23 + 1;
        if ( v23 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v4, 0LL) )
    {
      v22 = CurrentPrcb->SchedulerAssist;
      if ( v22 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v24 = v22[5] - 1;
          v22[5] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      KxWaitForSpinLockAndAcquire(v4, a2, a3);
    }
  }
  if ( (*(_DWORD *)(a2 + 80) & 0x400) != 0 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v25 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v25);
    }
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    v9 = (_QWORD *)(a2 + 192);
    v10 = *(_QWORD *)(a2 + 192);
    v11 = (_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v10 + 8) != a2 + 192 )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(a1 + 40) = v9;
    *(_QWORD *)(v10 + 8) = v11;
    *v9 = v11;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].Spare2[39]);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
    CurrentThread = KeGetCurrentThread();
    p_ReadTransferCount = &CurrentThread[-1].ReadTransferCount;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)CurrentThread - 48);
    v16 = _InterlockedIncrement64(p_ReadTransferCount);
    if ( v16 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(p_ReadTransferCount + 6), 0x10uLL, v16);
    *(_DWORD *)(a1 + 16) |= 0x2000u;
    *(_QWORD *)(a1 + 88) = Process;
    v17 = *(_QWORD *)(a1 + 88);
    do
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(a1 + 88),
              v17 & 0xFFFFFFFFFFFFFFF9uLL | ((v17 & 6) + 2),
              v17);
    }
    while ( v18 != v17 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v4, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
    v19 = KeGetCurrentPrcb();
    v20 = v19->SchedulerAssist;
    if ( v20 )
    {
      if ( v19->NestingLevel <= 1u )
      {
        v26 = v20[5] - 1;
        v20[5] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(v19);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v27 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v27);
    }
    __writecr8(CurrentIrql);
    return 1;
  }
}
