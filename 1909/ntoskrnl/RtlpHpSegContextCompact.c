/*
 * XREFs of RtlpHpSegContextCompact @ 0x14010AC10
 * Callers:
 *     RtlpHpHeapCompact @ 0x14010AB64 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpSegPageRangeCoalesce @ 0x14001F1D0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14001F69C (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegLockAcquire @ 0x14001F788 (RtlpHpSegLockAcquire.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     RtlpHpSegFreeRangeInsert @ 0x14005EEB0 (RtlpHpSegFreeRangeInsert.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpSegSegmentFree @ 0x140166420 (RtlpHpSegSegmentFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1, unsigned int a2, __int64 a3)
{
  bool v3; // zf
  char v6; // al
  _QWORD *v7; // rsi
  unsigned __int8 v8; // bl
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rbx
  _QWORD *result; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v17; // bp
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _KLOCK_ENTRY *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  _QWORD **v27; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v29; // [rsp+30h] [rbp-38h] BYREF
  _QWORD *v30; // [rsp+38h] [rbp-30h]
  char v31; // [rsp+70h] [rbp+8h] BYREF
  int v32; // [rsp+80h] [rbp+18h] BYREF
  int v33; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 88) == 0LL;
  v30 = &v29;
  v29 = &v29;
  if ( !v3 )
  {
    v6 = RtlpHpSegLockAcquire(a1, a2, a3);
    v7 = *(_QWORD **)(a1 + 72);
    v31 = v6;
    v8 = v6;
    if ( v7 != (_QWORD *)(a1 + 72) )
    {
      do
      {
        v9 = (unsigned __int64)&v7[4 * *(unsigned __int8 *)(a1 + 10)];
        v10 = v9 + 32 * (256LL - *(unsigned __int8 *)(a1 + 10));
        if ( v9 < v10 )
        {
          while ( 1 )
          {
            if ( (*(_BYTE *)(v9 + 24) & 1) == 0 && *(_WORD *)(v9 + 28) != 0xFFFF )
            {
              RtlpHpSegFreeRangeRemove(a1, v9);
              *(_BYTE *)(v9 + 24) |= 1u;
              v13 = 32LL * ((unsigned int)*(unsigned __int8 *)(v9 + 31) - 1);
              *(_BYTE *)(v13 + v9 + 24) |= 1u;
              v9 = RtlpHpSegPageRangeCoalesce(a1, v9, a2, 1LL, (unsigned __int8 *)&v31);
              v14 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, v9, 0);
              if ( v14 )
                break;
            }
            v9 += 32LL * *(unsigned __int8 *)(v9 + 31);
            if ( v9 >= v10 )
              goto LABEL_6;
          }
          v25 = *v14;
          v7 = (_QWORD *)v7[1];
          v26 = (_QWORD *)v14[1];
          if ( *(_QWORD **)(*v14 + 8LL) != v14
            || (_QWORD *)*v26 != v14
            || (*v26 = v25, *(_QWORD *)(v25 + 8) = v26, v27 = (_QWORD **)v30, --*(_QWORD *)(a1 + 88), *v27 != &v29) )
          {
            __fastfail(3u);
          }
          v14[1] = v27;
          *v14 = &v29;
          *v27 = v14;
          v30 = v14;
        }
LABEL_6:
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != (_QWORD *)(a1 + 72) );
      v8 = v31;
    }
    if ( (a2 & 1) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v8 = v31;
        }
        __writecr8(v8);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
        v32 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v17 = ++CurrentThread->AbAllocationRegionCount;
        v18 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v3 = !_BitScanReverse((unsigned int *)&v19, v18);
        v33 = v19;
        if ( v3 )
          goto LABEL_38;
        while ( 1 )
        {
          v20 = 1 << v19;
          v21 = v19;
          v22 = &CurrentThread->LockEntries[v21];
          v18 &= ~v20;
          if ( (v22->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v22->LockState.0 & 1) == 0
            && (*(_QWORD *)&v22->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
            && v22->LockState.SessionId == SessionId )
          {
            v22->AcquiredByte &= ~1u;
            if ( v22->LockState.0 )
              break;
          }
          v3 = !_BitScanReverse((unsigned int *)&v19, v18);
          v33 = v19;
          if ( v3 )
            goto LABEL_38;
        }
        if ( !v22 )
        {
LABEL_38:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
        }
        else
        {
          v22->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v22->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v21].TreeNode);
          v32 = v22->BoostBitmap.AllFields & 0x1FFFF;
          v22->BoostBitmap.AllFields &= 0xFFFE0000;
          v22->ThreadLocalFlags &= ~1u;
          v22->LockState.0 = 0LL;
          v23 = ((char *)v22 - (char *)CurrentThread - 800) / 96;
          if ( v17 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v23;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v23);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, a1 + 64, &v32);
        v3 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v3
          && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v24);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      }
    }
  }
  v11 = v29;
  for ( result = &v29; v11 != &v29; result = &v29 )
  {
    v11 = (_QWORD *)*v11;
    RtlpHpSegSegmentFree(a1);
  }
  return result;
}
