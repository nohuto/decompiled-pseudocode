/*
 * XREFs of MiNoPagesLastChance @ 0x1402D9E6C
 * Callers:
 *     MiWaitForFreePage @ 0x1402E5A00 (MiWaitForFreePage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiPfnReferenceCountIsZero @ 0x1400261D0 (MiPfnReferenceCountIsZero.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSufficientAvailablePages @ 0x14007D060 (MiSufficientAvailablePages.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082998 (KiQueryUnbiasedInterruptTime.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PsGetJobLastThrottledIoTime @ 0x140307B50 (PsGetJobLastThrottledIoTime.c)
 */

void __fastcall MiNoPagesLastChance(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // r8
  const void *v3; // r15
  int v4; // r14d
  unsigned __int64 v6; // r10
  int v7; // eax
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rbp
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // r12d
  ULONG v15; // esi
  const void *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 UnbiasedInterruptTime; // rax
  __int64 v20; // r11
  __int64 v21; // r15
  unsigned __int64 *v22; // rbp
  __int64 *v23; // rbx
  __int64 v24; // r12
  unsigned __int8 CurrentIrql; // r13
  __int64 v26; // r14
  ULONG_PTR v27; // r15
  __int64 v28; // rax
  __int64 v29; // rbp
  struct _KPRCB *v30; // rcx
  struct _WORK_QUEUE_ITEM *v31; // rbx
  char v32; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 *v34; // [rsp+40h] [rbp-88h]
  unsigned int BugCheckParameter3; // [rsp+48h] [rbp-80h]
  int BugCheckParameter3_4; // [rsp+4Ch] [rbp-7Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-70h] BYREF
  __int64 v38; // [rsp+70h] [rbp-58h]
  unsigned __int64 v39; // [rsp+78h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-48h]
  __int64 v41; // [rsp+88h] [rbp-40h]
  int v43; // [rsp+E8h] [rbp+20h]

  v2 = (_QWORD *)*(unsigned int *)(a1 + 668);
  v3 = *(const void **)(a1 + 8560);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = (int)v2;
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 672);
  v8 = 0LL;
  v9 = a2;
  v10 = (unsigned int)v7 >> 31;
  BugCheckParameter2 = (ULONG_PTR)v3;
  if ( v7 >= 0 )
    v7 = 0;
  if ( (int)v2 >= 0 )
    v4 = v7;
  v11 = *(_DWORD *)(a1 + 7896);
  v12 = (unsigned int)v10 | 2;
  BugCheckParameter3_4 = v4;
  if ( (int)v2 >= 0 )
    v12 = (unsigned int)v10;
  if ( !v11 )
    goto LABEL_13;
  v10 = a1 + 7904;
  v13 = v11;
  do
  {
    v2 = *(_QWORD **)v10;
    if ( (*(_WORD *)(*(_QWORD *)v10 + 204LL) & 0x50) == 0 )
    {
      v8 += v2[1] - *v2;
      v6 += v2[3];
    }
    v10 += 8LL;
    --v13;
  }
  while ( v13 );
  if ( v6 < 0x400 )
LABEL_13:
    v12 = (unsigned int)v12 | 4;
  v14 = v12 | 8;
  if ( v8 >= 0x400 )
    v14 = v12;
  BugCheckParameter3 = v14;
  if ( dword_140466204 )
  {
    v15 = 243;
  }
  else
  {
    v16 = *(const void **)(a1 + 8512);
    v17 = *(_QWORD *)(a1 + 8448) >> 2;
    if ( (unsigned __int64)v16 < v17 )
    {
      v15 = *(_QWORD *)(a1 + 8560) < v17 ? 235 : 77;
    }
    else
    {
      v15 = 253;
      BugCheckParameter2 = *(_QWORD *)(a1 + 8512);
      v3 = v16;
    }
  }
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 104LL);
  if ( !*(_QWORD *)(v18 + 952)
    || (PsGetJobLastThrottledIoTime(*(_QWORD *)(v18 + 952), v12, v2, v10),
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(),
        (unsigned __int64)(UnbiasedInterruptTime - v20) >= -MiNoPagesTimeout.QuadPart) )
  {
    if ( KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
    {
      v43 = 0;
    }
    else
    {
      DbgPrintEx(
        0x66u,
        0,
        "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
        v15,
        *(const void **)(a1 + 8448),
        v3,
        v14,
        v4);
      if ( (MiFlags & 8) != 0 )
        __debugbreak();
      v43 = 1;
    }
    if ( !(unsigned int)MiSufficientAvailablePages(a1, v9)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4820), 1, 0) )
    {
      v21 = 16LL;
      v39 = 0LL;
      v22 = (unsigned __int64 *)(a1 + 3424);
      v38 = 16LL;
      v23 = (__int64 *)(a1 + 3408);
      v34 = (unsigned __int64 *)(a1 + 3424);
      v24 = 0LL;
      do
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = v22;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v22);
        v26 = *v23;
        if ( *v23 != 0xFFFFFFFFFLL )
        {
          while ( 1 )
          {
            v41 = 48 * v26;
            v27 = 48 * v26 - 0x58000000000LL;
            v26 = *(_QWORD *)v27 & 0xFFFFFFFFFLL;
            v28 = *(_QWORD *)(v27 + 16);
            if ( qword_140465B00 && (v28 & 0x10) == 0 )
              v28 &= ~qword_140465B00;
            v29 = *(_QWORD *)(v28 >> 16);
            if ( (*(_DWORD *)(v29 + 56) & 0x28) == 0
              && (!v24 || v24 == v29)
              && !_interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
            {
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v29 + 72));
              if ( (*(_DWORD *)(v29 + 56) & 8) == 0 )
              {
                if ( !v24 )
                {
                  v39 = ObFastReferenceObjectLocked((_QWORD *)(v29 + 64));
                  v24 = v29;
                }
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v29 + 72));
                MiUnlinkPageFromList(v27, 1);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                v32 = *(_BYTE *)(v27 + 34);
                *(_QWORD *)(v27 + 24) &= 0xC000000000000000uLL;
                *(_BYTE *)(v27 + 34) = v32 & 0xEF;
                MiPfnReferenceCountIsZero(v27, v41 / 48);
                _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
                __writecr8(CurrentIrql);
                ++dword_140464814;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
                  _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                v22 = v34;
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = v34;
                KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v34);
                v26 = *v23;
                goto LABEL_47;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v29 + 72));
              _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v22 = v34;
LABEL_47:
            if ( v26 == 0xFFFFFFFFFLL )
            {
              v21 = v38;
              break;
            }
          }
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v30 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v30);
        }
        __writecr8(CurrentIrql);
        v22 += 5;
        v23 += 5;
        --v21;
        v34 = v22;
        v38 = v21;
      }
      while ( v21 );
      v31 = (struct _WORK_QUEUE_ITEM *)(a1 + 4776);
      if ( v24 )
      {
        *(_QWORD *)(a1 + 4808) = v39;
        *(_DWORD *)(a1 + 4816) = -1073741566;
        v31->List.Flink = 0LL;
        *(_QWORD *)(a1 + 4792) = MiLdwPopupWorker;
        *(_QWORD *)(a1 + 4800) = a1 + 4776;
        ExQueueWorkItem(v31, DelayedWorkQueue);
        ++dword_140464810;
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)(a1 + 4820), 0);
        if ( !v43 )
          KeBugCheckEx(v15, *(_QWORD *)(a1 + 8448), BugCheckParameter2, BugCheckParameter3, BugCheckParameter3_4);
      }
    }
  }
}
