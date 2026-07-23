/*
 * XREFs of MiClearPartitionPageBitMap @ 0x1402E97F8
 * Callers:
 *     MiInsertPartitionPages @ 0x1402EA698 (MiInsertPartitionPages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1402E8CAC (MiActOnPartitionNodePages.c)
 *     MiFreePartitionTree @ 0x1402EA488 (MiFreePartitionTree.c)
 */

__int64 __fastcall MiClearPartitionPageBitMap(__int64 a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR v5; // rsi
  KIRQL v6; // al
  _QWORD *v7; // rcx
  KIRQL v8; // r15
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *v14; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v16; // bp
  unsigned int v17; // r8d
  int v18; // eax
  __int64 v19; // rcx
  _KLOCK_ENTRY *v20; // rdi
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int16 *v26[8]; // [rsp+30h] [rbp-68h] BYREF
  int v27; // [rsp+A0h] [rbp+8h] BYREF
  int v28; // [rsp+A8h] [rbp+10h]

  memset(v26, 0, 0x38uLL);
  CurrentThread = KeGetCurrentThread();
  v26[3] = 0LL;
  v26[0] = (__int16 *)a1;
  --CurrentThread->SpecialApcDisable;
  v5 = a1 + 184;
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
  v7 = *a2;
  v8 = v6;
  v9 = 0LL;
  while ( v7 )
  {
    v9 = v7;
    v7 = (_QWORD *)*v7;
  }
  while ( v9 )
  {
    v10 = (_QWORD *)v9[1];
    v11 = (__int64)v9;
    v12 = v9;
    if ( v10 )
    {
      do
      {
        v9 = v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
    else
    {
      while ( 1 )
      {
        v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v9 || (_QWORD *)*v9 == v12 )
          break;
        v12 = v9;
      }
    }
    MiActOnPartitionNodePages(v11, 7u, v26);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v8);
  MiFreePartitionTree(a1, &v26[3], 0LL, 1LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 184));
  v27 = 0;
  v14 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 184) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v14->ApcState.Process);
  else
    SessionId = -1;
  --v14->SpecialApcDisable;
  v16 = ++v14->AbAllocationRegionCount;
  v17 = ((char)v14->AbEntrySummary | (char)v14->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v21 = !_BitScanReverse((unsigned int *)&v22, v17);
    v28 = v22;
    if ( v21 )
      goto LABEL_30;
    v18 = 1 << v22;
    v19 = v22;
    v20 = &v14->LockEntries[v19];
    v17 &= ~v18;
    if ( (v20->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v20->LockState.0 & 1) == 0
      && (*(_QWORD *)&v20->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && v20->LockState.SessionId == SessionId )
    {
      v20->AcquiredByte &= ~1u;
      if ( v20->LockState.0 )
        break;
    }
  }
  if ( !v20 )
  {
LABEL_30:
    if ( (*((_DWORD *)&v14->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v14, v5, SessionId, 0LL);
    goto LABEL_37;
  }
  v20->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v20->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v14->LockEntries[v19].TreeNode);
  v27 = v20->BoostBitmap.AllFields & 0x1FFFF;
  v20->BoostBitmap.AllFields &= 0xFFFE0000;
  v20->ThreadLocalFlags &= ~1u;
  v20->LockState.0 = 0LL;
  v23 = ((char *)v20 - (char *)v14 - 800) / 96;
  if ( v16 == 1 )
    v14->AbEntrySummary |= 1 << v23;
  else
    _InterlockedOr8((volatile signed __int8 *)&v14->AbOrphanedEntrySummary, 1 << v23);
LABEL_37:
  --v14->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v14, v5, &v27);
  v21 = v14->SpecialApcDisable++ == -1;
  if ( v21 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery(v24);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
