/*
 * XREFs of MiPreUnlockWorkingSetShared @ 0x140129A78
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     MiQueryAddressSpan @ 0x1400B7C60 (MiQueryAddressSpan.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiReduceWs @ 0x140129BEC (MiReduceWs.c)
 *     MiForcedTrim @ 0x140142E58 (MiForcedTrim.c)
 *     MiForceAgeWorkingSet @ 0x1402C8580 (MiForceAgeWorkingSet.c)
 */

char __fastcall MiPreUnlockWorkingSetShared(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  LONG *v10; // rax
  __int64 v11; // rdx
  LONG *SharedVm; // rax
  __int64 v13; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentThread = KeGetCurrentThread();
  v5 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 2);
  if ( (v5 & 0x400000) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 187) & 8) != 0 )
    {
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(MiGetSharedVm(a1) + 16);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
      *(_BYTE *)(a1 + 187) &= ~8u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v6) = a2;
      if ( !MiForcedTrim(a1, v6) && (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
      {
        v8 = *(_QWORD *)(a1 + 120);
        if ( v8 > *(_QWORD *)(a1 + 152) )
        {
          LOBYTE(v7) = a2;
          if ( (*(_DWORD *)(a1 + 4) & 0xF) != 0 )
            v9 = v8 - 1;
          else
            v9 = *(_QWORD *)(a1 + 152);
          MiReduceWs(a1, v7, v9);
        }
      }
    }
    LOBYTE(v5) = *(_BYTE *)(a1 + 187);
    if ( (v5 & 4) != 0 )
    {
      SharedVm = MiGetSharedVm(a1);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(SharedVm + 16);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)SharedVm + 8);
      *(_BYTE *)(a1 + 187) &= ~4u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v13) = a2;
      MiForceAgeWorkingSet(a1, v13);
      LOBYTE(v5) = *(_BYTE *)(a1 + 187);
    }
    if ( (v5 & 0x10) != 0 )
    {
      v10 = MiGetSharedVm(a1);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v10 + 16);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v10 + 8);
      *(_BYTE *)(a1 + 187) &= ~0x10u;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
      LOBYTE(v11) = a2;
      LOBYTE(v5) = MiReduceWs(a1, v11, *(_QWORD *)(a1 + 152));
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x400000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x16u);
  }
  return v5;
}
