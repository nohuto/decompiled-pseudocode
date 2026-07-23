/*
 * XREFs of MiCommitPageTableRangesForVad @ 0x1402D036C
 * Callers:
 *     MiInsertChildVads @ 0x14089B5B0 (MiInsertChildVads.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiCommitPageTablesForVad @ 0x140603C50 (MiCommitPageTablesForVad.c)
 */

__int64 __fastcall MiCommitPageTableRangesForVad(__int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // r12d
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // rsi
  ULONG_PTR v7; // rsi
  _QWORD *v8; // rbp
  unsigned __int64 v9; // rdi
  _QWORD *v10; // r14
  struct _KTHREAD *v11; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v13; // bp
  unsigned int v14; // r8d
  int v15; // eax
  __int64 v16; // rcx
  _KLOCK_ENTRY *v17; // rdi
  bool v18; // zf
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // [rsp+70h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+10h]

  v1 = *(_QWORD **)(a1 + 8);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_QWORD *)(a1 + 16) = 1LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  do
  {
    v8 = (_QWORD *)*v1;
    if ( v2 >= 0 )
    {
      v9 = 0LL;
      if ( v1[1] )
      {
        v10 = v1 + 2;
        do
        {
          v2 = MiCommitPageTablesForVad(a1, *v10 & 0xFFFFFFFFFFE00000uLL);
          if ( v2 < 0 )
            break;
          ++v9;
          ++v10;
        }
        while ( v9 < v1[1] );
      }
    }
    ExFreePoolWithTag(v1, 0);
    v1 = v8;
  }
  while ( v8 );
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  v22 = 0;
  v11 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v11->ApcState.Process);
  else
    SessionId = -1;
  --v11->SpecialApcDisable;
  v13 = ++v11->AbAllocationRegionCount;
  v14 = ((char)v11->AbEntrySummary | (char)v11->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v18 = !_BitScanReverse((unsigned int *)&v19, v14);
    v23 = v19;
    if ( v18 )
      goto LABEL_22;
    v15 = 1 << v19;
    v16 = v19;
    v17 = &v11->LockEntries[v16];
    v14 &= ~v15;
    if ( (v17->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v17->LockState.0 & 1) == 0
      && (*(_QWORD *)&v17->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && v17->LockState.SessionId == SessionId )
    {
      v17->AcquiredByte &= ~1u;
      if ( v17->LockState.0 )
        break;
    }
  }
  if ( !v17 )
  {
LABEL_22:
    if ( (*((_DWORD *)&v11->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v11, v7, SessionId, 0LL);
    goto LABEL_29;
  }
  v17->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v17->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v11->LockEntries[v16].TreeNode);
  v22 = v17->BoostBitmap.AllFields & 0x1FFFF;
  v17->BoostBitmap.AllFields &= 0xFFFE0000;
  v17->ThreadLocalFlags &= ~1u;
  v17->LockState.0 = 0LL;
  v20 = ((char *)v17 - (char *)v11 - 800) / 96;
  if ( v13 == 1 )
    v11->AbEntrySummary |= 1 << v20;
  else
    _InterlockedOr8((volatile signed __int8 *)&v11->AbOrphanedEntrySummary, 1 << v20);
LABEL_29:
  --v11->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v11, v7, &v22);
  v18 = v11->SpecialApcDisable++ == -1;
  if ( v18 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery(v21);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  result = (unsigned int)v2;
  *(_QWORD *)(a1 + 16) = -2LL;
  return result;
}
