/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x140024500
 * Callers:
 *     MiInsertAndUnlockStandbyPages @ 0x140026300 (MiInsertAndUnlockStandbyPages.c)
 *     MiPfnShareCountIsZero @ 0x140026F20 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     MiPfnReferenceCountIsZero @ 0x1400265C0 (MiPfnReferenceCountIsZero.c)
 *     MiMakeTransitionPte @ 0x14002C970 (MiMakeTransitionPte.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400464C0 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x140188AB4 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7170 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  char v7; // r8
  __int64 v8; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r14
  char v15; // al
  unsigned __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // rdx
  unsigned __int64 v19; // r10
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // rcx
  _QWORD *v23; // r9
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  __int64 result; // rax
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  int v31; // eax
  __int64 v32; // rax
  struct _KEVENT *v33; // rdi
  signed __int32 v34[8]; // [rsp+0h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v36; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+78h] [rbp+28h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *(_QWORD *)(a2 + 40);
  v5 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v6 = ((unsigned __int64)v5 >> 63) + (v5 >> 3);
  if ( (v4 & 0x10000000000000LL) != 0 || byte_14046945E && _bittest64((const signed __int64 *)qword_140469D80, v6 >> 9) )
    return MiPfnReferenceCountIsZero(a2, v6);
  if ( !a1 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v7 = *(_BYTE *)(a2 + 35);
  if ( (v7 & 0x10) != 0 )
    return MiPfnReferenceCountIsZero(a2, v6);
  if ( (v7 & 0x40) != 0 )
    return MiPfnReferenceCountIsZero(a2, v6);
  v8 = *(_QWORD *)(qword_140465E88 + 8 * ((v4 >> 40) & 0x3FF));
  if ( *(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL)) != v8 || (v7 & 7u) >= 5 )
    return MiPfnReferenceCountIsZero(a2, v6);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 2600);
  LockHandle.LockQueue.Next = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  v11 = (a1 + 0x58000000000LL) / 48;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v31 = SchedulerAssist[5];
      SchedulerAssist[5] = v31 + 1;
      if ( v31 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v8 + 2600);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)(v8 + 2600), (__int64)&LockHandle) )
  {
    KxWaitForLockOwnerShip(&LockHandle);
  }
  if ( (*(_BYTE *)(a1 + 35) & 8) == 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return MiPfnReferenceCountIsZero(a2, v6);
  }
  *(_BYTE *)(a2 + 35) |= 8u;
  v12 = 4288LL;
  if ( (*(_QWORD *)(a2 + 40) & 0x200000000000000LL) == 0 )
    v12 = 4992LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v12 + v8));
  memset(&v36, 0, sizeof(v36));
  v13 = _InterlockedIncrement64((volatile signed __int64 *)(v8 + 8064));
  if ( v13 <= 0x420 )
  {
    switch ( v13 )
    {
      case 0xA0uLL:
        v32 = 4904LL;
        break;
      case 0x420uLL:
        v32 = 4936LL;
        break;
      case 0x22uLL:
        v32 = 4872LL;
        break;
      default:
        goto LABEL_17;
    }
    v36.LockQueue.Next = 0LL;
    v36.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 4864);
    v33 = (struct _KEVENT *)(v8 + v32);
    KxAcquireQueuedSpinLock((__int64)&v36, (volatile __int64 *)(v8 + 4864));
    KeSetEvent(v33, 0, 0);
    ++v33[1].Header.LockNV;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v36);
  }
LABEL_17:
  v14 = v13 - 1;
  if ( v14 == *(_QWORD *)(v8 + 6120) || v14 == *(_QWORD *)(v8 + 6128) )
    MiUpdateAvailableEvents(v8);
  _InterlockedOr(v34, 0);
  v15 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  *(_BYTE *)(a2 + 34) = v15 & 0xF8 | 2;
  v16 = *(_QWORD *)(a1 + 16);
  if ( qword_140465800 && (v16 & 0x10) == 0 )
    v16 &= ~qword_140465800;
  v17 = 0xFFFFFFFFFLL;
  v18 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v19 = 0xFFFFFFF000000000uLL;
  *(_QWORD *)a2 ^= (v11 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  v20 = v6 & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) = v18 | *(_QWORD *)(a2 + 24) & 0xFFFFFFF000000000uLL;
  if ( ((v16 >> 12) & 0xFFFFFFFFFLL) == v11 )
    *(_QWORD *)(a1 + 16) = MiMakeTransitionPte(v6, 4LL, v20);
  else
    *(_QWORD *)(48 * v18 - 0x58000000000LL) = v20 | *(_QWORD *)(48 * v18 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  *(_QWORD *)(a1 + 40) = v20 | v19 & *(_QWORD *)(a1 + 40);
  v21 = *(_BYTE *)(a2 + 35);
  if ( (v21 & 8) != 0 )
    v22 = 5LL;
  else
    v22 = v21 & 7;
  v23 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_140465E88 + 8 * ((*(_QWORD *)(a2 + 40) >> 40) & 0x3FFLL)) + 16LL)
                 + 1984LL * (*(_QWORD *)(a2 + 40) >> 58)
                 + 24 * (v22 + 8 * ((*(_QWORD *)(a2 + 40) >> 36) & 3LL)));
  ++v23[107];
  v24 = v23[109];
  if ( v24 == v17 )
  {
    v23[108] = v6;
  }
  else
  {
    v25 = 48 * v24 - 0x58000000000LL;
    v26 = v17 & (*(_QWORD *)v25 ^ (v6 << 28));
    *(_BYTE *)(v25 + 39) = v6;
    *(_QWORD *)v25 = (v6 << 28) ^ v26;
  }
  *(_QWORD *)a2 |= v19;
  *(_WORD *)(a2 + 36) = v24;
  v27 = *(_QWORD *)(a2 + 24) ^ (v24 >> 16 << 36);
  *(_BYTE *)(a2 + 39) = -1;
  *(_QWORD *)(a2 + 24) ^= v27 & 0xFFFFF000000000LL;
  v23[109] = v6;
  ++*(_QWORD *)(v8 + 2568);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    goto LABEL_31;
  }
  _m_prefetchw(&LockHandle);
  result = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
    goto LABEL_35;
  result = _InterlockedCompareExchange64(
             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
             0LL,
             (signed __int64)&LockHandle);
  if ( (struct _KLOCK_QUEUE_HANDLE *)result != &LockHandle )
  {
    result = KxWaitForLockChainValid(&LockHandle);
LABEL_35:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_31:
  v29 = KeGetCurrentPrcb();
  v30 = v29->SchedulerAssist;
  if ( v30 && v29->NestingLevel <= 1u )
  {
    result = (unsigned int)(v30[5] - 1);
    v30[5] = result;
    if ( !(_DWORD)result )
      return KiRemoveSystemWorkPriorityKick(v29);
  }
  return result;
}
