/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x14003E990
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KiAbThreadClearAcquiredLockEntry @ 0x14003F1A0 (KiAbThreadClearAcquiredLockEntry.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseCacheAwarePushLockSharedEx(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        __int64 a3,
        __int64 a4)
{
  char v4; // di
  __int64 result; // rax
  ULONG_PTR v7; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // r8
  unsigned __int8 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+58h] [rbp+10h] BYREF

  v4 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL);
  if ( result != 17 )
    result = ExfReleasePushLockShared(BugCheckParameter2);
  if ( (v4 & 2) == 0 )
  {
    v7 = *(_QWORD *)(BugCheckParameter2 + 16);
    CurrentThread = KeGetCurrentThread();
    v20 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v7, BugCheckParameter1, a3, a4) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v10 = ++CurrentThread->AbAllocationRegionCount;
    v11 = KiAbThreadClearAcquiredLockEntry(CurrentThread, v7, SessionId);
    v13 = v11;
    if ( v11 )
    {
      *(_BYTE *)(v11 + 32) |= 2u;
      if ( *(__int64 *)(v11 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v11);
      v14 = *(_DWORD *)(v13 + 88) & 0x1FFFF;
      v15 = *(_DWORD *)(v13 + 88) & 0xFFFE0000;
      *(_BYTE *)(v13 + 25) &= ~1u;
      v20 = v14;
      *(_DWORD *)(v13 + 88) = v15;
      *(_QWORD *)(v13 + 32) = 0LL;
      v16 = (v13 - (__int64)CurrentThread - 800) / 96;
      if ( v10 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v16;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
    }
    else if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v7, v12, 0LL);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(CurrentThread, v7, &v20);
    return KiLeaveGuardedRegionUnsafe(CurrentThread, v17, v18, v19);
  }
  return result;
}
