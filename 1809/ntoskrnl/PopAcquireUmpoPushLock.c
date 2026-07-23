/*
 * XREFs of PopAcquireUmpoPushLock @ 0x14058AAF4
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400035C0 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x14058BF88 (PopUmpoProcessMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 */

void __fastcall PopAcquireUmpoPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
  else
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopUmpoPushLock, 0LL);
}
