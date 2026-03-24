/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x140062B00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140063080 (KeReleaseSpinLock.c)
 *     ObpGetWaitObject @ 0x14006311C (ObpGetWaitObject.c)
 *     KeYieldProcessorEx @ 0x14006C9F0 (KeYieldProcessorEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14008CFD0 (KxWaitForSpinLockAndAcquire.c)
 *     KiWakeQueueWaiter @ 0x1400ACA10 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2F70 (KiExitDispatcher.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDC60 (KiWakeOtherQueueWaiters.c)
 *     KiWaitSatisfyOther @ 0x1400FA7F4 (KiWaitSatisfyOther.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE10 (KiAcquireKobjectLockSafe.c)
 *     EvaluateCurrentState @ 0x1401B3694 (EvaluateCurrentState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14028DDA8 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x140290E28 (KiAcquireSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14030FD8C (EtwTraceEnqueueWork.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtAssociateWaitCompletionPacket(
        void *a1,
        void *a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char *a8)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  NTSTATUS v13; // ebx
  NTSTATUS v14; // r14d
  PVOID v15; // rcx
  __int64 WaitObject; // rbx
  volatile signed __int32 *v17; // r15
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  _BYTE *v24; // rsi
  int v25; // eax
  PVOID v26; // rdi
  PVOID v27; // rax
  __int64 v28; // rsi
  char v29; // r12
  _QWORD *v30; // r15
  unsigned __int8 v31; // cl
  unsigned __int64 v32; // r9
  struct _KPRCB *v33; // r13
  _KTHREAD *CurrentThread; // r14
  unsigned __int8 IsThreadRunning; // al
  _QWORD *v36; // rsi
  _DWORD *v37; // rdi
  unsigned int v38; // eax
  int v39; // ecx
  PVOID *v40; // rdx
  char v41; // bl
  _QWORD *v42; // rdx
  _QWORD *v43; // rax
  struct _KPRCB *v44; // rcx
  __int64 v45; // rcx
  KPROCESSOR_MODE v46; // [rsp+30h] [rbp-58h]
  PVOID Object; // [rsp+38h] [rbp-50h] BYREF
  PVOID v48; // [rsp+40h] [rbp-48h] BYREF
  NTSTATUS v49; // [rsp+48h] [rbp-40h]
  int v50; // [rsp+4Ch] [rbp-3Ch] BYREF
  PVOID v51; // [rsp+50h] [rbp-38h] BYREF
  __int64 v52; // [rsp+58h] [rbp-30h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-28h]
  __int64 v54; // [rsp+68h] [rbp-20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v46 = PreviousMode;
  result = ObReferenceObjectByHandle(a1, 1u, IopWaitCompletionPacketObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v13 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, PreviousMode, &v48, 0LL);
    if ( v13 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return v13;
    }
    v14 = ObReferenceObjectByHandle(a3, 0x100000u, 0LL, PreviousMode, &v51, 0LL);
    v49 = v14;
    if ( v14 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      v15 = v48;
LABEL_74:
      ObfDereferenceObjectWithTag(v15, 0x746C6644u);
      return v14;
    }
    WaitObject = ObpGetWaitObject((char *)v51 - 48);
    if ( (__int16 *)WaitObject == &ObpDefaultObject || !WaitObject || (((*(_BYTE *)WaitObject & 0x7F) - 2) & 0xFD) == 0 )
    {
      v14 = -1073741583;
      goto LABEL_72;
    }
    v17 = (volatile signed __int32 *)((char *)Object + 96);
    SpinLock = (PKSPIN_LOCK)((char *)Object + 96);
    CurrentIrql = KeGetCurrentIrql();
    v54 = CurrentIrql;
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
    v24 = Object;
    if ( *((_BYTE *)Object + 104) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v17, CurrentIrql);
      v14 = -1073741585;
LABEL_72:
      v26 = Object;
      goto LABEL_73;
    }
    v25 = EvaluateCurrentState(&g_Feature_2410109243_59422653_FeatureDescriptorDetails);
    v26 = Object;
    if ( v25 && *((_BYTE *)Object + 105) )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v17, CurrentIrql);
      v14 = -1073700861;
LABEL_73:
      ObfDereferenceObjectWithTag(v48, 0x746C6644u);
      ObfDereferenceObjectWithTag(v51, 0x746C6644u);
      v15 = v26;
      goto LABEL_74;
    }
    v24[104] = 1;
    *((_QWORD *)v26 + 6) = a4;
    *((_QWORD *)v26 + 7) = a5;
    *((_DWORD *)v26 + 18) = a6;
    *((_QWORD *)v26 + 8) = a7;
    *((_QWORD *)v26 + 10) = v51;
    v27 = v48;
    *((_QWORD *)v26 + 11) = v48;
    *((_WORD *)v26 + 8) = 1026;
    *((_QWORD *)v26 + 3) = v27;
    *((_QWORD *)v26 + 4) = WaitObject;
    v28 = KeGetCurrentIrql();
    v52 = v28;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v28 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v29 = 0;
    v50 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)WaitObject, 7u) )
    {
      do
        KeYieldProcessorEx(&v50);
      while ( (*(_DWORD *)WaitObject & 0x80u) != 0 );
    }
    if ( *(int *)(WaitObject + 4) <= 0 )
    {
      v42 = *(_QWORD **)(WaitObject + 16);
      if ( *v42 == WaitObject + 8 )
      {
        v43 = Object;
        *(_QWORD *)Object = WaitObject + 8;
        v43[1] = v42;
        *v42 = v43;
        *(_QWORD *)(WaitObject + 16) = v43;
        _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v28 < 2u )
        {
          v44 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v44->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v44);
        }
        __writecr8((unsigned __int8)v28);
        v41 = 0;
        goto LABEL_65;
      }
    }
    else
    {
      KiWaitSatisfyOther(WaitObject);
      *((_BYTE *)v26 + 17) = 5;
      *(_QWORD *)Object = 0LL;
      v30 = (char *)v48 + 8;
      v31 = KeGetCurrentIrql();
      __writecr8(v32);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v31 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v33 = KeGetCurrentPrcb();
      CurrentThread = v33->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        IsThreadRunning = KeIsThreadRunning(v33->CurrentThread);
        v36 = Object;
        EtwTraceEnqueueWork(CurrentThread, Object, IsThreadRunning);
      }
      else
      {
        v36 = Object;
      }
      v37 = v48;
      KiAcquireKobjectLockSafe(v48);
      if ( (_QWORD *)*v30 != v30 )
      {
        v38 = v37[10];
        v37 = v48;
        if ( v38 >= *((_DWORD *)v48 + 11) || (v37 = v48, CurrentThread->Queue == v48) && CurrentThread->WaitReason == 15 )
        {
          v36 = Object;
        }
        else
        {
          v36 = Object;
          v29 = KiWakeQueueWaiter(v33, v48, Object);
        }
      }
      if ( v29 )
        goto LABEL_56;
      v39 = v37[1];
      v37[1] = v39 + 1;
      v40 = (PVOID *)*((_QWORD *)v37 + 4);
      if ( *v40 == v37 + 6 )
      {
        *v36 = v37 + 6;
        v36[1] = v40;
        *v40 = v36;
        *((_QWORD *)v37 + 4) = v36;
        if ( !v39 && (_QWORD *)*v30 != v30 )
          KiWakeOtherQueueWaiters(v33, v37);
LABEL_56:
        _InterlockedAnd(v37, 0xFFFFFF7F);
        _InterlockedAnd((volatile signed __int32 *)WaitObject, 0xFFFFFF7F);
        KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, v52);
        v41 = 1;
        v14 = v49;
        v17 = (volatile signed __int32 *)SpinLock;
        LOBYTE(CurrentIrql) = v54;
LABEL_65:
        KeReleaseSpinLock((PKSPIN_LOCK)v17, CurrentIrql);
        if ( a8 )
        {
          if ( v46 )
          {
            v45 = 0x7FFFFFFF0000LL;
            if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
              v45 = (__int64)a8;
            *(_BYTE *)v45 = *(_BYTE *)v45;
          }
          *a8 = v41;
        }
        return v14;
      }
    }
    __fastfail(3u);
  }
  return result;
}
