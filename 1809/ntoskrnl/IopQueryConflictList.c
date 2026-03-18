/*
 * XREFs of IopQueryConflictList @ 0x140841FDC
 * Callers:
 *     PiControlQueryConflictList @ 0x14083BD80 (PiControlQueryConflictList.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     KeReleaseSemaphore @ 0x1400C5EA0 (KeReleaseSemaphore.c)
 *     IopQueryConflictListInternal @ 0x140842074 (IopQueryConflictListInternal.c)
 */

__int64 __fastcall IopQueryConflictList(int a1, int a2, __int64 a3, int a4, int a5)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // r8d
  unsigned int ConflictListInternal; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  ConflictListInternal = IopQueryConflictListInternal(a1, a2, v9, a4, a5);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return ConflictListInternal;
}
