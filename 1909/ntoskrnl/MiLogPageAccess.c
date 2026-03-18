/*
 * XREFs of MiLogPageAccess @ 0x14004DAE0
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiDeleteVa @ 0x14004B520 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x14004D4C0 (MiClearPteAccessed.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiTrimPte @ 0x14005AAE0 (MiTrimPte.c)
 *     MI_WSLE_LOG_ACCESS @ 0x14005DFB8 (MI_WSLE_LOG_ACCESS.c)
 *     MmUnmapViewInSystemCache @ 0x140070570 (MmUnmapViewInSystemCache.c)
 *     MiResetAccessBitPte @ 0x1401783E0 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x1402C8940 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
 *     MiAllocateAccessLog @ 0x140112C50 (MiAllocateAccessLog.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall MiLogPageAccess(__int64 a1, unsigned __int64 a2)
{
  char v2; // r9
  unsigned __int64 v3; // rbx
  _QWORD *v5; // r12
  unsigned int v6; // r15d
  __int64 v7; // rcx
  _QWORD *v8; // r14
  char v9; // r9
  unsigned __int64 *v10; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v13; // rdx
  _QWORD *AccessLog; // rdi
  __int64 v15; // rsi
  __int64 v16; // r12
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 *v23; // rdx
  unsigned __int64 v24; // rax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  struct _KPRCB *v26; // rcx
  _DWORD *v27; // rdx
  __int64 v28; // rbx
  signed __int64 *v29; // r13
  ULONG_PTR v30; // rdx
  signed __int64 v31; // rax
  signed __int64 v32; // rtt
  __int64 v33; // rax
  volatile LONG *v34; // rbx
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // eax
  struct _KPRCB *v39; // rcx
  int v40; // eax
  __int64 v41; // [rsp+20h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-20h] BYREF
  void *retaddr; // [rsp+88h] [rbp+40h]
  KIRQL v44; // [rsp+90h] [rbp+48h]
  int v45; // [rsp+98h] [rbp+50h]
  int v46; // [rsp+9Ch] [rbp+54h]
  __int64 v47; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v48; // [rsp+A8h] [rbp+60h]

  v2 = *(_BYTE *)(a1 + 184);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = a2;
  v45 = 0;
  v46 = 3;
  if ( (v2 & 7) == 2 )
    v5 = &unk_140466F28;
  else
    v5 = (_QWORD *)(a1 + 232);
  v6 = a2 & 1;
  if ( (a2 & 1) != 0 )
    v3 = a2 & 0xFFFFFFFFFFFFFFFEuLL;
  v7 = *(_QWORD *)v3;
  if ( v3 >= 0xFFFFF6FB7DBED000uLL
    && v3 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v36 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v3 >> 3) & 0x1FF));
      v37 = v7 | 0x20;
      if ( (v36 & 0x20) == 0 )
        v37 = *(_QWORD *)v3;
      v7 = v37;
      if ( (v36 & 0x42) != 0 )
        v7 = v37 | 0x42;
    }
  }
  v47 = v7;
  v8 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v47) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  if ( v9 == 2 )
    v10 = (unsigned __int64 *)&unk_140466F40;
  else
    v10 = (unsigned __int64 *)(a1 + 256);
  LockHandle.LockQueue.Lock = v10;
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v38 = SchedulerAssist[5];
      SchedulerAssist[5] = v38 + 1;
      if ( v38 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v10);
  }
  else
  {
    v13 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v10, (__int64)&LockHandle);
    if ( v13 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v13);
  }
  AccessLog = (_QWORD *)*v5;
  if ( !*v5 || (unsigned __int64)(AccessLog[4] + 8LL) > AccessLog[5] )
  {
    AccessLog = (_QWORD *)MiAllocateAccessLog(a1);
    if ( !AccessLog )
      goto LABEL_65;
  }
  if ( (v8[5] & 0x200000000000000LL) != 0 && (v15 = v8[2], (v15 & 0x400) != 0) )
  {
    if ( qword_140465800 && (v15 & 0x10) == 0 )
      v15 &= ~qword_140465800;
    v16 = v8[1];
    v17 = AccessLog[6];
    v18 = v16 | 0x8000000000000000uLL;
    v19 = v15 >> 16;
    v20 = v18 << 16;
    if ( AccessLog[7] <= 1uLL )
    {
      v28 = *(_QWORD *)v19;
      v41 = *(_QWORD *)v19;
      if ( (*(_BYTE *)(v19 + 34) & 2) != 0 && (*(_DWORD *)(v28 + 56) & 0x4000000) != 0 )
      {
LABEL_65:
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        return;
      }
      v29 = (signed __int64 *)(v28 + 64);
      v30 = ObFastReferenceObject((signed __int64 *)(v28 + 64));
      if ( !v30 )
      {
        v34 = (volatile LONG *)(v28 + 72);
        v44 = ExAcquireSpinLockShared(v34);
        v48 = ObFastReferenceObjectLocked(v29);
        ExReleaseSpinLockSharedFromDpcLevel(v34);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v44 < 2u )
        {
          v39 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v39->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v39);
        }
        __writecr8(v44);
        v30 = v48;
      }
      v21 = *(_QWORD *)(v30 + 24);
      _m_prefetchw(v29);
      v31 = *v29;
      if ( (v30 ^ *v29) >= 0xF )
      {
LABEL_49:
        ObDereferenceObjectDeferDelete((PVOID)v30);
      }
      else
      {
        while ( 1 )
        {
          v32 = v31;
          v31 = _InterlockedCompareExchange64(v29, v31 + 1, v31);
          if ( v32 == v31 )
            break;
          if ( (v30 ^ v31) >= 0xF )
            goto LABEL_49;
        }
      }
      v17 -= 8LL;
      v33 = MiStartingOffset(v19, v18, 0xFFFFFFFFLL) << *((_BYTE *)&v45 + 4 * ((*(_DWORD *)(v41 + 56) >> 5) & 1));
      v20 = v33 ^ ((unsigned __int16)v33 ^ (unsigned __int16)(32 * *(_DWORD *)(v41 + 56))) & 0x400;
    }
    else
    {
      v21 = v19;
    }
    v22 = AccessLog[5];
    v23 = (__int64 *)(v22 + 8);
    if ( v22 + 8 > v17 )
      goto LABEL_24;
    while ( *v23 != v21 )
    {
      if ( (unsigned __int64)++v23 > v17 )
        goto LABEL_24;
    }
    if ( (unsigned __int64)v23 > v17 )
    {
LABEL_24:
      v23 = (__int64 *)AccessLog[5];
      AccessLog[5] = v22 - 8;
      *v23 = v21;
    }
    v24 = v20 & 0xFFFFFFFFFFFFFC00uLL | ((unsigned __int64)v6 << 9) | ((__int64)(AccessLog[6] - (_QWORD)v23) >> 3) & 0x1FF;
  }
  else
  {
    v24 = (v3 << 16) | ((unsigned __int64)v6 << 9);
  }
  *(_QWORD *)AccessLog[4] = v24;
  AccessLog[4] += 8LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_29;
  }
  _m_prefetchw(&LockHandle);
  Next = LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
    goto LABEL_45;
  if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                       (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                       0LL,
                                       (signed __int64)&LockHandle) != &LockHandle )
  {
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
LABEL_45:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
  }
LABEL_29:
  v26 = KeGetCurrentPrcb();
  v27 = v26->SchedulerAssist;
  if ( v27 && v26->NestingLevel <= 1u )
  {
    v40 = v27[5] - 1;
    v27[5] = v40;
    if ( !v40 )
      KiRemoveSystemWorkPriorityKick(v26);
  }
}
