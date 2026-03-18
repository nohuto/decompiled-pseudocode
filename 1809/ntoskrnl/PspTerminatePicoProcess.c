/*
 * XREFs of PspTerminatePicoProcess @ 0x14088C7E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     PspTerminateProcess @ 0x14067789C (PspTerminateProcess.c)
 */

__int64 __fastcall PspTerminatePicoProcess(ULONG_PTR a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (struct _EX_RUNDOWN_REF *)CurrentThread, a2, 8);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v3;
}
