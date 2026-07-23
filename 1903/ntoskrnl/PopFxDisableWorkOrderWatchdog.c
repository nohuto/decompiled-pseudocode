/*
 * XREFs of PopFxDisableWorkOrderWatchdog @ 0x1400B30DC
 * Callers:
 *     PopFxPluginWork @ 0x1400B2FE0 (PopFxPluginWork.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1402F2D0C (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeCancelTimer @ 0x1400B2CA0 (KeCancelTimer.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     PopFxBugCheck @ 0x1402F2050 (PopFxBugCheck.c)
 */

void __fastcall PopFxDisableWorkOrderWatchdog(__int64 *BugCheckParameter2)
{
  __int64 *v2; // rcx
  __int64 **v3; // rax
  char v4; // al
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v7; // si
  unsigned int v8; // r8d
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  _KLOCK_ENTRY *v13; // rdi
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+58h] [rbp+10h]

  if ( BugCheckParameter2 )
  {
    if ( !KeCancelTimer((PKTIMER)(BugCheckParameter2 + 2)) )
      PopFxBugCheck(0x618uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter2[21], 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
    BugCheckParameter2[21] = 0LL;
    BugCheckParameter2[19] = 0LL;
    v2 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v3 = (__int64 **)BugCheckParameter2[1], *v3 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v3 = v2;
    v2[1] = (__int64)v3;
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopWorkOrderLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopWorkOrderLock);
    v18 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&PopWorkOrderLock) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v7 = ++CurrentThread->AbAllocationRegionCount;
    v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v9 = !_BitScanReverse((unsigned int *)&v10, v8);
      v19 = v10;
      if ( v9 )
        break;
      v11 = 1 << v10;
      v12 = v10;
      v13 = &CurrentThread->LockEntries[v12];
      v8 &= ~v11;
      if ( (v13->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v13->LockState.0 & 1) == 0
        && (*(_QWORD *)&v13->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)&PopWorkOrderLock & 0x7FFFFFFFFFFFFFFCLL)
        && v13->LockState.SessionId == SessionId )
      {
        v13->AcquiredByte &= ~1u;
        if ( v13->LockState.0 )
        {
          if ( v13 )
          {
            v13->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v13->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v12].TreeNode);
            v14 = v13->BoostBitmap.AllFields & 0x1FFFF;
            v15 = v13->BoostBitmap.AllFields & 0xFFFE0000;
            v13->ThreadLocalFlags &= ~1u;
            v18 = v14;
            v13->BoostBitmap.AllFields = v15;
            v13->LockState.0 = 0LL;
            v16 = ((char *)v13 - (char *)CurrentThread - 800) / 96;
            if ( v7 == 1 )
              CurrentThread->AbEntrySummary |= 1 << v16;
            else
              _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
            goto LABEL_20;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&PopWorkOrderLock, SessionId, 0LL);
LABEL_20:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&PopWorkOrderLock, &v18);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v17);
  }
}
