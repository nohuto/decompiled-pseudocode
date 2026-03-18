/*
 * XREFs of KeSuspendThread @ 0x1400AF684
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     PsSuspendThread @ 0x1406E4430 (PsSuspendThread.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x1400AF3C4 (KiSuspendThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSuspendThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  volatile signed __int32 *v4; // rsi
  unsigned int v5; // ebp
  struct _KPRCB *v7; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  v5 = *(char *)(a1 + 644);
  if ( v5 == 127 )
  {
    _InterlockedAnd(v4, 0xFFFFFF7F);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v7 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v7->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v7);
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741750);
  }
  ++*(_BYTE *)(a1 + 644);
  if ( !KiSuspendThread(a1, (__int64)CurrentPrcb) )
    --*(_BYTE *)(a1 + 644);
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v5;
}
