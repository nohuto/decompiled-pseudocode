/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x140059B50
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IoRemoveIoCompletion @ 0x140058990 (IoRemoveIoCompletion.c)
 *     ObpIncrPointerCount @ 0x14005B360 (ObpIncrPointerCount.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14008DDE4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     ObpTraceObjectReferenceIfActive @ 0x1400ACE38 (ObpTraceObjectReferenceIfActive.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KeAreAllApcsDisabled @ 0x1400CAB70 (KeAreAllApcsDisabled.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE2A0 (ExpWorkerFactoryCheckCreate.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400D3920 (AlpcpQueueIoCompletionPort.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeRegisterObjectNotification @ 0x1400FD340 (KeRegisterObjectNotification.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14010E044 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1401299DC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x14012B948 (ExpWorkerFactoryWantsToCreate.c)
 *     KiReleaseKobjectLock @ 0x140138F00 (KiReleaseKobjectLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetThreadState @ 0x1401B4CCC (KiSetThreadState.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     NtAlpcSendWaitReceivePort @ 0x140633040 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 *     ObpRemoveObjectRoutine @ 0x140646E80 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140692D20 (ObpHandleRevocationBlockRemoveObject.c)
 *     AlpciDestroyDeferredMessageContext @ 0x1406991D0 (AlpciDestroyDeferredMessageContext.c)
 *     ExSystemExceptionFilter @ 0x1406E3A10 (ExSystemExceptionFilter.c)
 *     ObpDeregisterObject @ 0x140863E20 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v8; // rcx
  NTSTATUS v9; // r14d
  PVOID v10; // r13
  unsigned __int64 *v11; // rbx
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rsi
  _DWORD *v20; // rcx
  _DWORD *v21; // r15
  bool v22; // cf
  _QWORD *v23; // rcx
  __int64 v24; // rax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  int v27; // eax
  unsigned __int8 v28; // bl
  struct _KPRCB *v29; // rcx
  HANDLE v30; // r15
  ULONG v31; // esi
  HANDLE v32; // rcx
  struct _KTHREAD *v33; // rax
  unsigned int v34; // esi
  signed __int32 v35; // edi
  char *v36; // rbx
  struct _KEVENT *v37; // rcx
  int v38; // r9d
  __int64 v39; // r13
  __int64 v40; // rbx
  struct _KPRCB *v41; // r10
  int v42; // eax
  int v43; // ecx
  _QWORD *v44; // r15
  int v45; // ebx
  _QWORD *v46; // r12
  _QWORD *v47; // rax
  _QWORD *v48; // rcx
  char v49; // al
  __int64 v50; // r14
  __int64 v51; // rsi
  char v52; // di
  struct _KPRCB *v53; // rbx
  _DWORD *v54; // rcx
  int v55; // eax
  _DWORD *v56; // rcx
  int v57; // eax
  char v58; // al
  int v59; // ecx
  struct _KPRCB *v60; // rcx
  _DWORD *v61; // rdx
  int v62; // eax
  bool v63; // zf
  __int64 v64; // rcx
  __int64 v65; // rdi
  struct _KPRCB *v66; // rbx
  _DWORD *v67; // rcx
  int v68; // eax
  _DWORD *v69; // rcx
  int v70; // eax
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  struct _KPRCB *v73; // rcx
  _DWORD *v74; // rdx
  int v75; // eax
  __int64 v76; // rbx
  _QWORD *v77; // rsi
  char v78; // r15
  unsigned __int8 v79; // cl
  struct _KPRCB *v80; // r14
  _KTHREAD *v81; // rdi
  unsigned __int8 IsThreadRunning; // al
  int v83; // r8d
  _QWORD *v84; // rdx
  void *v85; // rbx
  struct _KTHREAD *v86; // rcx
  _QWORD *v87; // rbx
  unsigned __int64 *v88; // rbx
  unsigned __int8 v89; // dl
  struct _KPRCB *v90; // rcx
  _DWORD *v91; // rdx
  int v92; // eax
  char v93; // al
  _DWORD *v94; // r8
  struct _KTHREAD *v95; // r15
  unsigned int v96; // ecx
  _QWORD *v97; // rbx
  struct _KTHREAD **v98; // rax
  __int64 v99; // rax
  unsigned int v100; // edi
  PVOID *v101; // rbx
  __int64 v102; // rdi
  int v103; // edx
  __int64 Next; // rax
  struct _KPRCB *v105; // rcx
  _DWORD *v106; // rdx
  int v107; // eax
  unsigned __int8 v108; // bl
  struct _KPRCB *v109; // rcx
  ULONG_PTR v110; // rbx
  signed __int64 v111; // r13
  bool v112; // cc
  signed __int64 v113; // r13
  __int64 v114; // rax
  struct _KPRCB *v116; // rcx
  unsigned __int8 v117; // [rsp+40h] [rbp-1E8h]
  struct _KPRCB *v118; // [rsp+48h] [rbp-1E0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-1D8h] BYREF
  _QWORD *v120; // [rsp+68h] [rbp-1C0h]
  ULONG v121; // [rsp+70h] [rbp-1B8h]
  ULONG v122; // [rsp+74h] [rbp-1B4h] BYREF
  _DWORD *v123; // [rsp+78h] [rbp-1B0h]
  PFILE_IO_COMPLETION_INFORMATION v124; // [rsp+80h] [rbp-1A8h]
  _DWORD *v125; // [rsp+88h] [rbp-1A0h]
  PVOID Object; // [rsp+90h] [rbp-198h] BYREF
  PVOID v127; // [rsp+98h] [rbp-190h] BYREF
  PULONG v128; // [rsp+A0h] [rbp-188h]
  PVOID P; // [rsp+A8h] [rbp-180h]
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-178h]
  __int64 v131; // [rsp+B8h] [rbp-170h] BYREF
  PVOID v132; // [rsp+C0h] [rbp-168h]
  HANDLE Handle[2]; // [rsp+C8h] [rbp-160h]
  ULONG Flags[2]; // [rsp+D8h] [rbp-150h]
  int v135; // [rsp+E0h] [rbp-148h] BYREF
  int v136; // [rsp+E4h] [rbp-144h] BYREF
  int v137; // [rsp+E8h] [rbp-140h] BYREF
  PFILE_IO_COMPLETION_INFORMATION v138; // [rsp+F0h] [rbp-138h]
  PVOID v139[3]; // [rsp+100h] [rbp-128h] BYREF
  __int64 v140; // [rsp+118h] [rbp-110h]
  __int64 v141; // [rsp+120h] [rbp-108h]
  __int64 v142; // [rsp+128h] [rbp-100h]
  __int64 v143; // [rsp+130h] [rbp-F8h]
  __int64 v144; // [rsp+138h] [rbp-F0h]
  _QWORD *v145; // [rsp+140h] [rbp-E8h]
  __int64 v146; // [rsp+148h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+150h] [rbp-D8h]
  _BYTE v148[128]; // [rsp+160h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+228h] [rbp+0h]

  v128 = PacketsReturned;
  v121 = Count;
  v138 = MiniPackets;
  v125 = WorkerFactoryHandle;
  v124 = MiniPackets;
  v120 = PacketsReturned;
  v122 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v117 = PreviousMode;
  P = v148;
  Flags[1] = 0;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v9 = -1073741811;
    goto LABEL_240;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(MiniPackets, 32LL * Count, 8u);
    v8 = (__int64)v128;
    if ( (unsigned __int64)v128 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v8 = *(_DWORD *)v8;
    if ( ((unsigned __int8)DeferredWork & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&DeferredWork[1] > 0x7FFFFFFF0000LL || &DeferredWork[1] < DeferredWork )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  v9 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  v10 = Object;
  v120 = Object;
  BugCheckParameter2 = (ULONG_PTR)Object;
  if ( v9 >= 0 )
  {
    if ( Count > 0x10 )
    {
      P = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * Count, 0x656E6F4Eu);
      if ( !P )
      {
        v121 = 16;
        P = v148;
      }
    }
    v11 = (unsigned __int64 *)*((_QWORD *)v10 + 2);
    LockHandle.LockQueue.Lock = v11;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    LockHandle.OldIrql = CurrentIrql;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[5];
        SchedulerAssist[5] = v15 + 1;
        if ( v15 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)v11, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    v16 = *((_QWORD *)v10 + 2);
    if ( *(_BYTE *)(v16 + 33) )
    {
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v18 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v18);
      }
      __writecr8(OldIrql);
      v9 = 128;
      goto LABEL_240;
    }
    v19 = Object;
    v124 = (PFILE_IO_COMPLETION_INFORMATION)((char *)Object + 152);
    if ( (*((_DWORD *)Object + 38) & 0x200) != 0 )
    {
      ExpLeaveWorkerFactoryAwayMode(Object);
      v16 = *((_QWORD *)v10 + 2);
    }
    ++*(_DWORD *)(v16 + 28);
    v20 = v19 + 31;
    v125 = v19 + 31;
    v21 = v19 + 32;
    v123 = v19 + 32;
    while ( 1 )
    {
      v22 = *v20 < *v21;
      v23 = v120;
      if ( v22 || *(_BYTE *)(v120[2] + 33LL) )
      {
        v9 = 258;
LABEL_197:
        --*(_DWORD *)(v23[2] + 28LL);
        if ( v9 == 258 )
        {
          --*v21;
          --v19[33];
          ExpRemoveCurrentThreadFromThreadHistory(v19);
          v94 = v124;
        }
        else
        {
          v94 = v124;
          if ( ((__int64)v124->KeyContext & 7) != 4 )
          {
            v95 = KeGetCurrentThread();
            v96 = 0;
            v19 = Object;
            v97 = (char *)Object + 72;
            v98 = (struct _KTHREAD **)((char *)Object + 72);
            while ( *v98 != v95 )
            {
              ++v96;
              ++v98;
              if ( v96 >= 4 )
              {
                ObfReferenceObjectWithTag(v95, 0x746C6644u);
                v99 = 0LL;
                while ( *v97 )
                {
                  v99 = (unsigned int)(v99 + 1);
                  ++v97;
                  if ( (unsigned int)v99 >= 4 )
                  {
                    v100 = (__int64)v124->KeyContext & 7;
                    v101 = (PVOID *)&v19[2 * v100 + 18];
                    ObfDereferenceObjectWithTag(*v101, 0x746C6644u);
                    *v101 = v95;
                    v94 = v124;
                    LODWORD(v124->KeyContext) = (__int64)v124->KeyContext & 0xFFFFFFF8 | ((_BYTE)v100 + 1) & 3;
                    goto LABEL_210;
                  }
                }
                *(_QWORD *)&v19[2 * v99 + 18] = v95;
                v94 = v124;
                break;
              }
            }
          }
LABEL_210:
          v21 = v123;
        }
        v102 = v120[2];
        if ( *v21 < *v125 && !*(_DWORD *)(v102 + 28) )
        {
          if ( !v19[37] || (v103 = *v94 | 0x200, *v94 = v103, *(_DWORD *)(*(_QWORD *)(v102 + 8) + 4LL)) )
          {
            ExpWorkerFactoryCheckCreate(v19, &LockHandle);
LABEL_234:
            if ( !v9 )
            {
              if ( v117 )
                *v128 = v122;
              else
                *v128 = v122;
            }
            break;
          }
          if ( (v103 & 0x400) == 0 )
          {
            *v94 = v103 | 0x400;
            ObpTraceObjectReferenceIfActive(v19 - 12, 1LL, 1953261124LL);
            ObpIncrPointerCount(v19 - 12);
            KeRegisterObjectNotification(*(_QWORD *)(v102 + 8), &ExpWorkerFactoryManagerQueue, v19 + 90);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
          goto LABEL_224;
        }
        _m_prefetchw(&LockHandle);
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_224;
          Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
LABEL_224:
        v105 = KeGetCurrentPrcb();
        v106 = v105->SchedulerAssist;
        if ( v106 )
        {
          if ( v105->NestingLevel <= 1u )
          {
            v107 = v106[5] - 1;
            v106[5] = v107;
            if ( !v107 )
              KiRemoveSystemWorkPriorityKick(v105);
          }
        }
        v108 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v109 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v109->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v109);
        }
        __writecr8(v108);
        goto LABEL_234;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
      }
      else
      {
        _m_prefetchw(&LockHandle);
        v24 = (__int64)LockHandle.LockQueue.Next;
        if ( LockHandle.LockQueue.Next )
          goto LABEL_44;
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) != &LockHandle )
        {
          v24 = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_44:
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v24 + 8), 1uLL);
        }
      }
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      if ( v26 )
      {
        if ( v25->NestingLevel <= 1u )
        {
          v27 = v26[5] - 1;
          v26[5] = v27;
          if ( !v27 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
      v28 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v29 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v29);
      }
      __writecr8(v28);
      if ( (Flags[1] & 1) == 0 )
        goto LABEL_178;
      v30 = Handle[0];
      v31 = Flags[0];
      v32 = Handle[1];
      memset(v139, 0, sizeof(v139));
      v140 = 0LL;
      v141 = 0LL;
      v142 = 0LL;
      v143 = 0LL;
      v144 = 0LL;
      v33 = KeGetCurrentThread();
      --v33->KernelApcDisable;
      v131 = 0LL;
      v132 = 0LL;
      v34 = v31 & 0xFFFF0000;
      if ( (v34 & 0x20000) == 0 && ObReferenceObjectByHandle(v32, 1u, AlpcPortObjectType, v117, &v127, 0LL) >= 0 )
      {
        if ( (v34 & 0x40000) != 0 )
        {
          v35 = _InterlockedIncrement((volatile signed __int32 *)v127 + 101);
          v36 = (char *)v127;
          if ( *((_QWORD *)v127 + 51) )
          {
            ExAcquirePushLockExclusiveEx((ULONG_PTR)v127 + 352, 0LL);
            v37 = (struct _KEVENT *)*((_QWORD *)v36 + 51);
            if ( v37 && v35 == v37[1].Header.LockNV )
              KeSetEvent(v37, 0, 0);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v36 + 352);
            KeAbPostRelease((ULONG_PTR)(v36 + 352));
            v36 = (char *)v127;
          }
        }
        else
        {
          v36 = (char *)v127;
        }
        v139[0] = v36;
        LODWORD(v143) = v34 | 4;
        v141 = 0LL;
        v140 = 0LL;
        v142 = 0LL;
        if ( (int)AlpcpSendMessage(v139, v30, 0LL, v117) >= 0 )
        {
          v131 = v141;
          v132 = v139[0];
          if ( v141 )
          {
            if ( BYTE2(v144) )
              AlpcpQueueIoCompletionPort(v141, BYTE3(v144), 1LL);
            else
              KeReleaseSemaphoreEx(*(_QWORD *)(v141 + 248), 1, 1, v38, 1);
          }
          else
          {
            if ( v140 )
            {
              v39 = v140 + 1608;
              v40 = KeGetCurrentIrql();
              v146 = v40;
              __writecr8(2uLL);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v40 < 2u )
                _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
              v41 = KeGetCurrentPrcb();
              v118 = v41;
              v135 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)v39, 7u) )
              {
                do
                {
                  do
                    KeYieldProcessorEx(&v135);
                  while ( (*(_DWORD *)v39 & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset((volatile signed __int32 *)v39, 7u) );
                v41 = v118;
              }
              v42 = *(_DWORD *)(v39 + 4);
              v43 = v42 + 1;
              if ( v42 + 1 > *(_DWORD *)(v39 + 24) || v43 < v42 )
              {
                KiReleaseKobjectLock(v39);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v40 < 2u )
                {
                  v116 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v116->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v116);
                }
                __writecr8((unsigned __int8)v40);
                RtlRaiseStatus(-1073741753);
              }
              *(_DWORD *)(v39 + 4) = v43;
              if ( v42 || (v44 = *(_QWORD **)(v39 + 8), v44 == (_QWORD *)(v39 + 8)) )
              {
                v45 = (int)v118;
LABEL_86:
                _InterlockedAnd((volatile signed __int32 *)v39, 0xFFFFFF7F);
                KiExitDispatcher(v45, 1, 1, 1, v146);
                goto LABEL_173;
              }
              while ( 2 )
              {
                v46 = v44;
                v47 = (_QWORD *)*v44;
                v44 = v47;
                v145 = v47;
                v48 = (_QWORD *)v46[1];
                if ( (_QWORD *)v47[1] != v46 || (_QWORD *)*v48 != v46 )
LABEL_199:
                  __fastfail(3u);
                *v48 = v47;
                v47[1] = v48;
                v49 = *((_BYTE *)v46 + 16);
                if ( v49 == 1 )
                {
                  v50 = *((unsigned __int16 *)v46 + 9);
                  v51 = v46[3];
                  v52 = 0;
                  v53 = KeGetCurrentPrcb();
                  v136 = 0;
                  while ( 1 )
                  {
                    v54 = v53->SchedulerAssist;
                    if ( v54 )
                    {
                      if ( v53->NestingLevel <= 1u )
                      {
                        v55 = v54[5];
                        v54[5] = v55 + 1;
                        if ( v55 == -1 )
                          KiRemoveSystemWorkPriorityKick(v53);
                      }
                    }
                    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v51 + 64), 0LL) )
                      break;
                    v56 = v53->SchedulerAssist;
                    if ( v56 )
                    {
                      if ( v53->NestingLevel <= 1u )
                      {
                        v57 = v56[5] - 1;
                        v56[5] = v57;
                        if ( !v57 )
                          KiRemoveSystemWorkPriorityKick(v53);
                      }
                    }
                    do
                      KeYieldProcessorEx(&v136);
                    while ( *(_QWORD *)(v51 + 64) );
                  }
                  if ( *(_BYTE *)(v51 + 388) == 5 )
                  {
                    v58 = *(_BYTE *)(v51 + 112);
                    v59 = v58 & 7;
                    v52 = 0;
                    if ( v59 == 1 || v59 == 4 )
                    {
                      v64 = *(_QWORD *)(v51 + 232);
                      if ( v64 )
                      {
                        if ( (*(_BYTE *)v64 & 0x7F) == 0x15 )
                        {
                          *(_DWORD *)(v51 + 540) = (unsigned __int8)*(_DWORD *)(v51 + 540);
                          _InterlockedIncrement((volatile signed __int32 *)(v64
                                                                          + 4LL * *(unsigned int *)(v51 + 540)
                                                                          + 536));
                        }
                        else
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(v64 + 40));
                        }
                      }
                      v65 = *(_QWORD *)(v51 + 712);
                      if ( v65 )
                      {
                        v66 = KeGetCurrentPrcb();
                        v137 = 0;
                        while ( 1 )
                        {
                          v67 = v66->SchedulerAssist;
                          if ( v67 )
                          {
                            if ( v66->NestingLevel <= 1u )
                            {
                              v68 = v67[5];
                              v67[5] = v68 + 1;
                              if ( v68 == -1 )
                                KiRemoveSystemWorkPriorityKick(v66);
                            }
                          }
                          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v65 + 22800), 0LL) )
                            break;
                          v69 = v66->SchedulerAssist;
                          if ( v69 )
                          {
                            if ( v66->NestingLevel <= 1u )
                            {
                              v70 = v69[5] - 1;
                              v69[5] = v70;
                              if ( !v70 )
                                KiRemoveSystemWorkPriorityKick(v66);
                            }
                          }
                          do
                            KeYieldProcessorEx(&v137);
                          while ( *(_QWORD *)(v65 + 22800) );
                        }
                        if ( *(_QWORD *)(v51 + 712) )
                        {
                          v71 = *(_QWORD *)(v51 + 216);
                          v72 = *(_QWORD **)(v51 + 224);
                          if ( *(_QWORD *)(v71 + 8) != v51 + 216 || *v72 != v51 + 216 )
                            goto LABEL_199;
                          *v72 = v71;
                          *(_QWORD *)(v71 + 8) = v72;
                          *(_QWORD *)(v51 + 712) = 0LL;
                        }
                        _InterlockedAnd64((volatile signed __int64 *)(v65 + 22800), 0LL);
                        v73 = KeGetCurrentPrcb();
                        v74 = v73->SchedulerAssist;
                        if ( v74 )
                        {
                          if ( v73->NestingLevel <= 1u )
                          {
                            v75 = v74[5] - 1;
                            v74[5] = v75;
                            if ( !v75 )
                              KiRemoveSystemWorkPriorityKick(v73);
                          }
                        }
                      }
                      if ( *(_BYTE *)(v51 + 388) == 1 )
                        *(_DWORD *)(v51 + 116) |= 2u;
                      KiSetThreadState(v51, 7LL);
                      v45 = (int)v118;
                      *(_QWORD *)(v51 + 216) = v118->DeferredReadyListHead.Next;
                      v118->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v51 + 216);
                      *(_QWORD *)(v51 + 200) = v50;
                      v52 = 1;
                    }
                    else
                    {
                      if ( (*(_BYTE *)(v51 + 112) & 7) == 0 )
                      {
                        *(_BYTE *)(v51 + 112) = v58 & 0xF8 | 2;
                        *(_QWORD *)(v51 + 200) = v50;
                        v52 = 1;
                        *((_BYTE *)v46 + 17) = 0;
                        goto LABEL_108;
                      }
                      if ( v59 == 5 )
                      {
                        *(_BYTE *)(v51 + 112) = v58 & 0xF8 | 6;
                        goto LABEL_108;
                      }
                      v45 = (int)v118;
                      if ( v59 == 3 )
                        *((_BYTE *)v46 + 17) = 2;
                    }
                  }
                  else
                  {
LABEL_108:
                    v45 = (int)v118;
                  }
                  *(_QWORD *)(v51 + 64) = 0LL;
                  v60 = KeGetCurrentPrcb();
                  v61 = v60->SchedulerAssist;
                  if ( v61 )
                  {
                    if ( v60->NestingLevel <= 1u )
                    {
                      v62 = v61[5] - 1;
                      v61[5] = v62;
                      if ( !v62 )
                        KiRemoveSystemWorkPriorityKick(v60);
                    }
                  }
                  ++*((_BYTE *)v46 + 17);
                  if ( v52 )
                  {
                    v63 = (*(_DWORD *)(v39 + 4))-- == 1;
                    if ( v63 )
                      goto LABEL_86;
                  }
                }
                else if ( v49 == 2 )
                {
                  *((_BYTE *)v46 + 17) = 5;
                  v76 = v46[3];
                  *v46 = 0LL;
                  v77 = (_QWORD *)(v76 + 8);
                  v78 = 0;
                  v79 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v79 < 2u )
                    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                  v80 = KeGetCurrentPrcb();
                  v81 = v80->CurrentThread;
                  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                  {
                    IsThreadRunning = KeIsThreadRunning(v80->CurrentThread);
                    EtwTraceEnqueueWork(v81, v46, IsThreadRunning);
                  }
                  KiAcquireKobjectLockSafe(v76);
                  if ( (_QWORD *)*v77 != v77
                    && *(_DWORD *)(v76 + 40) < *(_DWORD *)(v76 + 44)
                    && (v81->Queue != (_DISPATCHER_HEADER *volatile)v76 || v81->WaitReason != 15) )
                  {
                    v78 = KiWakeQueueWaiter(v80, v76, v46);
                  }
                  if ( !v78 )
                  {
                    v83 = *(_DWORD *)(v76 + 4);
                    *(_DWORD *)(v76 + 4) = v83 + 1;
                    v84 = *(_QWORD **)(v76 + 32);
                    if ( *v84 != v76 + 24 )
                      goto LABEL_199;
                    *v46 = v76 + 24;
                    v46[1] = v84;
                    *v84 = v46;
                    *(_QWORD *)(v76 + 32) = v46;
                    if ( !v83 && (_QWORD *)*v77 != v77 )
                      KiWakeOtherQueueWaiters(v80, v76);
                  }
                  _InterlockedAnd((volatile signed __int32 *)v76, 0xFFFFFF7F);
                  v63 = (*(_DWORD *)(v39 + 4))-- == 1;
                  v45 = (int)v118;
                  if ( v63 )
                    goto LABEL_86;
                  v44 = v145;
                }
                else
                {
                  KiTryUnwaitThread(v41, v46, 256LL, 0LL);
                  v45 = (int)v118;
                }
                if ( v44 == (_QWORD *)(v39 + 8) )
                  goto LABEL_86;
                v41 = v118;
                continue;
              }
            }
            if ( v142 )
            {
              v85 = (void *)(v142 & 0xFFFFFFFFFFFFFFFEuLL);
              KeSetEvent((PRKEVENT)(v142 & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
              if ( (v142 & 1) != 0 )
                ObfDereferenceObject(v85);
              v142 = 0LL;
            }
          }
        }
        else
        {
          ObfDereferenceObject(v139[0]);
        }
      }
