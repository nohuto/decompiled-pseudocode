/*
 * XREFs of PfLockExclusiveAcquire @ 0x14019DA14
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A7D58 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PfLockExclusiveAcquire(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
