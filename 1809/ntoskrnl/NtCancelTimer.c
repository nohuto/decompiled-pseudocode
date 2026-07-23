/*
 * XREFs of NtCancelTimer @ 0x14001CF40
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x140003730 (PoDestroyReasonContext.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpCancelTimer @ 0x14001D270 (ExpCancelTimer.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpSetTimerObject2 @ 0x1400FC158 (ExpSetTimerObject2.c)
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140291128 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  KPROCESSOR_MODE PreviousMode; // dl
  int v5; // r14d
  struct _KTIMER *v6; // rbx
  char *v7; // r13
  __int64 v8; // rdx
  struct _OBJECT_TYPE *v9; // rax
  volatile signed __int32 *v10; // rsi
  KIRQL CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  _QWORD *v14; // rdi
  int v15; // ebx
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  int v18; // esi
  signed __int64 v19; // rax
  __int64 v21; // rdx
  _RTL_BALANCED_NODE *v22; // rax
  _RTL_BALANCED_NODE *v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  char v27; // al
  _DWORD *v28; // rcx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  struct _KPRCB *v32; // rcx
  int v33; // eax
  struct _KPRCB *v34; // rcx
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  _QWORD *v37; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  char v39; // [rsp+98h] [rbp+10h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( CurrentState && PreviousMode )
  {
    v29 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)CurrentState < 0x7FFFFFFF0000LL )
      v29 = (__int64)CurrentState;
    *(_BYTE *)v29 = *(_BYTE *)v29;
  }
  v5 = ObReferenceObjectByHandle(TimerHandle, 2u, 0LL, PreviousMode, &Object, 0LL);
  if ( v5 < 0 )
    return v5;
  v6 = (struct _KTIMER *)Object;
  v7 = (char *)Object - 48;
  v8 = (unsigned __int8)ObHeaderCookie;
  v9 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
  if ( v9 == ExpIRTimerObjectType )
  {
    if ( CurrentState )
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741811;
    }
    else
    {
      return ExpSetTimerObject2(Object);
    }
  }
  else
  {
    if ( v9 == ExTimerObjectType )
    {
      CurrentThread = 0LL;
      v39 = 0;
      v10 = (volatile signed __int32 *)((char *)Object + 64);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      {
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v6 = (struct _KTIMER *)Object;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(v10);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v30 = SchedulerAssist[5];
            SchedulerAssist[5] = v30 + 1;
            if ( v30 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb, v8);
          }
        }
        if ( _interlockedbittestandset64(v10, 0LL) )
        {
          v28 = CurrentPrcb->SchedulerAssist;
          if ( v28 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v31 = v28[5] - 1;
              v28[5] = v31;
              if ( !v31 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb, v8);
            }
          }
          KxWaitForSpinLockAndAcquire(v10);
        }
        v6 = (struct _KTIMER *)Object;
      }
      v14 = *(_QWORD **)&v6[4].Header.Lock;
      v37 = v14;
      if ( v14 )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)v10);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v32 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v32, v21);
        }
        __writecr8(CurrentIrql);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v22 = (_RTL_BALANCED_NODE *)KeAbPreAcquire((ULONG_PTR)&ExpWakeTimerLock, 0LL);
        v23 = v22;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, v22, (ULONG_PTR)&ExpWakeTimerLock);
        if ( v23 )
          BYTE2(v23[1].Left) |= 1u;
        v39 = 1;
        CurrentIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10);
        v14 = *(_QWORD **)&v6[4].Header.Lock;
        v37 = v14;
        *(_QWORD *)&v6[4].Header.Lock = 0LL;
        v6 = (struct _KTIMER *)Object;
      }
      v15 = ExpCancelTimer(v6) + 1;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(v10, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      v16 = KeGetCurrentPrcb();
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v33 = v17[5] - 1;
          v17[5] = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(v16, v17);
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v34 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v34, v17);
      }
      __writecr8(CurrentIrql);
      if ( v39 )
      {
        if ( v14 )
        {
          v24 = (char *)Object + 264;
          v25 = *((_QWORD *)Object + 33);
          v26 = (_QWORD *)*((_QWORD *)Object + 34);
          if ( *(PVOID *)(v25 + 8) != (char *)Object + 264 || (_QWORD *)*v26 != v24 )
            __fastfail(3u);
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          *v24 = 0LL;
        }
        v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL);
        if ( (v27 & 2) != 0 && (v27 & 4) == 0 )
          ExfTryToWakePushLock(&ExpWakeTimerLock);
        KeAbPostRelease((ULONG_PTR)&ExpWakeTimerLock);
        KiLeaveCriticalRegionUnsafe(CurrentThread);
      }
      v18 = *((_DWORD *)Object + 1);
      if ( ObpTraceFlags )
        ObpPushStackInfo((_DWORD)v7);
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, -v15) - v15;
      if ( v19 <= 0 )
      {
        if ( *((_QWORD *)v7 + 1) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v7[24] ^ (unsigned __int64)BYTE1(v7)],
            (ULONG_PTR)Object,
            6uLL,
            *((_QWORD *)v7 + 1));
        if ( v19 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 5uLL, v19);
        ObpDeferObjectDeletion(v7);
      }
      if ( CurrentState )
        *CurrentState = v18;
      if ( v14 )
        PoDestroyReasonContext(v14);
      return v5;
    }
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    return -1073741788;
  }
}
