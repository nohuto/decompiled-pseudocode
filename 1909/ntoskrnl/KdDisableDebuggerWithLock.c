/*
 * XREFs of KdDisableDebuggerWithLock @ 0x14019E3D4
 * Callers:
 *     KdDisableDebugger @ 0x14019E3C0 (KdDisableDebugger.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KdPowerTransitionEx @ 0x1402A1FF0 (KdPowerTransitionEx.c)
 *     KdpAllowDisable @ 0x140957378 (KdpAllowDisable.c)
 *     KdpSuspendAllBreakpoints @ 0x140957CE8 (KdpSuspendAllBreakpoints.c)
 */

__int64 KdDisableDebuggerWithLock()
{
  unsigned __int8 CurrentIrql; // bl
  int v2; // edi
  struct _KPRCB *v3; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KxAcquireSpinLock(&KdDebuggerLock);
  if ( KdDisableCount )
    goto LABEL_19;
  KdPreviouslyEnabled = (char)KdDebuggerEnabled;
  if ( !(_BYTE)KdDebuggerEnabled || (v2 = KdpAllowDisable(), v2 >= 0) )
  {
    if ( (_BYTE)KdDebuggerEnabled )
    {
      KdpSuspendAllBreakpoints();
      MEMORY[0xFFFFF780000002D4] = 0;
      KdpDebugRoutineSelect = 0;
      LOBYTE(KdDebuggerNotPresent) = 1;
      LOBYTE(KdDebuggerEnabled) = 0;
      KdPowerTransitionEx(4LL, 0LL);
    }
LABEL_19:
    ++KdDisableCount;
    KxReleaseSpinLock(&KdDebuggerLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    v2 = 0;
    goto LABEL_25;
  }
  KxReleaseSpinLock(&KdDebuggerLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v3 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v3->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v3);
  }
LABEL_25:
  __writecr8(CurrentIrql);
  return (unsigned int)v2;
}
