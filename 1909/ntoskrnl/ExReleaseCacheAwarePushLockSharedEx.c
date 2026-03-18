/*
 * XREFs of ExReleaseCacheAwarePushLockSharedEx @ 0x14003E6D0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiAbThreadClearAcquiredLockEntry @ 0x14003EEE0 (KiAbThreadClearAcquiredLockEntry.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+58h] [rbp+10h] BYREF

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
    v21 = 0;
    if ( (unsigned int)MiGetSystemRegionType(v7, BugCheckParameter1, a3, a4) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v10 = ++CurrentThread->AbAllocationRegionCount;
    v11 = KiAbThreadClearAcquiredLockEntry(CurrentThread, v7, SessionId);
    v14 = v11;
    if ( v11 )
    {
      *(_BYTE *)(v11 + 32) |= 2u;
      if ( *(__int64 *)(v11 + 32) < 0 )
        KiAbEntryRemoveFromTree(v11, v12);
      v15 = *(_DWORD *)(v14 + 88) & 0x1FFFF;
      v16 = *(_DWORD *)(v14 + 88) & 0xFFFE0000;
      *(_BYTE *)(v14 + 25) &= ~1u;
      v21 = v15;
      *(_DWORD *)(v14 + 88) = v16;
      *(_QWORD *)(v14 + 32) = 0LL;
      v17 = (v14 - (__int64)CurrentThread - 800) / 96;
      if ( v10 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v17;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v17);
    }
    else if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    {
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v7, v13, 0LL);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(CurrentThread, v7, &v21);
    return KiLeaveGuardedRegionUnsafe(CurrentThread, v18, v19, v20);
  }
  return result;
}
