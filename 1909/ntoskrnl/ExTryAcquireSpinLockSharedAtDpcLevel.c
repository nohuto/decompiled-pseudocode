/*
 * XREFs of ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14033AA20
 * Callers:
 *     MmReadProcessPageTables @ 0x1402D1D88 (MmReadProcessPageTables.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x1400B6040 (ExpTryAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AD60 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall ExTryAcquireSpinLockSharedAtDpcLevel(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rdx
  int v4; // eax
  unsigned int v5; // edi
  _DWORD *v6; // rcx
  int v7; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v4 = SchedulerAssist[5];
      SchedulerAssist[5] = v4 + 1;
      if ( v4 == -1 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    v5 = ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented(a1);
  else
    v5 = ExpTryAcquireSpinLockShared(a1);
  if ( !v5 )
  {
    v6 = CurrentPrcb->SchedulerAssist;
    if ( v6 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v7 = v6[5] - 1;
        v6[5] = v7;
        if ( !v7 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  return v5;
}
