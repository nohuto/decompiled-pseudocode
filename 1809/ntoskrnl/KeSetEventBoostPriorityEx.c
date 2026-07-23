/*
 * XREFs of KeSetEventBoostPriorityEx @ 0x140103548
 * Callers:
 *     FsRtlReleaseEofLock @ 0x140103180 (FsRtlReleaseEofLock.c)
 *     KeSetEventBoostPriority @ 0x140293370 (KeSetEventBoostPriority.c)
 * Callees:
 *     KiAbApplyWakeupBoost @ 0x1400240DC (KiAbApplyWakeupBoost.c)
 *     KiAbFindWakeupLockEntry @ 0x140024358 (KiAbFindWakeupLockEntry.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x1400CFE60 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetEventBoostPriorityEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  int *v5; // r15
  _QWORD *v6; // r12
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v10; // r8
  _QWORD *v11; // rdi
  int v12; // r14d
  _QWORD *v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rcx
  char v16; // al
  bool v17; // zf
  bool v18; // bl
  char v19; // al
  __int64 v20; // r8
  int v22; // ebx
  struct _SINGLE_LIST_ENTRY *Next; // rdx
  __m128i *WakeupLockEntry; // rax
  __int64 v25; // rdx
  __int64 v26; // rdi
  _QWORD *v27; // r12
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // r13
  _KTHREAD *CurrentThread; // r15
  __int64 v31; // r8
  __int64 *v32; // rdx
  _QWORD *v33; // [rsp+30h] [rbp-58h]
  unsigned __int8 v34; // [rsp+90h] [rbp+8h]

  v5 = (int *)a3;
  v6 = (_QWORD *)a2;
  CurrentIrql = KeGetCurrentIrql();
  v34 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3);
  *(_DWORD *)(a1 + 4) = 1;
  v11 = *(_QWORD **)(a1 + 8);
  v12 = 0;
  if ( v11 != (_QWORD *)(a1 + 8) )
  {
    while ( 1 )
    {
      v13 = (_QWORD *)*v11;
      v14 = (__int64)v11;
      v11 = v13;
      v33 = v13;
      v15 = *(_QWORD **)(v14 + 8);
      if ( v13[1] != v14 || *v15 != v14 )
LABEL_51:
        __fastfail(3u);
      *v15 = v13;
      v13[1] = v15;
      v16 = *(_BYTE *)(v14 + 16);
      if ( v16 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), v6) )
        {
          v17 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v17 )
          {
            v5 = (int *)a3;
            CurrentIrql = v34;
            ++v12;
            break;
          }
        }
      }
      else
      {
        v25 = 2LL;
        if ( v16 == 2 )
        {
          *(_BYTE *)(v14 + 17) = 5;
          v26 = *(_QWORD *)(v14 + 24);
          *(_QWORD *)v14 = 0LL;
          v27 = (_QWORD *)(v26 + 8);
          v28 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v29 = KeGetCurrentPrcb();
          CurrentThread = v29->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v31) = KeIsThreadRunning(v29->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v14, v31);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v26, v25, v10);
          if ( (_QWORD *)*v27 == v27
            || *(_DWORD *)(v26 + 40) >= *(_DWORD *)(v26 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v26 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v29, v26, v14) )
          {
            v10 = *(unsigned int *)(v26 + 4);
            *(_DWORD *)(v26 + 4) = v10 + 1;
            v32 = *(__int64 **)(v26 + 32);
            if ( *v32 != v26 + 24 )
              goto LABEL_51;
            *(_QWORD *)v14 = v26 + 24;
            *(_QWORD *)(v14 + 8) = v32;
            *v32 = v14;
            *(_QWORD *)(v26 + 32) = v14;
            if ( !(_DWORD)v10 && (_QWORD *)*v27 != v27 )
              KiWakeOtherQueueWaiters((__int64)v29, v26, v10);
          }
          _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
          v17 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v17 )
          {
LABEL_50:
            CurrentIrql = v34;
            v5 = (int *)a3;
            break;
          }
          v11 = v33;
          v6 = (_QWORD *)a2;
        }
        else if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL) )
        {
          --v12;
        }
      }
      if ( v11 == (_QWORD *)(a1 + 8) )
        goto LABEL_50;
    }
  }
  if ( a2 )
    v18 = v12 > 0;
  else
    v18 = 0;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v22 = *v5;
    if ( *v5 )
    {
      Next = CurrentPrcb->DeferredReadyListHead.Next;
      if ( Next )
      {
        WakeupLockEntry = KiAbFindWakeupLockEntry(a4, (__int64)&Next[-27]);
        if ( WakeupLockEntry )
          KiAbApplyWakeupBoost(v22, (__int64)WakeupLockEntry, 1);
      }
    }
    v20 = 1LL;
    v19 = 1;
  }
  else
  {
    v19 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread, v10);
    if ( v5 )
    {
      if ( *v5 )
      {
        if ( (char)*v5 > v19 )
          v19 = *v5;
      }
      else
      {
        v18 = 0;
      }
    }
    if ( !v18 )
      v19 = 1;
    v20 = (unsigned int)v18 + 1;
  }
  return KiExitDispatcher((__int64)CurrentPrcb, 0LL, v20, v19, CurrentIrql);
}
