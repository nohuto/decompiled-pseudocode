/*
 * XREFs of PopAcquireRwLockShared @ 0x1401677E0
 * Callers:
 *     PopThermalSxEntry @ 0x140166CE0 (PopThermalSxEntry.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PopAcquireRwLockShared(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
