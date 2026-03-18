/*
 * XREFs of KeReleaseSemaphoreEx @ 0x140014320
 * Callers:
 *     AlpcpSignalAndWait @ 0x14000CDC0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14000D690 (AlpcpSignal.c)
 *     MiCheckForControlAreaDeletion @ 0x14010A178 (MiCheckForControlAreaDeletion.c)
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140145C74 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140165460 (PopCompleteNotifyTransitionCommon.c)
 *     PopDispatchQuerySetIrp @ 0x1401755A8 (PopDispatchQuerySetIrp.c)
 *     IoRaiseInformationalHardError @ 0x140298680 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x1402A15F8 (PnpProcessRebalance.c)
 *     MiQueuePageFileExtension @ 0x1402CE8E4 (MiQueuePageFileExtension.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1402FAFD0 (PopCompleteDirectedPowerTransitionCallback.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E19B0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2BE0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14065AE5C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14065B22C (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14065D830 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDoPortCleanup @ 0x14065DF68 (AlpcpDoPortCleanup.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406C2EFC (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D290 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E290 (KiWakeOtherQueueWaiters.c)
 *     KiCompleteDirectSwitchThread @ 0x14001461C (KiCompleteDirectSwitchThread.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140067E50 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A320 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x1402A469C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032D4A8 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(__int64 a1, int a2, int a3, _DISPATCHER_HEADER *a4, char a5)
{
  int v6; // r15d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  int v10; // ebp
  unsigned int v11; // edi
  int v12; // eax
  _QWORD *v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // r14
  _QWORD *v16; // rcx
  char v17; // al
  bool v18; // zf
  unsigned __int8 v20; // cl
  LIST_ENTRY *v21; // r8
  _DISPATCHER_HEADER *volatile v22; // rcx
  char v23; // al
  LONG SignalState; // r9d
  __int64 *Flink; // rdx
  unsigned __int8 IsThreadRunning; // al
  __int64 v27; // r9
  struct _KPRCB *v28; // rcx
  struct _KPRCB *v29; // [rsp+30h] [rbp-58h]
  _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  LIST_ENTRY *p_WaitListHead; // [rsp+90h] [rbp+8h]
  int v33; // [rsp+A0h] [rbp+18h] BYREF
  _DISPATCHER_HEADER *volatile v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v33 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v33);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  v11 = *(_DWORD *)(a1 + 4);
  v12 = v11 + a3;
  if ( (signed int)(v11 + a3) > *(_DWORD *)(a1 + 24) || v12 < (int)v11 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v28 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v28, 2LL);
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  *(_DWORD *)(a1 + 4) = v12;
  if ( !v11 )
  {
    v13 = *(_QWORD **)(a1 + 8);
    while ( v13 != (_QWORD *)(a1 + 8) )
    {
      v14 = (_QWORD *)*v13;
      v15 = (__int64)v13;
      v13 = v14;
      v16 = *(_QWORD **)(v15 + 8);
      if ( v14[1] != v15 || *v16 != v15 )
LABEL_8:
        __fastfail(3u);
      *v16 = v14;
      v14[1] = v16;
      v17 = *(_BYTE *)(v15 + 16);
      if ( v17 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v15, *(unsigned __int16 *)(v15 + 18), 0LL) )
        {
          v18 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v18 )
            break;
        }
      }
      else
      {
        if ( v17 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          v34 = *(_DISPATCHER_HEADER *volatile *)(v15 + 24);
          p_WaitListHead = &v34->WaitListHead;
          *(_QWORD *)v15 = 0LL;
          v20 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v20 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v29 = KeGetCurrentPrcb();
          CurrentThread = v29->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v29->CurrentThread);
            EtwTraceEnqueueWork(v27, v15, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v34);
          v21 = p_WaitListHead;
          v22 = v34;
          if ( v21->Flink == v21
            || LODWORD(v34[1].WaitListHead.Blink) >= HIDWORD(v34[1].WaitListHead.Blink)
            || CurrentThread->Queue == v34 && CurrentThread->WaitReason == 15 )
          {
LABEL_34:
            SignalState = v22->SignalState;
            v22->SignalState = SignalState + 1;
            Flink = (__int64 *)v22[1].WaitListHead.Flink;
            if ( (_DISPATCHER_HEADER *volatile)*Flink != &v22[1] )
              goto LABEL_8;
            *(_QWORD *)v15 = v22 + 1;
            *(_QWORD *)(v15 + 8) = Flink;
            *Flink = v15;
            v22[1].WaitListHead.Flink = (struct _LIST_ENTRY *)v15;
            if ( !SignalState && v21->Flink != v21 )
            {
              KiWakeOtherQueueWaiters((__int64)v29, (__int64)v22);
              v22 = v34;
            }
          }
          else
          {
            v23 = KiWakeQueueWaiter((__int64)v29, v34, v15);
            v22 = v34;
            if ( !v23 )
            {
              v21 = p_WaitListHead;
              goto LABEL_34;
            }
          }
          _InterlockedAnd(&v22->Lock, 0xFFFFFF7F);
          v18 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v18 )
            break;
          continue;
        }
        KiTryUnwaitThread(CurrentPrcb, v15, 256LL, 0LL);
      }
    }
    v6 = a2;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v10 = 1;
    if ( (a5 & 4) == 0 )
      v10 = 3;
  }
  else if ( (a5 & 2) != 0 )
  {
    KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, v10, 1, v6, CurrentIrql);
  return v11;
}
