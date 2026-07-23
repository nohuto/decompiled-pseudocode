/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x140062B00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140063070 (KeReleaseSpinLock.c)
 *     ObpGetWaitObject @ 0x14006310C (ObpGetWaitObject.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiWaitSatisfyOther @ 0x1400FA874 (KiWaitSatisfyOther.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  int v13; // ebx
  int v14; // r12d
  PVOID v15; // rcx
  __int64 WaitObject; // rbx
  volatile signed __int32 *v17; // rsi
  __int64 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  PVOID v24; // rdi
  PVOID v25; // rax
  __int64 v26; // r14
  _QWORD *v27; // r15
  unsigned __int8 v28; // cl
  unsigned __int64 v29; // r9
  struct _KPRCB *v30; // r13
  _KTHREAD *CurrentThread; // r14
  unsigned __int8 IsThreadRunning; // al
  _QWORD *v33; // rsi
  _DWORD *v34; // rdi
  unsigned int v35; // eax
  char v36; // al
  int v37; // ecx
  PVOID *v38; // rdx
  BOOLEAN v39; // bl
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  struct _KPRCB *v42; // rcx
  __int64 v43; // rcx
  KPROCESSOR_MODE v44; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PVOID v46; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v47[2]; // [rsp+48h] [rbp-40h] BYREF
  PVOID v48; // [rsp+50h] [rbp-38h] BYREF
  __int64 v49; // [rsp+58h] [rbp-30h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-28h]
  __int64 v51; // [rsp+68h] [rbp-20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v44 = PreviousMode;
  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v13 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v46, 0LL);
    if ( v13 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return v13;
    }
    v14 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v48, 0LL);
    v47[1] = v14;
    if ( v14 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v15 = v46;
LABEL_74:
      ObfDereferenceObjectWithTag(v15, 0x746C6644u);
      return v14;
    }
    WaitObject = ObpGetWaitObject((char *)v48 - 48);
    if ( (__int16 *)WaitObject == &ObpDefaultObject || !WaitObject || (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) == 0 )
    {
      v14 = -1073741583;
      goto LABEL_72;
    }
    v17 = (volatile signed __int32 *)((char *)Object + 96);
    SpinLock = (PKSPIN_LOCK)((char *)Object + 96);
    CurrentIrql = KeGetCurrentIrql();
    v51 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v17);
    }
    else
    {
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
      if ( _interlockedbittestandset64(v17, 0LL) )
      {
        v22 = CurrentPrcb->SchedulerAssist;
        if ( v22 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v23 = v22[5] - 1;
            v22[5] = v23;
            if ( !v23 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        KxWaitForSpinLockAndAcquire(v17);
      }
    }
    if ( *((_BYTE *)Object + 104) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v17, CurrentIrql);
      v14 = -1073741585;
LABEL_72:
      v24 = Object;
      goto LABEL_73;
    }
    v24 = Object;
    if ( *((_BYTE *)Object + 105) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v17, CurrentIrql);
      v14 = -1073700861;
LABEL_73:
      ObfDereferenceObjectWithTag(v46, 0x746C6644u);
      ObfDereferenceObjectWithTag(v48, 0x746C6644u);
      v15 = v24;
      goto LABEL_74;
    }
    *((_BYTE *)Object + 104) = 1;
    *((_QWORD *)v24 + 6) = KeyContext;
    *((_QWORD *)v24 + 7) = ApcContext;
    *((_DWORD *)v24 + 18) = IoStatus;
    *((_QWORD *)v24 + 8) = IoStatusInformation;
    *((_QWORD *)v24 + 10) = v48;
    v25 = v46;
    *((_QWORD *)v24 + 11) = v46;
    *((_WORD *)v24 + 8) = 1026;
    *((_QWORD *)v24 + 3) = v25;
    *((_QWORD *)v24 + 4) = WaitObject;
    v26 = KeGetCurrentIrql();
    v49 = v26;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v26 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v47[0] = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)WaitObject, 7u) )
    {
      do
        KeYieldProcessorEx(v47);
      while ( (*(_DWORD *)WaitObject & 0x80u) != 0 );
    }
    if ( *(int *)(WaitObject + 4) <= 0 )
    {
      v40 = *(_QWORD **)(WaitObject + 16);
      if ( *v40 == WaitObject + 8 )
      {
        v41 = Object;
        *(_QWORD *)Object = WaitObject + 8;
        v41[1] = v40;
        *v40 = v41;
        *(_QWORD *)(WaitObject + 16) = v41;
        _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v26 < 2u )
        {
          v42 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v42);
        }
        __writecr8((unsigned __int8)v26);
        v39 = 0;
        goto LABEL_65;
      }
      goto LABEL_58;
    }
    KiWaitSatisfyOther(WaitObject);
    *((_BYTE *)v24 + 17) = 5;
    *(_QWORD *)Object = 0LL;
    v27 = (char *)v46 + 8;
    v28 = KeGetCurrentIrql();
    __writecr8(v29);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v30 = KeGetCurrentPrcb();
    CurrentThread = v30->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(v30->CurrentThread);
      v33 = Object;
      EtwTraceEnqueueWork(CurrentThread, Object, IsThreadRunning);
    }
    else
    {
      v33 = Object;
    }
    v34 = v46;
    KiAcquireKobjectLockSafe(v46);
    if ( (_QWORD *)*v27 != v27 )
    {
      v35 = v34[10];
      v34 = v46;
      if ( v35 < *((_DWORD *)v46 + 11) )
      {
        v34 = v46;
        if ( CurrentThread->Queue != v46 || CurrentThread->WaitReason != 15 )
        {
          v33 = Object;
          v36 = KiWakeQueueWaiter(v30, v46, Object);
LABEL_51:
          if ( v36 )
          {
LABEL_56:
            _InterlockedAnd(v34, 0xFFFFFF7F);
            _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
            KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, v49);
            v39 = 1;
            v17 = (volatile signed __int32 *)SpinLock;
            LOBYTE(CurrentIrql) = v51;
            PreviousMode = v44;
LABEL_65:
            KeReleaseSpinLock((PKSPIN_LOCK)v17, CurrentIrql);
            if ( AlreadySignaled )
            {
              if ( PreviousMode )
              {
                v43 = 0x7FFFFFFF0000LL;
                if ( (unsigned __int64)AlreadySignaled < 0x7FFFFFFF0000LL )
                  v43 = (__int64)AlreadySignaled;
                *(_BYTE *)v43 = *(_BYTE *)v43;
              }
              *AlreadySignaled = v39;
            }
            return v14;
          }
          v37 = v34[1];
          v34[1] = v37 + 1;
          v38 = (PVOID *)*((_QWORD *)v34 + 4);
          if ( *v38 == v34 + 6 )
          {
            *v33 = v34 + 6;
            v33[1] = v38;
            *v38 = v33;
            *((_QWORD *)v34 + 4) = v33;
            if ( !v37 && (_QWORD *)*v27 != v27 )
              KiWakeOtherQueueWaiters(v30, v34);
            goto LABEL_56;
          }
LABEL_58:
          __fastfail(3u);
        }
      }
      v33 = Object;
    }
    v36 = 0;
    goto LABEL_51;
  }
  return result;
}
