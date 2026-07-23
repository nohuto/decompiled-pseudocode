/*
 * XREFs of RtlpHpSegLockRelease @ 0x1402FCD8C
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1401B6530 (RtlpHpSegContextCompact.c)
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

void __fastcall RtlpHpSegLockRelease(__int64 a1, char a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v7; // bp
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  _KLOCK_ENTRY *v11; // rdi
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  int v17; // [rsp+58h] [rbp+10h] BYREF
  int v18; // [rsp+68h] [rbp+20h]

  if ( (a2 & 1) == 0 )
  {
    v4 = a1 + 64;
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a3 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(a3);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
      v17 = 0;
      CurrentThread = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v4) == 1 )
        SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = 0xFFFFFFFFLL;
      --CurrentThread->SpecialApcDisable;
      v7 = ++CurrentThread->AbAllocationRegionCount;
      v8 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v12 = !_BitScanReverse((unsigned int *)&v13, v8);
        v18 = v13;
        if ( v12 )
          goto LABEL_15;
        v9 = 1 << v13;
        v10 = v13;
        v11 = &CurrentThread->LockEntries[v10];
        v8 &= ~v9;
        if ( (v11->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v11->LockState.0 & 1) == 0
          && (*(_QWORD *)&v11->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
          && v11->LockState.SessionId == (_DWORD)SessionId )
        {
          v11->AcquiredByte &= ~1u;
          if ( v11->LockState.0 )
            break;
        }
      }
      if ( !v11 )
      {
LABEL_15:
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v4, (unsigned int)SessionId, 0LL);
        goto LABEL_22;
      }
      v11->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v11->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v10].TreeNode, SessionId);
      v17 = 0;
      v17 = v11->BoostBitmap.AllFields & 0x1FFFF;
      v11->BoostBitmap.AllFields &= 0xFFFE0000;
      v11->ThreadLocalFlags &= ~1u;
      v11->LockState.0 = 0LL;
      v14 = ((char *)v11 - (char *)CurrentThread - 800) / 96;
      if ( v7 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v14;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v14);
LABEL_22:
      --CurrentThread->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v4, (__int64)&v17);
      v12 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v12
        && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v15);
      }
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
}
