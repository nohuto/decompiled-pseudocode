/*
 * XREFs of PiDqQueryLock @ 0x1405B6724
 * Callers:
 *     PiDqIrpCancel @ 0x14029F020 (PiDqIrpCancel.c)
 *     PiDqDispatch @ 0x1405B6520 (PiDqDispatch.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1407136D0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryApplyObjectEvent @ 0x140713A14 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PiDqQueryLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 64, 0LL);
}
