/*
 * XREFs of IopIrpExtensionControl @ 0x14027F3BC
 * Callers:
 *     IopEtwEnableCallback @ 0x14081AD00 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x14081F180 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x14081F290 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     IopUpdateFunctionPointers @ 0x14027F674 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IopIrpExtensionControl(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  bool v6; // cl
  unsigned __int8 OldIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( a2 == 1 )
  {
    v6 = IopIrpExtensionStatus == 0;
    IopIrpExtensionStatus |= a1;
    if ( (a1 & 1) != 0 )
      ++dword_1404DD474;
    if ( (a1 & 2) != 0 )
      ++dword_1404DD478;
    if ( v6 )
    {
      LOBYTE(v4) = 1;
LABEL_16:
      LOBYTE(v5) = 1;
      IopUpdateFunctionPointers(4LL, v4, v5);
    }
  }
  else
  {
    if ( (a1 & 1) != 0 && !--dword_1404DD474 )
      IopIrpExtensionStatus &= ~1u;
    if ( (a1 & 2) != 0 && !--dword_1404DD478 )
      IopIrpExtensionStatus &= ~2u;
    if ( !IopIrpExtensionStatus )
    {
      v4 = 0LL;
      goto LABEL_16;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
