/*
 * XREFs of NtSetInformationWorkerFactory @ 0x140106180
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14008DDE4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeAreAllApcsDisabled @ 0x1400CAB70 (KeAreAllApcsDisabled.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE2A0 (ExpWorkerFactoryCheckCreate.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x140106E08 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCreateThread @ 0x140106E9C (ExpWorkerFactoryCreateThread.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14010E044 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1401299DC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObpRemoveObjectRoutine @ 0x140646E80 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140692D20 (ObpHandleRevocationBlockRemoveObject.c)
 *     ExSystemExceptionFilter @ 0x1406E3A10 (ExSystemExceptionFilter.c)
 *     ObpDeregisterObject @ 0x140863E20 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r9
  __int32 v8; // r14d
  int v9; // eax
  NTSTATUS result; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  PVOID v13; // rcx
  int v14; // eax
  NTSTATUS Thread; // esi
  PVOID v16; // r15
  unsigned __int64 *v17; // rbx
  unsigned __int8 CurrentIrql; // dl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v21; // eax
  _QWORD *v22; // rdx
  char *v23; // rbx
  __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // edx
  _DWORD *v27; // r13
  unsigned int v28; // eax
  bool v29; // r12
  _DWORD *v30; // r12
  unsigned __int8 OldIrql; // di
  struct _KPRCB *v32; // rcx
  __int64 v33; // rax
  char v34; // r8
  unsigned int v35; // edx
  bool v36; // al
  unsigned int v37; // ecx
  unsigned int v38; // edx
  PKSPIN_LOCK *v39; // r12
  unsigned int v40; // eax
  int *v41; // r15
  int v42; // ecx
  unsigned __int8 v43; // si
  struct _KPRCB *v44; // rcx
  __int64 Next; // rax
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  int v48; // eax
  unsigned __int8 v49; // bl
  struct _KPRCB *v50; // rcx
  char *v51; // rbx
  signed __int64 v52; // rdi
  bool v53; // cc
  signed __int64 v54; // rdi
  __int64 v55; // rax
  bool v56; // [rsp+30h] [rbp-88h]
  char v57; // [rsp+34h] [rbp-84h]
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  char v59; // [rsp+41h] [rbp-77h]
  __int128 v60; // [rsp+48h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  _DWORD *v62; // [rsp+70h] [rbp-48h]
  _DWORD *v63; // [rsp+78h] [rbp-40h]
  _QWORD v64[2]; // [rsp+80h] [rbp-38h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v66; // [rsp+C8h] [rbp+10h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v60 = 0uLL;
  v8 = WorkerFactoryInformationClass - 2;
  switch ( WorkerFactoryInformationClass )
  {
    case WorkerFactoryIdleTimeout:
      v9 = 8;
      goto LABEL_6;
    case WorkerFactoryBindingCount:
    case WorkerFactoryThreadMinimum:
    case WorkerFactoryThreadMaximum:
    case WorkerFactoryAdjustThreadGoal:
    case WorkerFactoryCallbackType:
    case WorkerFactoryThreadBasePriority:
    case WorkerFactoryTimeoutWaiters:
    case WorkerFactoryFlags:
    case WorkerFactoryThreadSoftMaximum:
      v9 = 4;
      goto LABEL_6;
    case WorkerFactoryPaused:
      return -1073741822;
    case WorkerFactoryStackInformation:
      v9 = 16;
LABEL_6:
      if ( WorkerFactoryInformationLength != v9 )
        return -1073741820;
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_QWORD *)&v60 = *(_QWORD *)WorkerFactoryInformation;
          break;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
          if ( PreviousMode )
          {
            v11 = 0x7FFFFFFF0000LL;
            if ( (unsigned __int64)WorkerFactoryInformation < 0x7FFFFFFF0000LL )
              v11 = (__int64)WorkerFactoryInformation;
            LODWORD(v60) = *(_DWORD *)v11;
          }
          else
          {
            LODWORD(v60) = *(_DWORD *)WorkerFactoryInformation;
          }
          break;
        default:
          __fastfail(0x25u);
      }
      result = ObReferenceObjectByHandle(
                 WorkerFactoryHandle,
                 4u,
                 ExpWorkerFactoryObjectType,
                 PreviousMode,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( WorkerFactoryInformationClass == WorkerFactoryAdjustThreadGoal )
      {
        v13 = Object;
        v14 = v60;
        if ( !(_DWORD)v60 )
        {
          v14 = KeNumberProcessors_0;
          v13 = Object;
        }
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v14;
        ObfDereferenceObjectWithTag(v13, 0x746C6644u);
        return 0;
      }
      Thread = 0;
      v57 = 0;
      v56 = 0;
      v59 = 0;
      v66 = 1;
      v16 = Object;
      v17 = (unsigned __int64 *)*((_QWORD *)Object + 2);
      LockHandle.LockQueue.Lock = v17;
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
          v21 = SchedulerAssist[5];
          SchedulerAssist[5] = v21 + 1;
          if ( v21 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v17);
      }
      else
      {
        v22 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v17, (__int64)&LockHandle);
        if ( v22 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v22, v12);
      }
      switch ( v8 )
      {
        case 0:
          if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
          {
            Thread = 128;
            v23 = (char *)Object;
          }
          else if ( (__int64)v60 >= 0 )
          {
            Thread = -1073741811;
            v23 = (char *)Object;
          }
          else
          {
            v24 = -10000000LL;
            if ( (__int64)v60 <= -10000000 )
            {
              v24 = v60;
              if ( (__int64)v60 < -6000000000LL )
                v24 = -6000000000LL;
            }
            *(_QWORD *)&v60 = v24;
            v23 = (char *)Object;
            *((_QWORD *)Object + 14) = v24;
            v64[0] = 0LL;
            v64[1] = -1LL;
            KeSetTimer2((__int64)(v23 + 168), v24, -v24, (__int64)v64);
          }
          goto LABEL_87;
        case 1:
          v23 = (char *)Object;
          v25 = *((_DWORD *)Object + 37);
          if ( (int)v60 < 0 )
          {
            if ( v25 <= -(int)v60 )
            {
              *((_DWORD *)Object + 37) = 0;
              v26 = 0;
            }
            else
            {
              v26 = v25 + v60;
              *((_DWORD *)Object + 37) = v25 + v60;
            }
          }
          else
          {
            v26 = -1;
            if ( v25 < v25 + (unsigned int)v60 )
              v26 = v25 + v60;
            *((_DWORD *)Object + 37) = v26;
          }
          if ( v25 )
          {
            if ( !*((_DWORD *)v23 + 37) && (*((_DWORD *)v23 + 38) & 0x200) != 0 )
              ExpLeaveWorkerFactoryAwayMode(v23);
          }
          else if ( v26 && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v23) )
          {
            ExpWorkerFactoryCheckCreate(v23, &LockHandle, 0LL);
            v66 = 0;
          }
          goto LABEL_87;
        case 2:
          v23 = (char *)Object;
          if ( *(_BYTE *)(*((_QWORD *)v16 + 2) + 33LL) )
          {
            Thread = 128;
            goto LABEL_87;
          }
          v27 = (char *)Object + 120;
          v28 = v60;
          v29 = (unsigned int)v60 > *((_DWORD *)Object + 30);
          v56 = v29;
          *((_DWORD *)Object + 30) = v60;
          if ( *((_DWORD *)v23 + 31) < v28 )
            *((_DWORD *)v23 + 31) = v28;
          if ( !v29 )
            goto LABEL_87;
          v56 = 0;
          if ( (*((_DWORD *)v23 + 38) & 0x200) != 0 )
            ExpLeaveWorkerFactoryAwayMode(v23);
          v62 = v23 + 136;
          v63 = v23 + 128;
          if ( (unsigned int)(*((_DWORD *)v23 + 32) + *((_DWORD *)v23 + 34)) >= *v27 )
            goto LABEL_87;
          v30 = v23 + 144;
          break;
        case 3:
          v33 = *((_QWORD *)v16 + 2);
          v23 = (char *)Object;
          if ( *(_BYTE *)(v33 + 33) )
          {
            Thread = 128;
            goto LABEL_87;
          }
          v34 = 1;
          v57 = 1;
          v35 = v60;
          v36 = (_DWORD)v60
             && (!*((_DWORD *)Object + 31) && *(_DWORD *)(v33 + 24) || *(int *)(*(_QWORD *)(v33 + 8) + 4LL) > 0);
          *((_DWORD *)Object + 31) = v60;
          if ( v35 < *((_DWORD *)v23 + 30) )
            *((_DWORD *)v23 + 30) = v35;
          goto LABEL_88;
        default:
          __fastfail(0x25u);
      }
      while ( 1 )
      {
        ++*v30;
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v32 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v32);
          v23 = (char *)Object;
        }
        __writecr8(OldIrql);
        Thread = ExpWorkerFactoryCreateThread(v23);
        KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v16 + 2), &LockHandle);
        if ( Thread < 0 )
          break;
        if ( (unsigned int)(*v63 + *v62) >= *v27 )
          goto LABEL_87;
      }
      --*v30;
LABEL_87:
      v34 = 0;
      v36 = v56;
LABEL_88:
      if ( v36 )
      {
        v37 = *((_DWORD *)v23 + 32);
        v38 = v37 + *((_DWORD *)v23 + 34);
        v39 = (PKSPIN_LOCK *)(v23 + 16);
        if ( *(_BYTE *)(*((_QWORD *)v23 + 2) + 33LL) )
        {
          Thread = 128;
        }
        else
        {
          v40 = *((_DWORD *)v23 + 31);
          if ( v37 < v40 )
          {
            v41 = (int *)(v23 + 144);
            v42 = *((_DWORD *)v23 + 36);
            if ( v42 || v38 >= v40 )
              goto LABEL_105;
            if ( (*((_DWORD *)v23 + 38) & 0x200) != 0 )
            {
              ExpLeaveWorkerFactoryAwayMode(v23);
              v42 = *v41;
            }
            *v41 = v42 + 1;
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            v43 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v44 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick(v44);
              v23 = (char *)Object;
            }
            __writecr8(v43);
            v66 = 0;
            Thread = ExpWorkerFactoryCreateThread(v23);
            if ( Thread < 0 )
            {
              v66 = 1;
              KeAcquireInStackQueuedSpinLock(*v39, &LockHandle);
              --*v41;
              if ( v57 )
LABEL_105:
                Thread = 0;
            }
          }
          else if ( !v34 )
          {
            Thread = -1073741527;
          }
        }
      }
      if ( !v66 )
        goto LABEL_123;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_113;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_112;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
      {
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
LABEL_112:
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      }
LABEL_113:
      v46 = KeGetCurrentPrcb();
      v47 = v46->SchedulerAssist;
      if ( v47 )
      {
        if ( v46->NestingLevel <= 1u )
        {
          v48 = v47[5] - 1;
          v47[5] = v48;
          if ( !v48 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
      v49 = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        v50 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v50->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v50);
      }
      __writecr8(v49);
      v23 = (char *)Object;
LABEL_123:
      v51 = v23 - 48;
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v51);
      v52 = _InterlockedExchangeAdd64((volatile signed __int64 *)v51, 0xFFFFFFFFFFFFFFFFuLL);
      v53 = v52 <= 1;
      v54 = v52 - 1;
      if ( !v53 )
        return Thread;
      if ( *((_QWORD *)v51 + 1) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v51[24] ^ (unsigned __int64)BYTE1(v51)],
          (ULONG_PTR)Object,
          1uLL,
          *((_QWORD *)v51 + 1));
      if ( v54 < 0 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v54);
      if ( KeAreAllApcsDisabled() )
      {
        ObpDeferObjectDeletion(v51);
        return Thread;
      }
      v55 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v51);
      if ( v55 )
        ObpHandleRevocationBlockRemoveObject(v55);
      if ( ObpTraceFlags )
        ObpDeregisterObject(v51);
      ObpRemoveObjectRoutine(v51, 0LL);
      return Thread;
    default:
      return -1073741821;
  }
}
