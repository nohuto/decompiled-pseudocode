/*
 * XREFs of KiForceSymbolReferences @ 0x140A3BB74
 * Callers:
 *     KiInitSystem @ 0x140A16EF4 (KiInitSystem.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400B2D10 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 KiForceSymbolReferences()
{
  struct _KTHREAD *CurrentThread; // rbx
  _KLOCK_ENTRY *v1; // rdi
  __int64 v2; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v4; // dl
  int SessionId; // eax
  __int64 v6; // rcx
  bool v7; // zf
  signed __int8 v8; // cf
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  int v12; // [rsp+50h] [rbp+28h] BYREF
  int v13; // [rsp+58h] [rbp+30h]
  signed __int32 v14; // [rsp+60h] [rbp+38h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp+40h] BYREF

  BugCheckParameter2 = 0LL;
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_24;
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
  {
    v1 = 0LL;
    goto LABEL_4;
  }
  LOBYTE(v2) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v2 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v1 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x200) == 0 )
        goto LABEL_4;
      EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, (__int64)&BugCheckParameter2);
      goto LABEL_9;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v2) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v4 = v2;
  _BitScanForward((unsigned int *)&v2, (unsigned __int8)v2);
  v13 = v2;
  CurrentThread->AbEntrySummary = v4 & ~(1 << v2);
  v1 = &CurrentThread->LockEntries[v2];
LABEL_9:
  if ( v1 )
  {
    if ( (unsigned __int64)&BugCheckParameter2 >= 0xFFFF800000000000uLL
      && byte_140467440[(((unsigned __int64)&BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    v1->LockState.SessionId = SessionId;
    v1->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)&BugCheckParameter2;
    goto LABEL_17;
  }
LABEL_4:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&BugCheckParameter2, &v12);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v6);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL);
  if ( v1 )
  {
    if ( v8 )
      KeAbPostReleaseEx((ULONG_PTR)&BugCheckParameter2, v1);
    else
      v1->AcquiredByte |= 1u;
  }
LABEL_24:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ExTryAcquireSpinLockExclusiveAtDpcLevel(&v14);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
