/*
 * XREFs of KePulseEvent @ 0x1400F0C40
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 *     MmResourcesAvailable @ 0x1400FD980 (MmResourcesAvailable.c)
 *     KeBalanceSetManager @ 0x140183C10 (KeBalanceSetManager.c)
 *     MiPulseCommitSignal @ 0x1402C043C (MiPulseCommitSignal.c)
 *     MiPulseLowAvailableEvent @ 0x1402CB4F0 (MiPulseLowAvailableEvent.c)
 *     NtPulseEvent @ 0x14066E100 (NtPulseEvent.c)
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KePulseEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  unsigned int v3; // esi
  KPRIORITY v4; // edi
  BOOL v6; // r15d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r12
  LONG SignalState; // ebp
  LIST_ENTRY *p_WaitListHead; // rdi
  struct _LIST_ENTRY *Flink; // r14
  __int64 v13; // r15
  char v14; // al
  __int64 v15; // r8
  struct _LIST_ENTRY *v16; // rax
  __int64 v17; // r15
  struct _LIST_ENTRY *v18; // rcx
  char v19; // al
  bool v20; // zf
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // al
  __int64 v23; // r9
  _QWORD *v24; // r9
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // r8
  __int64 *v28; // rdx
  unsigned __int8 v29; // cl
  unsigned __int8 IsThreadRunning; // al
  __int64 v31; // r9
  _QWORD *v32; // r9
  __int64 v33; // rcx
  char v34; // al
  __int64 v35; // r8
  __int64 *v36; // rdx
  struct _KPRCB *v37; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v38; // [rsp+30h] [rbp-58h]
  _KTHREAD *v39; // [rsp+38h] [rbp-50h]
  _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  __int64 v41; // [rsp+90h] [rbp+8h]
  __int64 v42; // [rsp+90h] [rbp+8h]

  v3 = 0;
  v4 = Increment;
  v6 = (Event->Header.Type & 0x7F) == 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(Event);
  SignalState = Event->Header.SignalState;
  if ( !SignalState )
  {
    Event->Header.SignalState = 1;
    p_WaitListHead = &Event->Header.WaitListHead;
    Flink = Event->Header.WaitListHead.Flink;
    if ( v6 )
    {
      if ( Flink == p_WaitListHead )
      {
LABEL_5:
        Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
        p_WaitListHead->Flink = p_WaitListHead;
LABEL_6:
        v4 = Increment;
        goto LABEL_7;
      }
      while ( 1 )
      {
        v13 = (__int64)Flink;
        Flink = Flink->Flink;
        v14 = *(_BYTE *)(v13 + 16);
        if ( v14 == 1 )
        {
          v15 = *(unsigned __int16 *)(v13 + 18);
        }
        else
        {
          if ( v14 == 2 )
          {
            *(_BYTE *)(v13 + 17) = 5;
            v42 = *(_QWORD *)(v13 + 24);
            *(_QWORD *)v13 = 0LL;
            v29 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v29 < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            v38 = KeGetCurrentPrcb();
            CurrentThread = v38->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v38->CurrentThread);
              EtwTraceEnqueueWork(v31, v13, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v42);
            v32 = (_QWORD *)(v42 + 8);
            v33 = v42;
            if ( (_QWORD *)*v32 == v32
              || *(_DWORD *)(v42 + 40) >= *(_DWORD *)(v42 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v42 && CurrentThread->WaitReason == 15 )
            {
LABEL_60:
              v35 = *(unsigned int *)(v33 + 4);
              *(_DWORD *)(v33 + 4) = v35 + 1;
              v36 = *(__int64 **)(v33 + 32);
              if ( *v36 != v33 + 24 )
                goto LABEL_66;
              *(_QWORD *)v13 = v33 + 24;
              *(_QWORD *)(v13 + 8) = v36;
              *v36 = v13;
              *(_QWORD *)(v33 + 32) = v13;
              if ( !(_DWORD)v35 && (_QWORD *)*v32 != v32 )
              {
                KiWakeOtherQueueWaiters((__int64)v38, v33, v35);
                v33 = v42;
              }
            }
            else
            {
              v34 = KiWakeQueueWaiter((__int64)v38, v42, v13);
              v33 = v42;
              if ( !v34 )
              {
                v32 = (_QWORD *)(v42 + 8);
                goto LABEL_60;
              }
            }
            _InterlockedAnd((volatile signed __int32 *)v33, 0xFFFFFF7F);
            goto LABEL_13;
          }
          v15 = 256LL;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v13, v15, 0LL);
LABEL_13:
        if ( Flink == p_WaitListHead )
          goto LABEL_5;
      }
    }
    if ( Flink == p_WaitListHead )
      goto LABEL_6;
    while ( 1 )
    {
      v16 = Flink->Flink;
      v17 = (__int64)Flink;
      Flink = v16;
      v18 = *(struct _LIST_ENTRY **)(v17 + 8);
      if ( v16->Blink != (struct _LIST_ENTRY *)v17 || v18->Flink != (struct _LIST_ENTRY *)v17 )
LABEL_66:
        __fastfail(3u);
      v18->Flink = v16;
      v16->Blink = v18;
      v19 = *(_BYTE *)(v17 + 16);
      if ( v19 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v17, *(unsigned __int16 *)(v17 + 18), 0LL) )
        {
          v20 = Event->Header.SignalState-- == 1;
          if ( v20 )
            goto LABEL_6;
        }
      }
      else
      {
        if ( v19 == 2 )
        {
          *(_BYTE *)(v17 + 17) = 5;
          v41 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)v17 = 0LL;
          v21 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v37 = KeGetCurrentPrcb();
          v39 = v37->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v22 = KeIsThreadRunning(v37->CurrentThread);
            EtwTraceEnqueueWork(v23, v17, v22);
          }
          KiAcquireKobjectLockSafe(v41);
          v24 = (_QWORD *)(v41 + 8);
          v25 = v41;
          if ( (_QWORD *)*v24 == v24
            || *(_DWORD *)(v41 + 40) >= *(_DWORD *)(v41 + 44)
            || v39->Queue == (_DISPATCHER_HEADER *volatile)v41 && v39->WaitReason == 15 )
          {
LABEL_38:
            v27 = *(unsigned int *)(v25 + 4);
            *(_DWORD *)(v25 + 4) = v27 + 1;
            v28 = *(__int64 **)(v25 + 32);
            if ( *v28 != v25 + 24 )
              goto LABEL_66;
            *(_QWORD *)v17 = v25 + 24;
            *(_QWORD *)(v17 + 8) = v28;
            *v28 = v17;
            *(_QWORD *)(v25 + 32) = v17;
            if ( !(_DWORD)v27 && (_QWORD *)*v24 != v24 )
            {
              KiWakeOtherQueueWaiters((__int64)v37, v25, v27);
              v25 = v41;
            }
          }
          else
          {
            v26 = KiWakeQueueWaiter((__int64)v37, v41, v17);
            v25 = v41;
            if ( !v26 )
            {
              v24 = (_QWORD *)(v41 + 8);
              goto LABEL_38;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
          v20 = Event->Header.SignalState-- == 1;
          if ( v20 )
            goto LABEL_6;
          goto LABEL_45;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v17, 256LL, 0LL);
      }
LABEL_45:
      if ( Flink == p_WaitListHead )
        goto LABEL_6;
    }
  }
LABEL_7:
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( Wait )
    v3 = 3;
  KiExitDispatcher((__int64)CurrentPrcb, v3, 1LL, v4, CurrentIrql);
  return SignalState;
}
