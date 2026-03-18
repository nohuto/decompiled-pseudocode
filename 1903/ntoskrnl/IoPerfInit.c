/*
 * XREFs of IoPerfInit @ 0x14029A394
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1406E7358 (EtwpEnableKernelTrace.c)
 *     IoRegisterIoTracking @ 0x140857EC0 (IoRegisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     IopUpdateFunctionPointers @ 0x1402945C8 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfInit(int a1)
{
  bool v2; // dl
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  v2 = IopPerfStatus == 0;
  IopPerfStatus |= a1;
  if ( (a1 & 1) != 0 )
    ++dword_14050A0D4;
  if ( (a1 & 2) != 0 )
    ++dword_14050A0D8;
  if ( v2 )
    IopUpdateFunctionPointers(2, 1, 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
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
