/*
 * XREFs of RtlpHpSegMgrVaCtxAlloc @ 0x140110150
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x140110034 (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14001F3C0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpEnvGetHeapManager @ 0x14001FDB8 (RtlpHpEnvGetHeapManager.c)
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

__int64 __fastcall RtlpHpSegMgrVaCtxAlloc(__int64 a1, int a2, char a3)
{
  __int64 v3; // rbx
  _QWORD **v4; // rdi
  unsigned __int64 v8; // r14
  KIRQL v9; // al
  _QWORD *v10; // r12
  KIRQL v11; // r15
  unsigned int v12; // eax
  int v13; // esi
  int v14; // eax
  __int64 v15; // r8
  struct _KTHREAD *v16; // rdi
  unsigned int v17; // edx
  unsigned __int8 v18; // r15
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  _KLOCK_ENTRY *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  struct _KPRCB *v27; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // edx
  unsigned __int8 v30; // r15
  unsigned int v31; // r8d
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  _KLOCK_ENTRY *v35; // rsi
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // rcx
  int v38; // [rsp+30h] [rbp-20h]
  __int128 v39; // [rsp+40h] [rbp-10h] BYREF
  int v40; // [rsp+90h] [rbp+40h] BYREF
  int v41; // [rsp+98h] [rbp+48h]
  int v42; // [rsp+A8h] [rbp+58h] BYREF

  v41 = a2;
  v3 = 0LL;
  v4 = (_QWORD **)(a1 + 128);
  if ( *(_QWORD *)(a1 + 120) || *v4 )
  {
    v8 = a1 + 112;
    v9 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 112), *(_DWORD *)(a1 + 40) & 1);
    v10 = *v4;
    v11 = v9;
    if ( *v4 || (a3 & 2) == 0 && (--v4, (v10 = *v4) != 0LL) )
    {
      v12 = *((unsigned __int16 *)v10 - 3);
      _BitScanForward((unsigned int *)&v13, v12);
      v14 = v12 ^ (1 << v13);
      v38 = v13;
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
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v11);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v8);
        v42 = 0;
        CurrentThread = KeGetCurrentThread();
        if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
          SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
        else
          SessionId = -1;
        --CurrentThread->SpecialApcDisable;
        v30 = ++CurrentThread->AbAllocationRegionCount;
        v31 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
        while ( 1 )
        {
          v20 = !_BitScanReverse((unsigned int *)&v32, v31);
          if ( v20 )
            goto LABEL_53;
          v33 = 1 << v32;
          v34 = v32;
          v35 = &CurrentThread->LockEntries[v34];
          v31 &= ~v33;
          if ( (v35->AcquiredByte & 1) != 0
            && (*(_DWORD *)&v35->LockState.0 & 1) == 0
            && (*(_QWORD *)&v35->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
            && v35->LockState.SessionId == SessionId )
          {
            v35->AcquiredByte &= ~1u;
            if ( v35->LockState.0 )
              break;
          }
        }
        if ( !v35 )
        {
LABEL_53:
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
            KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v8, SessionId, 0LL);
          goto LABEL_65;
        }
        v35->CrossThreadReleasableAndBusyByte |= 2u;
        if ( (__int64)v35->LockState.LockState < 0 )
          KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v34].TreeNode);
        v42 = v35->BoostBitmap.AllFields & 0x1FFFF;
        v35->BoostBitmap.AllFields &= 0xFFFE0000;
        v35->ThreadLocalFlags &= ~1u;
        v35->LockState.0 = 0LL;
        v36 = 1 << (((char *)v35 - (char *)CurrentThread - 800) / 96);
        if ( v30 == 1 )
          CurrentThread->AbEntrySummary |= v36;
        else
          _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, v36);
LABEL_65:
        --CurrentThread->AbAllocationRegionCount;
        KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v8, &v42);
        v20 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v20
          && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(1LL);
        }
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        v13 = v38;
      }
      v39 = *(_OWORD *)(a1 + 40);
      v15 = *((_QWORD *)RtlpHpEnvGetHeapManager(&v39) + 6 * *((unsigned __int8 *)v10 - 15) + 284);
      return *(_QWORD *)(v15 + 8)
           + (((__int64)v10 - *(_QWORD *)(v15 + 40) - 16) >> *(_DWORD *)(v15 + 24) << 20)
           + (unsigned int)(v41 * v13);
    }
    else if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v8);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        v27 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v27);
      }
      __writecr8(v11);
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v8);
      v40 = 0;
      v16 = KeGetCurrentThread();
      if ( (unsigned int)MiGetSystemRegionType(v8) == 1 )
        v17 = MmGetSessionIdEx((__int64)v16->ApcState.Process);
      else
        v17 = -1;
      --v16->SpecialApcDisable;
      v18 = ++v16->AbAllocationRegionCount;
      v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v20 = !_BitScanReverse((unsigned int *)&v21, v19);
        if ( v20 )
          goto LABEL_25;
        v22 = 1 << v21;
        v23 = v21;
        v24 = &v16->LockEntries[v23];
        v19 &= ~v22;
        if ( (v24->AcquiredByte & 1) != 0
          && (*(_DWORD *)&v24->LockState.0 & 1) == 0
          && (*(_QWORD *)&v24->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v8 & 0x7FFFFFFFFFFFFFFCLL)
          && v24->LockState.SessionId == v17 )
        {
          v24->AcquiredByte &= ~1u;
          if ( v24->LockState.0 )
            break;
        }
      }
      if ( !v24 )
      {
LABEL_25:
        if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v16, v8, v17, 0LL);
        goto LABEL_37;
      }
      v24->CrossThreadReleasableAndBusyByte |= 2u;
      if ( (__int64)v24->LockState.LockState < 0 )
        KiAbEntryRemoveFromTree(&v16->LockEntries[v23].TreeNode);
      v40 = v24->BoostBitmap.AllFields & 0x1FFFF;
      v24->BoostBitmap.AllFields &= 0xFFFE0000;
      v24->ThreadLocalFlags &= ~1u;
      v24->LockState.0 = 0LL;
      v25 = ((char *)v24 - (char *)v16 - 800) / 96;
      if ( v18 == 1 )
        v16->AbEntrySummary |= 1 << v25;
      else
        _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v25);
LABEL_37:
      --v16->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v16, v8, &v40);
      v20 = v16->SpecialApcDisable++ == -1;
      if ( v20 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
        KiCheckForKernelApcDelivery(v26);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  return v3;
}
