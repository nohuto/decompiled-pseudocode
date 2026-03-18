/*
 * XREFs of KdEnableDebuggerWithLock @ 0x1402A20AC
 * Callers:
 *     KdEnableDebugger @ 0x1402A2070 (KdEnableDebugger.c)
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KdPowerTransitionEx @ 0x1402A2290 (KdPowerTransitionEx.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     KdpRestoreAllBreakpoints @ 0x140957B2C (KdpRestoreAllBreakpoints.c)
 */

__int64 __fastcall KdEnableDebuggerWithLock(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  int v4; // eax
  struct _KPRCB *v5; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentIrql = 0;
  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  if ( a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KxAcquireSpinLock(&KdDebuggerLock);
  }
  v4 = KdDisableCount;
  if ( KdDisableCount )
  {
    --KdDisableCount;
    if ( v4 == 1 && KdPreviouslyEnabled )
    {
      if ( a1 )
      {
        KdPowerTransitionEx(1LL, 0LL);
        KdpDebugRoutineSelect = 1;
        LOBYTE(KdDebuggerEnabled) = 1;
        MEMORY[0xFFFFF780000002D4] = 1;
        KdpRestoreAllBreakpoints();
      }
      else
      {
        PoHiberInProgress = 1;
        KdInitSystem(0LL, 0LL);
        KdpRestoreAllBreakpoints();
        PoHiberInProgress = 0;
      }
    }
    if ( a1 )
    {
      KxReleaseSpinLock(&KdDebuggerLock);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  if ( !a1 )
  {
    KdInitSystem(0LL, 0LL);
    return 0LL;
  }
  KxReleaseSpinLock(&KdDebuggerLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v5 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v5->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v5);
  }
  __writecr8(CurrentIrql);
  return 3221225485LL;
}
