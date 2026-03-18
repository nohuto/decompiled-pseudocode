/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x140047890
 * Callers:
 *     PspRevertContainerImpersonation @ 0x140036C00 (PspRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x140047240 (PsImpersonateContainerOfThread.c)
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiLockSectionControlArea @ 0x14005F6F0 (MiLockSectionControlArea.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14005F8C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14005FC30 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14005FCD0 (MmDoesFileHaveUserWritableReferences.c)
 *     RtlpHpVsChunkSplit @ 0x140062140 (RtlpHpVsChunkSplit.c)
 *     MiAddViewsForSection @ 0x140071DF0 (MiAddViewsForSection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140072850 (MiCheckPurgeAndUpMapCount.c)
 *     MiBeginPageAccessor @ 0x140072B10 (MiBeginPageAccessor.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A020 (MiDereferenceControlAreaPfnList.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033AAB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400F3400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v6; // edx
  _DWORD *v8; // rcx
  bool v9; // zf
  signed __int32 v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v13 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = SchedulerAssist[5];
      SchedulerAssist[5] = v11 + 1;
      if ( v11 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
  {
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = v8[5] - 1;
        v8[5] = v12;
        if ( !v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    v13 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  }
  v6 = *a1;
  while ( (v6 & 0xBFFFFFFF) != 0x80000000 )
  {
    if ( (v6 & 0x40000000) == 0 )
    {
      v10 = _InterlockedCompareExchange(a1, v6 | 0x40000000, v6);
      v9 = v6 == v10;
      v6 = v10;
      if ( !v9 )
        continue;
    }
    KeYieldProcessorEx(&v13);
    v6 = *a1;
  }
  return v13;
}