LABEL_173:
      v86 = KeGetCurrentThread();
      v63 = v86->KernelApcDisable++ == -1;
      if ( v63
        && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v86->ApcState.ApcListHead[0].Flink != &v86->152
        && !v86->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v86);
      }
      v21 = v123;
LABEL_178:
      v87 = v120;
      v9 = IoRemoveIoCompletion(
             *(struct _KQUEUE **)(v120[2] + 8LL),
             (__int64)v138,
             (PLIST_ENTRY *)P,
             v121,
             &v122,
             v117,
             0LL,
             1u);
      if ( (Flags[1] & 1) != 0 )
      {
        AlpciDestroyDeferredMessageContext(&v131);
        Flags[1] &= ~1u;
      }
      v88 = (unsigned __int64 *)v87[2];
      LockHandle.LockQueue.Lock = v88;
      LockHandle.LockQueue.Next = 0LL;
      v89 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v89 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LockHandle.OldIrql = v89;
      v90 = KeGetCurrentPrcb();
      v91 = v90->SchedulerAssist;
      if ( v91 )
      {
        if ( v90->NestingLevel <= 1u )
        {
          v92 = v91[5];
          v91[5] = v92 + 1;
          if ( v92 == -1 )
            KiRemoveSystemWorkPriorityKick(v90);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v88);
      }
      else if ( _InterlockedExchange64((volatile __int64 *)v88, (__int64)&LockHandle) )
      {
        KxWaitForLockOwnerShip(&LockHandle);
      }
      v19 = Object;
      if ( v9 == 258 )
      {
        v93 = ExpWorkerFactoryWantsToCreate(Object, 1LL);
        v20 = v125;
        if ( v93
          || *v21 <= v19[30]
          || *(struct _KTHREAD **)&CurrentThread[1].SystemCallNumber != (struct _KTHREAD *)&CurrentThread[1].SystemCallNumber )
        {
          continue;
        }
      }
      v23 = v120;
      goto LABEL_197;
    }
  }
LABEL_240:
  if ( P != v148 )
    ExFreePoolWithTag(P, 0);
  if ( BugCheckParameter2 )
  {
    v110 = BugCheckParameter2 - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v110);
    v111 = _InterlockedExchangeAdd64((volatile signed __int64 *)v110, 0xFFFFFFFFFFFFFFFFuLL);
    v112 = v111 <= 1;
    v113 = v111 - 1;
    if ( v112 )
    {
      if ( *(_QWORD *)(v110 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v110 + 24) ^ (unsigned __int64)BYTE1(v110)],
          BugCheckParameter2,
          1uLL,
          *(_QWORD *)(v110 + 8));
      if ( v113 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, v113);
      if ( KeAreAllApcsDisabled() )
      {
        ObpDeferObjectDeletion(v110);
      }
      else
      {
        v114 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v110);
        if ( v114 )
          ObpHandleRevocationBlockRemoveObject(v114);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v110);
        ObpRemoveObjectRoutine(v110, 0LL);
      }
    }
  }
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(Handle[1], Flags[0], (PPORT_MESSAGE)Handle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v9;
}
