/*
 * XREFs of RtlpHpSegMgrVaCtxAlloc @ 0x14000DAB0
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x14000D98C (RtlpHpSegMgrReserve.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall RtlpHpSegMgrVaCtxAlloc(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbx
  _QWORD **v4; // rdi
  ULONG_PTR v8; // r14
  unsigned __int8 v9; // al
  _QWORD *v10; // r12
  unsigned __int8 v11; // r15
  unsigned int v12; // eax
  int v13; // esi
  int v14; // eax
  __int64 v15; // rdx
  struct _KTHREAD *v16; // rdi
  __int64 v17; // rdx
  unsigned __int8 v18; // r15
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 SessionId; // rdx
  unsigned __int8 v29; // r15
  unsigned int v30; // r8d
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  _KLOCK_ENTRY *v34; // rsi
  unsigned __int8 v35; // al
  int v36; // [rsp+30h] [rbp-20h]
  __int128 v37; // [rsp+40h] [rbp-10h] BYREF
  int v38; // [rsp+90h] [rbp+40h] BYREF
  int v39; // [rsp+98h] [rbp+48h]
  int v40; // [rsp+A8h] [rbp+58h] BYREF

  v39 = a2;
  v3 = 0LL;
  v4 = (_QWORD **)(a1 + 128);
  if ( *(_QWORD *)(a1 + 120) || *v4 )
  {
    v8 = a1 + 112;
    v9 = RtlpHpAcquireLockExclusive(a1 + 112, *(_DWORD *)(a1 + 40) & 1);
    v10 = *v4;
    v11 = v9;
    if ( *v4 || (a3 & 2) == 0 && (--v4, (v10 = *v4) != 0LL) )
    {
      v12 = *((unsigned __int16 *)v10 - 3);
      _BitScanForward((unsigned int *)&v13, v12);
      v14 = v12 ^ (1 << v13);
      v36 = v13;
      *((_WORD *)v10 - 3) = v14;
      if ( !(_WORD)v14 )
      {
        if ( *v4 )
          *v4 = (_QWORD *)**v4;
        *v10 = 0LL;
      }
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick();
        }
        __writecr8(v11);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v8);
        v40 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
          SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
        else
          SessionId = 0xFFFFFFFFLL;
        --CurrentThread->SpecialApcDisable;
        v29 = ++CurrentThread->AbAllocationRegionCount;
        v30 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v20 = !_BitScanReverse((unsigned int *)&v31, v30);
          if ( v20 )
            goto LABEL_53;
          v32 = 1 << v31;
          v33 = v31;
          v34 = &CurrentThread->LockEntries[v33];
          v30 &= ~v32;
          if ( (v34->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v34->LockState.0 & 1) == 0
            && (*(_QWORD *)&v34->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
            && v34->LockState.SessionId == (_DWORD)SessionId )
          {
            v34->AcquiredByte &= ~1u;
            if ( v34->LockState.0 )
              break;
          }
        }
        if ( !v34 )
        {
LABEL_53:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v8, (unsigned int)SessionId, 0LL);
          goto LABEL_65;
        }
        v34->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v34->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v33].TreeNode, SessionId);
        v40 = 0;
        v40 = v34->BoostBitmap.AllFields & 0x1FFFF;
        v34->BoostBitmap.AllFields &= 0xFFFE0000;
        v34->ThreadLocalFlags &= ~1u;
        v34->LockState.0 = 0LL;
        v35 = 1 << (((char *)v34 - (char *)CurrentThread - 800) / 96);
        if ( v29 == 1 )
          CurrentThread->AbEntrySummary |= v35;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v35);
LABEL_65:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts(CurrentThread, v8, &v40);
        v20 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v20
          && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(1LL);
        }
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        v13 = v36;
      }
      v37 = *(_OWORD *)(a1 + 40);
      v15 = *((_QWORD *)RtlpHpEnvGetHeapManager(&v37) + 6 * *((unsigned __int8 *)v10 - 15) + 27);
      return *(_QWORD *)(v15 + 8)
           + (((__int64)v10 - *(_QWORD *)(v15 + 32) - 16) >> *(_DWORD *)(v15 + 88) << 20)
           + (unsigned int)(v39 * v13);
    }
    else if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        _InterlockedAnd((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick();
      }
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v8);
      v38 = 0;
      v16 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
        v17 = (unsigned int)MmGetSessionIdEx(v16->ApcState.Process);
      else
        v17 = 0xFFFFFFFFLL;
      --v16->SpecialApcDisable;
      v18 = ++v16->AbAllocationRegionCount;
      v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v20 = !_BitScanReverse((unsigned int *)&v21, v19);
        if ( v20 )
          goto LABEL_23;
        v22 = 1 << v21;
        v23 = v21;
        v24 = &v16->LockEntries[v23];
        v19 &= ~v22;
        if ( (v24->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v24->LockState.0 & 1) == 0
          && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
          && v24->LockState.SessionId == (_DWORD)v17 )
        {
          v24->AcquiredByte &= ~1u;
          if ( v24->LockState.0 )
            break;
        }
      }
      if ( !v24 )
      {
LABEL_23:
        if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v16, v8, (unsigned int)v17, 0LL);
        goto LABEL_35;
      }
      v24->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v24->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v16->LockEntries[v23].TreeNode, v17);
      v38 = 0;
      v38 = v24->BoostBitmap.AllFields & 0x1FFFF;
      v24->BoostBitmap.AllFields &= 0xFFFE0000;
      v24->ThreadLocalFlags &= ~1u;
      v24->LockState.0 = 0LL;
      v25 = ((char *)v24 - (char *)v16 - 800) / 96;
      if ( v18 == 1 )
        v16->AbEntrySummary |= 1 << v25;
      else
        _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
LABEL_35:
      --v16->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts(v16, v8, &v38);
      v20 = v16->SpecialApcDisable++ == -1;
      if ( v20 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
        KiCheckForKernelApcDelivery(v26);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
  }
  return v3;
}
