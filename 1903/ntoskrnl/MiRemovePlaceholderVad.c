/*
 * XREFs of MiRemovePlaceholderVad @ 0x1402DEDEC
 * Callers:
 *     MiCoalescePlaceholderAllocations @ 0x14088B470 (MiCoalescePlaceholderAllocations.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408993A4 (MiPreparePlaceholderVadReplacement.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     MiRemoveVad @ 0x1402DF048 (MiRemoveVad.c)
 */

__int64 __fastcall MiRemovePlaceholderVad(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rsi
  ULONG_PTR v4; // r15
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  KIRQL v7; // di
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *v11; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v13; // si
  unsigned int v14; // r8d
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rdi
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v23; // [rsp+68h] [rbp+10h] BYREF
  int v24; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  MiRemoveVad(a1, Process);
  LOBYTE(v8) = v7;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[6], v8, v9, v10);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8]);
  v23 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[1].Affinity.Bitmap[8]) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
  else
    SessionId = -1;
  --v11->SpecialApcDisable;
  v13 = ++v11->AbAllocationRegionCount;
  v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v19, v14);
    v24 = v19;
    if ( v18 )
      goto LABEL_13;
    v15 = 1 << v19;
    v16 = v19;
    v17 = &v11->LockEntries[v16];
    v14 &= ~v15;
    if ( (v17->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v17->LockState.0 & 1) == 0
      && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && v17->LockState.SessionId == SessionId )
    {
      v17->AcquiredByte &= ~1u;
      if ( v17->LockState.0 )
        break;
    }
  }
  if ( !v17 )
  {
LABEL_13:
    if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v11, v4, SessionId, 0LL);
    goto LABEL_20;
  }
  v17->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v17->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v11->LockEntries[v16].TreeNode);
  v23 = v17->BoostBitmap.AllFields & 0x1FFFF;
  v17->BoostBitmap.AllFields &= 0xFFFE0000;
  v17->ThreadLocalFlags &= ~1u;
  v17->LockState.0 = 0LL;
  v20 = ((char *)v17 - (char *)v11 - 800) / 96;
  if ( v13 == 1 )
    v11->AbEntrySummary |= 1 << v20;
  else
    _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v20);
LABEL_20:
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v11, v4, &v23);
  v18 = v11->SpecialApcDisable++ == -1;
  if ( v18 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery(v21);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
