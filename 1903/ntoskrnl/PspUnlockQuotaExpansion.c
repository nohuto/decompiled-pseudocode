/*
 * XREFs of PspUnlockQuotaExpansion @ 0x14012C900
 * Callers:
 *     PspReturnResourceQuota @ 0x14012C7C4 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14012C840 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x14019AE30 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x140306F60 (PspExpandLimit.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall PspUnlockQuotaExpansion(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rsi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  struct _KTHREAD *v6; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v8; // r15
  unsigned int v9; // r8d
  bool v10; // zf
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _KLOCK_ENTRY *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+70h] [rbp+18h]

  v2 = a1 + 16;
  if ( *(_DWORD *)a1 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = a2;
    __writecr8(a2);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 16));
    v18 = 0;
    v6 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
    else
      SessionId = -1;
    --v6->SpecialApcDisable;
    v8 = ++v6->AbAllocationRegionCount;
    v9 = ((char)v6->AbEntrySummary | (char)v6->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v10 = !_BitScanReverse((unsigned int *)&v11, v9);
      v19 = v11;
      if ( v10 )
        break;
      v12 = 1 << v11;
      v13 = v11;
      v14 = &v6->LockEntries[v13];
      v9 &= ~v12;
      if ( (v14->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v14->LockState.0 & 1) == 0
        && (*(_QWORD *)&v14->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && v14->LockState.SessionId == SessionId )
      {
        v14->AcquiredByte &= ~1u;
        if ( v14->LockState.0 )
        {
          if ( v14 )
          {
            v14->CrossThreadReleasableAndBusyByte |= 2u;
            if ( (__int64)v14->LockState.LockState < 0 )
              KiAbEntryRemoveFromTree(&v6->LockEntries[v13].TreeNode);
            v18 = v14->BoostBitmap.AllFields & 0x1FFFF;
            v14->BoostBitmap.AllFields &= 0xFFFE0000;
            v14->ThreadLocalFlags &= ~1u;
            v14->LockState.0 = 0LL;
            v15 = ((char *)v14 - (char *)v6 - 800) / 96;
            if ( v8 == 1 )
              v6->AbEntrySummary |= 1 << v15;
            else
              _InterlockedOr8((volatile signed __int8 *)&v6->AbOrphanedEntrySummary, 1 << v15);
            goto LABEL_20;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v6->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, v2, SessionId, 0LL);
LABEL_20:
    --v6->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v6, v2, &v18);
    v10 = v6->SpecialApcDisable++ == -1;
    if ( v10 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
      KiCheckForKernelApcDelivery(v16);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
