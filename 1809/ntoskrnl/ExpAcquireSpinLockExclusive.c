/*
 * XREFs of ExpAcquireSpinLockExclusive @ 0x1400BC5E0
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     MiLockSectionControlArea @ 0x140020210 (MiLockSectionControlArea.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 *     MiBeginPageAccessor @ 0x140064A10 (MiBeginPageAccessor.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140077DC0 (MiCheckPurgeAndUpMapCount.c)
 *     MiRemoveWsleList @ 0x14007AF40 (MiRemoveWsleList.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140111F90 (MmDoesFileHaveUserWritableReferences.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusive(volatile signed __int32 *a1, unsigned __int8 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  bool v10; // zf
  unsigned __int32 v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = SchedulerAssist[5];
      SchedulerAssist[5] = v12 + 1;
      if ( v12 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( _interlockedbittestandset(a1, 0x1Fu) )
  {
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v7[5] - 1;
        v7[5] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    v14 = ExpWaitForSpinLockExclusiveAndAcquire(a1, a2);
  }
  v8 = *(unsigned int *)a1;
  if ( (*a1 & 0xBFFFFFFF) != 0x80000000 )
  {
    do
    {
      if ( (v8 & 0x40000000) == 0 )
      {
        v11 = _InterlockedCompareExchange(a1, v8 | 0x40000000, v8);
        v10 = (_DWORD)v8 == v11;
        v8 = v11;
        if ( !v10 )
          continue;
      }
      KeYieldProcessorEx(&v14, v8, a3);
      v8 = *(unsigned int *)a1;
    }
    while ( (v8 & 0xBFFFFFFF) != 0x80000000 );
  }
  return v14;
}
