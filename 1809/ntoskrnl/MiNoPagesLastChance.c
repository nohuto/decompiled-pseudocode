/*
 * XREFs of MiNoPagesLastChance @ 0x1402C0710
 * Callers:
 *     MiWaitForFreePage @ 0x1402CB694 (MiWaitForFreePage.c)
 * Callees:
 *     MiPfnReferenceCountIsZero @ 0x140030E00 (MiPfnReferenceCountIsZero.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PsGetJobLastThrottledIoTime @ 0x1402EA250 (PsGetJobLastThrottledIoTime.c)
 */

void __fastcall MiNoPagesLastChance(__int64 a1, unsigned int a2)
{
  int v2; // eax
  _QWORD *v3; // r8
  const void *v4; // r15
  int v5; // r14d
  __int64 v6; // r9
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r10
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
  __int64 v21; // r8
  __int64 v22; // r15
  volatile __int64 *v23; // rbp
  __int64 *v24; // rbx
  __int64 v25; // r12
  unsigned __int8 CurrentIrql; // r13
  __int64 v27; // r14
  ULONG_PTR v28; // r15
  __int64 v29; // rax
  __int64 v30; // rbp
  struct _KPRCB *v31; // rcx
  struct _WORK_QUEUE_ITEM *v32; // rbx
  char v33; // cl
  __int64 v34; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  volatile __int64 *v36; // [rsp+40h] [rbp-88h]
  unsigned int BugCheckParameter3; // [rsp+48h] [rbp-80h]
  int BugCheckParameter3_4; // [rsp+4Ch] [rbp-7Ch]
  __int64 v39; // [rsp+58h] [rbp-70h]
  unsigned __int64 v40; // [rsp+60h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-60h]
  volatile signed __int64 *v42; // [rsp+70h] [rbp-58h] BYREF
  volatile __int64 *v43; // [rsp+78h] [rbp-50h]
  __int64 v44; // [rsp+88h] [rbp-40h]
  int v46; // [rsp+E8h] [rbp+20h]

  v2 = *(_DWORD *)(a1 + 664);
  v3 = (_QWORD *)*(unsigned int *)(a1 + 660);
  v4 = *(const void **)(a1 + 7792);
  v5 = *(_DWORD *)(a1 + 660);
  v6 = (unsigned int)v2 >> 31;
  v8 = a2;
  BugCheckParameter2 = (ULONG_PTR)v4;
  if ( v2 >= 0 )
    v2 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( (int)v3 >= 0 )
    v5 = v2;
  v11 = *(_DWORD *)(a1 + 7128);
  v12 = (*(_DWORD *)(a1 + 664) >> 31) | 2u;
  BugCheckParameter3_4 = v5;
  if ( (int)v3 >= 0 )
    v12 = (unsigned int)v6;
  if ( !v11 )
    goto LABEL_13;
  v6 = a1 + 7136;
  v13 = v11;
  do
  {
    v3 = *(_QWORD **)v6;
    if ( (*(_WORD *)(*(_QWORD *)v6 + 204LL) & 0x50) == 0 )
    {
      v9 += v3[1] - *v3;
      v10 += v3[3];
    }
    v6 += 8LL;
    --v13;
  }
  while ( v13 );
  if ( v10 < 0x400 )
LABEL_13:
    v12 = (unsigned int)v12 | 4;
  v14 = v12 | 8;
  if ( v9 >= 0x400 )
    v14 = v12;
  BugCheckParameter3 = v14;
  if ( dword_14043B824 )
  {
    v15 = 243;
  }
  else
  {
    v16 = *(const void **)(a1 + 7744);
    v17 = *(_QWORD *)(a1 + 7680) >> 2;
    if ( (unsigned __int64)v16 < v17 )
    {
      v15 = *(_QWORD *)(a1 + 7792) < v17 ? 235 : 77;
    }
    else
    {
      v15 = 253;
      BugCheckParameter2 = *(_QWORD *)(a1 + 7744);
      v4 = v16;
    }
  }
  v18 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 104LL);
  if ( !*(_QWORD *)(v18 + 944)
    || (PsGetJobLastThrottledIoTime(*(_QWORD *)(v18 + 944), v12, v3, v6),
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(),
        (unsigned __int64)(UnbiasedInterruptTime - v20) >= -MiNoPagesTimeout.QuadPart) )
  {
    if ( KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
    {
      v46 = 0;
    }
    else
    {
      DbgPrintEx(
        0x66u,
        0,
        "Without a debugger attached, the following bugcheck would have occurred.\n%4lx %p %p %x %x\n",
        v15,
        *(const void **)(a1 + 7680),
        v4,
        v14,
        v5);
      if ( (MiFlags & 8) != 0 )
        __debugbreak();
      v46 = 1;
    }
    if ( !(unsigned int)MiSufficientAvailablePages(a1, v8)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4820), 1, 0) )
    {
      v22 = 16LL;
      v40 = 0LL;
      v23 = (volatile __int64 *)(a1 + 3424);
      v39 = 16LL;
      v24 = (__int64 *)(a1 + 3408);
      v36 = (volatile __int64 *)(a1 + 3424);
      v25 = 0LL;
      do
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v42 = 0LL;
        v43 = v23;
        KxAcquireQueuedSpinLock((__int64)&v42, v23, v21);
        v27 = *v24;
        if ( *v24 != 0xFFFFFFFFFLL )
        {
          while ( 1 )
          {
            v44 = 48 * v27;
            v28 = 48 * v27 - 0x58000000000LL;
            v27 = *(_QWORD *)v28 & 0xFFFFFFFFFLL;
            v29 = *(_QWORD *)(v28 + 16);
            if ( qword_14043B180 && (v29 & 0x10) == 0 )
              v29 &= ~qword_14043B180;
            v30 = *(_QWORD *)(v29 >> 16);
            if ( (*(_DWORD *)(v30 + 56) & 0x28) == 0
              && (!v25 || v25 == v30)
              && !_interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
            {
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
              if ( (*(_DWORD *)(v30 + 56) & 8) == 0 )
              {
                if ( !v25 )
                {
                  v40 = ObFastReferenceObjectLocked((_QWORD *)(v30 + 64));
                  v25 = v30;
                }
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
                MiUnlinkPageFromList(v28, 1);
                KxReleaseQueuedSpinLock(&v42);
                v33 = *(_BYTE *)(v28 + 34);
                *(_QWORD *)(v28 + 24) &= 0xC000000000000000uLL;
                *(_BYTE *)(v28 + 34) = v33 & 0xEF;
                MiPfnReferenceCountIsZero(v28, v44 / 48);
                _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
                __writecr8(CurrentIrql);
                ++dword_140439EAC;
                CurrentIrql = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
                  _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                v23 = v36;
                v42 = 0LL;
                v43 = v36;
                KxAcquireQueuedSpinLock((__int64)&v42, v36, v34);
                v27 = *v24;
                goto LABEL_47;
              }
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v30 + 72));
              _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v23 = v36;
LABEL_47:
            if ( v27 == 0xFFFFFFFFFLL )
            {
              v22 = v39;
              break;
            }
          }
        }
        KxReleaseQueuedSpinLock(&v42);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v31 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v31);
        }
        __writecr8(CurrentIrql);
        v23 += 5;
        v24 += 5;
        --v22;
        v36 = v23;
        v39 = v22;
      }
      while ( v22 );
      v32 = (struct _WORK_QUEUE_ITEM *)(a1 + 4776);
      if ( v25 )
      {
        *(_QWORD *)(a1 + 4808) = v40;
        *(_DWORD *)(a1 + 4816) = -1073741566;
        v32->List.Flink = 0LL;
        *(_QWORD *)(a1 + 4792) = MiLdwPopupWorker;
        *(_QWORD *)(a1 + 4800) = a1 + 4776;
        ExQueueWorkItem(v32, DelayedWorkQueue);
        ++dword_140439EA8;
      }
      else
      {
        _InterlockedAnd((volatile signed __int32 *)(a1 + 4820), 0);
        if ( !v46 )
          KeBugCheckEx(v15, *(_QWORD *)(a1 + 7680), BugCheckParameter2, BugCheckParameter3, BugCheckParameter3_4);
      }
    }
  }
}
