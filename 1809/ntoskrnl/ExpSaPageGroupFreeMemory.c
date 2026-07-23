/*
 * XREFs of ExpSaPageGroupFreeMemory @ 0x1401673B4
 * Callers:
 *     ExpSaAllocatorFree @ 0x1401672E8 (ExpSaAllocatorFree.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

bool __fastcall ExpSaPageGroupFreeMemory(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // r14
  _RTL_BALANCED_NODE *v7; // rax
  _RTL_BALANCED_NODE *v8; // rdi
  bool v9; // bp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v12; // r14
  unsigned int v13; // r8d
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdi
  __int64 v19; // rdx
  $FFD56A4B518EFE5E17FDE2C5CC486782 *v20; // rcx
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+20h]

  v3 = a1 + 24;
  v4 = a3;
  v7 = KeAbPreAcquire(a1 + 24, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v7, v3);
  if ( v8 )
    BYTE2(v8[1].Left) |= 1u;
  RtlClearBitsEx(a1 + 48, (a2 >> 4) & 0x1FF, v4);
  *(_DWORD *)(a1 + 36) += v4;
  v9 = *(_DWORD *)(a1 + 36) == 512;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  v22 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --CurrentThread->SpecialApcDisable;
  v12 = ++CurrentThread->AbAllocationRegionCount;
  v13 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v15, v13);
    v23 = v15;
    if ( v14 )
      break;
    v16 = 1 << v15;
    v17 = v15;
    v18 = &CurrentThread->LockEntries[v17];
    v13 &= ~v16;
    if ( (v18->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v18->LockState.0 & 1) == 0
      && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
      && v18->LockState.SessionId == (_DWORD)SessionId )
    {
      v18->AcquiredByte &= ~1u;
      if ( v18->LockState.0 )
      {
        if ( v18 )
        {
          v18->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v18->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v17].TreeNode, SessionId);
          v22 = 0;
          v22 = v18->BoostBitmap.AllFields & 0x1FFFF;
          v18->BoostBitmap.AllFields &= 0xFFFE0000;
          v18->ThreadLocalFlags &= ~1u;
          v18->LockState.0 = 0LL;
          v19 = ((char *)v18 - (char *)CurrentThread - 800) / 96;
          if ( v12 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v19);
          goto LABEL_21;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v3, (unsigned int)SessionId, 0LL);
LABEL_21:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v3, (__int64)&v22);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 )
  {
    v20 = &CurrentThread->152;
    if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v20->ApcState.ApcListHead[0].Flink != v20 )
      KiCheckForKernelApcDelivery((__int64)v20);
  }
  return v9;
}
