/*
 * XREFs of RtlpAcquireBootStatusLock @ 0x1401BF964
 * Callers:
 *     RtlLockBootStatusData @ 0x140738E00 (RtlLockBootStatusData.c)
 *     RtlUnlockBootStatusData @ 0x140744DE0 (RtlUnlockBootStatusData.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void RtlpAcquireBootStatusLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RtlpBootStatHandleLock, 0LL);
}
