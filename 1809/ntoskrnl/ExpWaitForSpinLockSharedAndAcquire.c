/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x1400E77A0
 * Callers:
 *     KiAbEntryGetLockedHeadEntry @ 0x1400247E0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiProbeAndLockPrepare @ 0x140040790 (MiProbeAndLockPrepare.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14004B5A0 (MiMakeSystemCacheRangeValid.c)
 *     MiDeletePagablePteRange @ 0x140067FE0 (MiDeletePagablePteRange.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D580 (MiTrimOrAgeWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MiCommitExistingVad @ 0x140071470 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A40 (MiMoveDirtyBitsToPfns.c)
 *     MiLockWorkingSetShared @ 0x140076050 (MiLockWorkingSetShared.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D150 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D1D0 (MiQueueLargeFreeZeroRebuild.c)
 *     ExAcquireSpinLockShared @ 0x14009D7C0 (ExAcquireSpinLockShared.c)
 *     MiOffsetToProtos @ 0x1400AF830 (MiOffsetToProtos.c)
 *     ExpAddTagForBigPages @ 0x1400E7110 (ExpAddTagForBigPages.c)
 *     MiSystemFault @ 0x1400E8900 (MiSystemFault.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C164 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402713D0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298330 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(void *SchedulerAssist, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned __int8 CurrentIrql; // bl
  volatile signed __int32 *v5; // r14
  signed __int32 v6; // edi
  struct _KPRCB *v7; // rbp
  _DWORD *v8; // rcx
  bool v10; // zf
  signed __int32 v11; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  int v13; // eax
  int v14; // eax

  v3 = 0;
  CurrentIrql = a2;
  v5 = (volatile signed __int32 *)SchedulerAssist;
  while ( 1 )
  {
    v6 = *v5;
    while ( v6 < 0 )
    {
      if ( (v6 & 0x40000000) == 0 )
      {
        SchedulerAssist = (void *)(unsigned int)v6;
        LODWORD(SchedulerAssist) = v6 | 0x40000000;
        v11 = _InterlockedCompareExchange(v5, v6 | 0x40000000, v6);
        v10 = v6 == v11;
        v6 = v11;
        if ( !v10 )
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
      if ( (++v3 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(SchedulerAssist, a2, a3) )
      {
        HvlNotifyLongSpinWait(v3);
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
      v6 = *v5;
    }
    v7 = KeGetCurrentPrcb();
    v8 = v7->SchedulerAssist;
    if ( v8 )
    {
      if ( v7->NestingLevel <= 1u )
      {
        v13 = v8[5];
        v8[5] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(v7);
      }
    }
    if ( v6 == _InterlockedCompareExchange(v5, (v6 + 1) & 0xBFFFFFFF, v6) )
      break;
    SchedulerAssist = v7->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v7->NestingLevel <= 1u )
      {
        v14 = *((_DWORD *)SchedulerAssist + 5) - 1;
        *((_DWORD *)SchedulerAssist + 5) = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick(v7);
      }
    }
  }
  return v3;
}
