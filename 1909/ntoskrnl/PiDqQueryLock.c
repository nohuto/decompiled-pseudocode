/*
 * XREFs of PiDqQueryLock @ 0x1405B6B04
 * Callers:
 *     PiDqIrpCancel @ 0x14029ED80 (PiDqIrpCancel.c)
 *     PiDqDispatch @ 0x1405B6900 (PiDqDispatch.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407154B0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x1407157F4 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PiDqQueryLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
}
