/*
 * XREFs of PopAcquireAwaymodeLock @ 0x140595FB8
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x1408A2880 (PopAwayModePowerRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *PopAcquireAwaymodeLock()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopAwaymodeLock, 0LL);
  result = KeGetCurrentThread();
  PopAwaymodeLockExclusiveThread = (__int64)result;
  return result;
}
