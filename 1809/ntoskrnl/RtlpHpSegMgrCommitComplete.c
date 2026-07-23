/*
 * XREFs of RtlpHpSegMgrCommitComplete @ 0x140009B00
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x14000C244 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
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
  ULONG_PTR v13; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v16; // bp
  unsigned int v17; // r8d
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // [rsp+78h] [rbp+10h] BYREF
  signed __int16 v26; // [rsp+80h] [rbp+18h]

  result = *a2;
  while ( 1 )
  {
    v9 = result;
    v26 = result;
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
            _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick();
          }
          result = a6;
          __writecr8(a6);
        }
        else
        {
          v13 = (ULONG_PTR)SpinLock;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SpinLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v13);
          v25 = 0;
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v13) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
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
              && v22->LockState.SessionId == (_DWORD)SessionId )
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
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v13, (unsigned int)SessionId, 0LL);
            goto LABEL_38;
          }
          v22->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v22->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v21].TreeNode, SessionId);
          v25 = 0;
          v25 = v22->BoostBitmap.AllFields & 0x1FFFF;
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
          KiAbThreadRemoveBoosts(CurrentThread, v13, &v25);
          v18 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v18
            && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v24);
          }
          return KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
      }
      return result;
    }
  }
}
