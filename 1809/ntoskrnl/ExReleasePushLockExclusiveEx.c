/*
 * XREFs of ExReleasePushLockExclusiveEx @ 0x14004EA00
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

char __fastcall ExReleasePushLockExclusiveEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // bl
  $FFD56A4B518EFE5E17FDE2C5CC486782 *v4; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // r8d
  BOOL v7; // r14d
  __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v19; // [rsp+68h] [rbp+10h] BYREF
  int v20; // [rsp+70h] [rbp+18h]

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  LOBYTE(v4) = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( (_BYTE)v4 == 2 )
    LOBYTE(v4) = ExfTryToWakePushLock(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v19 = 0;
    if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v7 = ++CurrentThread->AbAllocationRegionCount == 1;
    LODWORD(v8) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v9 = !_BitScanReverse((unsigned int *)&v10, v8);
    v20 = v10;
    if ( v9 )
      goto LABEL_24;
    while ( 1 )
    {
      v11 = 1 << v10;
      v12 = v10;
      v13 = &CurrentThread->LockEntries[v12];
      v8 = ~v11 & (unsigned int)v8;
      if ( (v13->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v13->LockState.0 & 1) == 0
        && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
        && v13->LockState.SessionId == SessionId )
      {
        v13->AcquiredByte &= ~1u;
        if ( v13->LockState.0 )
          break;
      }
      v9 = !_BitScanReverse((unsigned int *)&v10, v8);
      v20 = v10;
      if ( v9 )
        goto LABEL_24;
    }
    if ( !v13 )
    {
LABEL_24:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, SessionId, 0LL);
    }
    else
    {
      v13->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v13->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v12].TreeNode, v8);
      v14 = v13->BoostBitmap.AllFields & 0x1FFFF;
      v15 = v13->BoostBitmap.AllFields & 0xFFFE0000;
      v13->ThreadLocalFlags &= ~1u;
      v19 = v14;
      v13->BoostBitmap.AllFields = v15;
      v13->LockState.0 = 0LL;
      v16 = ((char *)v13 - (char *)CurrentThread - 800) / 96;
      if ( v7 )
        CurrentThread->AbEntrySummary |= 1 << v16;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
    }
    --CurrentThread->AbAllocationRegionCount;
    LOBYTE(v4) = KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v19);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 )
    {
      v4 = &CurrentThread->152;
      if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v4->ApcState.ApcListHead[0].Flink != v4 )
        LOBYTE(v4) = KiCheckForKernelApcDelivery(v17);
    }
  }
  return (char)v4;
}
