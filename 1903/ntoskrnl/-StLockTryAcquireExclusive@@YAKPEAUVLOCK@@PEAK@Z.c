/*
 * XREFs of ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14014C42C
 * Callers:
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014BD88 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     KeAbPostReleaseEx @ 0x14009A2E0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401BFAF4 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall StLockTryAcquireExclusive(ULONG_PTR BugCheckParameter2, unsigned int *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rbx
  _KLOCK_ENTRY *v6; // rdi
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v10; // rax
  char v11; // cl
  int SessionId; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+50h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v14 = 0;
  v5 = KeGetCurrentThread();
  --v5->SpecialApcDisable;
  if ( ++v5->AbAllocationRegionCount != 1 )
  {
    v6 = 0LL;
LABEL_3:
    _interlockedbittestandset((volatile signed __int32 *)&v5->116 + 1, 0x10u);
    goto LABEL_4;
  }
  LOBYTE(v10) = v5->AbEntrySummary;
  if ( (_BYTE)v10 )
    goto LABEL_13;
  if ( v5->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v5->AbOrphanedEntrySummary;
    v5->AbOrphanedEntrySummary = 0;
    LOBYTE(v10) = v5->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_13:
    v11 = v10;
    _BitScanForward((unsigned int *)&v10, (unsigned __int8)v10);
    v15 = v10;
    v5->AbEntrySummary = v11 & ~(1 << v10);
    v6 = &v5->LockEntries[v10];
    goto LABEL_14;
  }
  v6 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_3;
  EtwTraceAutoBoostEntryExhaustion(v5, BugCheckParameter2);
LABEL_14:
  if ( !v6 )
    goto LABEL_3;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140467440[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
  else
    SessionId = -1;
  v6->LockState.SessionId = SessionId;
  v6->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)(BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL);
LABEL_4:
  --v5->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v5, BugCheckParameter2, &v14);
  v8 = v5->SpecialApcDisable++ == -1;
  if ( v8 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery(v7);
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
  {
    if ( v6 )
      KeAbPostReleaseEx(BugCheckParameter2, v6);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    return 0LL;
  }
  else
  {
    if ( v6 )
      v6->AcquiredByte |= 1u;
    *a2 = 1;
    return 1LL;
  }
}
