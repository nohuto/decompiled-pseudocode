/*
 * XREFs of MiUnlockLoaderEntry @ 0x1400F7668
 * Callers:
 *     MiSetPagingOfDriver @ 0x1400F661C (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiFindDriverNonPagedSections @ 0x14070E8F0 (MiFindDriverNonPagedSections.c)
 *     MiLockdownSections @ 0x14071033C (MiLockdownSections.c)
 *     MiFreeInitializationCode @ 0x140710B2C (MiFreeInitializationCode.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140115920 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockLoaderEntry(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v3; // rdi
  struct _KTHREAD *v4; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  bool v8; // zf
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _KLOCK_ENTRY *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 104;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 104));
      KeAbPostRelease(v3);
    }
    else
    {
      ExReleaseAutoExpandPushLockExclusive(a1 + 104, 0LL);
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 104));
    v16 = 0;
    v4 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    else
      SessionId = -1;
    --v4->SpecialApcDisable;
    v6 = ++v4->AbAllocationRegionCount;
    v7 = ((char)v4->AbEntrySummary | (char)v4->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v8 = !_BitScanReverse((unsigned int *)&v9, v7);
      v17 = v9;
      if ( v8 )
        break;
      v10 = 1 << v9;
      v11 = v9;
      v12 = &v4->LockEntries[v11];
      v7 &= ~v10;
      if ( (v12->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v12->LockState.0 & 1) == 0
        && (*(_QWORD *)&v12->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v3 & 0x7FFFFFFFFFFFFFFCLL)
        && v12->LockState.SessionId == SessionId )
      {
        v12->AcquiredByte &= ~1u;
        if ( v12->LockState.0 )
        {
          if ( v12 )
          {
            v12->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v12->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v4->LockEntries[v11].TreeNode);
            v16 = v12->BoostBitmap.AllFields & 0x1FFFF;
            v12->BoostBitmap.AllFields &= 0xFFFE0000;
            v12->ThreadLocalFlags &= ~1u;
            v12->LockState.0 = 0LL;
            v13 = ((char *)v12 - (char *)v4 - 800) / 96;
            if ( v6 == 1 )
              v4->AbEntrySummary |= 1 << v13;
            else
              _InterlockedOr8((volatile signed __int8 *)&v4->AbOrphanedEntrySummary, 1 << v13);
            goto LABEL_18;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v4->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v4, v3, SessionId, 0LL);
LABEL_18:
    --v4->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v4, v3, &v16);
    v8 = v4->SpecialApcDisable++ == -1;
    if ( v8 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
      KiCheckForKernelApcDelivery(v14);
  }
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
