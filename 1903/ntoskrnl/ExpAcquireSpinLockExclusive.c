/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x1400477F0
 * Callers:
 *     PspRevertContainerImpersonation @ 0x140036810 (PspRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x1400471A0 (PsImpersonateContainerOfThread.c)
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiLockSectionControlArea @ 0x14005F650 (MiLockSectionControlArea.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14005F820 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x14005FB90 (RtlpHpAcquireQueuedLockExclusive.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x14005FC30 (MmDoesFileHaveUserWritableReferences.c)
 *     RtlpHpVsChunkSplit @ 0x1400620A0 (RtlpHpVsChunkSplit.c)
 *     MiAddViewsForSection @ 0x140071B80 (MiAddViewsForSection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400725E0 (MiCheckPurgeAndUpMapCount.c)
 *     MiBeginPageAccessor @ 0x1400728A0 (MiBeginPageAccessor.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A450 (MiDereferenceControlAreaPfnList.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14033B054 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B5550 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
