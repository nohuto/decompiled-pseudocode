/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     ExpAddTagForBigPages @ 0x140036F80 (ExpAddTagForBigPages.c)
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x140052580 (MiMakeHyperRangeAccessible.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MmLockLoadedModuleListShared @ 0x14005F110 (MmLockLoadedModuleListShared.c)
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     MiSynchronizeSystemVa @ 0x140075BC0 (MiSynchronizeSystemVa.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiOffsetToProtos @ 0x1400B5C30 (MiOffsetToProtos.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400B8110 (MiMakeSystemCacheRangeValid.c)
 *     MiEndingOffsetWithLock @ 0x1400B88C0 (MiEndingOffsetWithLock.c)
 *     MiProbeAndLockPrepare @ 0x1400CD110 (MiProbeAndLockPrepare.c)
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     MiQueryAddressSpan @ 0x140104A80 (MiQueryAddressSpan.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiAllocateCombineProto @ 0x14013EFD0 (MiAllocateCombineProto.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(void *SchedulerAssist, unsigned __int8 CurrentIrql)
{
  unsigned int v2; // esi
  volatile signed __int32 *v4; // r14
  signed __int32 v5; // edi
  struct _KPRCB *v6; // rbp
  _DWORD *v7; // rcx
  bool v9; // zf
  signed __int32 v10; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  int v12; // eax
  int v13; // eax

  v2 = 0;
  v4 = (volatile signed __int32 *)SchedulerAssist;
  while ( 1 )
  {
    v5 = *v4;
    while ( v5 < 0 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        SchedulerAssist = (void *)(unsigned int)v5;
        LODWORD(SchedulerAssist) = v5 | 0x40000000;
        v10 = _InterlockedCompareExchange(v4, v5 | 0x40000000, v5);
        v9 = v5 == v10;
        v5 = v10;
        if ( !v9 )
          continue;
      }
      if ( CurrentIrql != 0xFF )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(CurrentIrql);
      }
      if ( (++v2 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(SchedulerAssist) )
      {
        HvlNotifyLongSpinWait(v2);
      }
      else
      {
        _mm_pause();
      }
      if ( CurrentIrql != 0xFF )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            _InterlockedOr((volatile signed __int32 *)SchedulerAssist, 0x10000u);
          }
        }
      }
      v5 = *v4;
    }
    v6 = KeGetCurrentPrcb();
    v7 = v6->SchedulerAssist;
    if ( v7 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v12 = v7[5];
        v7[5] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
    if ( v5 == _InterlockedCompareExchange(v4, (v5 + 1) & 0xBFFFFFFF, v5) )
      break;
    SchedulerAssist = v6->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v6->NestingLevel <= 1u )
      {
        v13 = *((_DWORD *)SchedulerAssist + 5) - 1;
        *((_DWORD *)SchedulerAssist + 5) = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick(v6);
      }
    }
  }
  return v2;
}
