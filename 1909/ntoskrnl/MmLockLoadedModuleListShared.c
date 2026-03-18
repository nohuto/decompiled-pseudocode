/*
 * XREFs of MmLockLoadedModuleListShared @ 0x14005F110
 * Callers:
 *     MmIsSessionExecutionValid @ 0x140017710 (MmIsSessionExecutionValid.c)
 *     RtlpxLookupFunctionTable @ 0x14001B800 (RtlpxLookupFunctionTable.c)
 *     MiLockPagableImageSection @ 0x14005F1C0 (MiLockPagableImageSection.c)
 *     MiAddWorkingSetEntries @ 0x1400AEC00 (MiAddWorkingSetEntries.c)
 *     MiLookupDataTableEntry @ 0x1400FB388 (MiLookupDataTableEntry.c)
 *     RtlPcToFileName @ 0x14019BD40 (RtlPcToFileName.c)
 *     MiIsAddressInDriverView @ 0x1402C7AA0 (MiIsAddressInDriverView.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140104E40 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MmLockLoadedModuleListShared(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v3; // cl
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rax
  __int64 result; // rax
  int v7; // ett
  _DWORD *v8; // rcx
  int v9; // ecx
  int v10; // eax

  CurrentIrql = KeGetCurrentIrql();
  *a1 = CurrentIrql;
  if ( CurrentIrql < 0xFu )
  {
    v3 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v3 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    return ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&PsLoadedModuleSpinLock, a2);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = SchedulerAssist[5];
        SchedulerAssist[5] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw(&PsLoadedModuleSpinLock);
    v7 = PsLoadedModuleSpinLock & 0x7FFFFFFF;
    result = (unsigned int)_InterlockedCompareExchange(
                             &PsLoadedModuleSpinLock,
                             (PsLoadedModuleSpinLock & 0x7FFFFFFF) + 1,
                             PsLoadedModuleSpinLock & 0x7FFFFFFF);
    if ( v7 != (_DWORD)result )
    {
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 && CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v8[5] - 1;
        v8[5] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      LOBYTE(a2) = -1;
      return ExpWaitForSpinLockSharedAndAcquire(&PsLoadedModuleSpinLock, a2);
    }
  }
  return result;
}
