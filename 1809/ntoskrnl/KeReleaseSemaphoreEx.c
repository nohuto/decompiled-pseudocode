/*
 * XREFs of KeReleaseSemaphoreEx @ 0x1400D29F0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x1400ABC10 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x1400D3870 (AlpcpSignal.c)
 *     MiCheckForControlAreaDeletion @ 0x140119FAC (MiCheckForControlAreaDeletion.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140159E20 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     PopIrpWorker @ 0x140171840 (PopIrpWorker.c)
 *     PopDispatchQuerySetIrp @ 0x140172000 (PopDispatchQuerySetIrp.c)
 *     IoRaiseInformationalHardError @ 0x1402836F0 (IoRaiseInformationalHardError.c)
 *     PnpProcessRebalance @ 0x14028BA04 (PnpProcessRebalance.c)
 *     MiQueuePageFileExtension @ 0x1402B89D4 (MiQueuePageFileExtension.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402D2EE0 (NtSignalAndWaitForSingleObject.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140616538 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpDoPortCleanup @ 0x14061A108 (AlpcpDoPortCleanup.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14061AA3C (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140635550 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406366C0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406CAD9C (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiCompleteDirectSwitchThread @ 0x1400D2C9C (KiCompleteDirectSwitchThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeReleaseSemaphoreEx(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  unsigned int v6; // r13d
  unsigned __int8 CurrentIrql; // r12
  __int64 v9; // r8
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v11; // ebp
  unsigned int v12; // edi
  int v13; // eax
  __int64 *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rcx
  char v18; // al
  bool v19; // zf
  unsigned __int8 v21; // cl
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  char v24; // al
  int v25; // r10d
  __int64 v26; // r8
  __int64 **v27; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v29; // rdx
  __int64 v30; // r9
  struct _KPRCB *v31; // rcx
  __int64 *v32; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v33; // [rsp+38h] [rbp-50h]
  _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  _QWORD *v35; // [rsp+90h] [rbp+8h]
  int v36; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v37; // [rsp+A8h] [rbp+20h]

  v37 = a4;
  v6 = a2;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  v36 = 0;
  while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
      KeYieldProcessorEx(&v36, a2, v9);
    while ( (*(_DWORD *)a1 & 0x80u) != 0 );
  }
  v12 = *(_DWORD *)(a1 + 4);
  v13 = v12 + a3;
  if ( (signed int)(v12 + a3) > *(_DWORD *)(a1 + 24) || v13 < (int)v12 )
  {
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v31 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v31);
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741753);
  }
  *(_DWORD *)(a1 + 4) = v13;
  if ( !v12 )
  {
    v14 = *(__int64 **)(a1 + 8);
    while ( v14 != (__int64 *)(a1 + 8) )
    {
      v15 = *v14;
      v16 = (__int64)v14;
      v32 = v14;
      v14 = (__int64 *)v15;
      v17 = (__int64 *)v32[1];
      if ( *(__int64 **)(v15 + 8) != v32 || *v17 != v16 )
LABEL_48:
        __fastfail(3u);
      *v17 = v15;
      *(_QWORD *)(v15 + 8) = v17;
      v18 = *(_BYTE *)(v16 + 16);
      if ( v18 == 1 )
      {
        if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), 0LL) )
        {
          v19 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v19 )
            break;
        }
      }
      else
      {
        if ( v18 == 2 )
        {
          *(_BYTE *)(v16 + 17) = 5;
          v37 = *(_QWORD *)(v16 + 24);
          v35 = (_QWORD *)(v37 + 8);
          *(_QWORD *)v16 = 0LL;
          v21 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v21 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v33 = KeGetCurrentPrcb();
          CurrentThread = v33->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            IsThreadRunning = KeIsThreadRunning(v33->CurrentThread);
            EtwTraceEnqueueWork(v30, v29, IsThreadRunning);
          }
          KiAcquireKobjectLockSafe(v37);
          v22 = v35;
          v23 = v37;
          if ( (_QWORD *)*v22 == v22
            || *(_DWORD *)(v37 + 40) >= *(_DWORD *)(v37 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v37 && CurrentThread->WaitReason == 15 )
          {
LABEL_28:
            v25 = *(_DWORD *)(v23 + 4);
            v26 = v23 + 24;
            *(_DWORD *)(v23 + 4) = v25 + 1;
            v27 = *(__int64 ***)(v23 + 32);
            if ( *v27 != (__int64 *)(v23 + 24) )
              goto LABEL_48;
            *v32 = v26;
            v32[1] = (__int64)v27;
            *v27 = v32;
            *(_QWORD *)(v23 + 32) = v32;
            if ( !v25 && (_QWORD *)*v22 != v22 )
            {
              KiWakeOtherQueueWaiters((__int64)v33, v23, v26);
              v23 = v37;
            }
          }
          else
          {
            v24 = KiWakeQueueWaiter((__int64)v33, v37, (__int64)v32);
            v23 = v37;
            if ( !v24 )
            {
              v22 = v35;
              goto LABEL_28;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
          v19 = (*(_DWORD *)(a1 + 4))-- == 1;
          if ( v19 )
            break;
          continue;
        }
        KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL);
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
  {
    v11 = 1;
    if ( (a5 & 4) == 0 )
      v11 = 3;
  }
  else if ( (a5 & 2) != 0 )
  {
    KiCompleteDirectSwitchThread(CurrentPrcb, CurrentPrcb->CurrentThread);
  }
  KiExitDispatcher((__int64)CurrentPrcb, v11, 1LL, v6, CurrentIrql);
  return v12;
}
