/*
 * XREFs of IoPerfInit @ 0x1402850F4
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406C57B0 (EtwpEnableKernelTrace.c)
 *     IoRegisterIoTracking @ 0x14081DFA0 (IoRegisterIoTracking.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     IopUpdateFunctionPointers @ 0x14027F384 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfInit(int a1)
{
  bool v2; // dl
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  v2 = IopPerfStatus == 0;
  IopPerfStatus |= a1;
  if ( (a1 & 1) != 0 )
    ++dword_1404DC974;
  if ( (a1 & 2) != 0 )
    ++dword_1404DC978;
  if ( v2 )
    IopUpdateFunctionPointers(2, 1, 1);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  return 0LL;
}
