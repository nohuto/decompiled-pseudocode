/*
 * XREFs of RtlpAcquireBootStatusLock @ 0x1401C04E4
 * Callers:
 *     RtlLockBootStatusData @ 0x14073B060 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140746CE0 (RtlUnlockBootStatusData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void RtlpAcquireBootStatusLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RtlpBootStatHandleLock, 0LL);
}
