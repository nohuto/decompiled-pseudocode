/*
 * XREFs of PopAcquireUmpoPushLock @ 0x1406720EC
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1400D636C (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x14069DA6C (PopUmpoProcessMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
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
