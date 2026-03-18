/*
 * XREFs of PfLockExclusiveAcquire @ 0x14019E138
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406A75E8 (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PfLockExclusiveAcquire(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
