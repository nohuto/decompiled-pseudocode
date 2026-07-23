/*
 * XREFs of RtlpHpSegMgrCommitComplete @ 0x14013213C
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x140021C20 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061160 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

signed __int16 __fastcall RtlpHpSegMgrCommitComplete(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        int a4,
        PEX_SPIN_LOCK SpinLock,
        unsigned __int8 a6)
{
  signed __int16 result; // ax
  signed __int16 v9; // bx
  signed __int16 v10; // cx
  __int16 v11; // dx
  signed __int16 v12; // tt
  unsigned __int64 v13; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // bp
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v26; // [rsp+78h] [rbp+10h] BYREF
  signed __int16 v27; // [rsp+80h] [rbp+18h]

  result = *a2;
  while ( 1 )
  {
    v9 = result;
    v27 = result;
    v10 = result;
    if ( (result & 0x4000) != 0 )
    {
      if ( a4 && a3 > 0 )
        v11 = 0x8000;
      else
        v11 = 0;
      v10 = v11 | result & 0x3FFF;
    }
    if ( a3 <= 0 )
    {
      v10 += a3;
    }
    else if ( !a4 )
    {
      v10 -= a3;
    }
    if ( v10 == result )
      return result;
    v12 = result;
    result = _InterlockedCompareExchange16(a2, v10, result);
    if ( v12 == result )
    {
      if ( (v9 & 0x4000) != 0 )
      {
        if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a6 < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          result = a6;
          __writecr8(a6);
        }
        else
        {
          v13 = (unsigned __int64)SpinLock;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v13);
          v26 = 0;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v13) == 1 )
            SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
          else
            SessionId = -1;
          --CurrentThread->SpecialApcDisable;
          v16 = ++CurrentThread->AbAllocationRegionCount;
          v17 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v18 = !_BitScanReverse((unsigned int *)&v19, v17);
            if ( v18 )
              goto LABEL_26;
            v20 = 1 << v19;
            v21 = v19;
            v22 = &CurrentThread->LockEntries[v21];
            v17 &= ~v20;
            if ( (v22->AcquiredByte & 1) != 0
              && (*(_DWORD *)&v22->LockState.0 & 1) == 0
              && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v13 & 0x7FFFFFFFFFFFFFFCLL)
              && v22->LockState.SessionId == SessionId )
            {
              v22->AcquiredByte &= ~1u;
              if ( v22->LockState.0 )
                break;
            }
          }
          if ( !v22 )
          {
LABEL_26:
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v13, SessionId, 0LL);
            goto LABEL_38;
          }
          v22->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v22->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v21].TreeNode);
          v26 = v22->BoostBitmap.AllFields & 0x1FFFF;
          v22->BoostBitmap.AllFields &= 0xFFFE0000;
          v22->ThreadLocalFlags &= ~1u;
          v22->LockState.0 = 0LL;
          v23 = ((char *)v22 - (char *)CurrentThread - 800) / 96;
          if ( v16 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v23);
LABEL_38:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v13, &v26);
          v18 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v18
            && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v24);
          }
          return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        }
      }
      return result;
    }
  }
}
