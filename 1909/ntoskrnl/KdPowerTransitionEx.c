/*
 * XREFs of KdPowerTransitionEx @ 0x1402A1FF0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140031920 (PpmIdleExecuteTransition.c)
 *     PpmExitCoordinatedIdle @ 0x140033070 (PpmExitCoordinatedIdle.c)
 *     KdDisableDebuggerWithLock @ 0x14019E3D4 (KdDisableDebuggerWithLock.c)
 *     KdEnableDebuggerWithLock @ 0x1402A1E0C (KdEnableDebuggerWithLock.c)
 *     KdPowerTransition @ 0x1402A1FD0 (KdPowerTransition.c)
 *     PopFxDebuggerPowerCriticalTransitionCallback @ 0x1403018C0 (PopFxDebuggerPowerCriticalTransitionCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KeGetEffectiveIrql @ 0x1400A16B0 (KeGetEffectiveIrql.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PpmCancelExitLatencyTrace @ 0x1402EDFA0 (PpmCancelExitLatencyTrace.c)
 */

__int64 __fastcall KdPowerTransitionEx(int a1, char a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // di
  unsigned int v6; // esi
  __int64 v7; // rcx
  unsigned __int8 EffectiveIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = 0;
  if ( !KdPitchDebugger )
  {
    v4 = a1 & 0x80000000;
    CurrentIrql = -1;
    v6 = a1 & 0x80000000 ^ a1;
    if ( KdTransportMaxPacketSize != 1152 )
      v4 = 0;
    if ( a2 )
    {
      if ( KeGetEffectiveIrql() < 2u )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        }
      }
      KxAcquireSpinLock(&KdDebuggerLock);
    }
    if ( v6 == 1 )
    {
      PpmCancelExitLatencyTrace(KeGetCurrentPrcb());
      EffectiveIrql = KeGetEffectiveIrql();
      if ( EffectiveIrql >= 2u )
      {
        LOBYTE(v7) = 1;
        ((void (__fastcall *)(__int64, _QWORD))off_140424478[0])(v7, 0LL);
      }
      v3 = KdPower(v4 | 1, (char *)&KdDebuggerNotPresent + 5);
      if ( EffectiveIrql >= 2u )
        ((void (__fastcall *)(_QWORD, _QWORD))off_140424478[0])(0LL, 0LL);
    }
    else if ( v6 - 2 > 2 )
    {
      v3 = -1073741811;
    }
    else
    {
      v3 = KdPower(v4 | 4, (char *)&KdDebuggerNotPresent + 5);
    }
    if ( a2 )
    {
      KxReleaseSpinLock(&KdDebuggerLock);
      if ( CurrentIrql != 0xFF )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
      }
    }
  }
  return v3;
}
