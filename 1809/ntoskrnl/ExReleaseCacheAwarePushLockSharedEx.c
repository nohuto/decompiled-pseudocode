/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x14004E880
 * Callers:
 *     <none>
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KiAbThreadClearAcquiredLockEntry @ 0x14004F0C0 (KiAbThreadClearAcquiredLockEntry.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseCacheAwarePushLockSharedEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  __int64 result; // rax
  ULONG_PTR v5; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // r8
  BOOL v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // r8d
  __int64 v12; // rdi
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v15; // rdx
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared(BugCheckParameter2);
  if ( (v2 & 2) == 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 16);
    CurrentThread = KeGetCurrentThread();
    v16 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v8 = ++CurrentThread->AbAllocationRegionCount == 1;
    v9 = KiAbThreadClearAcquiredLockEntry(CurrentThread, v5, SessionId);
    v12 = v9;
    if ( v9 )
    {
      *(_BYTE *)(v9 + 32) |= 2u;
      if ( *(__int64 *)(v9 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v9, v10);
      v13 = *(_DWORD *)(v12 + 88) & 0x1FFFF;
      v14 = *(_DWORD *)(v12 + 88) & 0xFFFE0000;
      *(_BYTE *)(v12 + 25) &= ~1u;
      v16 = v13;
      *(_DWORD *)(v12 + 88) = v14;
      *(_QWORD *)(v12 + 32) = 0LL;
      v15 = (v12 - (__int64)CurrentThread - 800) / 96;
      if ( v8 )
        CurrentThread->AbEntrySummary |= 1 << v15;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
    }
    else if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v5, v11, 0LL);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(CurrentThread, v5, &v16);
    return KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  return result;
}
