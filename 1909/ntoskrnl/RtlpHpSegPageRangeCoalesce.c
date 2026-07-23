/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x14001F1D0
 * Callers:
 *     RtlpHpSegPageRangeShrink @ 0x14001EC20 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegContextCompact @ 0x14010AC10 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpSegFreeRangeRemove @ 0x14001F69C (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpScheduleCompaction @ 0x14001F6F0 (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegLockAcquire @ 0x14001F788 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegPageRangeCommit @ 0x14001FBC8 (RtlpHpSegPageRangeCommit.c)
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int8 *a5)
{
  int v5; // r15d
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r14d
  __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbp
  __int64 v16; // rcx
  char v18; // cl
  __int64 v19; // rcx
  unsigned __int8 v20; // di
  unsigned __int8 v21; // al
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR SessionId; // r9
  unsigned __int8 v24; // r12
  unsigned int v25; // edx
  bool v26; // zf
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  _KLOCK_ENTRY *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  _BYTE v36[72]; // [rsp+30h] [rbp-48h] BYREF
  int v37; // [rsp+80h] [rbp+8h] BYREF
  int v38; // [rsp+88h] [rbp+10h]

  v5 = a4;
  while ( 1 )
  {
    v9 = 0LL;
    v10 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v11 = (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
    v12 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)(v10 + v11) < 0x100 )
    {
      v9 = a2 + 32LL * (unsigned __int8)HIBYTE(*(_DWORD *)(a2 + 28));
      if ( (*(_BYTE *)(v9 + 24) & 1) != 0 )
        v9 = 0LL;
    }
    if ( (unsigned int)v10 > *(unsigned __int8 *)(a1 + 10) )
    {
      v13 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 8) & 2) == 0 )
        v13 += -32LL * *(unsigned __int8 *)(v13 + 31);
      if ( (*(_BYTE *)(v13 + 24) & 1) == 0 )
      {
        RtlpHpSegFreeRangeRemove(a1, v13);
        *(_BYTE *)(v13 + 31) += *(_BYTE *)(a2 + 31);
        v12 += (unsigned __int16)~*(_WORD *)(v13 + 28);
        *(_WORD *)(v13 + 28) = ~(_WORD)v12;
        *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
        a2 = v13;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v13 + 31) - 1) + v13 + 31) = *(_BYTE *)(v13 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v9 )
    {
      RtlpHpSegFreeRangeRemove(a1, v9);
      v18 = *(_BYTE *)(a2 + 31);
      if ( v18 != 1 )
      {
        *(_BYTE *)(a2 + 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + 24) &= ~1u;
        v18 = *(_BYTE *)(a2 + 31);
      }
      *(_BYTE *)(a2 + 31) = v18 + *(_BYTE *)(v9 + 31);
      v12 += (unsigned __int16)~*(_WORD *)(v9 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v12;
      *(_BYTE *)(v9 + 24) &= ~2u;
      v10 = (unsigned int)*(unsigned __int8 *)(a2 + 31) - 1;
      v19 = 32 * v10;
      *(_BYTE *)(v19 + a2 + 24) |= 1u;
      *(_BYTE *)(v19 + a2 + 31) = v10;
    }
    if ( !v12 )
      break;
    if ( !v5 )
    {
      a4 = v12;
      if ( (*(_BYTE *)(a1 + 13) & 8) == 0 )
      {
        v11 = *(__int16 *)(a1 + 22);
        v10 = *(_QWORD *)(v11 + a1 + 8) >> *(_BYTE *)(a1 + 11);
        if ( v10 <= 8 )
          v10 = 8LL;
        v14 = *(_QWORD *)(v11 + a1 + 8) >> *(_BYTE *)(a1 + 12);
        if ( v14 <= 8 )
          v14 = 8LL;
        v15 = v12 + *(_QWORD *)(v11 + a1 + 16) + *(_QWORD *)(v11 + a1 + 24);
        if ( (v15 <= v10 || (int)RtlpHpScheduleCompaction(*(_QWORD *)(a1 + 56)) >= 0) && v15 <= v14 )
          break;
      }
    }
    v20 = *a5;
    if ( (a3 & 1) == 0 )
    {
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v20 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v20);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(a1 + 64);
        v37 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(a1 + 64, v10, v11, a4) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        v24 = ++CurrentThread->AbAllocationRegionCount;
        v25 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        v26 = !_BitScanReverse((unsigned int *)&v27, v25);
        v38 = v27;
        if ( v26 )
          goto LABEL_51;
        while ( 1 )
        {
          v28 = 1 << v27;
          v29 = v27;
          v30 = &CurrentThread->LockEntries[v29];
          v25 &= ~v28;
          if ( (v30->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v30->LockState.0 & 1) == 0
            && (*(_QWORD *)&v30->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == ((a1 + 64) & 0x7FFFFFFFFFFFFFFCLL)
            && v30->LockState.SessionId == (_DWORD)SessionId )
          {
            v30->AcquiredByte &= ~1u;
            if ( v30->LockState.0 )
              break;
          }
          v26 = !_BitScanReverse((unsigned int *)&v27, v25);
          v38 = v27;
          if ( v26 )
            goto LABEL_51;
        }
        if ( !v30 )
        {
LABEL_51:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, a1 + 64, SessionId, 0LL);
        }
        else
        {
          v30->CrossThreadReleasableAndBusyByte |= 2u;
          if ( (__int64)v30->LockState.LockState < 0 )
            KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v29].TreeNode);
          v37 = 0;
          v37 = v30->BoostBitmap.AllFields & 0x1FFFF;
          v30->BoostBitmap.AllFields &= 0xFFFE0000;
          v30->ThreadLocalFlags &= ~1u;
          v30->LockState.0 = 0LL;
          v31 = ((char *)v30 - (char *)CurrentThread - 800) / 96;
          if ( v24 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v31;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v31);
        }
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(CurrentThread, a1 + 64, &v37);
        v26 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v26
          && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread(), v32, v33, v34);
      }
    }
    RtlpHpSegPageRangeCommit(a1, 0, (__int64)v36);
    v21 = RtlpHpSegLockAcquire(a1, a3);
    *a5 = v21;
    *(_BYTE *)(a2 + 24) &= ~0x10u;
  }
  v16 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v16 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
