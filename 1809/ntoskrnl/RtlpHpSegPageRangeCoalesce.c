/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x14000B82C
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x14000ACF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegContextCompact @ 0x1401B6530 (RtlpHpSegContextCompact.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpSegLockAcquire @ 0x14000B57C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeRemove @ 0x14000B644 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegPageRangeCommit @ 0x14000C594 (RtlpHpSegPageRangeCommit.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpHpScheduleCompaction @ 0x14031F0A4 (RtlpHpScheduleCompaction.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, char a3, int a4, char *a5)
{
  char *v5; // r13
  int v6; // esi
  __int64 v10; // rdi
  __int64 v11; // rdx
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  __int64 v19; // rcx
  char v21; // cl
  char v22; // dl
  __int64 v23; // rcx
  unsigned __int8 v24; // di
  volatile signed __int64 *v25; // rbp
  struct _KTHREAD *CurrentThread; // rdi
  __int64 SessionId; // rdx
  unsigned __int8 v28; // r15
  unsigned int v29; // r8d
  bool v30; // zf
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  _KLOCK_ENTRY *v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rcx
  char v37; // al
  __int64 v38[9]; // [rsp+30h] [rbp-48h] BYREF
  int v39; // [rsp+80h] [rbp+8h] BYREF
  int v40; // [rsp+88h] [rbp+10h]
  int v41; // [rsp+98h] [rbp+20h]

  v41 = a4;
  v5 = a5;
  v6 = a4;
  while ( 1 )
  {
    v10 = 0LL;
    v11 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v12 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)v11 + (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28)) < 0x100 )
    {
      v10 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v10 + 24) & 1) != 0 )
        v10 = 0LL;
    }
    if ( (unsigned int)v11 > *(unsigned __int8 *)(a1 + 10) )
    {
      v13 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 32 + 24) & 2) == 0 )
        v13 += -32LL * *(unsigned __int8 *)(v13 + 31);
      v14 = 0LL;
      if ( (*(_BYTE *)(v13 + 24) & 1) == 0 )
        v14 = v13;
      if ( v14 )
      {
        RtlpHpSegFreeRangeRemove(a1, v14);
        *(_BYTE *)(v14 + 31) += *(_BYTE *)(a2 + 31);
        v12 += (unsigned __int16)~*(_WORD *)(v14 + 28);
        *(_WORD *)(v14 + 28) = ~(_WORD)v12;
        *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
        a2 = v14;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v14 + 31) - 1) + v14 + 31) = *(_BYTE *)(v14 + 31) - 1;
      }
      v6 = v41;
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v10 )
    {
      RtlpHpSegFreeRangeRemove(a1, v10);
      v21 = *(_BYTE *)(a2 + 31);
      if ( v21 != 1 )
      {
        *(_BYTE *)(a2 + 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + 24) &= ~1u;
        v21 = *(_BYTE *)(a2 + 31);
      }
      *(_BYTE *)(a2 + 31) = v21 + *(_BYTE *)(v10 + 31);
      v12 += (unsigned __int16)~*(_WORD *)(v10 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v12;
      *(_BYTE *)(v10 + 24) &= ~2u;
      v22 = *(_BYTE *)(a2 + 31) - 1;
      v23 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v23 + a2 + 24) |= 1u;
      *(_BYTE *)(v23 + a2 + 31) = v22;
    }
    if ( !v12 )
      break;
    if ( !v6 && (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v15 = *(__int16 *)(a1 + 22);
      v16 = *(_QWORD *)(v15 + a1 + 8) >> *(_BYTE *)(a1 + 11);
      if ( v16 <= 8 )
        v16 = 8LL;
      v17 = *(_QWORD *)(v15 + a1 + 8) >> *(_BYTE *)(a1 + 12);
      if ( v17 <= 8 )
        v17 = 8LL;
      v18 = v12 + *(_QWORD *)(v15 + a1 + 16) + *(_QWORD *)(v15 + a1 + 24);
      if ( (v18 <= v16 || (int)RtlpHpScheduleCompaction(*(_QWORD *)(a1 + 56), v16, v15, v12) >= 0) && v18 <= v17 )
        break;
    }
    v24 = *v5;
    if ( (a3 & 1) == 0 )
    {
      v25 = (volatile signed __int64 *)(a1 + 64);
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v24 < 2u )
        {
          _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick();
        }
        __writecr8(v24);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 64);
        v39 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        v28 = ++CurrentThread->AbAllocationRegionCount;
        v29 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v30 = !_BitScanReverse((unsigned int *)&v31, v29);
          v40 = v31;
          if ( v30 )
            break;
          v32 = 1 << v31;
          v33 = v31;
          v34 = &CurrentThread->LockEntries[v33];
          v29 &= ~v32;
          if ( (v34->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v34->LockState.0 & 1) == 0
            && (*(_QWORD *)&v34->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v25 & 0x7FFFFFFFFFFFFFFCLL)
            && v34->LockState.SessionId == (_DWORD)SessionId )
          {
            v34->AcquiredByte &= ~1u;
            if ( v34->LockState.0 )
            {
              if ( v34 )
              {
                v34->CrossThreadReleasableAndBusyByte |= 2u;
                if ( (__int64)v34->LockState.LockState < 0 )
                  KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v33].TreeNode, SessionId);
                v39 = 0;
                v39 = v34->BoostBitmap.AllFields & 0x1FFFF;
                v34->BoostBitmap.AllFields &= 0xFFFE0000;
                v34->ThreadLocalFlags &= ~1u;
                v34->LockState.0 = 0LL;
                v35 = ((char *)v34 - (char *)CurrentThread - 800) / 96;
                if ( v28 == 1 )
                  CurrentThread->AbEntrySummary |= 1 << v35;
                else
                  _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v35);
                goto LABEL_45;
              }
              break;
            }
          }
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, (unsigned int)SessionId, 0LL);
LABEL_45:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(CurrentThread, a1 + 64, &v39);
        v30 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v30
          && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v36);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      }
    }
    RtlpHpSegPageRangeCommit(a1, 0, (__int64)v38);
    v37 = RtlpHpSegLockAcquire(a1, a3);
    v6 = v41;
    *v5 = v37;
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v19 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v19 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
