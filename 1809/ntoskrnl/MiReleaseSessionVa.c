/*
 * XREFs of MiReleaseSessionVa @ 0x140138184
 * Callers:
 *     MiMakeSystemRangeAvailable @ 0x1400280B0 (MiMakeSystemRangeAvailable.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseSessionVa(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  struct _KTHREAD *v7; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v9; // r14
  unsigned int v10; // r8d
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  _KLOCK_ENTRY *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v19; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64)(a1 - qword_14043A040) >> 21;
  v5 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8016, 0LL);
  RtlClearBitsEx(v5 + 8024, v3, a2);
  if ( v3 < *(_QWORD *)(v5 + 8040) )
    *(_QWORD *)(v5 + 8040) = v3;
  *(_DWORD *)(v5 + 8132) -= a2;
  v6 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 8016;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  v19 = 0;
  v7 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v6) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v7->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v7->SpecialApcDisable;
  v9 = ++v7->AbAllocationRegionCount;
  v10 = ((char)v7->AbEntrySummary | (char)v7->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v11 = !_BitScanReverse((unsigned int *)&v12, v10);
    if ( v11 )
      break;
    v13 = 1 << v12;
    v14 = v12;
    v15 = &v7->LockEntries[v14];
    v10 &= ~v13;
    if ( (v15->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v15->LockState.0 & 1) == 0
      && (*(_QWORD *)&v15->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v6 & 0x7FFFFFFFFFFFFFFCLL)
      && v15->LockState.SessionId == (_DWORD)SessionId )
    {
      v15->AcquiredByte &= ~1u;
      if ( v15->LockState.0 )
      {
        if ( v15 )
        {
          v15->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v15->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&v7->LockEntries[v14].TreeNode, SessionId);
          v19 = 0;
          v19 = v15->BoostBitmap.AllFields & 0x1FFFF;
          v15->BoostBitmap.AllFields &= 0xFFFE0000;
          v15->ThreadLocalFlags &= ~1u;
          v15->LockState.0 = 0LL;
          v16 = ((char *)v15 - (char *)v7 - 800) / 96;
          if ( v9 == 1 )
            v7->AbEntrySummary |= 1 << v16;
          else
            _InterlockedOr8((volatile signed __int8 *)&v7->AbOrphanedEntrySummary, 1 << v16);
          goto LABEL_19;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v7->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, v6, (unsigned int)SessionId, 0LL);
LABEL_19:
  --v7->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v7, v6, (__int64)&v19);
  v11 = v7->SpecialApcDisable++ == -1;
  if ( v11 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
    KiCheckForKernelApcDelivery(v17);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
