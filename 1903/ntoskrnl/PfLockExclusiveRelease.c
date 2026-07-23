/*
 * XREFs of PfLockExclusiveRelease @ 0x14019E400
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A7D58 (PfSetSuperfetchInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall PfLockExclusiveRelease(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v4; // bp
  unsigned int v5; // r8d
  bool v6; // zf
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  _KLOCK_ENTRY *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // [rsp+58h] [rbp+10h] BYREF
  int v14; // [rsp+60h] [rbp+18h]

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v13 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  --CurrentThread->SpecialApcDisable;
  v4 = ++CurrentThread->AbAllocationRegionCount;
  v5 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v6 = !_BitScanReverse((unsigned int *)&v7, v5);
    v14 = v7;
    if ( v6 )
      break;
    v8 = 1 << v7;
    v9 = v7;
    v10 = &CurrentThread->LockEntries[v9];
    v5 &= ~v8;
    if ( (v10->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v10->LockState.0 & 1) == 0
      && (*(_QWORD *)&v10->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v10->LockState.SessionId == SessionId )
    {
      v10->AcquiredByte &= ~1u;
      if ( v10->LockState.0 )
      {
        if ( v10 )
        {
          v10->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v10->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v9].TreeNode);
          v13 = v10->BoostBitmap.AllFields & 0x1FFFF;
          v10->BoostBitmap.AllFields &= 0xFFFE0000;
          v10->ThreadLocalFlags &= ~1u;
          v10->LockState.0 = 0LL;
          v11 = ((char *)v10 - (char *)CurrentThread - 800) / 96;
          if ( v4 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v11;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v11);
          goto LABEL_17;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v13);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v12);
  KeLeaveCriticalRegion();
}
